#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00e4e130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4e130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4e130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4e150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4e150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4e1a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4e1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4e1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e4e1c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4e1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4e1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e4e1e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4e1e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe4e1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x1ffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00406ad0(param_5);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00e4e3dd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00e4e3dd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e4e410 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4e410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4e410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e4ddd0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e4e420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4e420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4e420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4e440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4e440(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe4e440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x1ffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00406ad0(param_5);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00e4e63d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00e4e63d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e4e670 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4e670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4e670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e4dec0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e4e680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4e680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4e680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e4e6a0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e4e6a0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4e6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e4e6c0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e4e6c0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4e6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e4e6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4e6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4e6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (uint)puVar2[3];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (uint)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00e4e1e0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e4ddd0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e4e1e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e4e7c0 */
GEN_LIB GEN_FRAME unsigned int F_00e4e7c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe4e7c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e4e7e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4e7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4e7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (uint)puVar2[3];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (uint)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00e4e440(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e4dec0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e4e440(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e4e8c0 */
GEN_LIB GEN_FRAME unsigned int F_00e4e8c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe4e8c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e4e8e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4e8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined1 * puVar1;
  int * piVar2;
  uint uVar3;
  bool bVar4;
  
  puVar1 = (*(undefined1 * PTR32 *)&gen_args[1]);
  uVar3 = (*(uint *)&gen_args[0]);
  *(*(undefined1 * PTR32 *)&gen_args[1]) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
    if ((((((*(uint *)&gen_args[0]) != 0) && ((*(uint *)&gen_args[0]) != 0x20000000)) && ((*(uint *)&gen_args[0]) != 0x40000000)) &&
        (((*(uint *)&gen_args[0]) != 0x60000000 && ((*(uint *)&gen_args[0]) != 0x80000000)))) &&
       (((*(uint *)&gen_args[0]) != 0xa0000000 && (((*(uint *)&gen_args[0]) != 0xc0000000 && ((*(uint *)&gen_args[0]) != 0xe0000000)))))) {
      piVar2 = ((int *)GEN_TOP(F_00c33050(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,&(*(undefined1 * PTR32 *)&gen_args[1]),&(*(uint *)&gen_args[0]))));
      if (*piVar2 == *((int *)GEN_TOP(((int)this + 0x20)))) {
        return uVar3;
      }
      *puVar1 = 1;
      return uVar3;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x60))) + 8))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,(*(uint *)&gen_args[0]) >> 0x1d);
    return uVar3;
  }
  if ((*(uint *)&gen_args[0]) < 0x80000001) {
    if ((*(uint *)&gen_args[0]) == 0x80000000) goto LAB_00e4ea24;
    if ((*(uint *)&gen_args[0]) < 0x40000001) {
      if ((*(uint *)&gen_args[0]) == 0x40000000) {
        uVar3 = F_01050cf0(this GEN_EDX_ARG);
        return uVar3 | 0x40000000;
      }
      if ((*(uint *)&gen_args[0]) == 0) goto LAB_00e4ea24;
      if ((*(uint *)&gen_args[0]) == 0x20000000) {
        if (*((int *)GEN_TOP(((int)this + 0x10))) - *((int *)GEN_TOP(((int)this + 0xc))) >> 2 == 0) {
          uVar3 = F_01050cf0(this GEN_EDX_ARG);
          return uVar3 | 0x20000000;
        }
        uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) - 4)));
        if (*((int *)GEN_TOP(((int)this + 0xc))) == *((int *)GEN_TOP(((int)this + 0x10)))) {
          return uVar3;
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 4;
        return uVar3;
      }
      goto LAB_00e4ea01;
    }
    bVar4 = (*(uint *)&gen_args[0]) == 0x60000000;
  }
  else {
    if (((*(uint *)&gen_args[0]) == 0xa0000000) || ((*(uint *)&gen_args[0]) == 0xc0000000)) goto LAB_00e4ea24;
    bVar4 = (*(uint *)&gen_args[0]) == 0xe0000000;
  }
  if (!bVar4) {
LAB_00e4ea01: ;
    piVar2 = ((int *)GEN_TOP(F_00c33050(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined1 * PTR32 *)&gen_args[1]),&(*(uint *)&gen_args[0]))));
    if (*piVar2 == *((int *)GEN_TOP(((int)this + 0x20)))) {
      return uVar3;
    }
    *puVar1 = 1;
    return uVar3;
  }
LAB_00e4ea24: ;
  uVar3 = F_01050cf0(this GEN_EDX_ARG);
  return uVar3 | 0xe0000000;
}

/* ref: FUN_00e4ea40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ea40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4ea40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_1;
      puVar1[4] = param_1[1];
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4eaa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4eaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4eaa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_1;
      puVar1[4] = param_1[1];
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4eb00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4eb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4eb00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e4e6e0(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4eb80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4eb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4eb80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e4e7e0(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4ec00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ec00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4ec00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar1 == 0) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0x4c))) + 8))))(*((int * PTR32 *)GEN_TOP((iVar1 + 0x4c))) GEN_EDX_FWD,iVar1,this,this);
    (*(uint *)(gen_frame + 0xc)) = uVar3;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar4 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    puVar4[1] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    puVar4[2] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    *(undefined2 *)(puVar4 + 5) = 0;
    if (puVar4 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4[3] = uVar2;
      puVar4[4] = (*(uint *)(gen_frame + 0xc));
    }
    F_00e4e7e0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar4,0);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
    return uVar3;
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_00e4ecb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ecb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4ecb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  code * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  (*pcVar1)(this);
  F_00c330c0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0xc)));
  if ((*(int *)(gen_frame + 0x4)) == *((int *)GEN_TOP(((int)this + 0x18)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + 0x10)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  if (uVar4 == 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar2 + 0x4c))) + 8))))
                        (*((int * PTR32 *)GEN_TOP((iVar2 + 0x4c))) GEN_EDX_ARG,iVar2,this,param_1);
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + 8)));
    puVar3 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
    if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
      (*(int *)(gen_frame + 0x4)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar3[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0));
      puVar3[4] = uVar4;
    }
    F_00e4e7e0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),puVar3,0);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00e4edb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4edb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4edb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_00e4ecb0(param_1 GEN_EDX_FWD,this);
  uVar1 = F_00e4ecb0(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00e4edd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4edd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe4edd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x1c, 4);
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  undefined * this_01;
  undefined4 * puVar4;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD);
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  (*(char *)(gen_frame + 0x17)) = '\0';
  uVar3 = F_00e4e8e0(this GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),&(*(char *)(gen_frame + 0x17)));
  (*(uint *)(gen_frame + 0x10)) = uVar3;
  if ((*(char *)(gen_frame + 0x17)) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    return (uint)piVar2;
  }
  this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x44))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,this,uVar3)));
  F_00e4ec00(this_01 GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar1;
  if ((piVar2 != ((int *)GEN_TOP(0x40000000))) && (*((int *)GEN_TOP(((int)this + 0x24))) != 0)) {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(*piVar1));
    if ((*(int * PTR32 *)&gen_args[0]) != piVar1) {
      do {
        this_00 = ((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[4]));
        F_00e4ecb0(this_00 GEN_EDX_ARG,this_01);
        F_00e4ecb0(this_01 GEN_EDX_ARG,this_00);
        F_00e47fb0(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      } while ((*(int * PTR32 *)&gen_args[0]) != (*(int * PTR32 *)(gen_frame + 0xc)));
    }
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
    puVar4[1] = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
    puVar4[2] = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
    *(undefined2 *)(puVar4 + 5) = 0;
    if (puVar4 + 3 != ((uint *)GEN_TOP(0x0))) {
      puVar4[3] = (*(uint *)(gen_frame + 0x10));
      puVar4[4] = this_01;
    }
    F_00e4e6e0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar4,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    return (*(uint *)(gen_frame + 0x10));
  }
  (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x0));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_00e4eee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4eee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe4eee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  code * pcVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = (*(undefined4 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e4edd0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x44)));
  (*(undefined4 *)&gen_args[0]) = uVar2;
  (*pcVar1)(this);
  piVar3 = ((int *)GEN_TOP(F_00c33050(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]))));
  if (*piVar3 == *((int *)GEN_TOP(((int)this + 0x20)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar3 = *((int * PTR32 *)GEN_TOP((*piVar3 + 0x10)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG,piVar3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,piVar3);
  return uVar4;
}

/* ref: FUN_00e4ef50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ef50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4ef50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e4eee0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf7 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e4ef60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4ef60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int iVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    return;
  }
  F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x58)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  if (iVar1 == 0) {
    bVar4 = F_00e4d8c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    if (bVar4 == 0) goto LAB_00e4effc;
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
    (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar2 + 8)));
    piVar3 = ((int *)GEN_TOP(*piVar2));
    if (piVar3 != piVar2) {
      *((int *)GEN_TOP(piVar3[1])) = *piVar3;
      *((int *)GEN_TOP((*piVar3 + 4))) = piVar3[1];
      F_00406ad0(piVar3);
      *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
    }
  }
  F_00e4d210(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
  (*(int *)(gen_frame + 0xc)) = 0;
LAB_00e4effc: ;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  F_01050b70();
  return;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e4f020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4f020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int * piVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
      F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_00e4d210(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      F_01050b70();
      return;
    }
    (*(uint *)(gen_frame + 0x18)) = 0xe0000000;
    do {
      uVar4 = (*(uint *)(gen_frame + 0x18));
      F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      (*(int *)(gen_frame + 0xc)) = 0;
      bVar5 = F_00e4d630(uVar3 GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),uVar4,&(*(uint *)(gen_frame + 0x18)),REFG(float, 0x10ac050));
      if (bVar5 != 0) {
        F_00e4d210(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
        (*(int *)(gen_frame + 0xc)) = 0;
      }
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      F_01050b70();
    } while (((*(uint *)(gen_frame + 0x18)) != 0) && ((*(uint *)(gen_frame + 0x18)) != 0xe0000000));
  }
  return;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4f150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x58)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    if (uVar4 == 0) {
      bVar3 = F_00e4d8c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      while (bVar3 != 0) {
        F_00e4d210(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
        (*(int *)(gen_frame + 0xc)) = 0;
        uVar4 = uVar4 + 1;
        bVar3 = F_00e4d8c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
    }
    else {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_00e4d210(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4f230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x58)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          uVar3 = F_00e4da20(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          if (uVar3 != 1) break;
          F_00e4d210(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
          (*(int *)(gen_frame + 0xc)) = 0;
          uVar4 = uVar4 + 1;
        }
      } while (uVar3 == 0);
    }
    else {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_00e4d210(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4f310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x58)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          if (param_1 <= uVar4) goto LAB_00e4f3cd;
          uVar3 = F_00e4da20(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          if (uVar3 != 1) break;
          F_00e4d210(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
          (*(int *)(gen_frame + 0xc)) = 0;
          uVar4 = uVar4 + 1;
        }
      } while (uVar3 == 0);
    }
    else {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_00e4d210(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
LAB_00e4f3cd: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe4f3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x58)));
  uVar5 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    if (uVar4 == 0) {
      uVar6 = F_00427e30();
      (*(ulonglong *)(gen_frame + 0x18)) = uVar6 + (longlong)CONCAT44(param_2,param_1);
      F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      do {
        while( true ) {
          uVar3 = F_00e4da20(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          if (uVar3 != 1) break;
          F_00e4d210(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 + 1;
          (*(int *)(gen_frame + 0xc)) = 0;
          if (param_3 <= uVar5) {
            uVar6 = F_00427e30();
            if ((*(ulonglong *)(gen_frame + 0x18)) < uVar6) goto LAB_00e4f4f4;
            uVar5 = 0;
          }
        }
      } while (uVar3 == 0);
    }
    else {
      F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_00e4d210(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
LAB_00e4f4f4: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  return uVar4;
}

/* ref: FUN_00e4f510 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e4f510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4f510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  byte bVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x54))) + 8)));
    piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x54)))));
    if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 0x54)))) {
      *((int *)GEN_TOP(piVar1[1])) = *piVar1;
      *((int *)GEN_TOP((*piVar1 + 4))) = piVar1[1];
      F_00406ad0(piVar1);
      *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
    }
    return 1;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    bVar2 = F_00e4d8c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_1);
    return bVar2;
  }
  return 0;
}

/* ref: FUN_00e4f580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe4f580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_00e4dc10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157fd4));
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  return (uint)this;
}

/* ref: ChannelManagerOnSingleConnectionTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f5c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe4f5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x1157f04));
  F_00e4abc0(param_1 GEN_EDX_FWD);
  param_1[0x23] =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  F_00e4ca90(param_1 + 0x23 GEN_EDX_ARG);
  param_1[0x19] =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4c920(param_1 + 0x19 GEN_EDX_ARG);
  F_00e4d390(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: ChannelManagerOnSingleConnectionTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf3 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e4f610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4f610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xbc))) == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = param_1;
    F_00e4eee0(this GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_00e4f630 */
GEN_LIB GEN_FRAME byte F_00e4f630(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe4f630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  
  bVar1 = F_00e4dc90(param_1,param_2,(undefined1)param_3);
  return bVar1;
}

/* ref: FUN_00e4f650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f650(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe4f650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_4 != '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x10)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1157db0));
      puVar1[2] = 0;
      uVar2 = F_004069f0(0xc);
      if (uVar2 == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      puVar1[1] = uVar2;
      *((uint *)GEN_TOP(uVar2)) = uVar2;
      *((undefined4 *)GEN_TOP((puVar1[1] + 4))) = puVar1[1];
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1157dc0));
      goto LAB_00e4f6b6;
    }
  }
  puVar1 = ((undefined4 *)GEN_TOP(0x0));
LAB_00e4f6b6: ;
  F_00e4dd20(param_1 GEN_EDX_ARG,param_2,param_3,puVar1);
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x115803c));
  return (uint)param_1;
}

/* ref: PrimaryEntityTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf1 */
GEN_LIB GEN_NOFRAME unsigned int F_00e4f700(void)
{
  GEN_ENTER(0xe4f700u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: PrimaryEntityTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf2 */
GEN_LIB GEN_NOFRAME unsigned int F_00e4f710(void)
{
  GEN_ENTER(0xe4f710u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00e4f720 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4f720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4f720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1157e80));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  uVar2 = F_00e4cd20(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: PrimaryEntityTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f750(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe4f750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[9]));
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x1157e80));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  param_1[9] = 0;
  F_00e4cd20(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f790(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe4f790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[2]));
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x1157f6c));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x1157f04));
  F_00e4abc0(param_1 GEN_EDX_ARG);
  param_1[0x23] =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  F_00e4ca90(param_1 + 0x23 GEN_EDX_ARG);
  param_1[0x19] =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4c920(param_1 + 0x19 GEN_EDX_ARG);
  F_00e4d390(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e4f800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4f800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD);
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    F_00e4dc90(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),0);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: PrimaryEntityFactoryClass_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4f840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * this_00;
  undefined4 * puVar1;
  uint uVar2;
  
  this_00 = ((undefined4 *)GEN_TOP(F_004069f0(0x34)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x10)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1157db0))
    ;
    puVar1[2] = 0;
    uVar2 = F_004069f0(0xc);
    if (uVar2 == 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    puVar1[1] = uVar2;
    *((uint *)GEN_TOP(uVar2)) = uVar2;
    *((undefined4 *)GEN_TOP((puVar1[1] + 4))) = puVar1[1];
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1157dc0));
  }
  F_00e4dd20(this_00 GEN_EDX_ARG,param_1,param_2,puVar1);
  *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x115803c));
  return (uint)this_00;
}

/* ref: FUN_00e4f8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4f8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe4f8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1158064));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 1;
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_4;
  return (uint)this;
}

/* ref: FUN_00e4f930 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e4f930(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4f930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1158064));
  return;
}

/* ref: Application::Network::LobbyClient::LobbyOperation::vf3 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e4f940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4f940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00e4f950 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e4f950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4f950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 2) {
    if (param_1 == 2) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_2);
      if ((char)uVar1 == '\0') {
        if (*((int *)GEN_TOP(((int)this + 0x10))) == 2) {
          *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 3;
        }
        if (*((int *)GEN_TOP(((int)this + 0x10))) == 4) {
          *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 3;
        }
        return 1;
      }
    }
    else {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG,param_2);
      if ((char)uVar1 == '\0') {
        if (*((int *)GEN_TOP(((int)this + 0x10))) == 2) {
          *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 3;
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00e4f9c0 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e4f9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4f9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0xc0, 0, 4);
  int * piVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 2) {
    return 0;
  }
  if (param_1 == 0) {
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    if (*((uint *)GEN_TOP(((int)this + 0x30))) < (uint)((int)_Var4 - *((int *)GEN_TOP(((int)this + 0x18))))) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x5c)) = 6;
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158058)),REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
      (*(undefined2 *)(gen_frame + 0xb4)) = 0x32c9;
      ((undefined4 *)(gen_frame + 0x54))[0] = 0x7d2;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x54)));
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x350)));
      if (iVar2 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 0x10))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x54)),iVar2);
      }
      if (*((int *)GEN_TOP(((int)this + 0x10))) == 2) {
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 3;
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
      return 1;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,0);
    return 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG,param_1);
  if (((char)uVar3 == '\0') && (*((int *)GEN_TOP(((int)this + 0x10))) == 2)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 3;
  }
  return 1;
}

/* ref: Application::Network::LobbyClient::LobbyOperation::ReadError */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e4fb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4fb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0xc4, 12, 4);
  undefined4 uVar1;
  undefined * this_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0));
  if (*((int *)GEN_TOP((param_1 + 0x10))) != *(int *)(this + 0xc)) {
    return 1;
  }
  F_00e3bd90(&(*(int *)(gen_frame + 0x58)) GEN_EDX_FWD);
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  (*(int *)(gen_frame + 0x58)) = *((int *)GEN_TOP((param_1 + 0x18)));
  (*(undefined4 *)(gen_frame + 0x5c)) = uVar1;
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1 + 0x24,REFG(undefined4, 0x108cc50));
  F_0042d970(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  (*(undefined2 *)(gen_frame + 0xb8)) = *((undefined2 *)GEN_TOP((param_1 + 0x20)));
  if ((*(int *)(gen_frame + 0x58)) < 0xbb9) {
    if ((*(int *)(gen_frame + 0x58)) != 3000) {
      switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0x58)))) {
      case 0x3e9: ;
      case 0x3f1: ;
      case 0x3f6: ;
      case 0x3f8: ;
        goto switchD_00e4fb92_caseD_3e9;
      default: ;
        goto switchD_00e4fb92_caseD_3ea;
      case 0x3eb: ;
      case 0x3f9: ;
switchD_00e4fb92_caseD_3eb: ;
        (*(undefined4 *)(gen_frame + 0x60)) = 2;
        goto LAB_00e4fbf2;
      case 0x3ef: ;
        (*(undefined4 *)(gen_frame + 0x60)) = 3;
        goto LAB_00e4fbf2;
      }
    }
  }
  else {
    if (0x138b < (*(int *)(gen_frame + 0x58))) {
      if ((*(int *)(gen_frame + 0x58)) == 0x138d) {
switchD_00e4fb92_caseD_3e9: ;
        (*(undefined4 *)(gen_frame + 0x60)) = 1;
      }
      else {
switchD_00e4fb92_caseD_3ea: ;
        (*(undefined4 *)(gen_frame + 0x60)) = 4;
      }
      goto LAB_00e4fbf2;
    }
    if ((*(int *)(gen_frame + 0x58)) < 0x1389) {
      switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0x58)))) {
      case 0xbb9: ;
      case 0xbc0: ;
      case 0xbc1: ;
      case 0xbc5: ;
      case 0xbcb: ;
      case 0xbd2: ;
      case 0xbd8: ;
      case 0xbd9: ;
      case 0xbe1: ;
      case 0xbe2: ;
      case 0xbea: ;
      case 0xbee: ;
      case 0xbf1: ;
      case 0xbf2: ;
      case 0xbf3: ;
      case 0xbf4: ;
      case 0xbf5: ;
      case 0xbfe: ;
      case 0xc1d: ;
      case 0xc1e: ;
        goto switchD_00e4fb92_caseD_3e9;
      default: ;
        goto switchD_00e4fb92_caseD_3ea;
      case 0xbda: ;
      case 0xbdb: ;
      case 0xbff: ;
      case 0xc00: ;
      case 0xc01: ;
      case 0xc02: ;
      case 0xc07: ;
        goto switchD_00e4fb92_caseD_3eb;
      }
    }
  }
  (*(undefined4 *)(gen_frame + 0x60)) = 5;
LAB_00e4fbf2: ;
  if ((*(int *)(gen_frame + 0x58)) == 0x3ef) {
    F_00e3ee30(param_1 + 0x10);
    uVar1 = *(undefined4 *)(this + 0x34);
    this_00 = *(undefined * PTR32 *)(this + 8);
    (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x5c));
    F_00e3e790(this_00 GEN_EDX_ARG,uVar1,&(*(undefined4 *)(gen_frame + 0x0)));
    if (*(int *)(this + 0x10) == 2) {
      *(undefined4 *)(this + 0x10) = 3;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      return 0;
    }
  }
  else {
    F_00e3ee30(param_1 + 0x10);
    F_00e3e750(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0x34),&(*(int *)(gen_frame + 0x58)));
    *(undefined4 *)(this + 0x10) = 4;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00e4fd30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e4fd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4fd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 1) {
    pcVar1 = ((code *)GEN_TOP(**(undefined4 * PTR32 *)this));
    (*(int *)(gen_frame + 0x10)) = 0x1f6;
    uVar2 = (*pcVar1)(this,(*(int *)&gen_args[0]),&(*(int *)(gen_frame + 0x10)));
    this_00 = (*(undefined * PTR32 *)&gen_args[1]);
    if ((char)uVar2 != '\0') {
      if ((*(int *)(gen_frame + 0x10)) != 0x1f6) {
        F_00e45300((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&(*(int *)&gen_args[0]),&(*(int *)(gen_frame + 0x10)));
        if ((*(int *)&gen_args[0]) != *((int *)GEN_TOP(((int)this_00 + 4)))) {
          F_00e44980(this_00 GEN_EDX_ARG,&(*(int *)&gen_args[0]),(*(int *)&gen_args[0]));
        }
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x10));
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
        F_00e50430(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0x8)));
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 2;
      _Var3 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
      *((int *)GEN_TOP(((int)this + 0x18))) = (int)_Var3;
      uVar4 = F_00427d90();
      *((ulonglong *)GEN_TOP(((int)this + 0x20))) = uVar4;
      uVar4 = F_00427e30();
      *((ulonglong *)GEN_TOP(((int)this + 0x28))) = uVar4;
      return 1;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 3;
  }
  return 0;
}

/* ref: FUN_00e4fe10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4fe10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4fe10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x15))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x15))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x15))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x15))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e4fe70 */
GEN_LIB GEN_FRAME uint F_00e4fe70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4fe70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e4fe80 */
GEN_LIB GEN_FRAME uint F_00e4fe80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4fe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e4fe90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4fe90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4fe90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4feb0 */
GEN_LIB GEN_FRAME uint F_00e4feb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4feb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e4fec0 */
GEN_LIB GEN_FRAME uint F_00e4fec0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4fec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e4fed0 */
GEN_LIB GEN_FRAME uint F_00e4fed0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4fed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e4fee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4fee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4fee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4ff00 */
GEN_LIB GEN_FRAME uint F_00e4ff00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4ff00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e4ff10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ff10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4ff10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyOperation::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ff30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe4ff30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1158064));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e4ff60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ff60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4ff60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4ff90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4ff90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4ff90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e4fe10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e4ffa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ffa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4ffa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4ffc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ffc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4ffc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4ffe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ffe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4ffe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e50000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50000(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe50000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x1ffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00406ad0(param_5);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00e501fd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00e501fd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e50230 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e50230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe50230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e4fe10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e50240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe50240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e50260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe50260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e502b0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e502b0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe502b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e502d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e502d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe502d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (int)puVar2[3];
      }
      else {
        local_8 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (int)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00e50000(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e4fe10(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((int)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e50000(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e503b0 */
GEN_LIB GEN_FRAME unsigned int F_00e503b0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe503b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e503d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e503d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe503d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_1;
      puVar1[4] = param_1[1];
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e50430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe50430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e502d0(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Application::Network::WorkDefinitions::Base_TypeInfoInterface::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e504c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe504c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Base_TypeInfoInterface::vf16 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e504d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe504d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Base_TypeInfoInterface::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e504e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe504e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Base::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e50520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe50520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::WorkDefinitions::Base::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e50530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe50530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::WorkDefinitions::Base::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50540(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe50540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e50570 */
GEN_LIB GEN_FRAME ulonglong F_00e50570(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe50570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint local_c;
  int iStack_8;
  
  cVar4 = *param_1;
  if (cVar4 < '0') {
    return 0;
  }
  iStack_8 = 0;
  local_c = 0;
  iVar6 = iStack_8;
  uVar7 = local_c;
  do {
    if ('9' < cVar4) break;
    uVar5 = (int)cVar4 - 0x30;
    uVar1 = uVar7 >> 0x1e;
    bVar8 = CARRY4(uVar7,uVar7 * 4);
    uVar3 = uVar7 * 5;
    uVar2 = uVar7 * 10;
    uVar7 = uVar2 + uVar5;
    iVar6 = (((iVar6 << 2 | uVar1) + iVar6 + (uint)bVar8) * 2 | uVar3 >> 0x1f) +
            ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar2,uVar5);
    param_1 = param_1 + 1;
    cVar4 = *param_1;
  } while ('/' < cVar4);
  return CONCAT44(iVar6,uVar7);
}

/* ref: FUN_00e505e0 */
GEN_LIB GEN_FRAME ulonglong F_00e505e0(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe505e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint local_10;
  int iStack_c;
  
  cVar1 = *param_1;
  if (cVar1 == '-') {
    param_1 = param_1 + 1;
  }
  cVar2 = *param_1;
  iStack_c = 0;
  local_10 = 0;
  iVar8 = iStack_c;
  uVar9 = local_10;
  pcVar7 = param_1;
  while (('/' < cVar2 && (cVar2 < ':'))) {
    uVar6 = (int)cVar2 - 0x30;
    uVar3 = uVar9 >> 0x1e;
    bVar10 = CARRY4(uVar9,uVar9 * 4);
    uVar5 = uVar9 * 5;
    uVar4 = uVar9 * 10;
    uVar9 = uVar4 + uVar6;
    iVar8 = (((iVar8 << 2 | uVar3) + iVar8 + (uint)bVar10) * 2 | uVar5 >> 0x1f) +
            ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar4,uVar6);
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar7;
  }
  if (cVar1 == '-') {
    bVar10 = uVar9 != 0;
    uVar9 = -uVar9;
    iVar8 = -(iVar8 + (uint)bVar10);
  }
  return CONCAT44(iVar8,uVar9);
}

/* ref: FUN_00e50660 */
GEN_LIB GEN_FRAME float F_00e50660(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe50660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  char cVar1;
  char * pcVar2;
  float fVar3;
  float local_8;
  
  local_8 = 0.0;
  pcVar2 = param_1;
  if (*param_1 == '-') {
    pcVar2 = param_1 + 1;
  }
  cVar1 = *pcVar2;
  while (('/' < cVar1 && (cVar1 < ':'))) {
    if (cVar1 == '.') goto LAB_00e506d3;
    pcVar2 = pcVar2 + 1;
    local_8 = (float)((double)local_8 * REFG(double, 0x10944b8)) + (float)(cVar1 - 0x30);
    cVar1 = *pcVar2;
  }
  if (*pcVar2 == '.') {
LAB_00e506d3: ;
    cVar1 = pcVar2[1];
    fVar3 = REFG(float, 0x1094884);
    while (('/' < cVar1 && (cVar1 < ':'))) {
      local_8 = ((float)GEN_TOF(((double)(cVar1 - 0x30) * (double)fVar3 + (double)local_8)));
      fVar3 = (float)((double)fVar3 * REFG(double, 0x1094800));
      cVar1 = pcVar2[2];
      pcVar2 = pcVar2 + 1;
    }
  }
  if (*param_1 == '-') {
    local_8 = gen_bits2f((uint)gen_fl2bits(local_8) ^ REFG(uint, 0x10920d0));
  }
  return local_8;
}

/* ref: FUN_00e50750 */
GEN_LIB GEN_FRAME uint F_00e50750(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe50750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  char cVar1;
  char * pcVar2;
  uint _MaxCount;
  uint uVar3;
  int iVar4;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _MaxCount = (int)pcVar2 - (int)(param_2 + 1);
  if (param_3 == 0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)(param_1 + 1);
  }
  else {
    uVar3 = (param_3 - (int)param_1) + 1;
  }
  if (_MaxCount <= uVar3) {
    pcVar2 = param_1 + (uVar3 - _MaxCount);
    while( true ) {
      if (pcVar2 < param_1) {
        return 0;
      }
      iVar4 = F_00c4b813(pcVar2,param_2,_MaxCount);
      if (iVar4 == 0) break;
      pcVar2 = pcVar2 - 1;
    }
    return (uint)pcVar2;
  }
  return 0;
}

/* ref: FUN_00e507d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e507d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe507d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ea7e80(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e507e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e507e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe507e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ea7eb0(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e50800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe50800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ea7fb0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e508d0(void)
{
  GEN_ENTER(0xe508d0u, 0u, 0u, 0u, 0u);
  return 10;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e508e0(void)
{
  GEN_ENTER(0xe508e0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135adb4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e508f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe508f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158250) + param_1 * 4);
}

/* ref: FUN_00e50910 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e50910(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe50910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x1158268) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe50930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return 0xffffffff;
}

/* ref: FUN_00e50970 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e50970(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe50970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x28;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe50980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135ad9c))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e509a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe509a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158208) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e509c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe509c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158238) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e509e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe509e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3780) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe50a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158220) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe50a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1158238) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1158238) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158220) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158208) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158220) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158208) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50aa0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe50aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x1158220) + param_2 * 4) * *(int *)(&REFG(undefined, 0x1158208) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158208) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158220) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe50b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158220) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e50bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe50bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,4);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,5);
  return uVar6 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe50c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,5,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe50c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,5,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e50d10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e50d10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe50d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe50d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae3c) + 0x10))))(&REFG(undefined * PTR32, 0x135ae3c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e50d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe50d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae3c) + 0x10))))(&REFG(undefined * PTR32, 0x135ae3c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe50d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 5;
  case 2: ;
    return in_ecx + 8;
  case 3: ;
    return in_ecx + 0x10;
  case 4: ;
    return in_ecx + 0x18;
  case 5: ;
    return in_ecx + 0xd8;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe50de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if ((param_2 < *(uint *)(&REFG(undefined, 0x1158208) + param_1 * 4)) && (param_1 == 4)) {
    return (uint)(this + param_2 * 8 + 0x18);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e50e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe50e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pFVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    this[4] = *(undefined *)(param_1 + 1);
    this[5] = *((undefined *)GEN_TOP(((int)param_1 + 5)));
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    this[0x10] = *(undefined *)(param_1 + 4);
    pFVar5 = this + 0x18;
    iVar6 = 0x18;
    do {
      *(undefined4 *)pFVar5 = *((undefined4 *)GEN_TOP((pFVar5 + ((int)param_1 - (int)this))));
      *(undefined4 *)(pFVar5 + 4) = *((undefined4 *)GEN_TOP((pFVar5 + ((int)param_1 - (int)this) + 4)));
      pFVar5 = pFVar5 + 8;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
    *(int *)(this + 0xd8) = param_1[0x36];
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e50eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe50eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined1 FVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pFVar6;
  int iVar7;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      FVar1 = *(undefined *)(param_1 + 1);
      this[4] = FVar1;
      return CONCAT31((int3)(param_2 >> 8),FVar1);
    case 1: ;
      this[5] = *((undefined *)GEN_TOP(((int)param_1 + 5)));
      return param_2;
    case 2: ;
      *(int *)(this + 8) = param_1[2];
      uVar5 = param_1[3];
      *(uint *)(this + 0xc) = uVar5;
      return uVar5;
    case 3: ;
      this[0x10] = *(undefined *)(param_1 + 4);
      return param_2;
    case 4: ;
      pFVar6 = this + 0x18;
      iVar7 = 0x18;
      do {
        *(undefined4 *)pFVar6 = *((undefined4 *)GEN_TOP((pFVar6 + ((int)param_1 - (int)this))));
        *(undefined4 *)(pFVar6 + 4) = *((undefined4 *)GEN_TOP((pFVar6 + ((int)param_1 - (int)this) + 4)));
        pFVar6 = pFVar6 + 8;
        iVar7 = iVar7 - 1;
      } while (iVar7 != 0);
      return (uint)pFVar6;
    case 5: ;
      *(int *)(this + 0xd8) = param_1[0x36];
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e50f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe50f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e51093: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e51098;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e51093;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e51098: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e51160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe51160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pFVar4;
  ulonglong uVar5;
  float fVar6;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    this[4] = SUB81(uVar5,0);
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    this[5] = SUB81(uVar5,0);
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    *(ulonglong *)(this + 8) = uVar5;
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    this[0x10] = SUB81(uVar5,0);
    return 1;
  case 4: ;
    uVar2 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    pFVar4 = this + 0x18;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar1);
      *(ulonglong *)pFVar4 = uVar5;
      iVar3 = iVar3 + 1;
      pFVar4 = pFVar4 + 8;
      if (0x17 < iVar3) {
        return 1;
      }
    }
    break;
  case 5: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    fVar6 = F_00e50660(uVar2);
    *(float *)(this + 0xd8) = fVar6;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e512b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe512b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  undefined * pFVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar9 = F_00e50570(uVar3 + 2);
  this[4] = SUB81(uVar9,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar9 = F_00e50570(uVar6 + 3);
  this[5] = SUB81(uVar9,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar9 = F_00e50570(uVar3 + 3);
  *(ulonglong *)(this + 8) = uVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar3 = uVar3 + 1;
  uVar9 = F_00e50570(uVar6 + 3);
  this[0x10] = SUB81(uVar9,0);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  (*(int *)(gen_frame + 0x0)) = 0;
  pFVar7 = this + 0x18;
  while( true ) {
    uVar8 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar8,0x22);
    if ((uVar6 < uVar8) || (uVar6 < uVar3)) break;
    uVar9 = F_00e50570(uVar8);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    *(ulonglong *)pFVar7 = uVar9;
    pFVar7 = pFVar7 + 8;
    if (0x17 < (*(int *)(gen_frame + 0x0))) {
LAB_00e513f1: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      fVar10 = F_00e50660(uVar3 + 4);
      *(float *)(this + 0xd8) = fVar10;
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar3 = F_00c51da0(uVar6,0x7d);
        *param_2 = uVar3;
      }
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e513f1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e51440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe51440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e51560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe51560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * pFVar2;
  undefined * this_00;
  int iVar3;
  undefined1 * puVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[5],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x10],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,0x18,0);
  pFVar2 = this + 0x18;
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pFVar2,*(undefined4 *)(pFVar2 + 4));
    puVar4 = ((undefined1 *)(gen_frame + 0x0));
    this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(this_00 GEN_EDX_ARG,puVar4);
    pFVar2 = pFVar2 + 8;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x18);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0xd8))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0xd8)) >> 0x20));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e51710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe51710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e51730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe51730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e51843: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e51848;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e51843;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e51848: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e519d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe519d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pFVar4;
  ulonglong uVar5;
  float fVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    this[4] = SUB81(uVar5,0);
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    this[5] = SUB81(uVar5,0);
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    *(ulonglong *)(this + 8) = uVar5;
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar2);
    this[0x10] = SUB81(uVar5,0);
    return 1;
  case 4: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    pFVar4 = this + 0x18;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar1);
      *(ulonglong *)pFVar4 = uVar5;
      iVar3 = iVar3 + 1;
      pFVar4 = pFVar4 + 8;
      if (0x17 < iVar3) {
        return 1;
      }
    }
    break;
  case 5: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    fVar6 = F_00e50660(uVar2);
    *(float *)(this + 0xd8) = fVar6;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e51ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe51ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pFVar6;
  ulonglong uVar7;
  float fVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[4] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[5] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(ulonglong *)(this + 8) = uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x10] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea4));
      iVar5 = uVar3 + 10;
      pFVar6 = this + 0x18;
      (*(int *)(gen_frame + 0x0)) = 0x18;
      do {
        uVar7 = F_00e50570(iVar5);
        *(ulonglong *)pFVar6 = uVar7;
        uVar3 = F_00c51da0(iVar5,0x2c);
        pFVar6 = pFVar6 + 8;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
        iVar5 = uVar3 + 2;
      } while ((*(int *)(gen_frame + 0x0)) != 0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
    F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea8));
      iVar5 = uVar3 + 9;
      fVar8 = F_00e50660(iVar5);
      *(float *)(this + 0xd8) = fVar8;
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = iVar5;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e51e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe51e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e51f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe51f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  undefined * pFVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 * puVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[5],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x10],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar9 = 0;
  uVar8 = 0x18;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar8,uVar9);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pFVar5 = this + 0x18;
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pFVar5,*(undefined4 *)(pFVar5 + 4));
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar10 = ((undefined1 *)(gen_frame + 0x60));
    iVar6 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar7 = (*(int *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar7,iVar6)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar10);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    pFVar5 = pFVar5 + 8;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 0x18);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1130b90)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0xd8))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0xd8)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e52840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe52840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e52992: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e52997;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e52992;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e52997: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e52af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe52af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00e52cc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e52cc0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe52cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined2 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c))) = 0;
  puVar2 = ((undefined4 *)GEN_TOP((in_ecx + 0x18)));
  puVar3 = ((undefined4 *)GEN_TOP((in_ecx + 0x20)));
  for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 0xd8))) = 0;
  return in_ecx;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e52d20(void)
{
  GEN_ENTER(0xe52d20u, 0u, 0u, 0u, 0u);
  return 0x1d;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e52d30(void)
{
  GEN_ENTER(0xe52d30u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135adc8);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e52d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe52d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x11582b4) + param_1 * 4);
}

/* ref: FUN_00e52d60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e52d60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe52d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x11582c4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e52d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe52d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return 0xffffffff;
}

/* ref: FUN_00e52dc0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e52dc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe52dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x142;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e52dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe52dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135adb8))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e52df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe52df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158284) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e52e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe52e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x11582a4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e52e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe52e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e3798) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e52e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe52e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158294) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e52e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe52e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x11582a4) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x11582a4) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158294) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158284) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158294) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158284) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e52ef0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe52ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x1158294) + param_2 * 4) * *(int *)(&REFG(undefined, 0x1158284) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158284) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158294) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e52f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe52f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158294) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e53000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe53000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  return uVar4 + uVar1 + uVar2 + uVar3;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e53040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe53040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e530a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe530a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e53100 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e53100(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe53100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1158654));
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e53130 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e53130(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe53130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e53140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe53140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae40) + 0x10))))(&REFG(undefined * PTR32, 0x135ae40),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e53170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e53170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe53170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae40) + 0x10))))(&REFG(undefined * PTR32, 0x135ae40),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e531a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe531a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0xc;
  case 3: ;
    return in_ecx + 0x14;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e531f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe531f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 < *(uint *)(&REFG(undefined, 0x1158284) + param_1 * 4)) {
    if (param_1 == 2) {
      return (uint)(this + param_2 * 4 + 0xc);
    }
    if (param_1 == 3) {
      return (uint)(this + param_2 * 4 + 0x14);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e53220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe53220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 4) = param_1[1];
    this[8] = *(undefined *)(param_1 + 2);
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    *(int *)(this + 0x14) = param_1[5];
    uVar4 = param_1[6];
    *(uint *)(this + 0x18) = uVar4;
    *(int *)(this + 0x1c) = param_1[7];
    *(int *)(this + 0x20) = param_1[8];
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e532a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe532a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    uVar4 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar4 = param_1[1];
      *(uint *)(this + 4) = uVar4;
      return uVar4;
    case 1: ;
      this[8] = *(undefined *)(param_1 + 2);
      return param_2;
    case 2: ;
      *(int *)(this + 0xc) = param_1[3];
      *(int *)(this + 0x10) = param_1[4];
      return param_2;
    case 3: ;
      *(int *)(this + 0x14) = param_1[5];
      uVar4 = param_1[6];
      *(uint *)(this + 0x18) = uVar4;
      *(int *)(this + 0x1c) = param_1[7];
      *(int *)(this + 0x20) = param_1[8];
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e53350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe53350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e53453: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e53458;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e53453;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e53458: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e53520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe53520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pGVar4;
  ulonglong uVar5;
  float fVar6;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar5;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    this[8] = SUB81(uVar5,0);
    return 1;
  case 2: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    pGVar4 = this + 0xc;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      fVar6 = F_00e50660(uVar2);
      *(float *)pGVar4 = fVar6;
      iVar3 = iVar3 + 1;
      pGVar4 = pGVar4 + 4;
      if (1 < iVar3) {
        return 1;
      }
    }
    break;
  case 3: ;
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    pGVar4 = this + 0x14;
    do {
      if ((int)uVar1 <= iVar3) {
        return 1;
      }
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      *(int *)pGVar4 = (int)uVar5;
      iVar3 = iVar3 + 1;
      pGVar4 = pGVar4 + 4;
    } while (iVar3 < 4);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e53640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe53640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar8 = F_00e50570(uVar3 + 2);
  *(int *)(this + 4) = (int)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  uVar3 = uVar3 + 1;
  this[8] = SUB81(uVar8,0);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0xc;
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    fVar9 = F_00e50660(uVar7);
    *(float *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = fVar9;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
  } while (iVar5 < 2);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x14;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e505e0(uVar7);
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (int)uVar8;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    if (3 < iVar5) {
LAB_00e537aa: ;
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar3 = F_00c51da0(uVar3 + 1,0x7d);
        *param_2 = uVar3;
      }
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e537aa;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e537e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe537e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e53900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe53900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * pGVar3;
  int iVar4;
  undefined1 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,2,0);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0xc;
  iVar4 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x20));
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,4,0);
  iVar4 = 0;
  pGVar3 = this + 0x14;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),*(int *)pGVar3,*(int *)((int)(uintptr_t)pGVar3) >> 0x1f);
    puVar5 = ((undefined1 *)(gen_frame + 0x4));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    iVar4 = iVar4 + 1;
    pGVar3 = pGVar3 + 4;
  } while (iVar4 < 4);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e53a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe53a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e53a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe53a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e53b93: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e53b98;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e53b93;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e53b98: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e53d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe53d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * pGVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar5;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar1);
    this[8] = SUB81(uVar5,0);
    return 1;
  case 2: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    pGVar3 = this + 0xc;
    while (iVar4 < (int)uVar1) {
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      fVar6 = F_00e50660(uVar2);
      *(float *)pGVar3 = fVar6;
      iVar4 = iVar4 + 1;
      pGVar3 = pGVar3 + 4;
      if (1 < iVar4) {
        return 1;
      }
    }
    break;
  case 3: ;
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    pGVar3 = this + 0x14;
    do {
      if ((int)uVar1 <= iVar4) {
        return 1;
      }
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      *(int *)pGVar3 = (int)uVar5;
      iVar4 = iVar4 + 1;
      pGVar3 = pGVar3 + 4;
    } while (iVar4 < 4);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e53eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe53eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pGVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135af34));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(int *)(this + 4) = (int)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135af34));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[8] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135af30));
    iVar5 = uVar3 + 10;
    pGVar6 = this + 0xc;
    (*(int *)(gen_frame + 0x0)) = 2;
    do {
      fVar9 = F_00e50660(iVar5);
      *(float *)pGVar6 = fVar9;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pGVar6 = pGVar6 + 4;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135af30));
    iVar5 = uVar3 + 10;
    pGVar6 = this + 0x14;
    iVar7 = 4;
    do {
      uVar8 = F_00e505e0(iVar5);
      *(int *)pGVar6 = (int)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pGVar6 = pGVar6 + 4;
      iVar7 = iVar7 - 1;
      iVar5 = uVar3 + 2;
    } while (iVar7 != 0);
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    *param_2 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e540e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe540e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e54200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe54200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined * pGVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1130b90)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 2;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this + 0xc;
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x8))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    puVar11 = ((undefined1 *)(gen_frame + 0x60));
    iVar7 = (*(int *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar7,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)(gen_frame + 0x8)) + 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 2);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 4;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  iVar7 = 0;
  pGVar8 = this + 0x14;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x60)),0x20,&REFG(undefined, 0x11585f0),*(int *)pGVar8,*(int *)((int)(uintptr_t)pGVar8) >> 0x1f);
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x60));
    iVar6 = iVar7 >> 0x1f;
    iVar5 = iVar7;
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar5,iVar6)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    iVar7 = iVar7 + 1;
    pGVar8 = pGVar8 + 4;
  } while (iVar7 < 4);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e54890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe54890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e549e2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e549e7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e549e2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e549e7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e54b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe54b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00e54d10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e54d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe54d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e54d60(void)
{
  GEN_ENTER(0xe54d60u, 0u, 0u, 0u, 0u);
  return 0x25;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e54d70(void)
{
  GEN_ENTER(0xe54d70u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135adf0);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e54d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe54d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158344) + param_1 * 4);
}

/* ref: FUN_00e54da0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e54da0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe54da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x1158368) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e54dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe54dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 9);
  return 0xffffffff;
}

/* ref: FUN_00e54e00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e54e00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe54e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x15f;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e54e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe54e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135adcc))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e54e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe54e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x11582d8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e54e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe54e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158320) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e54e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe54e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e37a8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e54e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe54e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x11582fc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e54eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe54eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1158320) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1158320) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x11582fc) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x11582d8) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x11582fc) + param_1 * 4) * *(int *)(&REFG(undefined, 0x11582d8) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e54f30(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe54f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x11582fc) + param_2 * 4) * *(int *)(&REFG(undefined, 0x11582d8) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x11582d8) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x11582fc) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e54fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe54fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x11582fc) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e55040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe55040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,4);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,5);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,6);
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,7);
  uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,8);
  return uVar9 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e550c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe550c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,6,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,7,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,8,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e55170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe55170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,6,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,7,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,8,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e55220 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e55220(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe55220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x115872c));
  *(undefined2 *)(in_ecx + 9) = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  *(undefined1 *)(in_ecx + 1) = 0;
  *((undefined8 *)GEN_TOP(((int)in_ecx + 0x19))) = 0;
  *((undefined2 *)GEN_TOP(((int)in_ecx + 0x21))) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x23))) = 0;
  *((undefined2 *)GEN_TOP(((int)in_ecx + 0x26))) = 0;
  *(undefined1 *)(in_ecx + 10) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e55260 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e55260(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe55260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e55270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe55270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae44) + 0x10))))(&REFG(undefined * PTR32, 0x135ae44),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e552a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e552a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe552a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae44) + 0x10))))(&REFG(undefined * PTR32, 0x135ae44),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e552d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe552d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 0x19;
  case 2: ;
    return in_ecx + 0x21;
  case 3: ;
    return in_ecx + 0x24;
  case 4: ;
    return in_ecx + 0x25;
  case 5: ;
    return in_ecx + 0x26;
  case 6: ;
    return in_ecx + 0x2c;
  case 7: ;
    return in_ecx + 0x30;
  case 8: ;
    return in_ecx + 0x34;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e55350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe55350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 < *(uint *)(&REFG(undefined, 0x11582d8) + param_1 * 4)) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      return (uint)(this + param_2 + 4);
    case 1: ;
      return (uint)(this + param_2 + 0x19);
    case 2: ;
      return (uint)(this + param_2 + 0x21);
    case 5: ;
      return (uint)(this + param_2 + 0x26);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e553b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe553b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pBVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    pBVar5 = this + 4;
    iVar6 = 0x15;
    do {
      *pBVar5 = pBVar5[(int)param_1 - (int)this];
      pBVar5 = pBVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
    this[0x19] = *((undefined *)GEN_TOP(((int)param_1 + 0x19)));
    this[0x1a] = *((undefined *)GEN_TOP(((int)param_1 + 0x1a)));
    this[0x1b] = *((undefined *)GEN_TOP(((int)param_1 + 0x1b)));
    this[0x1c] = *(undefined *)(param_1 + 7);
    this[0x1d] = *((undefined *)GEN_TOP(((int)param_1 + 0x1d)));
    this[0x1e] = *((undefined *)GEN_TOP(((int)param_1 + 0x1e)));
    this[0x1f] = *((undefined *)GEN_TOP(((int)param_1 + 0x1f)));
    this[0x20] = *(undefined *)(param_1 + 8);
    this[0x21] = *((undefined *)GEN_TOP(((int)param_1 + 0x21)));
    this[0x22] = *((undefined *)GEN_TOP(((int)param_1 + 0x22)));
    this[0x23] = *((undefined *)GEN_TOP(((int)param_1 + 0x23)));
    this[0x24] = *(undefined *)(param_1 + 9);
    this[0x25] = *((undefined *)GEN_TOP(((int)param_1 + 0x25)));
    this[0x26] = *((undefined *)GEN_TOP(((int)param_1 + 0x26)));
    this[0x27] = *((undefined *)GEN_TOP(((int)param_1 + 0x27)));
    this[0x28] = *(undefined *)(param_1 + 10);
    *(int *)(this + 0x2c) = param_1[0xb];
    *(int *)(this + 0x30) = param_1[0xc];
    uVar4 = param_1[0xd];
    *(uint *)(this + 0x34) = uVar4;
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e554a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe554a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined1 BVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar7;
  undefined * pBVar6;
  int iVar8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    uVar7 = (undefined3)(param_2 >> 8);
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      pBVar6 = this + 4;
      iVar8 = 0x15;
      do {
        *pBVar6 = pBVar6[(int)param_1 - (int)this];
        pBVar6 = pBVar6 + 1;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
      return (uint)pBVar6;
    case 1: ;
      this[0x19] = *((undefined *)GEN_TOP(((int)param_1 + 0x19)));
      this[0x1a] = *((undefined *)GEN_TOP(((int)param_1 + 0x1a)));
      this[0x1b] = *((undefined *)GEN_TOP(((int)param_1 + 0x1b)));
      this[0x1c] = *(undefined *)(param_1 + 7);
      this[0x1d] = *((undefined *)GEN_TOP(((int)param_1 + 0x1d)));
      this[0x1e] = *((undefined *)GEN_TOP(((int)param_1 + 0x1e)));
      BVar1 = *((undefined *)GEN_TOP(((int)param_1 + 0x1f)));
      this[0x1f] = BVar1;
      this[0x20] = *(undefined *)(param_1 + 8);
      return (uint)(byte)BVar1;
    case 2: ;
      this[0x21] = *((undefined *)GEN_TOP(((int)param_1 + 0x21)));
      BVar1 = *((undefined *)GEN_TOP(((int)param_1 + 0x22)));
      this[0x22] = BVar1;
      this[0x23] = *((undefined *)GEN_TOP(((int)param_1 + 0x23)));
      return CONCAT31(uVar7,BVar1);
    case 3: ;
      this[0x24] = *(undefined *)(param_1 + 9);
      return uVar5;
    case 4: ;
      BVar1 = *((undefined *)GEN_TOP(((int)param_1 + 0x25)));
      this[0x25] = BVar1;
      return CONCAT31(uVar7,BVar1);
    case 5: ;
      this[0x26] = *((undefined *)GEN_TOP(((int)param_1 + 0x26)));
      this[0x27] = *((undefined *)GEN_TOP(((int)param_1 + 0x27)));
      BVar1 = *(undefined *)(param_1 + 10);
      this[0x28] = BVar1;
      return CONCAT31(uVar7,BVar1);
    case 6: ;
      *(int *)(this + 0x2c) = param_1[0xb];
      return uVar5;
    case 7: ;
      *(int *)(this + 0x30) = param_1[0xc];
      return uVar5;
    case 8: ;
      uVar5 = param_1[0xd];
      *(uint *)(this + 0x34) = uVar5;
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e555f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe555f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e556f3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e556f8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e556f3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e556f8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e557c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe557c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar5 = 0xffffffff;
    uVar2 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    F_00c4d9ef(this + 4,0x15,uVar2,uVar5);
    return 1;
  case 1: ;
    uVar2 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar4 = F_00e50570(uVar1);
      this[iVar3 + 0x19] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (7 < iVar3) {
        return 1;
      }
    }
    break;
  case 2: ;
    uVar2 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar4 = F_00e50570(uVar1);
      this[iVar3 + 0x21] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 3: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x24] = SUB81(uVar4,0);
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x25] = SUB81(uVar4,0);
    return 1;
  case 5: ;
    uVar2 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar4 = F_00e50570(uVar1);
      this[iVar3 + 0x26] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 6: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x2c) = (int)uVar4;
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x30) = (int)uVar4;
    return 1;
  case 8: ;
    uVar2 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x34) = (int)uVar4;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e559d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe559d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  iVar5 = uVar3 + 2;
  uVar3 = F_00c51da0(iVar5,0x22);
  F_00c4d9ef(this + 4,(uVar3 - iVar5) + 1,iVar5,0xffffffff);
  uVar3 = uVar3 + 1;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0x19] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0x21] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  uVar6 = F_00c51da0(uVar3 + 4,0x22);
  uVar8 = F_00e50570(uVar3 + 4);
  this[0x24] = SUB81(uVar8,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar3 = uVar3 + 1;
  uVar8 = F_00e50570(uVar6 + 3);
  this[0x25] = SUB81(uVar8,0);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0x26] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
LAB_00e55b8d: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      uVar8 = F_00e50570(uVar3 + 4);
      *(int *)(this + 0x2c) = (int)uVar8;
      uVar3 = F_00c51da0(uVar6 + 3,0x22);
      uVar8 = F_00e50570(uVar6 + 3);
      *(int *)(this + 0x30) = (int)uVar8;
      uVar6 = F_00c51da0(uVar3 + 3,0x22);
      uVar8 = F_00e50570(uVar3 + 3);
      *(int *)(this + 0x34) = (int)uVar8;
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar3 = F_00c51da0(uVar6,0x7d);
        *param_2 = uVar3;
      }
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e55b8d;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e55c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe55c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e55d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe55d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int iVar3;
  undefined1 * puVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,this + 4);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,8,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0x19],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0x21],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x24],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x25],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,3,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0x26],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2c),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x30),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,8,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x34),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e55f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe55f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e55fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe55fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e560b3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e560b8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e560b3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e560b8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e56240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe56240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar5 = 0xffffffff;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    F_00c4d9ef(this + 4,0x15,uVar2,uVar5);
    return 1;
  case 1: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar4 = F_00e505e0(uVar1);
      this[iVar3 + 0x19] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (7 < iVar3) {
        return 1;
      }
    }
    break;
  case 2: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar4 = F_00e505e0(uVar1);
      this[iVar3 + 0x21] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 3: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x24] = SUB81(uVar4,0);
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    this[0x25] = SUB81(uVar4,0);
    return 1;
  case 5: ;
    uVar2 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
      uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
      uVar4 = F_00e505e0(uVar1);
      this[iVar3 + 0x26] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 6: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x2c) = (int)uVar4;
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x30) = (int)uVar4;
    return 1;
  case 8: ;
    uVar2 = F_00e82f00(this_00 GEN_EDX_ARG);
    uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x34) = (int)uVar4;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e56500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe56500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar3 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x0)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    iVar5 = uVar3 + 9;
    uVar3 = F_00c51da0(iVar5,0x22);
    F_00c4d9ef(this + 4,(uVar3 - iVar5) + 1,iVar5,0xffffffff);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x0)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afbc));
    uVar3 = uVar3 + 10;
    iVar5 = 0;
    do {
      uVar7 = F_00e50570(uVar3);
      this[iVar5 + 0x19] = SUB81(uVar7,0);
      uVar3 = F_00c51da0(uVar3,0x2c);
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 2;
    } while (iVar5 < 8);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x0)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afbc));
    uVar3 = uVar3 + 10;
    iVar5 = 0;
    do {
      uVar7 = F_00e50570(uVar3);
      this[iVar5 + 0x21] = SUB81(uVar7,0);
      uVar3 = F_00c51da0(uVar3,0x2c);
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 2;
    } while (iVar5 < 3);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x0)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    this[0x24] = SUB81(uVar7,0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x0)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    this[0x25] = SUB81(uVar7,0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x0)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afbc));
    uVar3 = uVar3 + 10;
    iVar5 = 0;
    do {
      uVar7 = F_00e50570(uVar3);
      this[iVar5 + 0x26] = SUB81(uVar7,0);
      uVar3 = F_00c51da0(uVar3,0x2c);
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 2;
    } while (iVar5 < 3);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x0)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    *(int *)(this + 0x2c) = (int)uVar7;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x0)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    *(int *)(this + 0x30) = (int)uVar7;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x0)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    *(int *)(this + 0x34) = (int)uVar7;
  }
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    *param_2 = uVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e56900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe56900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e56a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe56a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158798)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,this + 4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 8;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x0)) + 0x19],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 8);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x0)) + 0x21],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x24],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x25],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 3;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x0)) + 0x26],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 3);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2c),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,7,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,7);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x30),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,8,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,8);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,8);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x34),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e57790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe57790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e578e2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e578e7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e578e2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e578e7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e57a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe57a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e57c40(void)
{
  GEN_ENTER(0xe57c40u, 0u, 0u, 0u, 0u);
  return 0x2e;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e57c50(void)
{
  GEN_ENTER(0xe57c50u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135ae08);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe57c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x11583cc) + param_1 * 4);
}

/* ref: FUN_00e57c80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e57c80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe57c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x11583e0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe57ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  return 0xffffffff;
}

/* ref: FUN_00e57ce0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e57ce0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe57ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x1c2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe57cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135adf4))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe57d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158390) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe57d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x11583b8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe57d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e37cc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe57d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x11583a4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe57d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x11583b8) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x11583b8) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x11583a4) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158390) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x11583a4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158390) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57e10(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe57e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x11583a4) + param_2 * 4) * *(int *)(&REFG(undefined, 0x1158390) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158390) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x11583a4) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe57e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x11583a4) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e57f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe57f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,4);
  return uVar5 + uVar1 + uVar2 + uVar3 + uVar4;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe57f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe57f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e57fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe57fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,4,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e58020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe58020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,4,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e58090 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e58090(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe58090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x11587fc));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined2 *)(in_ecx + 5) = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e580b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e580b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe580b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e580c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe580c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae48) + 0x10))))(&REFG(undefined * PTR32, 0x135ae48),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e580f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e580f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe580f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae48) + 0x10))))(&REFG(undefined * PTR32, 0x135ae48),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e58120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe58120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 8;
  case 1: ;
    return in_ecx + 0x10;
  case 2: ;
    return in_ecx + 0x14;
  case 3: ;
    return in_ecx + 0x15;
  case 4: ;
    return in_ecx + 0x18;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e58170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe58170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf6 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e58180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe58180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    uVar4 = (uint)(byte)*(undefined *)(param_1 + 5);
    this[0x14] = *(undefined *)(param_1 + 5);
    this[0x15] = *((undefined *)GEN_TOP(((int)param_1 + 0x15)));
    *(int *)(this + 0x18) = param_1[6];
  }
  return (byte)uVar4;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e581f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe581f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined1 EVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar5 = param_1[2];
      *(uint *)(this + 8) = uVar5;
      *(int *)(this + 0xc) = param_1[3];
      return uVar5;
    case 1: ;
      *(int *)(this + 0x10) = param_1[4];
      return param_2;
    case 2: ;
      EVar1 = *(undefined *)(param_1 + 5);
      this[0x14] = EVar1;
      return CONCAT31((int3)(param_2 >> 8),EVar1);
    case 3: ;
      this[0x15] = *((undefined *)GEN_TOP(((int)param_1 + 0x15)));
      return param_2;
    case 4: ;
      *(int *)(this + 0x18) = param_1[6];
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e582a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe582a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e583a3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e583a8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e583a3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e583a8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e58470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe58470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  ulonglong uVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_FWD);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(ulonglong *)(this + 8) = uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar2;
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    this[0x14] = SUB81(uVar2,0);
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    this[0x15] = SUB81(uVar2,0);
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x18) = (int)uVar2;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e58560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe58560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar7 = F_00e50570(uVar3 + 2);
  *(ulonglong *)(this + 8) = uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x10) = (int)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  this[0x14] = SUB81(uVar7,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  this[0x15] = SUB81(uVar7,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  *(int *)(this + 0x18) = (int)uVar7;
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar3 = F_00c51da0(uVar6,0x7d);
    *param_2 = uVar3;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e58690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe58690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e587b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe587b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x14],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x15],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x18),0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e588e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe588e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e58900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe58900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e58a13: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e58a18;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e58a13;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e58a18: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e58ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe58ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(ulonglong *)(this + 8) = uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar2;
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    this[0x14] = SUB81(uVar2,0);
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    this[0x15] = SUB81(uVar2,0);
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(uVar1 GEN_EDX_ARG);
    uVar1 = F_0042a990(uVar1 GEN_EDX_ARG);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x18) = (int)uVar2;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e58d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe58d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b05c));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(ulonglong *)(this + 8) = uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b05c));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0x10) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b05c));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[0x14] = SUB81(uVar6,0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b05c));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[0x15] = SUB81(uVar6,0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b05c));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0x18) = (int)uVar6;
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    *param_2 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e58f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe58f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e59080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe59080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x14],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x15],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x18),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e59730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe59730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e59882: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e59887;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e59882;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e59887: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e599e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe599e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00e59bb0 */
GEN_LIB GEN_NOFRAME unsigned int F_00e59bb0(void)
{
  GEN_ENTER(0xe59bb0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e59be0(void)
{
  GEN_ENTER(0xe59be0u, 0u, 0u, 0u, 0u);
  return 0xd4;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e59bf0(void)
{
  GEN_ENTER(0xe59bf0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135ae14);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe59c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158410) + param_1 * 4);
}

/* ref: FUN_00e59c20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e59c20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe59c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x1158418) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe59c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return 0xffffffff;
}

/* ref: FUN_00e59c80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e59c80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe59c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x1e9;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe59c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135ae0c))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe59cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x11583f8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe59cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158408) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe59cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e37e0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe59d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158400) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe59d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1158408) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1158408) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158400) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x11583f8) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158400) + param_1 * 4) * *(int *)(&REFG(undefined, 0x11583f8) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59db0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe59db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x1158400) + param_2 * 4) * *(int *)(&REFG(undefined, 0x11583f8) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x11583f8) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158400) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe59e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158400) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e59ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe59ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  return uVar2 + uVar1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe59ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,param_2 + uVar1);
  return uVar2 + ((param_2 + uVar1) - param_2);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe59f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,param_1 + uVar1,param_2);
  return uVar2 + ((param_1 + uVar1) - param_1);
}

/* ref: FUN_00e59f60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e59f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe59f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11588c4));
  puVar2 = this;
  for (iVar1 = 0x50; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar2 = 0;
  }
  *((undefined8 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0x14c))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0x154))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0x15c))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0x164))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0x16c))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0x17c))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0x18c))) = 0;
  return (uint)this;
}

/* ref: FUN_00e59fe0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e59fe0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe59fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e59ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe59ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae4c) + 0x10))))(&REFG(undefined * PTR32, 0x135ae4c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e5a020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5a020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5a020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae4c) + 0x10))))(&REFG(undefined * PTR32, 0x135ae4c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5a050(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe5a050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 0) {
    return in_ecx + 4;
  }
  if (param_2 != 1) {
    return 0;
  }
  return in_ecx + 0x144;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5a080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5a080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 < *(uint *)(&REFG(undefined, 0x11583f8) + param_1 * 4)) {
    if (param_1 == 0) {
      return (uint)(this + param_2 * 2 + 4);
    }
    if (param_1 == 1) {
      return (uint)(this + param_2 * 4 + 0x144);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e5a0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5a0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pDVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    pDVar5 = this + 4;
    iVar6 = 0xa0;
    do {
      *(undefined2 *)pDVar5 = *((undefined2 *)GEN_TOP((pDVar5 + ((int)param_1 - (int)this))));
      pDVar5 = pDVar5 + 2;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
    pDVar5 = this + 0x144;
    iVar6 = 0x14;
    do {
      *(undefined4 *)pDVar5 = *((undefined4 *)GEN_TOP((pDVar5 + ((int)param_1 - (int)this))));
      pDVar5 = pDVar5 + 4;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e5a140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5a140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pDVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    if (param_2 == 0) {
      pDVar5 = this + 4;
      iVar6 = 0xa0;
      do {
        *(undefined2 *)pDVar5 = *((undefined2 *)GEN_TOP((pDVar5 + ((int)param_1 - (int)this))));
        pDVar5 = pDVar5 + 2;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
    }
    else if (param_2 == 1) {
      pDVar5 = this + 0x144;
      iVar6 = 0x14;
      do {
        *(undefined4 *)pDVar5 = *((undefined4 *)GEN_TOP((pDVar5 + ((int)param_1 - (int)this))));
        pDVar5 = pDVar5 + 4;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5a1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5a1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e5a2d3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e5a2d8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e5a2d3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e5a2d8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e5a3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5a3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pDVar4;
  ulonglong uVar5;
  
  if (param_1 == 0) {
    uVar1 = F_00e8c050(param_2 GEN_EDX_FWD);
    iVar3 = 0;
    pDVar4 = this + 4;
    do {
      if ((int)uVar1 <= iVar3) {
        return 1;
      }
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      *(short *)pDVar4 = (short)uVar5;
      iVar3 = iVar3 + 1;
      pDVar4 = pDVar4 + 2;
    } while (iVar3 < 0xa0);
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    uVar1 = F_00e8c050(param_2 GEN_EDX_ARG);
    iVar3 = 0;
    pDVar4 = this + 0x144;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      *(int *)pDVar4 = (int)uVar5;
      iVar3 = iVar3 + 1;
      pDVar4 = pDVar4 + 4;
      if (0x13 < iVar3) {
        return 1;
      }
    }
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5a470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5a470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  uint uVar1;
  char cVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  iVar6 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar7 = F_00fb9a80(uVar4,0x5b,0x5d);
  iVar6 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 4;
  do {
    uVar1 = uVar4 + 3;
    uVar4 = F_00c51da0(uVar1,0x22);
    if ((uVar7 < uVar1) || (uVar7 < uVar4)) {
      uVar4 = uVar7 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar1);
    *(short *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (short)uVar8;
    iVar6 = iVar6 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
  } while (iVar6 < 0xa0);
  uVar4 = uVar4 + 2;
  uVar7 = F_00fb9a80(uVar4,0x5b,0x5d);
  iVar6 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 0x144;
  while( true ) {
    uVar1 = uVar4 + 3;
    uVar4 = F_00c51da0(uVar1,0x22);
    if ((uVar7 < uVar1) || (uVar7 < uVar4)) break;
    uVar8 = F_00e50570(uVar1);
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x0)) = (int)uVar8;
    iVar6 = iVar6 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
    if (0x13 < iVar6) {
LAB_00e5a5ad: ;
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar4 = F_00c51da0(uVar4 + 1,0x7d);
        *param_2 = uVar4;
      }
      return 1;
    }
  }
  uVar4 = uVar7 - 1;
  goto LAB_00e5a5ad;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e5a5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5a5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5a700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5a700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * pDVar3;
  int iVar4;
  undefined1 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,0xa0,0);
  iVar4 = 0;
  pDVar3 = this + 4;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)pDVar3,0);
    puVar5 = ((undefined1 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    iVar4 = iVar4 + 1;
    pDVar3 = pDVar3 + 2;
  } while (iVar4 < 0xa0);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,0x14,0);
  iVar4 = 0;
  pDVar3 = this + 0x144;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pDVar3,0);
    puVar5 = ((undefined1 *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar5);
    iVar4 = iVar4 + 1;
    pDVar3 = pDVar3 + 4;
  } while (iVar4 < 0x14);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5a800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5a800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5a820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5a820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e5a933: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e5a938;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e5a933;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e5a938: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5aac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5aac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * pDVar3;
  int iVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (param_1 == 0) {
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    pDVar3 = this + 4;
    do {
      if ((int)uVar1 <= iVar4) {
        return 1;
      }
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      *(short *)pDVar3 = (short)uVar5;
      iVar4 = iVar4 + 1;
      pDVar3 = pDVar3 + 2;
    } while (iVar4 < 0xa0);
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    uVar1 = F_00e8c050(this_00 GEN_EDX_ARG);
    iVar4 = 0;
    pDVar3 = this + 0x144;
    do {
      if ((int)uVar1 <= iVar4) {
        return 1;
      }
      uVar2 = F_00e9e450(this_00 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e505e0(uVar2);
      *(int *)pDVar3 = (int)uVar5;
      iVar4 = iVar4 + 1;
      pDVar3 = pDVar3 + 4;
    } while (iVar4 < 0x14);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5abd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5abd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x4c, 4, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pDVar6;
  int iVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x4)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x4)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b0f0));
    iVar5 = uVar3 + 10;
    pDVar6 = this + 4;
    (*(int *)(gen_frame + 0x0)) = 0xa0;
    do {
      uVar8 = F_00e50570(iVar5);
      *(short *)pDVar6 = (short)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pDVar6 = pDVar6 + 2;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x40,((char *)REFP(0x11585a0)),uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b0f0));
    iVar5 = uVar3 + 10;
    pDVar6 = this + 0x144;
    iVar7 = 0x14;
    do {
      uVar8 = F_00e50570(iVar5);
      *(int *)pDVar6 = (int)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pDVar6 = pDVar6 + 4;
      iVar7 = iVar7 - 1;
      iVar5 = uVar3 + 2;
    } while (iVar7 != 0);
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    *param_2 = iVar5;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e5ad60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ad60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5ae80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ae80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined * pDVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x1158930)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 0xa0;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 4;
  iVar6 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = iVar6 >> 0x1f;
    iVar8 = iVar6;
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar8,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xa0);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11586c8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 0x14;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  iVar6 = 0;
  pDVar7 = this + 0x144;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pDVar7,0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = iVar6 >> 0x1f;
    iVar8 = iVar6;
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar8,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    iVar6 = iVar6 + 1;
    pDVar7 = pDVar7 + 4;
  } while (iVar6 < 0x14);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5b250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5b250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e5b3a2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e5b3a7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e5b3a2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e5b3a7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5b500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5b500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e5b770(void)
{
  GEN_ENTER(0xe5b770u, 0u, 0u, 0u, 0u);
  return 0x76;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf2 */
GEN_LIB GEN_NOFRAME uint F_00e5b780(void)
{
  GEN_ENTER(0xe5b780u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135ae34);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5b790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5b790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158478) + param_1 * 4);
}

/* ref: FUN_00e5b7b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e5b7b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe5b7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x1158494) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5b7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5b7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 7);
  return 0xffffffff;
}

/* ref: FUN_00e5b810 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e5b810(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe5b810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x40f;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5b820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5b820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(&REFG(undefined * PTR32, 0x135ae18))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5b840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5b840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158424) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5b860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5b860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x115845c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5b880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5b880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x15e37e8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5b8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5b8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(uint *)(&REFG(undefined, 0x1158440) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5b8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5b8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x115845c) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x115845c) + param_1 * 4) == 0x14) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_1 * 4) GEN_EDX_ARG);
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158440) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_1 * 4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158424) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158440) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158424) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5b940(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe5b940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_3 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_2 * 4);
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return *(int *)(&REFG(undefined, 0x1158440) + param_2 * 4) * *(int *)(&REFG(undefined, 0x1158424) + param_2 * 4) + 7;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_FWD);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158424) + param_2 * 4) + 7;
  }
  else if (param_3 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_2 * 4);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158440) + param_2 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5b9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe5b9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((param_5 + uVar5 * 4)));
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_1 * 4);
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158440) + param_1 * 4) + iVar1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_FWD);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e5ba50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe5ba50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,2);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,4);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,5);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,6);
  return uVar7 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5bab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5bab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,param_1,0,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,6,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5bb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5bb40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,0,param_1,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,6,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e5bbd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e5bbd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe5bbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1158994));
  *((undefined4 *)GEN_TOP(((int)in_ecx + 0x1e))) = 0;
  *((undefined2 *)GEN_TOP(((int)in_ecx + 0x22))) = 0;
  *(undefined8 *)(in_ecx + 1) = 0;
  *(undefined8 *)(in_ecx + 3) = 0;
  *(undefined8 *)(in_ecx + 5) = 0;
  *(undefined2 *)(in_ecx + 7) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e5bc00 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e5bc00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe5bc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5bc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5bc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae50) + 0x10))))(&REFG(undefined * PTR32, 0x135ae50),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e5bc40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5bc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5bc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae50) + 0x10))))(&REFG(undefined * PTR32, 0x135ae50),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5bc70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe5bc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 0x1e;
  case 2: ;
    return in_ecx + 0x1f;
  case 3: ;
    return in_ecx + 0x20;
  case 4: ;
    return in_ecx + 0x21;
  case 5: ;
    return in_ecx + 0x22;
  case 6: ;
    return in_ecx + 0x23;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5bce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5bce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if ((param_2 < *(uint *)(&REFG(undefined, 0x1158424) + param_1 * 4)) && (param_1 == 0)) {
    return (uint)(this + param_2 + 4);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5bd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5bd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pCVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    pCVar5 = this + 4;
    iVar6 = 0x1a;
    do {
      *pCVar5 = pCVar5[(int)param_1 - (int)this];
      pCVar5 = pCVar5 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
    this[0x1e] = *((undefined *)GEN_TOP(((int)param_1 + 0x1e)));
    this[0x1f] = *((undefined *)GEN_TOP(((int)param_1 + 0x1f)));
    this[0x20] = *(undefined *)(param_1 + 8);
    uVar4 = (uint)(byte)*((undefined *)GEN_TOP(((int)param_1 + 0x21)));
    this[0x21] = *((undefined *)GEN_TOP(((int)param_1 + 0x21)));
    this[0x22] = *((undefined *)GEN_TOP(((int)param_1 + 0x22)));
    this[0x23] = *((undefined *)GEN_TOP(((int)param_1 + 0x23)));
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf5 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e5bda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5bda0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined1 CVar1;
  byte bVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined * pCVar7;
  int iVar8;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  if ((short)uVar5 == (short)uVar6) {
    bVar2 = (byte)param_2;
    uVar6 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      pCVar7 = this + 4;
      iVar8 = 0x1a;
      do {
        *pCVar7 = pCVar7[(int)param_1 - (int)this];
        pCVar7 = pCVar7 + 1;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
      return (byte)pCVar7;
    case 1: ;
      CVar1 = *((undefined *)GEN_TOP(((int)param_1 + 0x1e)));
      this[0x1e] = CVar1;
      return (byte)CVar1;
    case 2: ;
      this[0x1f] = *((undefined *)GEN_TOP(((int)param_1 + 0x1f)));
      return bVar2;
    case 3: ;
      this[0x20] = *(undefined *)(param_1 + 8);
      return bVar2;
    case 4: ;
      CVar1 = *((undefined *)GEN_TOP(((int)param_1 + 0x21)));
      this[0x21] = CVar1;
      return (byte)CVar1;
    case 5: ;
      this[0x22] = *((undefined *)GEN_TOP(((int)param_1 + 0x22)));
      return bVar2;
    case 6: ;
      this[0x23] = *((undefined *)GEN_TOP(((int)param_1 + 0x23)));
    }
  }
  return (byte)uVar6;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf8 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5be70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5be70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
  pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e5bf73: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e5bf78;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e5bf73;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e5bf78: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
      uVar12 = F_00e8c050(this_00 GEN_EDX_ARG);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) {
              return 1;
            }
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') {
              return 0;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e5c040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5c040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  ulonglong uVar5;
  undefined * puVar6;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = F_00e8c050(param_2 GEN_EDX_FWD);
    iVar4 = 0;
    while (iVar4 < (int)uVar3) {
      uVar2 = F_00e9e450(param_2 GEN_EDX_ARG,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2 GEN_EDX_ARG);
      uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
      uVar5 = F_00e50570(uVar2);
      this[iVar4 + 4] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (0x19 < iVar4) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar3);
    this[0x1e] = SUB81(uVar5,0);
    return 1;
  case 2: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar3);
    this[0x1f] = SUB81(uVar5,0);
    return 1;
  case 3: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar3);
    this[0x20] = SUB81(uVar5,0);
    return 1;
  case 4: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar3);
    this[0x21] = SUB81(uVar5,0);
    return 1;
  case 5: ;
    uVar3 = F_00e82f00(param_2 GEN_EDX_ARG);
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    uVar5 = F_00e50570(uVar3);
    this[0x22] = SUB81(uVar5,0);
    return 1;
  case 6: ;
    puVar6 = &REFG(undefined, 0x1158a00);
    this_00 = ((undefined *)GEN_TOP(F_00e82f00(param_2 GEN_EDX_ARG)));
    bVar1 = F_0042b740(this_00 GEN_EDX_ARG,puVar6);
    this[0x23] = (undefined1)(bVar1 != 0);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf17 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5c1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5c1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 4] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
    if (0x19 < iVar5) {
LAB_00e5c287: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      uVar8 = F_00e50570(uVar3 + 4);
      this[0x1e] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(uVar6 + 3,0x22);
      uVar8 = F_00e50570(uVar6 + 3);
      this[0x1f] = SUB81(uVar8,0);
      uVar6 = F_00c51da0(uVar3 + 3,0x22);
      uVar8 = F_00e50570(uVar3 + 3);
      this[0x20] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(uVar6 + 3,0x22);
      uVar8 = F_00e50570(uVar6 + 3);
      this[0x21] = SUB81(uVar8,0);
      uVar6 = F_00c51da0(uVar3 + 3,0x22);
      uVar8 = F_00e50570(uVar3 + 3);
      this[0x22] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(((char *)GEN_TOP((uVar6 + 3))),0x22);
      this[0x23] = (undefined1)(*((char *)GEN_TOP((uVar6 + 3))) != '0');
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        uVar3 = F_00c51da0(uVar3,0x7d);
        *param_2 = uVar3;
      }
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e5c287;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e5c340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5c340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf23 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5c460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5c460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  undefined * pvVar1;
  undefined * this_00;
  int iVar2;
  undefined1 * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_00ea8220(pvVar1 GEN_EDX_ARG);
  F_00ea83e0(pvVar1 GEN_EDX_ARG,0x1a,0);
  iVar2 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar2 + 4],0);
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
    this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar1 GEN_EDX_ARG,iVar2,iVar2 >> 0x1f)));
    F_00ea7fb0(this_00 GEN_EDX_ARG,puVar3);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1a);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1e],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1f],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x20],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x21],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x22],0);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x23]);
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5c620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5c620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf11 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5c640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5c640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (*((int *)GEN_TOP(((int)param_1 + 8))) != 5) {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
  pcVar6 = ((char *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG)));
    uVar5 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar5 = F_00e82f00(uVar5 GEN_EDX_ARG);
    pbVar10 = ((byte *)GEN_TOP(F_0042a990(uVar5 GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e5c753: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e5c758;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e5c753;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e5c758: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
      this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this_00 + 8))) == 6) {
        uVar5 = F_00e8c050(this_00 GEN_EDX_ARG);
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x7)) = 1;
        (*(int *)(gen_frame + 0x0)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = ((undefined *)GEN_TOP(F_00e9e450(this_00 GEN_EDX_ARG,iVar14,iVar14 >> 0x1f)));
                if (*((int *)GEN_TOP(((int)this_01 + 8))) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
                  if ((*((int *)GEN_TOP((uVar13 + 8))) == 1) &&
                     (uVar13 = F_00e82b90(uVar13 GEN_EDX_ARG), uVar13 == uVar12)) {
                    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),this_01);
                    (*(byte *)(gen_frame + 0x7)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0x7)) == 0) {
                      return 0;
                    }
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          } while ((*(int *)(gen_frame + 0x0)) < (int)uVar11);
        }
        return (*(byte *)(gen_frame + 0x7));
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf24 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5c8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5c8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar4 = F_00e8c050(pvVar2 GEN_EDX_ARG);
    iVar5 = 0;
    while (iVar5 < (int)uVar4) {
      uVar3 = F_00e9e450(pvVar2 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f);
      uVar3 = F_00e82f00(uVar3 GEN_EDX_ARG);
      uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
      uVar6 = F_00e505e0(uVar3);
      this[iVar5 + 4] = SUB81(uVar6,0);
      iVar5 = iVar5 + 1;
      if (0x19 < iVar5) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar4 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar4);
    this[0x1e] = SUB81(uVar6,0);
    return 1;
  case 2: ;
    uVar4 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar4);
    this[0x1f] = SUB81(uVar6,0);
    return 1;
  case 3: ;
    uVar4 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar4);
    this[0x20] = SUB81(uVar6,0);
    return 1;
  case 4: ;
    uVar4 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar4);
    this[0x21] = SUB81(uVar6,0);
    return 1;
  case 5: ;
    uVar4 = F_00e82f00(pvVar2 GEN_EDX_ARG);
    uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
    uVar6 = F_00e50570(uVar4);
    this[0x22] = SUB81(uVar6,0);
    return 1;
  case 6: ;
    puVar7 = &REFG(undefined, 0x1158a00);
    pvVar2 = ((undefined *)GEN_TOP(F_00e82f00(pvVar2 GEN_EDX_ARG)));
    bVar1 = F_0042b6a0(pvVar2 GEN_EDX_ARG,puVar7);
    this[0x23] = (undefined1)(bVar1 == 0);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf18 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5cae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe5cae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x115856c)),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(((char *)GEN_TOP((param_1 + 1))),((char *)(gen_frame + 0x0)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x0)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0(((char *)GEN_TOP((param_1 + 1))),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b144));
      iVar5 = uVar3 + 10;
      iVar6 = 0;
      do {
        uVar7 = F_00e50570(iVar5);
        this[iVar6 + 4] = SUB81(uVar7,0);
        uVar3 = F_00c51da0(iVar5,0x2c);
        iVar6 = iVar6 + 1;
        iVar5 = uVar3 + 2;
      } while (iVar6 < 0x1a);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x1e] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x1f] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x20] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x21] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,5);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x22] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,6);
    F_00c472af(((char *)(gen_frame + 0x0)),0x40,((char *)REFP(0x11585a0)),uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      this[0x23] = (undefined1)(*((char *)GEN_TOP((uVar3 + 9))) != '0');
    }
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      *param_2 = iVar5;
    }
    return 1;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf13 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e5cdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5cdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158590)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,pvVar3);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf25 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5cf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5cf10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_FWD,0,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea8220(pvVar2 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x1a;
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea83e0(pvVar2 GEN_EDX_ARG,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x0)) + 4],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00e9e450(pvVar2 GEN_EDX_ARG,iVar6,iVar5)));
    F_00ea7fb0(pvVar2 GEN_EDX_ARG,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 0x1a);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,1,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1e],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,2,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1f],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,3,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x20],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,4,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x21],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,5,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,((char *)REFP(0x11585d0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x22],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00e9e450(param_1 GEN_EDX_ARG,6,0)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585e4)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7e80(pvVar2 GEN_EDX_ARG,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7eb0(pvVar2 GEN_EDX_ARG,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6);
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x11585d8)),REFG(undefined4, 0x108cc50));
  pvVar2 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar2 GEN_EDX_ARG,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x23]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x1139c38)),REFG(undefined4, 0x108cc50));
  pvVar1 = ((undefined *)GEN_TOP(F_00ea8380(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
  F_00ea7fb0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf14 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5d8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5d8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  this_00 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if ((*((int *)GEN_TOP(((int)this_00 + 8))) == 6) && (*((int *)GEN_TOP(((int)param_1 + 8))) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
    uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
    pcVar7 = ((char *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
    pcVar9 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      pbVar10 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG)));
      uVar6 = F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      uVar6 = F_00e82f00(uVar6 GEN_EDX_ARG);
      pbVar11 = ((byte *)GEN_TOP(F_0042a990(uVar6 GEN_EDX_ARG)));
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e5da32: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e5da37;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e5da32;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e5da37: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
        this_01 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)))));
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        uVar12 = F_00e8c050(this_01 GEN_EDX_ARG);
        uVar13 = F_00e8c050(this_00 GEN_EDX_ARG);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x0)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
              uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14 GEN_EDX_ARG);
                  uVar14 = F_0042a990(uVar14 GEN_EDX_ARG);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01 GEN_EDX_ARG,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x58))))(this,(*(int *)(gen_frame + 0x0)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') {
                      return 0;
                    }
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf16 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5db90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5db90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ea81c0(param_1 GEN_EDX_FWD);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158560)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7fb0(pvVar3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115857c)),REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_00ea7e80(pvVar3 GEN_EDX_ARG,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158558)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,pvVar3,1);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1158584)),REFG(undefined4, 0x108cc50));
  pvVar3 = ((undefined *)GEN_TOP(F_00ea8380(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00ea8220(pvVar3 GEN_EDX_ARG);
  F_00ea83e0(pvVar3 GEN_EDX_ARG,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      this_00 = ((undefined *)GEN_TOP(F_00e9e450(pvVar3 GEN_EDX_ARG,iVar5,iVar5 >> 0x1f)));
      F_00ea7fb0(this_00 GEN_EDX_ARG,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00e5dd60 */
GEN_LIB GEN_NOFRAME unsigned int F_00e5dd60(void)
{
  GEN_ENTER(0xe5dd60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5dd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5dd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint * puVar4;
  int iVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar2;
  puVar1 = param_3 + 1;
  puVar4 = puVar1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar1 = *((undefined1 *)GEN_TOP((param_1 + 4)));
    return 5;
  case 1: ;
    *(undefined1 *)puVar1 = *((undefined1 *)GEN_TOP((param_1 + 5)));
    return 5;
  case 2: ;
    *puVar1 = *((uint *)GEN_TOP((param_1 + 8)));
    param_3[2] = *((uint *)GEN_TOP((param_1 + 0xc)));
    return 0xc;
  case 3: ;
    *(undefined1 *)puVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x10)));
    return 5;
  case 4: ;
    *(undefined1 *)puVar1 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x18;
    puVar3 = ((undefined4 *)GEN_TOP(((int)param_3 + 7)));
    iVar5 = 0;
    do {
      *puVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x18 + iVar5 * 8)));
      puVar3[1] = *((undefined4 *)GEN_TOP((param_1 + 0x1c + iVar5 * 8)));
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar5 < 0x18);
    return (int)puVar3 - (int)param_3;
  case 5: ;
    puVar4 = param_3 + 2;
    *puVar1 = *((uint *)GEN_TOP((param_1 + 0xd8)));
  }
  return (int)puVar4 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5de60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe5de60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 4) {
    uVar1 = F_00e67cf0(param_1 + 0x18,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5deb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe5deb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 4) {
    uVar1 = F_00e67d80(param_1 + 0x18,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5df00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5df00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *((char *)GEN_TOP((param_3 + 4))) = (char)*puVar3;
      return 5;
    case 1: ;
      *((char *)GEN_TOP((param_3 + 5))) = (char)*puVar3;
      return 5;
    case 2: ;
      *((uint *)GEN_TOP((param_3 + 8))) = *puVar3;
      *((uint *)GEN_TOP((param_3 + 0xc))) = param_2[2];
      return 0xc;
    case 3: ;
      *((char *)GEN_TOP((param_3 + 0x10))) = (char)*puVar3;
      return 5;
    case 4: ;
      uVar2 = F_00e67e80(puVar3,param_3 + 0x18,0x18);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 5: ;
      *((uint *)GEN_TOP((param_3 + 0xd8))) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e5dfe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e5dfe0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe5dfe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)(in_ecx + 1) = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1158a6c));
  in_ecx[0x36] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  puVar2 = in_ecx + 6;
  puVar3 = in_ecx + 8;
  for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00e5e020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1158a6c));
  F_00e50e10(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5e0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 4)));
    return 8;
  case 1: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 8)));
    return 5;
  case 2: ;
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 2;
    *((undefined4 *)GEN_TOP(((int)param_3 + 7))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0xb))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    return 0xf;
  case 3: ;
    *(undefined1 *)puVar2 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 4;
    *((undefined4 *)GEN_TOP(((int)param_3 + 7))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0xb))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0xf))) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
    *((undefined4 *)GEN_TOP(((int)param_3 + 0x13))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
    puVar2 = ((uint *)GEN_TOP(((int)param_3 + 0x17)));
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe5e150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 2) {
    uVar1 = F_00e67fb0(param_1 + 0xc,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  else if (param_2 == 3) {
    uVar1 = F_00e68050(param_1 + 0x14,(undefined1)param_3,param_4,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_5);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe5e1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 2) {
    uVar1 = F_00e680b0(param_1 + 0xc,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  else if (param_2 == 3) {
    uVar1 = F_00e68160(param_1 + 0x14,param_3,param_4,param_5,param_6,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_7);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: FUN_00e5e240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1158654));
  F_00e53220(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5e2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  undefined1 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x15;
    puVar2 = ((undefined1 *)GEN_TOP(((int)param_3 + 7)));
    iVar4 = 0;
    do {
      *puVar2 = *((undefined1 *)GEN_TOP((iVar4 + 4 + param_1)));
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < 0x15);
    return (int)puVar2 - (int)param_3;
  case 1: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 8;
    *((undefined1 *)GEN_TOP(((int)param_3 + 7))) = *((undefined1 *)GEN_TOP((param_1 + 0x19)));
    *(undefined1 *)(param_3 + 2) = *((undefined1 *)GEN_TOP((param_1 + 0x1a)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 9))) = *((undefined1 *)GEN_TOP((param_1 + 0x1b)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 10))) = *((undefined1 *)GEN_TOP((param_1 + 0x1c)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 0xb))) = *((undefined1 *)GEN_TOP((param_1 + 0x1d)));
    *(undefined1 *)(param_3 + 3) = *((undefined1 *)GEN_TOP((param_1 + 0x1e)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 0xd))) = *((undefined1 *)GEN_TOP((param_1 + 0x1f)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 0xe))) = *((undefined1 *)GEN_TOP((param_1 + 0x20)));
    return 0xf;
  case 2: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 3;
    *((undefined1 *)GEN_TOP(((int)param_3 + 7))) = *((undefined1 *)GEN_TOP((param_1 + 0x21)));
    *(undefined1 *)(param_3 + 2) = *((undefined1 *)GEN_TOP((param_1 + 0x22)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 9))) = *((undefined1 *)GEN_TOP((param_1 + 0x23)));
    return 10;
  case 3: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x24)));
    return 5;
  case 4: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x25)));
    return 5;
  case 5: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 3;
    *((undefined1 *)GEN_TOP(((int)param_3 + 7))) = *((undefined1 *)GEN_TOP((param_1 + 0x26)));
    *(undefined1 *)(param_3 + 2) = *((undefined1 *)GEN_TOP((param_1 + 0x27)));
    *((undefined1 *)GEN_TOP(((int)param_3 + 9))) = *((undefined1 *)GEN_TOP((param_1 + 0x28)));
    return 10;
  case 6: ;
    *puVar3 = *((uint *)GEN_TOP((param_1 + 0x2c)));
    return 8;
  case 7: ;
    *puVar3 = *((uint *)GEN_TOP((param_1 + 0x30)));
    return 8;
  case 8: ;
    *puVar3 = *((uint *)GEN_TOP((param_1 + 0x34)));
    puVar3 = param_3 + 2;
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe5e450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar3 = param_5 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar1 = F_00e68310(param_1 + 4,(undefined1)param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  case 1: ;
    iVar2 = param_1 + 0x19;
    break;
  case 2: ;
    iVar2 = param_1 + 0x21;
    break;
  default: ;
    goto switchD_00e5e46e_caseD_3;
  case 5: ;
    iVar2 = param_1 + 0x26;
  }
  uVar1 = F_00e68370(iVar2,(undefined1)param_3,param_4,puVar3);
  puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar1)));
switchD_00e5e46e_caseD_3: ;
  return (int)puVar3 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe5e4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar3 = param_7 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar1 = F_00e683d0(param_1 + 4,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  case 1: ;
    iVar2 = param_1 + 0x19;
    break;
  case 2: ;
    iVar2 = param_1 + 0x21;
    break;
  default: ;
    goto switchD_00e5e512_caseD_3;
  case 5: ;
    iVar2 = param_1 + 0x26;
  }
  uVar1 = F_00e68470(iVar2,param_3,param_4,param_5,param_6,puVar3);
  puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar1)));
switchD_00e5e512_caseD_3: ;
  return (int)puVar3 - (int)param_7;
}

/* ref: FUN_00e5e5c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x115872c));
  F_00e553b0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5e640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 8)));
    param_3[2] = *((uint *)GEN_TOP((param_1 + 0xc)));
    return 0xc;
  case 1: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x10)));
    return 8;
  case 2: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x14)));
    return 5;
  case 3: ;
    *(undefined1 *)puVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x15)));
    return 5;
  case 4: ;
    *puVar2 = *((uint *)GEN_TOP((param_1 + 0x18)));
    puVar2 = param_3 + 2;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5e6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *((uint *)GEN_TOP((param_3 + 8))) = *puVar3;
      *((uint *)GEN_TOP((param_3 + 0xc))) = param_2[2];
      return 0xc;
    case 1: ;
      *((uint *)GEN_TOP((param_3 + 0x10))) = *puVar3;
      return 8;
    case 2: ;
      *((char *)GEN_TOP((param_3 + 0x14))) = (char)*puVar3;
      return 5;
    case 3: ;
      *((char *)GEN_TOP((param_3 + 0x15))) = (char)*puVar3;
      return 5;
    case 4: ;
      *((uint *)GEN_TOP((param_3 + 0x18))) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e5e7a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11587fc));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if ((short)uVar3 == (short)uVar4) {
    *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1[3];
    *((int *)GEN_TOP(((int)this + 0x10))) = param_1[4];
    *((char *)GEN_TOP(((int)this + 0x14))) = (char)param_1[5];
    *((undefined1 *)GEN_TOP(((int)this + 0x15))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x15)));
    *((int *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5e870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  undefined4 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0xa0;
    puVar3 = ((uint *)GEN_TOP(((int)param_3 + 7)));
    iVar4 = 0;
    do {
      *(undefined2 *)puVar3 = *((undefined2 *)GEN_TOP((param_1 + 4 + iVar4 * 2)));
      iVar4 = iVar4 + 1;
      puVar3 = ((uint *)GEN_TOP(((int)puVar3 + 2)));
    } while (iVar4 < 0xa0);
  }
  else if (param_2 == 1) {
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x14;
    puVar2 = ((undefined4 *)GEN_TOP(((int)param_3 + 7)));
    iVar4 = 0;
    do {
      *puVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x144 + iVar4 * 4)));
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < 0x14);
    return (int)puVar2 - (int)param_3;
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe5e8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e685e0(param_1 + 4,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  else if (param_2 == 1) {
    uVar1 = F_00e68640(param_1 + 0x144,(undefined1)param_3,param_4,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_5);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe5e960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e686a0(param_1 + 4,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  else if (param_2 == 1) {
    uVar1 = F_00e68750(param_1 + 0x144,param_3,param_4,param_5,param_6,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_7);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: FUN_00e5e9e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5e9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5e9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11588c4));
  F_00e5a0c0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ea00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ea00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ea20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ea20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ea40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ea40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ea60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5ea60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  undefined1 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar3 = 0;
    *((undefined2 *)GEN_TOP(((int)param_3 + 5))) = 0x1a;
    puVar2 = ((undefined1 *)GEN_TOP(((int)param_3 + 7)));
    iVar4 = 0;
    do {
      *puVar2 = *((undefined1 *)GEN_TOP((iVar4 + 4 + param_1)));
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < 0x1a);
    return (int)puVar2 - (int)param_3;
  case 1: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x1e)));
    return 5;
  case 2: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x1f)));
    return 5;
  case 3: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x20)));
    return 5;
  case 4: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x21)));
    return 5;
  case 5: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x22)));
    return 5;
  case 6: ;
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP((param_1 + 0x23)));
    puVar3 = ((uint *)GEN_TOP(((int)param_3 + 5)));
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5eb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe5eb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e68370(param_1 + 4,(undefined1)param_3,param_4,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5eb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xe5eb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint * param_7 = (uint *)(uintptr_t)gen_a7;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e68470(param_1 + 4,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + uVar1)));
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ebe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5ebe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = F_00e68510(puVar3,param_3 + 4,0x1a);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 1: ;
      *((char *)GEN_TOP((param_3 + 0x1e))) = (char)*puVar3;
      return 5;
    case 2: ;
      *((char *)GEN_TOP((param_3 + 0x1f))) = (char)*puVar3;
      return 5;
    case 3: ;
      *((char *)GEN_TOP((param_3 + 0x20))) = (char)*puVar3;
      return 5;
    case 4: ;
      *((char *)GEN_TOP((param_3 + 0x21))) = (char)*puVar3;
      return 5;
    case 5: ;
      *((char *)GEN_TOP((param_3 + 0x22))) = (char)*puVar3;
      return 5;
    case 6: ;
      *((char *)GEN_TOP((param_3 + 0x23))) = (char)*puVar3;
      puVar3 = ((uint *)GEN_TOP(((int)param_2 + 5)));
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e5ecd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ecd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ecd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1158994));
  F_00e5bd10(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ecf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ecf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ed10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ed10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ed30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5ed30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_FWD,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ed50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5ed50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *((uint *)GEN_TOP((param_3 + 4))) = *puVar3;
      return 8;
    case 1: ;
      *((char *)GEN_TOP((param_3 + 8))) = (char)*puVar3;
      return 5;
    case 2: ;
      uVar2 = F_00e68230(puVar3,param_3 + 0xc,2);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 3: ;
      uVar2 = F_00e68dc0(puVar3,param_3 + 0x14,4);
      puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar2)));
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ee00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5ee00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = F_00e68ea0(puVar3,param_3 + 4,0x15);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 1: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x19,8);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 2: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x21,3);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 3: ;
      *((char *)GEN_TOP((param_3 + 0x24))) = (char)*puVar3;
      return 5;
    case 4: ;
      *((char *)GEN_TOP((param_3 + 0x25))) = (char)*puVar3;
      return 5;
    case 5: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x26,3);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 6: ;
      *((uint *)GEN_TOP((param_3 + 0x2c))) = *puVar3;
      return 8;
    case 7: ;
      *((uint *)GEN_TOP((param_3 + 0x30))) = *puVar3;
      return 8;
    case 8: ;
      *((uint *)GEN_TOP((param_3 + 0x34))) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e5ef50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe5ef50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    if (param_1 == 0) {
      uVar2 = F_00e68f70(puVar3,param_3 + 4,0xa0);
      puVar3 = ((uint *)GEN_TOP(((int)puVar3 + uVar2)));
    }
    else if (param_1 == 1) {
      uVar2 = F_00e68800(puVar3,param_3 + 0x144,0x14);
      return (int)puVar3 + (uVar2 - (int)param_2);
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5efc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5efc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  char * PTR32 * ppcVar10;
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  undefined * pFVar14;
  ulonglong uVar15;
  float fVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x30));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x30)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x30)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  if (pcVar5 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 0xb;
  pcVar5 = param_1;
  do {
    pcVar11 = pcVar5;
    pcVar5 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  iVar6 = 1;
  for (pcVar5 = pcVar8; pcVar7 = pcVar11 - 1, pcVar5 < pcVar11 - 1; pcVar5 = pcVar5 + 1) {
    if (*pcVar5 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, pcVar7 = pcVar5, iVar6 == 0)) break;
  }
  pcVar8 = ((char *)GEN_TOP(F_00e50750(pcVar8,((char *)REFP(0x1158ae0)),pcVar7)));
  if (pcVar8 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar8 + 0xc;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x2c)) = (*(char * PTR32 *)(gen_frame + 0x28));
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x14));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28));
  while (pcVar5 != pcVar8) {
    cVar1 = *pcVar5;
    if (cVar1 == '\"') {
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5;
      if ((&(*(char * PTR32 *)(gen_frame + 0x2c)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) <= &(*(char * PTR32 *)(gen_frame + 0x2c)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x2c)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        }
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        }
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar12 = pcVar5;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppcVar12;
      pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
      pcVar11 = (*(char * PTR32 *)(gen_frame + 0x14));
    }
    else {
      if (cVar1 == '{') {
        (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5;
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x2c)));
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x2c)) + 1;
        iVar6 = 1;
        if (pcVar5 == pcVar11) goto LAB_00e5f38b;
        do {
          if (*pcVar5 == '{') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 != pcVar11);
      }
      else {
        if (cVar1 != '[') goto LAB_00e5f1f3;
        cVar1 = pcVar5[1];
        (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5 + 1;
        iVar6 = 1;
        if (cVar1 == '\"') {
LAB_00e5f1bb: ;
          (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5 + 2;
        }
        else if (cVar1 == '[') {
          iVar6 = 2;
          goto LAB_00e5f1bb;
        }
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x2c)));
        for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x2c)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
          if (*pcVar5 == '[') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
        }
      }
      ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
      if (iVar6 == 1) goto LAB_00e5f38b;
    }
LAB_00e5f1f3: ;
    pcVar5 = pcVar5 + 1;
    (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar5;
    uVar4 = (*(uint *)(gen_frame + 0x10));
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar8;
  if ((int)uVar4 < (int)pcVar8) {
LAB_00e5f38b: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x14));
  (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x14));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x14));
  while (cVar1 != ']') {
    if (*pcVar8 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
      if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)ppcVar12;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar4) {
LAB_00e5f371: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar4 = uVar4 + 1;
          uVar9 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (uVar9 < uVar4) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar4) {
              uVar9 = uVar4;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar9);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        pcVar8 = (*(char * PTR32 *)(gen_frame + 0x28));
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = ppcVar12[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == ppcVar10) {
          uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar4) goto LAB_00e5f371;
          uVar4 = uVar4 + 1;
          uVar9 = (int)ppcVar10 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (uVar9 < uVar4) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar4) {
              uVar9 = uVar4;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar9);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = pcVar8;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
      pcVar8 = ((char *)GEN_TOP(F_00c51da0(pcVar8 + 1,0x22)));
      ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
      if (pcVar8 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar12);
        }
        goto LAB_00e5f38b;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
  if ((int)(*(uint *)(gen_frame + 0x10)) < (int)pcVar8) {
    if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x2c)) != pcVar8) {
    if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar11) {
      if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[4] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x2c))) {
      uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
      this[5] = SUB81(uVar15,0);
      goto LAB_00e5f519;
    }
LAB_00e5f4cf: ;
    if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar12);
    }
joined_r0x00e5f4e0: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
LAB_00e5f519: ;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar11) goto LAB_00e5f4cf;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(ulonglong *)(this + 8) = uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar11) goto LAB_00e5f4cf;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[0x10] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  if (pcVar8 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x28)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar8 == ppcVar12[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x28)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar5) {
      if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar12);
      }
      goto joined_r0x00e5f4e0;
    }
    pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar5];
    pFVar14 = this + 0x18;
    (*(uint *)(gen_frame + 0x10)) = 0x18;
    do {
      uVar15 = F_00e50570(pcVar8);
      *(ulonglong *)pFVar14 = uVar15;
      uVar9 = F_00c51da0(pcVar8,0x2c);
      pFVar14 = pFVar14 + 8;
      uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
      (*(uint *)(gen_frame + 0x10)) = uVar4;
      pcVar8 = ((char *)GEN_TOP((uVar9 + 2)));
    } while (uVar4 != 0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x30)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x30)))));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar8 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x28)) != ((char *)GEN_TOP(0x0))) {
      pcVar5 = ((char *)GEN_TOP(0x0));
      do {
        if (pcVar8 == ppcVar12[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x28)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x2c)) <= pcVar5) {
      if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar12);
      }
      goto joined_r0x00e5f4e0;
    }
    fVar16 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar5]);
    *(float *)(this + 0xd8) = fVar16;
  }
  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar12);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5f750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5f750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  char * pcVar10;
  uint uVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  undefined * pGVar14;
  ulonglong uVar15;
  float fVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x34));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x34)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x34)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
  if (uVar4 == 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP((uVar4 + 0xb)));
  pcVar10 = param_1;
  do {
    pcVar7 = pcVar10;
    pcVar10 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar10 = pcVar9; pcVar8 = pcVar7 - 1, pcVar10 < pcVar7 - 1; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar10 == '}') && (iVar6 = iVar6 - 1, pcVar8 = pcVar10, iVar6 == 0)) break;
  }
  pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
  if (pcVar9 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar9 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar9;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4))))((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG)));
  pcVar10 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG)));
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar10;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,pcVar10);
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
  pcVar10 = (*(char * PTR32 *)(gen_frame + 0x18));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar13 = pcVar5;
          }
        }
        ppcVar13 = ppcVar13 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppcVar13;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x18));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x30)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar10) goto LAB_00e5fdb7;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_00e5f993;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_00e5f95b: ;
            (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_00e5f95b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x30)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30)); pcVar5 != pcVar10; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        if (iVar6 == 1) goto LAB_00e5fdb7;
      }
LAB_00e5f993: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x1c)));
  }
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
  pcVar5 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar5;
  if ((int)(*(char * PTR32 *)(gen_frame + 0x10)) < (int)pcVar5) {
LAB_00e5fdb7: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    }
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(char * PTR32 *)(gen_frame + 0x10)));
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x18));
  (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x18));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  pGVar14 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x18));
  while ((*(undefined * PTR32 *)(gen_frame + 0x14)) = pGVar14, (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5, cVar1 != ']') {
    if (*pcVar5 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar12) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)ppcVar13;
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar4 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar4) {
LAB_00e5fb19: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar4 = uVar4 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar4) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar4) {
              uVar11 = uVar4;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar12 = ppcVar13[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar4 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar4) goto LAB_00e5fb19;
          uVar4 = uVar4 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar4) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar4) {
              uVar11 = uVar4;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar12 = pcVar5;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar12;
      pcVar5 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x30)) + 1,0x22)));
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
      if (pcVar5 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar13);
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
          return 0;
        }
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        return 0;
      }
    }
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
    (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
    pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
    pGVar14 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  }
  pcVar5 = ((char *)GEN_TOP(((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar5;
  if ((int)pcVar9 < (int)pcVar5) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x1c)) != pcVar5) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)pGVar14 + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(pGVar14)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar10 = ((char *)GEN_TOP(0x0));
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar5);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x1c)) <= pcVar10) goto LAB_00e5fc47;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
    *(int *)(pGVar14 + 4) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pGVar14 + 4))))(pGVar14 GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar10 = ((char *)GEN_TOP(0x0));
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar5);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x1c)) <= pcVar10) {
LAB_00e5fc47: ;
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
    pGVar14[8] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pGVar14 + 4))))(pGVar14 GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x10)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == ppcVar13[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x10)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x1c)) <= pcVar5) {
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if (ppcVar12 == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0(ppcVar12);
      return 0;
    }
    pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar5];
    pGVar14 = pGVar14 + 0xc;
    iVar6 = 2;
    do {
      fVar16 = F_00e50660(pcVar9);
      *(float *)pGVar14 = fVar16;
      uVar4 = F_00c51da0(pcVar9,0x2c);
      pGVar14 = pGVar14 + 4;
      iVar6 = iVar6 - 1;
      pcVar9 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 != 0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4))))((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x34)))));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x10)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x10)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x1c)) <= pcVar5) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      goto LAB_00e5fdb7;
    }
    pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar5];
    pGVar14 = (*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x14;
    iVar6 = 4;
    do {
      uVar15 = F_00e505e0(pcVar9);
      *(int *)pGVar14 = (int)uVar15;
      uVar4 = F_00c51da0(pcVar9,0x2c);
      pGVar14 = pGVar14 + 4;
      iVar6 = iVar6 - 1;
      pcVar9 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 != 0);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e5fe50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe5fe50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  uint uVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x2c)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x2c)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
  if (uVar4 == 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP((uVar4 + 0xb)));
  pcVar11 = param_1;
  do {
    pcVar7 = pcVar11;
    pcVar11 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar11 = pcVar9; pcVar8 = pcVar7 - 1, pcVar11 < pcVar7 - 1; pcVar11 = pcVar11 + 1) {
    if (*pcVar11 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar11 == '}') && (iVar6 = iVar6 - 1, pcVar8 = pcVar11, iVar6 == 0)) break;
  }
  pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
  if (pcVar9 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar9 + 0xc;
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar9;
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          }
          if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar13 = pcVar5;
          }
        }
        ppcVar13 = ppcVar13 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppcVar13;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar11) goto LAB_00e606ef;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_00e60093;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_00e6005b: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_00e6005b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        if (iVar6 == 1) goto LAB_00e606ef;
      }
LAB_00e60093: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x24)));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
  (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  while (cVar1 != ']') {
    if (*(*(char * PTR32 *)(gen_frame + 0x24)) == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar14) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)ppcVar13;
        if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar10) {
LAB_00e60236: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = ppcVar13[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_00e60236;
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = (*(char * PTR32 *)(gen_frame + 0x24));
        }
      }
      ppcVar14 = ppcVar14 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar14;
      pcVar9 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x24)) + 1,0x22)));
      (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar9;
      if (pcVar9 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar13);
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
          return 0;
        }
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
        return 0;
      }
    }
    (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x24)) + 1;
    cVar1 = *(*(char * PTR32 *)(gen_frame + 0x24));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x28)) != pcVar9) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar5 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11];
    uVar4 = F_00c51da0(pcVar5,0x22);
    F_00c4d9ef(this + 4,uVar4 + (1 - (int)pcVar5),pcVar5,0xffffffff);
  }
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar11 = ((char *)GEN_TOP(F_00fb9ad0(pcVar9,((char *)(gen_frame + 0x2c)))));
  if (pcVar11 != ((char *)GEN_TOP(0x0))) {
    pcVar9 = ((char *)GEN_TOP(0x0));
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar11 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar9]) break;
        pcVar9 = pcVar9 + 1;
      } while (pcVar9 < pcVar5);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar9) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar5 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar9];
    iVar6 = 0;
    do {
      uVar15 = F_00e50570(pcVar5);
      this[iVar6 + 0x19] = SUB81(uVar15,0);
      uVar4 = F_00c51da0(pcVar5,0x2c);
      iVar6 = iVar6 + 1;
      pcVar5 = ((char *)GEN_TOP((uVar4 + 2)));
      pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
    } while (iVar6 < 8);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0(pcVar9,((char *)(gen_frame + 0x2c)))));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar5) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar5];
    iVar6 = 0;
    do {
      uVar15 = F_00e50570(pcVar9);
      this[iVar6 + 0x21] = SUB81(uVar15,0);
      uVar4 = F_00c51da0(pcVar9,0x2c);
      iVar6 = iVar6 + 1;
      pcVar9 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 < 3);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x24));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    this[0x24] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_00e607df;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    this[0x25] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar9 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar9 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar5) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar5];
    iVar6 = 0;
    do {
      uVar15 = F_00e50570(pcVar9);
      this[iVar6 + 0x26] = SUB81(uVar15,0);
      uVar4 = F_00c51da0(pcVar9,0x2c);
      iVar6 = iVar6 + 1;
      pcVar9 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 < 3);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x24));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x0))[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
LAB_00e606ef: ;
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0x2c) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) goto LAB_00e607df;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0x30) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,8);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar11) {
LAB_00e607df: ;
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      }
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar11]);
    *(int *)(this + 0x34) = (int)uVar15;
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e60860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe60860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  uint uVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x2c)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x2c)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,((char *)REFP(0x1158af0)));
  if (uVar4 == 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP((uVar4 + 0xb)));
  pcVar11 = param_1;
  do {
    pcVar7 = pcVar11;
    pcVar11 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar11 = pcVar9; pcVar8 = pcVar7 - 1, pcVar11 < pcVar7 - 1; pcVar11 = pcVar11 + 1) {
    if (*pcVar11 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar11 == '}') && (iVar6 = iVar6 - 1, pcVar8 = pcVar11, iVar6 == 0)) break;
  }
  pcVar9 = ((char *)GEN_TOP(F_00e50750(pcVar9,((char *)REFP(0x1158ae0)),pcVar8)));
  if (pcVar9 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar9 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar14) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          }
          if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
            *ppcVar14 = pcVar5;
          }
        }
        ppcVar14 = ppcVar14 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppcVar14;
        pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x10));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar11) goto LAB_00e60c40;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_00e60aa3;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_00e60a6b: ;
            (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_00e60a6b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          }
        }
        ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
        if (iVar6 == 1) goto LAB_00e60c40;
      }
LAB_00e60aa3: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x14)));
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x18))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
LAB_00e60c40: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
  (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x10));
  while ((*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9, cVar1 != ']') {
    if (*pcVar9 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && (ppcVar14 <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)ppcVar14;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) {
LAB_00e60c26: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = ppcVar14[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar10 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_00e60c26;
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar14) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar12);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = pcVar9;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
      pcVar9 = ((char *)GEN_TOP(F_00c51da0((*(char * PTR32 *)(gen_frame + 0x28)) + 1,0x22)));
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
      if (pcVar9 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar14);
        }
        goto LAB_00e60c40;
      }
    }
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar9;
    (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar9;
  }
  pcVar9 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar14) >> 2)));
  if ((int)uVar4 < (int)pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x14)) != pcVar9) {
    if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar14);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_00e60e87;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(ulonglong *)(this + 8) = uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_00e60e87;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0x10) = (int)uVar15;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_00e60e87;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[0x14] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) goto LAB_00e60e87;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    this[0x15] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar11 = ((char *)GEN_TOP(0x0));
    if (pcVar9 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar14[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar9);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x14)) <= pcVar11) {
LAB_00e60e87: ;
      if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar14);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x18)));
      }
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x18))[(int)pcVar11]);
    *(int *)(this + 0x18) = (int)uVar15;
  }
  if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar14);
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e60f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe60f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  char * PTR32 * ppcVar10;
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  undefined * pDVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x34)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x34));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x34)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x34)) + 1))));
  if (iVar6 == 0) {
    pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
    (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
    if (pcVar5 != ((char *)GEN_TOP(0x0))) {
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 0xb;
      pcVar5 = param_1;
      do {
        pcVar11 = pcVar5;
        pcVar5 = pcVar11 + 1;
      } while (*pcVar11 != '\0');
      iVar6 = 1;
      for (pcVar5 = pcVar8; pcVar7 = pcVar11 - 1, pcVar5 < pcVar11 - 1; pcVar5 = pcVar5 + 1) {
        if (*pcVar5 == '{') {
          iVar6 = iVar6 + 1;
        }
        else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, pcVar7 = pcVar5, iVar6 == 0)) break;
      }
      pcVar8 = ((char *)GEN_TOP(F_00e50750(pcVar8,((char *)REFP(0x1158ae0)),pcVar7)));
      if (pcVar8 != ((char *)GEN_TOP(0x0))) {
        (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar8 + 0xc;
        (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar8;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x2c)) = uVar4;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ((char * PTR32 *)GEN_TOP(0x0));
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ((char * PTR32 *)GEN_TOP(0x0));
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,uVar4);
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30));
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x14));
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
        if ((*(char * PTR32 *)(gen_frame + 0x30)) != pcVar8) {
          do {
            cVar1 = *pcVar5;
            if (cVar1 == '\"') {
              pcVar5 = pcVar5 + 1;
              (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
              if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
                iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
                if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) {
                  F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,1);
                  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
                }
                if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[iVar6 >> 2];
                }
              }
              else {
                if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) {
                  F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,1);
                  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
                }
                if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar12 = pcVar5;
                }
              }
              ppcVar12 = ppcVar12 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ppcVar12;
              pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
              pcVar11 = (*(char * PTR32 *)(gen_frame + 0x14));
            }
            else {
              if (cVar1 == '{') {
                (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
                F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x30)));
                pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30)) + 1;
                iVar6 = 1;
                if (pcVar5 == pcVar11) goto LAB_00e612db;
                do {
                  if (*pcVar5 == '{') {
                    iVar6 = iVar6 + 1;
                  }
                  else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                  pcVar5 = pcVar5 + 1;
                } while (pcVar5 != pcVar11);
              }
              else {
                if (cVar1 != '[') goto LAB_00e61143;
                cVar1 = pcVar5[1];
                (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 1;
                iVar6 = 1;
                if (cVar1 == '\"') {
LAB_00e6110b: ;
                  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5 + 2;
                }
                else if (cVar1 == '[') {
                  iVar6 = 2;
                  goto LAB_00e6110b;
                }
                F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x30)));
                for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x30)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
                  if (*pcVar5 == '[') {
                    iVar6 = iVar6 + 1;
                  }
                  else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
                }
              }
              ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
              if (iVar6 == 1) goto LAB_00e612db;
            }
LAB_00e61143: ;
            pcVar5 = pcVar5 + 1;
            (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar5;
            uVar4 = (*(uint *)(gen_frame + 0x2c));
          } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x18)));
        }
        pcVar8 = ((char *)GEN_TOP(((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) >> 2)));
        (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar8;
        if ((int)uVar4 < (int)pcVar8) {
LAB_00e612db: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ((char * PTR32 *)GEN_TOP(0x0))) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
          cVar1 = *(*(char * PTR32 *)(gen_frame + 0x14));
          (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x14));
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
          pcVar8 = (*(char * PTR32 *)(gen_frame + 0x14));
          while (cVar1 != ']') {
            if (*pcVar8 == '\"') {
              (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
              if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
                iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)ppcVar12;
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
                  uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar4) {
LAB_00e612c1: ;
                    
                    F_00c4579a(((char *)REFP(0x108497c)));
                  }
                  uVar4 = uVar4 + 1;
                  uVar9 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (uVar9 < uVar4) {
                    if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = uVar9 + (uVar9 >> 1);
                    }
                    if (uVar9 < uVar4) {
                      uVar9 = uVar4;
                    }
                    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar9);
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                pcVar8 = (*(char * PTR32 *)(gen_frame + 0x30));
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = ppcVar12[iVar6 >> 2];
                }
              }
              else {
                if (ppcVar13 == ppcVar10) {
                  uVar4 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar4) goto LAB_00e612c1;
                  uVar4 = uVar4 + 1;
                  uVar9 = (int)ppcVar10 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (uVar9 < uVar4) {
                    if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = uVar9 + (uVar9 >> 1);
                    }
                    if (uVar9 < uVar4) {
                      uVar9 = uVar4;
                    }
                    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar9);
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
                    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                  }
                }
                if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  *ppcVar13 = pcVar8;
                }
              }
              ppcVar13 = ppcVar13 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar13;
              pcVar8 = ((char *)GEN_TOP(F_00c51da0(pcVar8 + 1,0x22)));
              ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
              if (pcVar8 == ((char *)GEN_TOP(0x0))) {
                if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                  F_00406ad0(ppcVar12);
                }
                goto LAB_00e612db;
              }
            }
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
            (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
          }
          pcVar8 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2)));
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
          if ((int)(*(uint *)(gen_frame + 0x2c)) < (int)pcVar8) {
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
              return 0;
            }
          }
          else {
            if ((*(char * PTR32 *)(gen_frame + 0x18)) == pcVar8) {
              pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 4)));
              piVar3 = ((int *)GEN_TOP((*pcVar2)((*(undefined * PTR32 *)(gen_frame + 0x10)))));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
              F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
              pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x34)))));
              if (pcVar8 != ((char *)GEN_TOP(0x0))) {
                pcVar5 = ((char *)GEN_TOP(0x0));
                if ((*(char * PTR32 *)(gen_frame + 0x30)) != ((char *)GEN_TOP(0x0))) {
                  do {
                    if (pcVar8 == ppcVar12[(int)pcVar5]) break;
                    pcVar5 = pcVar5 + 1;
                  } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
                }
                if ((*(char * PTR32 *)(gen_frame + 0x18)) <= pcVar5) {
                  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                  return 0;
                }
                pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
                pDVar14 = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 4;
                (*(uint *)(gen_frame + 0x2c)) = 0xa0;
                do {
                  uVar15 = F_00e50570(pcVar8);
                  *(short *)pDVar14 = (short)uVar15;
                  uVar9 = F_00c51da0(pcVar8,0x2c);
                  pDVar14 = pDVar14 + 2;
                  uVar4 = (*(uint *)(gen_frame + 0x2c)) - 1;
                  (*(uint *)(gen_frame + 0x2c)) = uVar4;
                  pcVar8 = ((char *)GEN_TOP((uVar9 + 2)));
                } while (uVar4 != 0);
              }
              piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 4))))((*(undefined * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG)));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
              F_00c472af(((char *)(gen_frame + 0x34)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
              pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x34)))));
              if (pcVar8 != ((char *)GEN_TOP(0x0))) {
                pcVar5 = ((char *)GEN_TOP(0x0));
                if ((*(char * PTR32 *)(gen_frame + 0x30)) != ((char *)GEN_TOP(0x0))) {
                  do {
                    if (pcVar8 == ppcVar12[(int)pcVar5]) break;
                    pcVar5 = pcVar5 + 1;
                  } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
                }
                if ((*(char * PTR32 *)(gen_frame + 0x18)) <= pcVar5) {
                  if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) == ((char * PTR32 *)GEN_TOP(0x0))) {
                    return 0;
                  }
                  F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
                  return 0;
                }
                pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
                pDVar14 = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x144;
                (*(uint *)(gen_frame + 0x2c)) = 0x14;
                do {
                  uVar15 = F_00e50570(pcVar8);
                  *(int *)pDVar14 = (int)uVar15;
                  uVar9 = F_00c51da0(pcVar8,0x2c);
                  pDVar14 = pDVar14 + 4;
                  uVar4 = (*(uint *)(gen_frame + 0x2c)) - 1;
                  (*(uint *)(gen_frame + 0x2c)) = uVar4;
                  pcVar8 = ((char *)GEN_TOP((uVar9 + 2)));
                } while (uVar4 != 0);
              }
              if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0(ppcVar12);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ((char * PTR32 *)GEN_TOP(0x0))) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
              }
              return 1;
            }
            if (ppcVar12 != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ((char * PTR32 *)GEN_TOP(0x0))) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf20 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e614f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe614f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  uint uVar10;
  char * PTR32 * ppcVar11;
  char * pcVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  pcVar8 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,((char *)REFP(0x115856c)),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x2c)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x2c)) + 1))));
  if (iVar6 != 0) {
    return 0;
  }
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0(pcVar8,((char *)REFP(0x1158af0)))));
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5;
  if (pcVar5 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar5 + 0xb;
  pcVar5 = param_1;
  do {
    pcVar12 = pcVar5;
    pcVar5 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  iVar6 = 1;
  for (pcVar5 = pcVar8; pcVar7 = pcVar12 - 1, pcVar5 < pcVar12 - 1; pcVar5 = pcVar5 + 1) {
    if (*pcVar5 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, pcVar7 = pcVar5, iVar6 == 0)) break;
  }
  pcVar8 = ((char *)GEN_TOP(F_00e50750(pcVar8,((char *)REFP(0x1158ae0)),pcVar7)));
  if (pcVar8 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8 + 0xc;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
  (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x24));
  pcVar12 = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x24));
  while (pcVar5 != pcVar8) {
    cVar1 = *pcVar5;
    if (cVar1 == '\"') {
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
      if ((&(*(char * PTR32 *)(gen_frame + 0x28)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) <= &(*(char * PTR32 *)(gen_frame + 0x28)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x28)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
        }
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar13 = pcVar5;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppcVar13;
      pcVar5 = ((char *)GEN_TOP(F_00c51da0(pcVar5,0x22)));
      pcVar12 = (*(char * PTR32 *)(gen_frame + 0x10));
    }
    else {
      if (cVar1 == '{') {
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)) + 1;
        iVar6 = 1;
        if (pcVar5 == pcVar12) goto LAB_00e618bb;
        do {
          if (*pcVar5 == '{') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == '}') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 != pcVar12);
      }
      else {
        if (cVar1 != '[') goto LAB_00e61723;
        cVar1 = pcVar5[1];
        (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 1;
        iVar6 = 1;
        if (cVar1 == '\"') {
LAB_00e616eb: ;
          (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5 + 2;
        }
        else if (cVar1 == '[') {
          iVar6 = 2;
          goto LAB_00e616eb;
        }
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x28)));
        for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x28)); pcVar5 != pcVar12; pcVar5 = pcVar5 + 1) {
          if (*pcVar5 == '[') {
            iVar6 = iVar6 + 1;
          }
          else if ((*pcVar5 == ']') && (iVar6 = iVar6 - 1, iVar6 == 0)) break;
        }
      }
      ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x18));
      if (iVar6 == 1) goto LAB_00e618bb;
    }
LAB_00e61723: ;
    pcVar5 = pcVar5 + 1;
    (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar5;
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar8;
  if ((int)uVar4 < (int)pcVar8) {
LAB_00e618bb: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((char * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ((char * PTR32 *)GEN_TOP(0x0));
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x10));
  (*(char * PTR32 *)(gen_frame + 0x24)) = (*(char * PTR32 *)(gen_frame + 0x10));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x10));
  while (cVar1 != ']') {
    if (*pcVar8 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8;
      if ((&(*(char * PTR32 *)(gen_frame + 0x24)) < ppcVar14) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x24)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x24)) - (int)ppcVar13;
        if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))) {
          uVar9 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) {
LAB_00e618a1: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar9 = uVar9 + 1;
          uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar10 < uVar9) {
            if (0x3fffffff - (uVar10 >> 1) < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar9) {
              uVar10 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar10);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        pcVar8 = (*(char * PTR32 *)(gen_frame + 0x24));
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = ppcVar13[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar14 == ppcVar11) {
          uVar9 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00e618a1;
          uVar9 = uVar9 + 1;
          uVar10 = (int)ppcVar11 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar10 < uVar9) {
            if (0x3fffffff - (uVar10 >> 1) < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar9) {
              uVar10 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar10);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x0));
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          }
        }
        if (ppcVar14 != ((char * PTR32 *)GEN_TOP(0x0))) {
          *ppcVar14 = pcVar8;
        }
      }
      ppcVar14 = ppcVar14 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = ppcVar14;
      pcVar8 = ((char *)GEN_TOP(F_00c51da0(pcVar8 + 1,0x22)));
      ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
      if (pcVar8 == ((char *)GEN_TOP(0x0))) {
        if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
          F_00406ad0(ppcVar13);
        }
        goto LAB_00e618bb;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8;
  }
  pcVar8 = ((char *)GEN_TOP(((int)ppcVar14 - (int)((int)(uintptr_t)ppcVar13) >> 2)));
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar8;
  if ((int)uVar4 < (int)pcVar8) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x28)) != pcVar8) {
    if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
      return 0;
    }
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar8 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar8 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar8 == ppcVar13[(int)pcVar5]) break;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar5) {
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar5];
    iVar6 = 0;
    do {
      uVar15 = F_00e50570(pcVar8);
      this[iVar6 + 4] = SUB81(uVar15,0);
      uVar4 = F_00c51da0(pcVar8,0x2c);
      iVar6 = iVar6 + 1;
      pcVar8 = ((char *)GEN_TOP((uVar4 + 2)));
    } while (iVar6 < 0x1a);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x24));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x24)) != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < (*(char * PTR32 *)(gen_frame + 0x24)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) {
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12]);
    this[0x1e] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) goto LAB_00e61ab5;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12]);
    this[0x1f] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) goto LAB_00e61ab5;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12]);
    this[0x20] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) goto LAB_00e61ab5;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12]);
    this[0x21] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) goto LAB_00e61ab5;
    uVar15 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12]);
    this[0x22] = SUB81(uVar15,0);
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x2c)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = ((char *)GEN_TOP(F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x10)),((char *)(gen_frame + 0x2c)))));
  if (pcVar5 != ((char *)GEN_TOP(0x0))) {
    pcVar12 = ((char *)GEN_TOP(0x0));
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      do {
        if (pcVar5 == ppcVar13[(int)pcVar12]) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 < pcVar8);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x28)) <= pcVar12) {
LAB_00e61ab5: ;
      if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
        F_00406ad0(ppcVar13);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) == ((char * PTR32 *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
      return 0;
    }
    this[0x23] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x14))[(int)pcVar12] != '0');
  }
  if (ppcVar13 != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) != ((char * PTR32 *)GEN_TOP(0x0))) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x14)));
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e61cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe61cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pFVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[5],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x10],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pFVar10 = this + 0x18;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x18));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),*(undefined4 *)pFVar10,*(undefined4 *)(pFVar10 + 4));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pFVar10 = pFVar10 + 8;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - uVar5) - 1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0xd8))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0xd8)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - 1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e62080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe62080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pFVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[4],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[5],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b58)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x10],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b58)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pFVar10 = this + 0x18;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x18));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),*(undefined4 *)pFVar10,*(undefined4 *)(pFVar10 + 4));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pFVar10 = pFVar10 + 8;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,5)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b40)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0xd8))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0xd8)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - 1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e62b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe62b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pGVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 4),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[8],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0xc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x2));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bcc)),(int)(ulonglong)gen_d2bits((double)*(float *)pGVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pGVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pGVar10 = pGVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - uVar5) - 1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0x14;
  iVar3 = 4;
  do {
    iVar11 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bc4)),*(int *)pGVar10,*(int *)((int)(uintptr_t)pGVar10) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pGVar10 = pGVar10 + 4;
    iVar3 = iVar11 - 1;
  } while (iVar11 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar11,(uVar2 - iVar11) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar11;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar11)))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
    uVar2 = param_1[4];
    uVar5 = uVar2 - 1;
    if (uVar5 <= uVar2) {
      if (uVar2 != uVar5) {
        puVar9 = param_1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
        iVar3 = param_1[4];
        param_1[4] = iVar3 - 1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        }
        *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
      return 1;
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e62ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe62ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pGVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 4),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[8],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b40)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0xc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x2));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bcc)),(int)(ulonglong)gen_d2bits((double)*(float *)pGVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pGVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pGVar10 = pGVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bd4)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0x14;
  iVar3 = 4;
  do {
    iVar11 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158bc4)),*(int *)pGVar10,*(int *)((int)(uintptr_t)pGVar10) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pGVar10 = pGVar10 + 4;
    iVar3 = iVar11 - 1;
  } while (iVar11 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar11,(uVar2 - iVar11) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar11;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar11)))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
    uVar2 = param_1[4];
    uVar5 = uVar2 - 1;
    if (uVar5 <= uVar2) {
      if (uVar2 - uVar5 != 0) {
        puVar9 = param_1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - uVar5) - 1);
        iVar3 = param_1[4];
        param_1[4] = iVar3 - 1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        }
        *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
      return 1;
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e63730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe63730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  undefined1 BVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined * pBVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
  pBVar8 = this + 4;
  do {
    BVar2 = *(undefined1 *)pBVar8;
    pBVar8 = pBVar8 + 1;
  } while (BVar2 != (undefined1)0x0);
  F_00e69490(param_1 GEN_EDX_ARG,this + 4,(int)pBVar8 - (int)(this + 5));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x19],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 - 1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x21],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar5 <= uVar3) {
    if (uVar3 != uVar5) {
      if ((uint)param_1[5] < 0x10) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
      }
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5);
      iVar11 = param_1[4];
      param_1[4] = iVar11 - 1;
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x24],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x25],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
    iVar11 = 0;
    do {
      F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x26],0);
      pcVar6 = ((char *)(gen_frame + 0x4));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    uVar3 = param_1[4];
    uVar5 = uVar3 - 1;
    if (uVar5 <= uVar3) {
      if (uVar3 != uVar5) {
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
        }
        puVar9 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5)
        ;
        iVar11 = param_1[4];
        param_1[4] = iVar11 - 1;
        puVar9 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
      F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x2c),0);
      pcVar6 = ((char *)(gen_frame + 0x4));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x30),0);
      pcVar6 = ((char *)(gen_frame + 0x4));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x34),0);
      pcVar6 = ((char *)(gen_frame + 0x4));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      uVar3 = param_1[4];
      uVar5 = uVar3 - 1;
      if (uVar5 <= uVar3) {
        if (uVar3 != uVar5) {
          puVar10 = param_1;
          puVar9 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar9 = ((undefined4 *)GEN_TOP(*param_1));
            puVar10 = ((undefined4 *)GEN_TOP(*param_1));
          }
          F_00c46e20((int)puVar10 + uVar5,(int)puVar9 + uVar3,(uVar3 - 1) - uVar5);
          iVar11 = param_1[4];
          param_1[4] = iVar11 - 1;
          puVar9 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar9 = ((undefined4 *)GEN_TOP(*param_1));
          }
          *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
        }
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
        return 1;
      }
                    
      F_00c457e7(((char *)REFP(0x1080298)));
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e63c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe63c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  undefined1 BVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined * pBVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c10)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c04)),9);
  pBVar8 = this + 4;
  do {
    BVar2 = *(undefined1 *)pBVar8;
    pBVar8 = pBVar8 + 1;
  } while (BVar2 != (undefined1)0x0);
  F_00e69490(param_1 GEN_EDX_ARG,this + 4,(int)pBVar8 - (int)(this + 5));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158c00),3);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x19],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 - 1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x21],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 - 1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x24],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x25],0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,5)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar11 + 0x26],0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 - 1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar9 + iVar11 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,6)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x2c),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),7);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,7);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,7)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x30),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),8);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,8)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x34),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar5 <= uVar3) {
    if (uVar3 != uVar5) {
      puVar10 = param_1;
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        puVar10 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20(uVar5 + (int)puVar10,uVar3 + (int)puVar9,(uVar3 - 1) - uVar5);
      iVar11 = param_1[4];
      param_1[4] = iVar11 - 1;
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP((iVar11 - 1 + (int)puVar9))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e64c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe64c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x14],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x15],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x18),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e64ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe64ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b58)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x14],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,3)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x15],0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,4)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x0)),0x20,((char *)REFP(0x1158b18)),*(undefined4 *)(this + 0x18),0);
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e65730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe65730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  int iVar10;
  undefined * pDVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pDVar11 = this + 4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0xa0));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)*(ushort *)pDVar11,0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pDVar11 = pDVar11 + 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - uVar5) - 1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pDVar11 = this + 0x144;
  iVar3 = 0x14;
  do {
    iVar10 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),*(undefined4 *)pDVar11,0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pDVar11 = pDVar11 + 4;
    iVar3 = iVar10 - 1;
  } while (iVar10 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar10,(uVar2 - iVar10) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar10;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar10)))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
    uVar2 = param_1[4];
    uVar5 = uVar2 - 1;
    if (uVar5 <= uVar2) {
      if (uVar2 != uVar5) {
        puVar9 = param_1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
        iVar3 = param_1[4];
        param_1[4] = iVar3 - 1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        }
        *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
      return 1;
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e65a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe65a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pDVar10;
  int iVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c28)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pDVar10 = this + 4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0xa0));
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)*(ushort *)pDVar10,0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pDVar10 = pDVar10 + 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - 1)));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0)));
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 - 1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158be8)),0x14);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  pDVar10 = this + 0x144;
  iVar3 = 0x14;
  do {
    iVar11 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),*(undefined4 *)pDVar10,0);
    pcVar6 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x4)) + 1));
    pDVar10 = pDVar10 + 4;
    iVar3 = iVar11 - 1;
  } while (iVar11 - 1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        puVar9 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar11,(uVar2 - iVar11) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar11;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar11)))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
    uVar2 = param_1[4];
    uVar5 = uVar2 - 1;
    if (uVar5 <= uVar2) {
      if (uVar2 - uVar5 != 0) {
        puVar9 = param_1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
          puVar9 = ((undefined4 *)GEN_TOP(*param_1));
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - uVar5) - 1);
        iVar3 = param_1[4];
        param_1[4] = iVar3 - 1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = ((undefined4 *)GEN_TOP(*param_1));
        }
        *((undefined1 *)GEN_TOP(((int)puVar8 + iVar3 - 1))) = 0;
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
      return 1;
    }
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf26 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e65fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe65fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158af0)),0xb);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x1a);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 - uVar4 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - uVar4) - 1);
    iVar9 = param_1[4];
    param_1[4] = iVar9 - 1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x1e],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x1f],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x20],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x21],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x22],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x23]);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 != uVar4) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - 1) - uVar4);
      iVar9 = param_1[4];
      param_1[4] = iVar9 - 1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf12 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e663a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe663a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00e69490(param_1 GEN_EDX_FWD,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b34)),10);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b24)),0xd);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158bb0)),0x11);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,0)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b0c)),(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x4));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x1a);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (uVar2 != uVar4) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(*param_1));
    }
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar4);
    iVar9 = param_1[4];
    param_1[4] = iVar9 - 1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,1);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x1e],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,2);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,2)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x1f],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,3);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,3)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x20],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,4);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,4)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x21],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,5);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,5)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b74)),0x13);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,((char *)REFP(0x1158b18)),(uint)(byte)this[0x22],0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158ba0)),0xc);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b94)),0xb);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,6);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158b88)),8);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,6)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c40)),0x12);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x11585b0)),8);
  F_00c472af(((char *)(gen_frame + 0x4)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x23]);
  pcVar5 = ((char *)(gen_frame + 0x4));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x4)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x4)) + 1));
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 != uVar4) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
        puVar8 = ((undefined4 *)GEN_TOP(*param_1));
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - 1) - uVar4);
      iVar9 = param_1[4];
      param_1[4] = iVar9 - 1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = ((undefined4 *)GEN_TOP(*param_1));
      }
      *((undefined1 *)GEN_TOP(((int)puVar7 + iVar9 - 1))) = 0;
    }
    F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
    return 1;
  }
                    
  F_00c457e7(((char *)REFP(0x1080298)));
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e66fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe66fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67061;
  }
  bVar2 = true;
LAB_00e67061: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e671a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe671a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67251;
  }
  bVar2 = true;
LAB_00e67251: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e67390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe67390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67441;
  }
  bVar2 = true;
LAB_00e67441: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e67580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe67580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67631;
  }
  bVar2 = true;
LAB_00e67631: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e67770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe67770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67821;
  }
  bVar2 = true;
LAB_00e67821: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e67960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe67960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  bVar3 = false;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((char)uVar5 == '\0') {
    return 0;
  }
  uVar5 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  if (1 < uVar5) {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar5 - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x10));
    uVar9 = (*(uint *)(gen_frame + 0x10));
    if (1 < (*(uint *)(gen_frame + 0x10))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 == 0) && (1 < uVar5)) && (bVar2 = false, uVar5 == 2)) goto LAB_00e67a11;
  }
  bVar2 = true;
LAB_00e67a11: ;
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x14)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
  }
  if (bVar2) {
    return 0;
  }
  F_00a15ee0(param_1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x10))) - 1,1);
  F_00e69490(param_1 GEN_EDX_ARG,((char *)REFP(0x1158c54)),0xd);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      if (iVar10 != 0) {
        F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c),1);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG,iVar10);
      F_00c472af(((char *)(gen_frame + 0x1c)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
      pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      pcVar8 = ((char *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      F_00e691f0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0xffffffff);
      if (0xf < (*(uint *)(gen_frame + 0x14))) {
        F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0]);
      }
      F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar5);
  }
  F_00e69490(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1158afc),2);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00e67b60(void)
{
  GEN_ENTER(0xe67b60u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e67b70(void)
{
  GEN_ENTER(0xe67b70u, 0u, 0u, 0u, 0u);
  return 0x135ae40;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00e67b80(void)
{
  GEN_ENTER(0xe67b80u, 0u, 0u, 0u, 0u);
  return 9;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e67b90(void)
{
  GEN_ENTER(0xe67b90u, 0u, 0u, 0u, 0u);
  return 0x135ae44;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf5 */
GEN_LIB GEN_NOFRAME uint F_00e67ba0(void)
{
  GEN_ENTER(0xe67ba0u, 0u, 0u, 0u, 0u);
  return 5;
}

