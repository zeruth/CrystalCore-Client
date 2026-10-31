#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Global::GetTreeNodeValue_0104d230 */
GEN_LIB GEN_FRAME uint F_0104d230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x104d230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::TreeLowerBoundNode_0104d240 */
GEN_LIB GEN_FRAME undefined4 * GEN_THISCALL F_0104d240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104d240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0104d270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104d270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x18)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar3;
  (*pcVar1)(this);
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_0104d0a0(this_00 GEN_EDX_ARG,this,param_1,iVar3);
    return uVar2;
  }
  return 0;
}

/* ref: Global::ConstructIteratorPair2_0104d2c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104d2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::CreateNetBuffer_0104d2e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104d2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104d2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  undefined4 * in_ecx;
  uint uVar2;
  int iVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x18)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar3;
  (*pcVar1)(this);
  in_ecx = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (in_ecx != ((undefined4 *)GEN_TOP(0x0))) {
    F_01050c90(in_ecx GEN_EDX_ARG);
    in_ecx[2] = this;
    *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x12b1f84));
    in_ecx[1] = iVar3;
    in_ecx[3] = 0;
    in_ecx[4] = 0;
    in_ecx[9] = 0;
    in_ecx[7] = 0xfe8;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(in_ecx[2])) + 4))))(((int *)GEN_TOP(in_ecx[2])) GEN_EDX_ARG,0xfe8);
    in_ecx[8] = 0;
    in_ecx[9] = uVar2;
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: Global::ConstructInsertResult */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104d370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::TreeIteratorPreDecrement_0104d390 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104d390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104d390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0104d040(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::ConstructInsertResult2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104d3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::CopyIteratorPair */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104d3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::TreeInsertNode_0104d3e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d3e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x104d3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_0104d5dd: ;
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
        goto LAB_0104d5dd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: Global::ConstructInsertResult3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104d610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::TreeIteratorPreDecrement2_0104d630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104d630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104d630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0104d040(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0104d640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104d640u, gen_a0, 0u, 0u, 0u);
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

/* ref: std::allocator<std::_Container_proxy>::construct_0104d690 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_0104d690(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104d690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: Global::TreeLowerBound_0104d6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104d6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: Global::TreeInsertUnique_0104d6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x104d6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = ((undefined4 *)GEN_TOP(F_0104d3e0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_0104d040(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_0104d3e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0104d7d0 */
GEN_LIB GEN_FRAME unsigned int F_0104d7d0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x104d7d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_0104d7f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104d7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_0104d860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104d860u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0104d8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104d8c0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_0104d6f0(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: NetBufferFactoryTmpl_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104d940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104d940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  F_0104d7f0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),param_1 + 1);
  F_0104a280(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0xc)));
  if (0xfe8 < (uint)param_1[7]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,1);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  uVar1 = param_1[1];
  puVar3 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar3[3] = uVar1;
      puVar3[4] = param_1;
    }
    F_0104d6f0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_0104da10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104da10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104da10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0xc)))));
  if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 0xc)))) {
    uVar2 = piVar1[4];
    F_0104a280(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),piVar1);
    if (uVar2 != 0) goto LAB_0104da48;
  }
  uVar2 = F_0104d2e0(this GEN_EDX_ARG);
LAB_0104da48: ;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = *((undefined * PTR32 * PTR32 *)GEN_TOP((uVar2 + 4)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar3[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8));
      puVar3[4] = uVar2;
    }
    F_0104d6f0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: NetBufferFactoryTmpl_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104dac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104dac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((uint)(param_1 + param_2) < 0xfe9) {
    uVar2 = F_0104da10(this GEN_EDX_FWD);
    return uVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x18)));
  iVar4 = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar4;
  (*pcVar1)(this);
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0104d0a0(this_00 GEN_EDX_ARG,this,param_1 + param_2,iVar4);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = *((undefined * PTR32 * PTR32 *)GEN_TOP((uVar2 + 4)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar3[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8));
      puVar3[4] = uVar2;
    }
    F_0104d6f0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: NetBufferQueueTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104dba0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x104dba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0104bca0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::~NetBufferFactoryTmpl_0104dbd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104dbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104dbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  code * pcVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f34));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      pcVar5 = *((gen_code32 *)GEN_TOP(*puVar4));
      (*pcVar5)(puVar4,1);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      pcVar5 = *((gen_code32 *)GEN_TOP(*puVar4));
      (*pcVar5)(puVar4,1);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  uVar6 = *puVar2;
  F_0104b390(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),uVar6,puVar2);
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x1c))));
  F_0104b390(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))),
             *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))));
  uVar8 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x12b1e84));
  return uVar8;
}

/* ref: NetBufferFactoryTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf5 */
GEN_LIB GEN_NOFRAME unsigned int F_0104dd20(void)
{
  GEN_ENTER(0x104dd20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: NetBufferFactoryTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf6 */
GEN_LIB GEN_NOFRAME unsigned int F_0104dd30(void)
{
  GEN_ENTER(0x104dd30u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Global::~NetBufferFactoryTmpl_0104dd40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104dd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104dd40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  code * pcVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f64));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      pcVar5 = *((gen_code32 *)GEN_TOP(*puVar4));
      (*pcVar5)(puVar4,1);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      pcVar5 = *((gen_code32 *)GEN_TOP(*puVar4));
      (*pcVar5)(puVar4,1);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  uVar6 = *puVar2;
  F_0104b430(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),uVar6,puVar2);
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x1c))));
  F_0104b430(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))),
                  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))));
  uVar8 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x12b1e9c));
  return uVar8;
}

/* ref: NetBufferFactoryTmpl_LF_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::vf5 */
GEN_LIB GEN_NOFRAME unsigned int F_0104de90(void)
{
  GEN_ENTER(0x104de90u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: NetBufferFactoryTmpl_LF_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::vf6 */
GEN_LIB GEN_NOFRAME unsigned int F_0104dea0(void)
{
  GEN_ENTER(0x104dea0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0104deb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104deb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104deb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_01049b10(param_1 GEN_EDX_FWD,param_2);
  uVar1 = F_0104c030(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: Global::DestroyTree_0104ded0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104ded0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104ded0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0104b780(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: Global::DestroyTree2_0104df00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104df00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104df00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0104b820(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: NetBufferFactoryTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104df30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x104df30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0104dbd0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: NetBufferFactoryTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104df60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x104df60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104dbd0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: NetBufferFactoryTmpl_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104df90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x104df90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0104dd40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: NetBufferFactoryTmpl_LF_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104dfc0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x104dfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4))
  ;
  F_0104dd40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::~EntityContainerTmpl_0104dff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104dff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104dff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  char cVar1;
  int iVar2;
  int * piVar3;
  code * pcVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  int * piVar8;
  uint uVar9;
  int * piVar10;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x12b1fd4));
  piVar10 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)))));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = this;
  puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  while (((*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar7, iVar2 != 0 && (piVar10 != ((int *)GEN_TOP(puVar7[6]))))) {
    if (piVar10[3] != puVar7[2]) {
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar10[4] + 0x20)));
      iVar2 = *piVar3;
      (*(int *)(gen_frame + 0x4)) = puVar7[2];
      pcVar4 = *((gen_code32 *)GEN_TOP((iVar2 + 4)));
      (*pcVar4)(piVar3);
      F_00c31050(piVar3 + 5 GEN_EDX_FWD,&(*(int *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x4)));
      if ((*(int *)(gen_frame + 0x8)) != piVar3[6]) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((piVar3[4] + 0x4c))) + 0x18))))
                  (*((int * PTR32 *)GEN_TOP((piVar3[4] + 0x4c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x10))));
        F_0104a8b0(piVar3 + 5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0xc))[4] + 0x4c))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0xc))[4] + 0x4c))) GEN_EDX_ARG,piVar10[4]);
    if (*((char *)GEN_TOP(((int)piVar10 + 0x15))) == '\0') {
      piVar3 = ((int *)GEN_TOP(piVar10[2]));
      if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
        piVar10 = piVar3;
        piVar3 = ((int *)GEN_TOP(*piVar3));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
          piVar10 = piVar3;
          piVar3 = ((int *)GEN_TOP(*piVar3));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar10[1] + 0x15)));
        piVar8 = ((int *)GEN_TOP(piVar10[1]));
        piVar3 = piVar10;
        while ((piVar10 = piVar8, cVar1 == '\0' && (piVar3 == ((int *)GEN_TOP(piVar10[2]))))) {
          cVar1 = *((char *)GEN_TOP((piVar10[1] + 0x15)));
          piVar8 = ((int *)GEN_TOP(piVar10[1]));
          piVar3 = piVar10;
        }
      }
    }
    iVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0xc))[7];
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  }
  cVar1 = *((char *)GEN_TOP(((int)*((int * PTR32 *)GEN_TOP((puVar7[6] + 4))) + 0x15)));
  piVar10 = *((int * PTR32 *)GEN_TOP((puVar7[6] + 4)));
  while (cVar1 == '\0') {
    iVar2 = piVar10[2];
    F_0104abe0(puVar7 + 5 GEN_EDX_ARG,iVar2);
    piVar3 = ((int *)GEN_TOP(*piVar10));
    F_00406ad0(piVar10);
    piVar10 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((undefined4 *)GEN_TOP((puVar7[6] + 4))) = puVar7[6];
  *((undefined4 *)GEN_TOP(puVar7[6])) = puVar7[6];
  *((undefined4 *)GEN_TOP((puVar7[6] + 8))) = puVar7[6];
  puVar7[7] = 0;
  puVar5 = ((undefined4 *)GEN_TOP(puVar7[6]));
  uVar6 = *puVar5;
  F_0104b820(puVar7 + 5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar6,puVar5);
  uVar9 = F_00406ad0(puVar7[6]);
  *(*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x12b1ee4));
  F_01050b80((*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return uVar9;
}

/* ref: Global::~PrimaryEntityCoreTmpl_0104e160 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104e160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104e160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b1fe4));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  uVar2 = F_0104dff0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: PrimaryEntityCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf3 */
GEN_LIB GEN_NOFRAME unsigned int F_0104e190(void)
{
  GEN_ENTER(0x104e190u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: PrimaryEntityCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf4 */
GEN_LIB GEN_NOFRAME unsigned int F_0104e1a0(void)
{
  GEN_ENTER(0x104e1a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: PrimaryEntityCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf5 */
GEN_LIB GEN_NOFRAME unsigned int F_0104e1b0(void)
{
  GEN_ENTER(0x104e1b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: EntityContainerTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104e1c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x104e1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0104dff0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PrimaryEntityCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104e1f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x104e1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[9]));
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x12b1fe4));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  param_1[9] = 0;
  F_0104dff0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0104e230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104e230(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x104e230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  undefined4 * puVar2;
  
  F_01050ce0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x12b2004));
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    param_1[8] = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((undefined4 *)GEN_TOP((param_1[8] + 4))) = param_1[8];
    *((undefined4 *)GEN_TOP((param_1[8] + 8))) = param_1[8];
    *((undefined1 *)GEN_TOP((param_1[8] + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((param_1[8] + 0x15))) = 1;
    param_1[0xd] = 0;
    uVar1 = F_004069f0(0x18);
    if (uVar1 != 0) {
      param_1[0xc] = uVar1;
      *((uint *)GEN_TOP(uVar1)) = uVar1;
      *((undefined4 *)GEN_TOP((param_1[0xc] + 4))) = param_1[0xc];
      *((undefined4 *)GEN_TOP((param_1[0xc] + 8))) = param_1[0xc];
      *((undefined1 *)GEN_TOP((param_1[0xc] + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((param_1[0xc] + 0x15))) = 1;
      param_1[0xf] = 0;
      *(undefined1 *)(param_1 + 0x10) = param_4;
      puVar2 = param_2;
      if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar2 = ((undefined4 *)GEN_TOP(F_004069f0(4)));
        if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar2 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x12b1ef4));
        }
      }
      param_1[0x11] = puVar2;
      *(bool *)(param_1 + 0x12) = param_2 == ((undefined4 *)GEN_TOP(0x0));
      puVar2 = param_3;
      if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar2 = ((undefined4 *)GEN_TOP(F_004069f0(4)));
        if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar2 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar2 = (*(undefined * PTR32 (*)[7])REFP(0x12b1ec4));
        }
      }
      param_1[0x13] = puVar2;
      *(bool *)(param_1 + 0x14) = param_3 == ((undefined4 *)GEN_TOP(0x0));
      param_1[0x16] = 0;
      uVar1 = F_004069f0(0xc);
      if (uVar1 != 0) {
        param_1[0x15] = uVar1;
        *((uint *)GEN_TOP(uVar1)) = uVar1;
        *((undefined4 *)GEN_TOP((param_1[0x15] + 4))) = param_1[0x15];
        param_1[0x18] = 0;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x11])) + 4))))(((int *)GEN_TOP(param_1[0x11])) GEN_EDX_ARG,param_1,0);
        param_1[0xf] = uVar1;
        return (uint)param_1;
      }
    }
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0104e370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104e370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0104e380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104e380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0104e390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104e390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0104e3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104e3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf21 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0104e3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104e3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf24 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0104e3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104e3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_0104e3f0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_0104e3f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104e3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0xc)));
  if (iVar1 == 0) {
    return (float10)1;
  }
  fVar2 = (float10)*((int *)GEN_TOP((in_ecx + 0x10)));
  if (*((int *)GEN_TOP((in_ecx + 0x10))) < 0) {
    fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  return GEN_X87((float10)(float)(fVar2 / fVar3));
}

/* ref: Global::CreateBuffer_0104e450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104e450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104e450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG,this,param_1,param_2);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0104e470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104e470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  if ((param_1 != 0) && (piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x2c))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,param_1);
  }
  return 1;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf23 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0104e490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104e490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  if ((param_1 != 0) && (piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x30))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,param_1);
  }
  return 1;
}

/* ref: Global::TreeIteratorPostIncrement_0104e4b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104e4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104e4b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_010447d0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0104e4d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104e4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104e4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 0xc)));
  if (iVar2 == 0) {
    iVar4 = 0;
    iVar2 = 0;
  }
  else {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0x14)));
    iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)));
  }
  if ((iVar4 == 0) || (iVar2 == 0)) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) + 8))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG,this,*((undefined4 *)GEN_TOP(((int)this + 0x3c))),
                       *((undefined4 *)GEN_TOP(((int)this + 0x3c))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,uVar3,param_1);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG);
  }
  else {
    this_00 = ((undefined *)GEN_TOP(F_00c310e0(this GEN_EDX_ARG,iVar2)));
    uVar3 = 0;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00c31130(this_00 GEN_EDX_ARG,iVar4);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this_00 + 0x28)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,uVar3,param_1);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_0104e560 */
GEN_LIB GEN_FRAME byte F_0104e560(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x104e560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar5 = param_1;
  piVar3 = param_1;
  while (piVar5 != param_2) {
    iVar2 = *((int *)GEN_TOP((piVar5[4] + 0x24)));
    if ((iVar2 == 0) || (*((int *)GEN_TOP((iVar2 + 8))) != 0)) {
      F_0104c030(((undefined *)GEN_TOP(piVar5[4])) GEN_EDX_ARG,0);
      piVar5 = piVar3;
    }
    if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
      piVar3 = ((int *)GEN_TOP(piVar5[2]));
      if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
        piVar5 = piVar3;
        piVar4 = ((int *)GEN_TOP(*piVar3));
        while (piVar3 = piVar5, cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
          piVar5 = piVar4;
          piVar4 = ((int *)GEN_TOP(*piVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x15)));
        piVar3 = ((int *)GEN_TOP(piVar5[1]));
        piVar4 = piVar5;
        while ((piVar5 = piVar3, piVar3 = piVar5, cVar1 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar5[2]))))) {
          cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          piVar4 = piVar5;
        }
      }
    }
  }
  return param_3;
}

/* ref: Global::NetBufferFactoryTmpl_LF_0104e5f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104e5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104e5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0104c2c0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  return (uint)this;
}

/* ref: Global::NetBufferFactoryTmpl_LF_0104e610 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104e610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104e610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0104cf30(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  return (uint)this;
}

/* ref: FUN_0104e630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104e630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104e630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  F_01050b90(this GEN_EDX_FWD,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x12b1fd4));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4))) = *((int *)GEN_TOP(((int)this + 0x18)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8))) = *((int *)GEN_TOP(((int)this + 0x18)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::~ChannelManagerCoreTmpl_0104e6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104e6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104e6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b2004));
  F_0104bbc0(this GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x44))) + 8))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3c))));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  if ((*((char *)GEN_TOP(((int)this + 0x48))) != '\0') &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  if ((*((char *)GEN_TOP(((int)this + 0x50))) != '\0') &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4c))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
  piVar3 = ((int *)GEN_TOP(*piVar2));
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x54))) + 4))) = *((int *)GEN_TOP(((int)this + 0x54)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  if (piVar3 != *((int * PTR32 *)GEN_TOP(((int)this + 0x54)))) {
    do {
      piVar2 = ((int *)GEN_TOP(*piVar3));
      F_00406ad0(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 0x54))))));
  }
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x54))));
  F_0104b820(((undefined *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30))),
                  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30))));
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x30))));
  F_0104b780(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),
                  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))));
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x20))));
  uVar4 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar4 = F_00406ad0(*((int *)GEN_TOP(((int)this + 0xc))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_01050cd0(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: Global::~ChannelManagerTmpl_LF */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104e7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104e7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b206c));
  F_0104bbc0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  F_0104dd40(((undefined4 *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 100))) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104dbd0(((undefined4 *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG);
  uVar1 = F_0104e6b0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::GetUpBufferFactory */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104e810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104e810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xb4)));
  if (uVar1 == 0) {
    uVar1 = in_ecx + 100;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf14 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104e820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104e820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xb4)));
  if (uVar1 == 0) {
    uVar1 = in_ecx + 100;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::GetDownBufferFactory */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104e830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104e830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xb8)));
  if (uVar1 == 0) {
    uVar1 = in_ecx + 0x8c;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf16 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104e850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104e850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xb8)));
  if (uVar1 == 0) {
    uVar1 = in_ecx + 0x8c;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf17 */
GEN_LIB GEN_NOFRAME unsigned int F_0104e870(void)
{
  GEN_ENTER(0x104e870u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf18 */
GEN_LIB GEN_NOFRAME unsigned int F_0104e880(void)
{
  GEN_ENTER(0x104e880u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::~ChannelManagerTmpl_LF */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104e890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104e890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b206c));
  F_0104bbc0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  F_0104dd40(((undefined4 *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 100))) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104dbd0(((undefined4 *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG);
  uVar1 = F_0104e6b0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104e8d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x104e8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0104e6b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104e900(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x104e900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x12b206c));
  F_0104bbc0(param_1 GEN_EDX_FWD);
  param_1[0x23] =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  F_0104dd40(param_1 + 0x23 GEN_EDX_ARG);
  param_1[0x19] =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104dbd0(param_1 + 0x19 GEN_EDX_ARG);
  F_0104e6b0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0104e950 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0104e950(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x104e950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  char cVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int * piVar6;
  undefined4 * puVar7;
  byte bVar8;
  uint uVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  int * piVar12;
  undefined4 * puVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)(param_1 + 0x1a);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  piVar12 = *((int * PTR32 *)GEN_TOP(param_1[4]));
  if (piVar12 != ((int *)GEN_TOP(param_1[4]))) {
    do {
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar12[4])) + 0xc))))(((int *)GEN_TOP(piVar12[4])) GEN_EDX_ARG);
      if ((char)uVar9 != '\0') {
        puVar13 = ((undefined4 *)GEN_TOP(piVar12[4]));
        iVar3 = piVar12[3];
        F_01046510((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar12);
        puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x8))[2])) + 0x14))))(((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x8))[2])) GEN_EDX_ARG,iVar3);
        if (puVar11[0x20] != 0) {
          piVar12 = ((int *)GEN_TOP(puVar11[0x20]));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x20))))(piVar12 GEN_EDX_ARG,iVar3);
        }
        param_1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
        if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar13)))(puVar13 GEN_EDX_ARG,1);
          param_1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
        }
        break;
      }
      if (*((char *)GEN_TOP(((int)piVar12 + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar12[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar12 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            piVar12 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar12[1] + 0x15)));
          piVar6 = ((int *)GEN_TOP(piVar12[1]));
          piVar2 = piVar12;
          while ((piVar12 = piVar6, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar12[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar12[1] + 0x15)));
            piVar6 = ((int *)GEN_TOP(piVar12[1]));
            piVar2 = piVar12;
          }
        }
      }
    } while (piVar12 != ((int *)GEN_TOP(param_1[4])));
  }
  if ((param_3 == 0) || (param_3 == 0xe0000000)) {
    puVar13 = *((undefined4 * PTR32 *)GEN_TOP(param_1[4]));
  }
  else {
    puVar11 = ((undefined4 *)GEN_TOP((((undefined4 *)GEN_TOP(param_1[4])))[1]));
    cVar1 = *((char *)GEN_TOP(((int)puVar11 + 0x15)));
    puVar13 = ((undefined4 *)GEN_TOP(param_1[4]));
    while (cVar1 == '\0') {
      if ((uint)puVar11[3] < param_3) {
        puVar10 = ((undefined4 *)GEN_TOP(puVar11[2]));
        puVar11 = puVar13;
      }
      else {
        puVar10 = ((undefined4 *)GEN_TOP(*puVar11));
      }
      puVar13 = puVar11;
      puVar11 = puVar10;
      cVar1 = *((char *)GEN_TOP(((int)puVar10 + 0x15)));
    }
    puVar11 = ((undefined4 *)GEN_TOP(param_1[4]));
    if ((puVar13 == puVar11) || (param_3 < (uint)puVar13[3])) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar11;
      puVar13 = puVar11;
    }
  }
  if (puVar13 != ((undefined4 *)GEN_TOP(param_1[4]))) {
    do {
      fVar5 = REFG(float, 0x1087f04);
      *param_4 = 0xe0000000;
      puVar11 = *((undefined4 * PTR32 *)GEN_TOP(param_1[4]));
      while (puVar11 != ((undefined4 *)GEN_TOP(param_1[4]))) {
        iVar3 = puVar11[4];
        if (*((int *)GEN_TOP((iVar3 + 0x30))) != 0) {
          iVar4 = *((int *)GEN_TOP((iVar3 + 0x30)));
          fVar16 = fVar5;
          if (iVar4 != 0) {
            fVar14 = (float10)*((int *)GEN_TOP((iVar3 + 0x34)));
            if (*((int *)GEN_TOP((iVar3 + 0x34))) < 0) {
              fVar14 = GEN_X87(fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110));
            }
            fVar15 = (float10)iVar4;
            if (iVar4 < 0) {
              fVar15 = GEN_X87(fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110));
            }
            fVar16 = (float)(fVar14 / fVar15);
          }
          if ((!GEN_ISNAN(param_5) && !GEN_ISNAN(fVar16)) && !(param_5 <= fVar16)) {
            *param_4 = puVar11[3];
            break;
          }
        }
        if (*((char *)GEN_TOP(((int)puVar11 + 0x15))) == '\0') {
          puVar10 = ((undefined4 *)GEN_TOP(puVar11[2]));
          if (*((char *)GEN_TOP(((int)puVar10 + 0x15))) == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar10 + 0x15)));
            puVar11 = puVar10;
            puVar10 = ((undefined4 *)GEN_TOP(*puVar10));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP(((int)*puVar10 + 0x15)));
              puVar11 = puVar10;
              puVar10 = ((undefined4 *)GEN_TOP(*puVar10));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP(((int)puVar11[1] + 0x15)));
            puVar7 = ((undefined4 *)GEN_TOP(puVar11[1]));
            puVar10 = puVar11;
            while ((puVar11 = puVar7, cVar1 == '\0' && (puVar10 == ((undefined4 *)GEN_TOP(puVar11[2]))))) {
              cVar1 = *((char *)GEN_TOP(((int)puVar11[1] + 0x15)));
              puVar7 = ((undefined4 *)GEN_TOP(puVar11[1]));
              puVar10 = puVar11;
            }
          }
        }
      }
      bVar8 = F_01046fb0(param_1 GEN_EDX_ARG,param_2,puVar13[3],puVar13[4]);
      if (bVar8 != 0) {
        iVar3 = *((int *)GEN_TOP((param_2 + 0xc)));
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return iVar3 != 0;
      }
      if (*((char *)GEN_TOP(((int)puVar13 + 0x15))) == '\0') {
        puVar11 = ((undefined4 *)GEN_TOP(puVar13[2]));
        if (*((char *)GEN_TOP(((int)puVar11 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar11 + 0x15)));
          puVar13 = puVar11;
          puVar11 = ((undefined4 *)GEN_TOP(*puVar11));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar11 + 0x15)));
            puVar13 = puVar11;
            puVar11 = ((undefined4 *)GEN_TOP(*puVar11));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar13[1] + 0x15)));
          puVar10 = ((undefined4 *)GEN_TOP(puVar13[1]));
          puVar11 = puVar13;
          while ((puVar13 = puVar10, cVar1 == '\0' && (puVar11 == ((undefined4 *)GEN_TOP(puVar13[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar13[1] + 0x15)));
            puVar10 = ((undefined4 *)GEN_TOP(puVar13[1]));
            puVar11 = puVar13;
          }
        }
      }
    } while (puVar13 != ((undefined4 *)GEN_TOP(param_1[4])));
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ReceivePacket */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0104ebe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104ebe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * pvVar5;
  int * piVar6;
  byte bVar7;
  uint uVar8;
  int * piVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)((int)this + 0x68);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  piVar9 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
  if (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
    do {
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar9[4])) + 0xc))))(((int *)GEN_TOP(piVar9[4])) GEN_EDX_ARG);
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((char)uVar8 != '\0') {
        puVar3 = ((undefined4 *)GEN_TOP(piVar9[4]));
        iVar4 = piVar9[3];
        F_01046510(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar9);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 8))) GEN_EDX_ARG,iVar4);
        if (*((int *)GEN_TOP(((int)pvVar5 + 0x80))) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x80))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x80))) GEN_EDX_ARG,iVar4);
        }
        this = pvVar5;
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
        }
        break;
      }
      if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar9[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar9 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            piVar9 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
          piVar6 = ((int *)GEN_TOP(piVar9[1]));
          piVar2 = piVar9;
          while ((piVar9 = piVar6, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar9[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
            piVar6 = ((int *)GEN_TOP(piVar9[1]));
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10))));
  }
  piVar9 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
  if (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
    do {
      bVar7 = F_01046fb0(this GEN_EDX_ARG,param_1,piVar9[3],piVar9[4]);
      if (bVar7 != 0) {
        iVar4 = *((int *)GEN_TOP((param_1 + 0xc)));
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return iVar4 != 0;
      }
      if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar9[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar9 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            piVar9 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
          piVar6 = ((int *)GEN_TOP(piVar9[1]));
          piVar2 = piVar9;
          while ((piVar9 = piVar6, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar9[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
            piVar6 = ((int *)GEN_TOP(piVar9[1]));
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10))));
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ReceivePacketPurgeClosed */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104ed40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104ed40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  byte bVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)((int)this + 0x68);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  piVar9 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
  if (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
    do {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar9[4])) + 0xc))))(((int *)GEN_TOP(piVar9[4])) GEN_EDX_ARG);
      piVar8 = piVar9;
      if ((char)uVar7 == '\0') {
        if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
          piVar8 = ((int *)GEN_TOP(piVar9[2]));
          if (*((char *)GEN_TOP(((int)piVar8 + 0x15))) == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar8 + 0x15)));
            piVar9 = ((int *)GEN_TOP(*piVar8));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar9 + 0x15)));
              piVar8 = piVar9;
              piVar9 = ((int *)GEN_TOP(*piVar9));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
            piVar4 = ((int *)GEN_TOP(piVar9[1]));
            while ((piVar8 = piVar4, cVar1 == '\0' && (piVar9 == ((int *)GEN_TOP(piVar8[2]))))) {
              cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x15)));
              piVar4 = ((int *)GEN_TOP(piVar8[1]));
              piVar9 = piVar8;
            }
          }
        }
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar9[4]));
        iVar3 = piVar9[3];
        if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
          piVar8 = ((int *)GEN_TOP(piVar9[2]));
          if (*((char *)GEN_TOP(((int)piVar8 + 0x15))) == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar8 + 0x15)));
            piVar4 = ((int *)GEN_TOP(*piVar8));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
              piVar8 = piVar4;
              piVar4 = ((int *)GEN_TOP(*piVar4));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
            piVar5 = ((int *)GEN_TOP(piVar9[1]));
            piVar4 = piVar9;
            while ((piVar8 = piVar5, cVar1 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar8[2]))))) {
              cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x15)));
              piVar5 = ((int *)GEN_TOP(piVar8[1]));
              piVar4 = piVar8;
            }
          }
        }
        F_01046510(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar9);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) GEN_EDX_ARG,iVar3);
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80))) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80))) + 0x20))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80))) GEN_EDX_ARG,iVar3);
        }
        this = (*(undefined * PTR32 *)(gen_frame + 0x8));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
          this = (*(undefined * PTR32 *)(gen_frame + 0x8));
        }
      }
      piVar9 = piVar8;
    } while (piVar8 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10))));
  }
  piVar9 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
  if (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
    do {
      bVar6 = F_01046fb0(this GEN_EDX_ARG,param_1,piVar9[3],piVar9[4]);
      if (bVar6 != 0) {
        if (*((int *)GEN_TOP((param_1 + 0xc))) == 0) {
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
          return 0;
        }
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return 1;
      }
      if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
        piVar8 = ((int *)GEN_TOP(piVar9[2]));
        if (*((char *)GEN_TOP(((int)piVar8 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar8 + 0x15)));
          piVar9 = piVar8;
          piVar8 = ((int *)GEN_TOP(*piVar8));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar8 + 0x15)));
            piVar9 = piVar8;
            piVar8 = ((int *)GEN_TOP(*piVar8));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(piVar9[1]));
          piVar8 = piVar9;
          while ((piVar9 = piVar4, cVar1 == '\0' && (piVar8 == ((int *)GEN_TOP(piVar9[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
            piVar4 = ((int *)GEN_TOP(piVar9[1]));
            piVar8 = piVar9;
          }
        }
      }
    } while (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10))));
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0xffffffff;
}

/* ref: FUN_0104ef30 */
GEN_LIB GEN_FRAME byte F_0104ef30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x104ef30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  
  bVar1 = F_0104e560(param_1,param_2,(undefined1)param_3);
  return bVar1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ChannelManagerTmpl_LF */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104ef50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x104ef50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if (param_1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(4)));
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar1 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x12b1ef4));
    }
  }
  F_0104e230(this GEN_EDX_ARG,puVar1,param_2,(undefined1)param_5,param_6);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b206c));
  F_0104c2c0(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104cf30(((undefined *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = param_3;
  return (uint)this;
}

/* ref: FUN_0104efd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104efd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x104efd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  F_01050b90(this GEN_EDX_FWD,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x12b1fd4));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4))) = *((int *)GEN_TOP(((int)this + 0x18)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8))) = *((int *)GEN_TOP(((int)this + 0x18)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x15))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[6])REFP(0x12b1fe4));
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_3;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_0104f070 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104f070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104f070u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0104f0d0 */
GEN_LIB GEN_FRAME uint F_0104f0d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x104f0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0104f0e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f100 */
GEN_LIB GEN_FRAME uint F_0104f100(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x104f100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0104f110 */
GEN_LIB GEN_FRAME uint F_0104f110(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x104f110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0104f120 */
GEN_LIB GEN_FRAME uint F_0104f120(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x104f120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0104f130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f160 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104f160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104f160u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0104f1c0 */
GEN_LIB GEN_FRAME uint F_0104f1c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x104f1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0104f1d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f1f0 */
GEN_LIB GEN_FRAME uint F_0104f1f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x104f1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0104f200 */
GEN_LIB GEN_FRAME uint F_0104f200(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x104f200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0104f210 */
GEN_LIB GEN_FRAME uint F_0104f210(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x104f210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0104f220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f240 */
GEN_LIB GEN_FRAME uint F_0104f240(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x104f240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0104f250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f270 */
GEN_LIB GEN_FRAME uint F_0104f270(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x104f270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0104f280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f2a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f2a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f2d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104f2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104f2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0104f070(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0104f2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104f320u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0104f370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f3a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104f3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104f3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0104f160(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0104f3b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f3b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f3d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f3d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f3f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104f3f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0104f440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104f440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0104f460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104f460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0104f480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f480(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x104f480u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_0104f67d: ;
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
        goto LAB_0104f67d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_0104f6b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104f6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104f6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0104f070(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0104f6c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f6e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x104f6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_0104f8dd: ;
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
        goto LAB_0104f8dd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_0104f910 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0104f910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104f910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0104f160(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0104f920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_0104f940 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_0104f940(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_0104f960 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_0104f960(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104f960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_0104f980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104f980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x104f980u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = ((undefined4 *)GEN_TOP(F_0104f480(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_0104f070(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_0104f480(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0104fa60 */
GEN_LIB GEN_FRAME unsigned int F_0104fa60(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x104fa60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_0104fa80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104fa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x104fa80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = ((undefined4 *)GEN_TOP(F_0104f6e0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_0104f160(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_0104f6e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0104fb60 */
GEN_LIB GEN_FRAME unsigned int F_0104fb60(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x104fb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_0104fb80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104fb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104fb80u, gen_a0, gen_a1, gen_a2, 0u);
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
      piVar2 = ((int *)GEN_TOP(F_00c30fe0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,&(*(undefined1 * PTR32 *)&gen_args[1]),&(*(uint *)&gen_args[0]))));
      if (*piVar2 == *((int *)GEN_TOP(((int)this + 0x20)))) {
        return uVar3;
      }
      *puVar1 = 1;
      return uVar3;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x60))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
    return uVar3;
  }
  if ((*(uint *)&gen_args[0]) < 0x80000001) {
    if ((*(uint *)&gen_args[0]) == 0x80000000) goto LAB_0104fcc4;
    if ((*(uint *)&gen_args[0]) < 0x40000001) {
      if ((*(uint *)&gen_args[0]) == 0x40000000) {
        uVar3 = F_01050cf0(this GEN_EDX_ARG);
        return uVar3 | 0x40000000;
      }
      if ((*(uint *)&gen_args[0]) == 0) goto LAB_0104fcc4;
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
      goto LAB_0104fca1;
    }
    bVar4 = (*(uint *)&gen_args[0]) == 0x60000000;
  }
  else {
    if (((*(uint *)&gen_args[0]) == 0xa0000000) || ((*(uint *)&gen_args[0]) == 0xc0000000)) goto LAB_0104fcc4;
    bVar4 = (*(uint *)&gen_args[0]) == 0xe0000000;
  }
  if (!bVar4) {
LAB_0104fca1: ;
    piVar2 = ((int *)GEN_TOP(F_00c30fe0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined1 * PTR32 *)&gen_args[1]),&(*(uint *)&gen_args[0]))));
    if (*piVar2 == *((int *)GEN_TOP(((int)this + 0x20)))) {
      return uVar3;
    }
    *puVar1 = 1;
    return uVar3;
  }
LAB_0104fcc4: ;
  uVar3 = F_01050cf0(this GEN_EDX_ARG);
  return uVar3 | 0xe0000000;
}

/* ref: FUN_0104fce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104fce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104fce0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0104fd40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104fd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104fd40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0104fda0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104fda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104fda0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_0104f980(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_0104fe20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104fe20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x104fe20u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_0104fa80(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_0104fea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104fea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x104fea0u, gen_a0, 0u, 0u, 0u);
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
    F_0104fa80(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar4,0);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
    return uVar3;
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_0104ff50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0104ff50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x104ff50u, gen_a0, gen_a1, 0u, 0u);
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
  F_00c31050(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0xc)));
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
    F_0104fa80(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),puVar3,0);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_01050050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1050050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_0104ff50(param_1 GEN_EDX_FWD,this);
  uVar1 = F_0104ff50(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_01050070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1050070u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_0104fb80(this GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),&(*(char *)(gen_frame + 0x17)));
  (*(uint *)(gen_frame + 0x10)) = uVar3;
  if ((*(char *)(gen_frame + 0x17)) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    return (uint)piVar2;
  }
  this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x44))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,this,uVar3)));
  F_0104fea0(this_01 GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar1;
  if ((piVar2 != ((int *)GEN_TOP(0x40000000))) && (*((int *)GEN_TOP(((int)this + 0x24))) != 0)) {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(*piVar1));
    if ((*(int * PTR32 *)&gen_args[0]) != piVar1) {
      do {
        this_00 = ((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[4]));
        F_0104ff50(this_00 GEN_EDX_ARG,this_01);
        F_0104ff50(this_01 GEN_EDX_ARG,this_00);
        F_01048330(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
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
    F_0104f980(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar4,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    return (*(uint *)(gen_frame + 0x10));
  }
  (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x0));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_01050180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1050180u, gen_a0, gen_a1, 0u, 0u);
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
  F_01050070(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x44)));
  (*(undefined4 *)&gen_args[0]) = uVar2;
  (*pcVar1)(this);
  piVar3 = ((int *)GEN_TOP(F_00c30fe0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]))));
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

/* ref: FUN_010501f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010501f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10501f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_01050180(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Global::ClearConnections */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1050200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD);
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    F_0104e560(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),0);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ProcessOnePacket */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_01050240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1050240u, gen_a0, gen_a1, 0u, 0u);
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
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  if (iVar1 == 0) {
    bVar4 = F_0104ebe0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    if (bVar4 == 0) goto LAB_010502dc;
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
  F_0104e4d0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
  (*(int *)(gen_frame + 0xc)) = 0;
LAB_010502dc: ;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  F_01050b70();
  return;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_01050300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1050300u, gen_a0, gen_a1, 0u, 0u);
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
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
      ;
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_0104e4d0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
      ;
      F_01050b70();
      return;
    }
    (*(uint *)(gen_frame + 0x18)) = 0xe0000000;
    do {
      uVar4 = (*(uint *)(gen_frame + 0x18));
      F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
      ;
      (*(int *)(gen_frame + 0xc)) = 0;
      bVar5 = F_0104e950(uVar3 GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),uVar4,&(*(uint *)(gen_frame + 0x18)),REFG(float, 0x10ac050));
      if (bVar5 != 0) {
        F_0104e4d0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
        (*(int *)(gen_frame + 0xc)) = 0;
      }
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
      ;
      F_01050b70();
    } while (((*(uint *)(gen_frame + 0x18)) != 0) && ((*(uint *)(gen_frame + 0x18)) != 0xe0000000));
  }
  return;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ProcessAllPackets */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1050430u, gen_a0, gen_a1, 0u, 0u);
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
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    if (uVar4 == 0) {
      bVar3 = F_0104ebe0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      while (bVar3 != 0) {
        F_0104e4d0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
        (*(int *)(gen_frame + 0xc)) = 0;
        uVar4 = uVar4 + 1;
        bVar3 = F_0104ebe0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
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
      F_0104e4d0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ProcessPackets */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1050510u, gen_a0, gen_a1, 0u, 0u);
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
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          uVar3 = F_0104ed40(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          if (uVar3 != 1) break;
          F_0104e4d0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
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
      F_0104e4d0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ProcessPacketsLimited */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010505f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10505f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          if (param_1 <= uVar4) goto LAB_010506ad;
          uVar3 = F_0104ed40(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          if (uVar3 != 1) break;
          F_0104e4d0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
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
      F_0104e4d0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
LAB_010506ad: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ProcessPacketsTimed */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010506d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x10506d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
      ;
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      do {
        while( true ) {
          uVar3 = F_0104ed40(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          if (uVar3 != 1) break;
          F_0104e4d0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 + 1;
          (*(int *)(gen_frame + 0xc)) = 0;
          if (param_3 <= uVar5) {
            uVar6 = F_00427e30();
            if ((*(ulonglong *)(gen_frame + 0x18)) < uVar6) goto LAB_010507d4;
            uVar5 = 0;
          }
        }
      } while (uVar3 == 0);
    }
    else {
      F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
      ;
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_0104e4d0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
LAB_010507d4: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    F_01050b70();
  }
  return uVar4;
}

/* ref: Global::ReceiveNextPacket */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010507f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10507f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar2 = F_0104ebe0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_1);
    return bVar2;
  }
  return 0;
}

/* ref: ChannelManagerOnSingleConnectionTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ChannelManagerOnSingleConnectionTmpl */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1050860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_0104ef50(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b213c));
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  return (uint)this;
}

/* ref: ChannelManagerOnSingleConnectionTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010508a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10508a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x12b206c));
  F_0104bbc0(param_1 GEN_EDX_FWD);
  param_1[0x23] =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  F_0104dd40(param_1 + 0x23 GEN_EDX_ARG);
  param_1[0x19] =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104dbd0(param_1 + 0x19 GEN_EDX_ARG);
  F_0104e6b0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: ChannelManagerOnSingleConnectionTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::OnConnectionAdded */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_010508f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10508f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xbc))) == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = param_1;
    F_01050180(this GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_01050910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050910(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1050910u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x12b1f14))
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
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x12b1f24));
      goto LAB_01050976;
    }
  }
  puVar1 = ((undefined4 *)GEN_TOP(0x0));
LAB_01050976: ;
  F_0104efd0(param_1 GEN_EDX_ARG,param_2,param_3,puVar1);
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x12b21a4));
  return (uint)param_1;
}

/* ref: PrimaryEntityTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf1 */
GEN_LIB GEN_NOFRAME unsigned int F_010509c0(void)
{
  GEN_ENTER(0x10509c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: PrimaryEntityTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf2 */
GEN_LIB GEN_NOFRAME unsigned int F_010509d0(void)
{
  GEN_ENTER(0x10509d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: PrimaryEntityCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::~PrimaryEntityCoreTmpl */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_010509e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10509e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b1fe4));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  uVar2 = F_0104dff0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: PrimaryEntityTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050a10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1050a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[9]));
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x12b1fe4));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  param_1[9] = 0;
  F_0104dff0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::ZoneClient::RaptureChannelManager::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050a50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1050a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[2]));
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x12b20d4));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x12b206c));
  F_0104bbc0(param_1 GEN_EDX_ARG);
  param_1[0x23] =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  F_0104dd40(param_1 + 0x23 GEN_EDX_ARG);
  param_1[0x19] =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104dbd0(param_1 + 0x19 GEN_EDX_ARG);
  F_0104e6b0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PrimaryEntityFactoryClass_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1050ac0u, gen_a0, gen_a1, gen_a2, 0u);
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
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x12b1f14));
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
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x12b1f24));
  }
  F_0104efd0(this_00 GEN_EDX_ARG,param_1,param_2,puVar1);
  *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x12b21a4));
  return (uint)this_00;
}

/* ref: FUN_01050b60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01050b60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1050b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  return (uint)in_ecx;
}

/* ref: FUN_01050b70 */
GEN_LIB GEN_NOFRAME unsigned int F_01050b70(void)
{
  GEN_ENTER(0x1050b70u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_01050b80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_01050b80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1050b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21c0));
  return;
}

/* ref: Component::Network::IpcChannel::EntityBase::EntityBase */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050b90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1050b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[2] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21c0));
  in_ecx[3] = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: Component::Network::IpcChannel::EntityBase::EntityBaseCopy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1050bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b21c0));
  *(undefined4 *)(this + 8) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *(undefined4 *)(this + 0xc) = 0;
  return (uint)this;
}

/* ref: FUN_01050c00 */
GEN_LIB GEN_FRAME uint F_01050c00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1050c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_01050c10 */
GEN_LIB GEN_FRAME uint F_01050c10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1050c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Component::Network::IpcChannel::EntityBase::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050c20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1050c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x12b21c0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_01050c50 */
GEN_LIB GEN_FRAME uint F_01050c50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1050c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_01050c80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_01050c80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1050c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21c8));
  return;
}

/* ref: Component::Network::IpcChannel::NetBufferBase::NetBufferBase */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01050c90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1050c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21c8));
  return (uint)in_ecx;
}

/* ref: Component::Network::IpcChannel::NetBufferBase::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050ca0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1050ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x12b21c8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_01050cd0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_01050cd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1050cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21d0));
  return;
}

/* ref: Component::Network::IpcChannel::ChannelManagerBase::ChannelManagerBase */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01050ce0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1050ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21d0));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: Component::Network::IpcChannel::ChannelManagerBase::NextConnectionId */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01050cf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1050cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 4))) + 1;
  *((uint *)GEN_TOP((in_ecx + 4))) = uVar1;
  return uVar1;
}

/* ref: Component::Network::IpcChannel::ChannelManagerBase::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050d00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1050d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x12b21d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_01050d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1050d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return (uint)this;
}

/* ref: FUN_01050d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050d50(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1050d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: Global::UpdateClock */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1050d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  __time64_t _Var6;
  int local_10;
  ushort uStack_c;
  
  uVar5 = F_00427d90();
  uVar4 = (int)uVar5 - *((int *)GEN_TOP(((int)this + 0x20)));
  _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)this + 0x18))) = (int)_Var6;
  uVar5 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x20))) = uVar5;
  uVar5 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x28))) = uVar5;
  uVar2 = *(uint *)this;
  if ((int)uVar2 < 0) {
    if (uVar4 < 0xc) {
      if (uVar4 < 2) goto LAB_01050de3;
      uVar3 = uVar4 - 1 >> 1;
      uVar4 = uVar4 - uVar3;
      uVar2 = uVar2 + uVar3;
    }
    else {
      uVar4 = uVar4 - 10;
      uVar2 = uVar2 + 10;
    }
  }
  else {
    if ((int)uVar2 < 1) goto LAB_01050de3;
    if ((int)uVar2 < 10) {
      uVar4 = uVar4 + uVar2;
      *(undefined4 *)this = 0;
      goto LAB_01050de3;
    }
    uVar4 = uVar4 + 10;
    uVar2 = uVar2 - 10;
  }
  *(uint *)this = uVar2;
LAB_01050de3: ;
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + uVar4;
  uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
  if (1000 < uVar4) {
    dVar1 = (double)(int)uVar4;
    if ((int)uVar4 < 0) {
      dVar1 = GEN_X87(dVar1 + (double)*(float *)&REFG(undefined, 0x1088110));
    }
    uStack_c = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_c);
    local_10 = (int)(longlong)TRUNC(dVar1 * REFG(double, 0x1091858));
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + local_10;
    uVar2 = uVar4 / 1000;
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    *((uint *)GEN_TOP(((int)this + 8))) = uVar4 % 1000;
  }
  return uVar2;
}

/* ref: FUN_01050e40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01050e40(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1050e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  return in_ecx;
}

/* ref: FUN_01050e50 */
GEN_LIB GEN_NOFRAME unsigned int F_01050e50(void)
{
  GEN_ENTER(0x1050e50u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_01050e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1050e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_01050e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1050e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004cf330(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  return (-(uint)(uVar1 != 0) & 0x7fbef6ff) + 0x80410901;
}

/* ref: FUN_01050ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1050ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  while( true ) {
    uVar1 = F_004cf330(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
    if (uVar1 != 0) break;
    F_004cee80();
  }
  return 0;
}

/* ref: FUN_01050ed0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_01050ed0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1050ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0;
}

/* ref: FUN_01050ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1050ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ulonglong uVar1;
  
  uVar1 = F_004cf180(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  return (-(uint)((uVar1 & 0xff) != 0) & 0x7fbef6ff) + 0x80410901;
}

/* ref: FUN_01050f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01050f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1050f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ulonglong uVar1;
  
  while( true ) {
    uVar1 = F_004cf180(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
    if ((char)uVar1 != '\0') break;
    F_004cee80();
  }
  return 0;
}

/* ref: FUN_01050f40 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_01050f40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1050f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0;
}

/* ref: Global::ZlibUncompress */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_01050f50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1050f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = param_4;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = *(undefined4 *)param_2;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar1 = F_004cd3d0(((byte *)(gen_frame + 0x0)),((char *)REFP(0x10ed200)),0x38);
  if (uVar1 == 0) {
    uVar1 = F_004cd510(((byte *)(gen_frame + 0x0)),4);
    if (uVar1 != 1) {
      F_004ce970(((byte *)(gen_frame + 0x0)));
      if ((uVar1 != 2) && ((uVar1 != 0xfffffffb || ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) != 0)))) {
        return uVar1;
      }
      return 0xfffffffd;
    }
    *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20));
    uVar1 = F_004ce970(((byte *)(gen_frame + 0x0)));
  }
  return uVar1;
}

/* ref: __Wcrtomb */
GEN_LIB GEN_NOFRAME int F_01050fec(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1050fecu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  uint CodePage;
  undefined * plVar2;
  int iVar3;
  int * piVar4;
  LPCSTR lpDefaultChar;
  undefined * PTR32 * lpUsedDefaultChar;
  
  if ((*(undefined * PTR32 *)&gen_args[3]) == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00c54bcd();
    uVar1 = *((uint *)GEN_TOP((uVar1 + 8)));
    CodePage = F_00c54b81();
  }
  else {
    uVar1 = (*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[3]))));
    CodePage = (*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 4)))));
  }
  if (uVar1 == 0) {
    if ((ushort)(*(wchar_t *)&gen_args[1]) < 0x100) {
      *(*(char * PTR32 *)&gen_args[0]) = (char)(*(wchar_t *)&gen_args[1]);
      return 1;
    }
  }
  else {
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    plVar2 = F_010511e9(CodePage);
    lpUsedDefaultChar = &(*(undefined * PTR32 *)&gen_args[3]);
    lpDefaultChar = (LPCSTR)0x0;
    iVar3 = F_00c54b65(plVar2);
    iVar3 = gen_imp_WideCharToMultiByte(CodePage,0,&(*(wchar_t *)&gen_args[1]),1,(*(char * PTR32 *)&gen_args[0]),iVar3,lpDefaultChar,
                                (LPBOOL)lpUsedDefaultChar);
    if ((iVar3 != 0) && ((*(undefined * PTR32 *)&gen_args[3]) == ((undefined *)GEN_TOP(0x0)))) {
      return iVar3;
    }
  }
  piVar4 = F_00c51f85();
  *piVar4 = 0x2a;
  return -1;
}

/* ref: __Getcoll */
GEN_LIB GEN_NOFRAME unsigned long long F_01051073(void)
{
  GEN_ENTER(0x1051073u, 0u, 0u, 0u, 0u);
  GEN_SUSPECT(0x1051073u, "_Var3");
  uint uVar1;
  wchar_t * pwVar2;
  undefined8 _Var3;
  
  uVar1 = F_00c54bcd();
  uVar1 = *((uint *)GEN_TOP((uVar1 + 8)));
  pwVar2 = ((wchar_t *)GEN_TOP(F_00c54b81()));
  (*(wchar_t * PTR32 *)(((char *)&(_Var3) + 4))) = pwVar2;
  (*(uint *)((char *)&(_Var3))) = uVar1;
  return _Var3;
}

/* ref: FUN_01051089 */
GEN_LIB GEN_NOFRAME uint F_01051089(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1051089u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_01050fec(param_1,(wchar_t)param_2,param_3,param_4);
  return uVar1;
}

/* ref: __Getwctype */
GEN_LIB GEN_NOFRAME short F_01051094(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1051094u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL(0x8, 8);
  BOOL BVar1;
  
  BVar1 = gen_imp_GetStringTypeW(1,&(*(wchar_t *)&gen_args[0]),1,((ushort *)(gen_frame + 0x0)));
  return -(ushort)(BVar1 != 0) & ((ushort *)(gen_frame + 0x0))[0];
}

/* ref: __Getwctypes */
GEN_LIB GEN_NOFRAME wchar_t * F_010510b8(GEN_P(wchar_t * param_1, unsigned int gen_a0), GEN_P(wchar_t * param_2, unsigned int gen_a1), GEN_P(short * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10510b8u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(short * param_3 = (short *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  gen_imp_GetStringTypeW(1,param_1,(int)param_2 - (int)((int)(uintptr_t)param_1) >> 1,(LPWORD)param_3);
  return param_2;
}

/* ref: __Towlower */
GEN_LIB GEN_NOFRAME wchar_t F_010510d9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10510d9u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL(0x8, 8);
  int iVar1;
  wchar_t wVar2;
  
  (*(uint *)(gen_frame + 0x0)) = (uint)(ushort)(*(wchar_t *)&gen_args[0]);
  wVar2 = (*(wchar_t *)&gen_args[0]);
  if ((*(wchar_t *)&gen_args[0]) != L'\xffff') {
    if (((LPCWSTR)(*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[1])))) == (LPCWSTR)0x0) && ((ushort)(*(wchar_t *)&gen_args[0]) < 0x100)) {
      if ((ushort)((*(wchar_t *)&gen_args[0]) + L'﾿') < 0x1a) {
        wVar2 = (*(wchar_t *)&gen_args[0]) + L' ';
      }
    }
    else {
      iVar1 = F_00c7e497((LPCWSTR)(*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[1])))),0x100,&(*(wchar_t *)&gen_args[0]),1,(LPWSTR)&(*(uint *)(gen_frame + 0x0)),1);
      wVar2 = (*(wchar_t *)&gen_args[0]);
      if (iVar1 != 0) {
        wVar2 = (wchar_t)(*(uint *)(gen_frame + 0x0));
      }
    }
  }
  return wVar2;
}

/* ref: __Towupper */
GEN_LIB GEN_NOFRAME wchar_t F_0105113f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105113fu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL(0x8, 8);
  wchar_t wVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x0)) = (uint)(ushort)(*(wchar_t *)&gen_args[0]);
  wVar1 = (*(wchar_t *)&gen_args[0]);
  if ((*(wchar_t *)&gen_args[0]) != L'\xffff') {
    if (((LPCWSTR)(*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[1])))) == (LPCWSTR)0x0) && ((ushort)(*(wchar_t *)&gen_args[0]) < 0x100)) {
      if ((ushort)((*(wchar_t *)&gen_args[0]) + L'ﾟ') < 0x1a) {
        return (*(wchar_t *)&gen_args[0]) + L'￠';
      }
    }
    else {
      iVar2 = F_00c7e497((LPCWSTR)(*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[1])))),0x200,&(*(wchar_t *)&gen_args[0]),1,(LPWSTR)&(*(uint *)(gen_frame + 0x0)),1);
      wVar1 = (*(wchar_t *)&gen_args[0]);
      if (iVar2 != 0) {
        wVar1 = (wchar_t)(*(uint *)(gen_frame + 0x0));
      }
    }
  }
  return wVar1;
}

/* ref: __CreateLocForCP */
GEN_LIB GEN_NOFRAME uint F_010511a7(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x10511a7u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x28, 8);
  undefined * plVar1;
  
  (*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  (*(char *)(gen_frame + 0x0)) = '.';
  F_00c70690(param_1,0,((undefined1 *)(gen_frame + 0x1)),0x1f,10);
  plVar1 = F_00c4a66c(0,&(*(char *)(gen_frame + 0x0)));
  return (uint)plVar1;
}

/* ref: __GetLocaleForCP */
GEN_LIB GEN_NOFRAME undefined * F_010511e9(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x10511e9u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  undefined4 * Comperand;
  uint uVar1;
  undefined4 * puVar2;
  int * _Memory;
  
  _Memory = ((int *)GEN_TOP(0x0));
  do {
    Comperand = *(undefined4 * PTR32 *)(&REFG(undefined, 0x15e3ea8) + (param_1 % 0x3e) * 4);
    for (puVar2 = Comperand; puVar2 != ((undefined4 *)GEN_TOP(0x0)); puVar2 = ((undefined4 *)GEN_TOP(*puVar2))) {
      if (puVar2[1] == param_1) {
        if (_Memory != ((int *)GEN_TOP(0x0))) {
          F_00c49a41(((undefined *)GEN_TOP(_Memory[2])));
          F_00c4c68f(_Memory);
        }
        return ((undefined *)GEN_TOP(puVar2[2]));
      }
    }
    if (_Memory == ((int *)GEN_TOP(0x0))) {
      _Memory = F_00c54c2e(0xc);
      if (_Memory == ((int *)GEN_TOP(0x0))) {
        return ((undefined *)GEN_TOP(0x0));
      }
      uVar1 = F_010511a7(param_1);
      _Memory[2] = uVar1;
      if (uVar1 == 0) {
        F_00c4c68f(_Memory);
        return ((undefined *)GEN_TOP(0x0));
      }
      _Memory[1] = param_1;
    }
    *_Memory = (int)Comperand;
    puVar2 = ((undefined4 *)GEN_TOP(gen_imp_InterlockedCompareExchange((LONG *)(&REFG(undefined, 0x15e3ea8) + (param_1 % 0x3e) * 4),(LONG)_Memory,(LONG)Comperand
                       )));
    if (puVar2 == Comperand) {
      return ((undefined *)GEN_TOP(_Memory[2]));
    }
  } while( true );
}

/* ref: FUN_01051284 */
GEN_LIB GEN_NOFRAME uint F_01051284(void)
{
  GEN_ENTER(0x1051284u, 0u, 0u, 0u, 0u);
  undefined4 * _Memory;
  undefined4 * puVar1;
  undefined4 * extraout_EAX = 0;
  LONG * Target;
  
  Target = (LONG *)&REFG(undefined, 0x15e3ea8);
  do {
    puVar1 = ((undefined4 *)GEN_TOP(gen_imp_InterlockedExchange(Target,0)));
    _Memory = puVar1;
    while (_Memory != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1 = ((undefined4 *)GEN_TOP(*_Memory));
      F_00c49a41(((undefined *)GEN_TOP(_Memory[2])));
      F_00c4c68f(_Memory);
      _Memory = puVar1;
      puVar1 = extraout_EAX;
    }
    Target = Target + 1;
  } while ((int)Target < 0x15e3fa0);
  return (uint)puVar1;
}

/* ref: FUN_010512c4 */
GEN_LIB GEN_NOFRAME uint F_010512c4(void)
{
  GEN_ENTER(0x10512c4u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = F_00c47de6(((code *)REFP(0x1051284)));
  return -(uint)(iVar1 != 0) & 0x18;
}

/* ref: __Mbrtowc */
GEN_LIB GEN_NOFRAME int F_010512d7(GEN_P(wchar_t * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(undefined * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x10512d7u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a4;)
  ushort uVar1;
  uint uVar2;
  uint CodePage;
  undefined * plVar3;
  int iVar4;
  int * piVar5;
  ushort * puVar6;
  
  if ((param_2 == ((char *)GEN_TOP(0x0))) || (param_3 == 0)) {
    return 0;
  }
  if (*param_2 == '\0') {
    if (param_1 == ((wchar_t *)GEN_TOP(0x0))) {
      return 0;
    }
    *param_1 = L'\0';
    return 0;
  }
  if (param_5 == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00c54bcd();
    uVar2 = *((uint *)GEN_TOP((uVar2 + 8)));
    CodePage = F_00c54b81();
  }
  else {
    uVar2 = (*(uint *)((char *)(param_5)));
    CodePage = (*(uint *)(((char *)(param_5) + 4)));
  }
  if (uVar2 == 0) {
    if (param_1 != ((wchar_t *)GEN_TOP(0x0))) {
      *param_1 = (ushort)(byte)*param_2;
    }
    return 1;
  }
  plVar3 = F_010511e9(CodePage);
  if (*param_4 == 0) {
    if (plVar3 == ((undefined *)GEN_TOP(0x0))) {
      puVar6 = F_00c5476c();
      uVar1 = puVar6[(byte)*param_2] & 0x8000;
    }
    else {
      uVar1 = (*((uchar *)GEN_TOP(((((char *)(*(undefined * PTR32 *)(((char *)(plVar3) + 4))) + 24) + ((byte)*param_2 + 5) * 1))))) & 4;
    }
    if (uVar1 == 0) {
      iVar4 = gen_imp_MultiByteToWideChar(CodePage,9,param_2,1,param_1,(uint)(param_1 != ((wchar_t *)GEN_TOP(0x0))));
      if (iVar4 != 0) {
        return 1;
      }
      goto LAB_0105138c;
    }
    uVar2 = F_00c54b65(plVar3);
    if (param_3 < uVar2) {
      *(char *)param_4 = *param_2;
      return -2;
    }
    iVar4 = F_00c54b65(plVar3);
    if (1 < iVar4) {
      uVar2 = (uint)(param_1 != ((wchar_t *)GEN_TOP(0x0)));
      iVar4 = F_00c54b65(plVar3);
      iVar4 = gen_imp_MultiByteToWideChar(CodePage,9,param_2,iVar4,param_1,uVar2);
      if (iVar4 != 0) goto LAB_0105137d;
    }
    if (param_2[1] != '\0') goto LAB_0105137d;
  }
  else {
    *((char *)GEN_TOP(((int)param_4 + 1))) = *param_2;
    iVar4 = F_00c54b65(plVar3);
    if ((1 < iVar4) &&
       (iVar4 = gen_imp_MultiByteToWideChar(CodePage,9,(LPCSTR)param_4,2,param_1,
                                    (uint)(param_1 != ((wchar_t *)GEN_TOP(0x0)))), iVar4 != 0)) {
      *param_4 = 0;
LAB_0105137d: ;
      iVar4 = F_00c54b65(plVar3);
      return iVar4;
    }
  }
  *param_4 = 0;
LAB_0105138c: ;
  piVar5 = F_00c51f85();
  *piVar5 = 0x2a;
  return -1;
}

/* ref: __Stoulx */
GEN_LIB GEN_NOFRAME uint F_0105144a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105144au, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  int iVar2;
  undefined * pvVar3;
  int * piVar4;
  char cVar5;
  byte * pbVar6;
  byte * pbVar7;
  byte * pbVar8;
  uint uVar9;
  uint local_10;
  uint local_c;
  byte local_5;
  
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != ((undefined4 *)GEN_TOP(0x0))) {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = 0;
  }
  bVar1 = *(*(byte * PTR32 *)&gen_args[0]);
  pbVar6 = (*(byte * PTR32 *)&gen_args[0]);
  while (iVar2 = F_00c4873c((uint)bVar1), iVar2 != 0) {
    pbVar6 = pbVar6 + 1;
    bVar1 = *pbVar6;
  }
  local_5 = *pbVar6;
  if ((local_5 == 0x2d) || (local_5 == 0x2b)) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    local_5 = 0x2b;
  }
  if ((((int)(*(uint *)&gen_args[2]) < 0) || ((*(uint *)&gen_args[2]) == 1)) || (0x24 < (int)(*(uint *)&gen_args[2]))) {
    if ((*(undefined4 * PTR32 *)&gen_args[1]) == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(byte * PTR32 *)&gen_args[0]);
    return 0;
  }
  pbVar7 = pbVar6;
  if ((int)(*(uint *)&gen_args[2]) < 1) {
    if (*pbVar6 != 0x30) {
      (*(uint *)&gen_args[2]) = 10;
      goto LAB_010514f7;
    }
    if ((pbVar6[1] != 0x78) && (pbVar6[1] != 0x58)) {
      (*(uint *)&gen_args[2]) = 8;
      goto LAB_010514f7;
    }
    (*(uint *)&gen_args[2]) = 0x10;
  }
  else if ((((*(uint *)&gen_args[2]) != 0x10) || (*pbVar6 != 0x30)) || ((pbVar6[1] != 0x78 && (pbVar6[1] != 0x58))))
  goto LAB_010514f7;
  pbVar6 = pbVar6 + 2;
  pbVar7 = pbVar6;
LAB_010514f7: ;
  for (; *pbVar6 == 0x30; pbVar6 = pbVar6 + 1) {
  }
  local_c = 0;
  local_10 = 0;
  uVar9 = (*(uint *)&gen_args[2]);
  iVar2 = F_00c4ef4f((int)(char)*pbVar6);
  pvVar3 = F_00c48f80(((char *)REFP(0x12b21d4)),iVar2,uVar9);
  pbVar8 = pbVar6;
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    cVar5 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[2]) + 3));
  }
  else {
    do {
      cVar5 = (char)pvVar3 + ',';
      local_10 = local_c;
      local_c = local_c * (*(uint *)&gen_args[2]) + (int)cVar5;
      pbVar8 = pbVar8 + 1;
      uVar9 = (*(uint *)&gen_args[2]);
      iVar2 = F_00c4ef4f((int)(char)*pbVar8);
      pvVar3 = F_00c48f80(((char *)REFP(0x12b21d4)),iVar2,uVar9);
    } while (pvVar3 != ((undefined *)GEN_TOP(0x0)));
  }
  if (pbVar7 == pbVar8) {
    if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(byte * PTR32 *)&gen_args[0]);
    }
    return 0;
  }
  iVar2 = (int)(pbVar8 - (int)(char)(&REFG(undefined, 0x12b21fc))[(int)((*(uint *)&gen_args[2]))]) - (int)pbVar6;
  if ((-1 < iVar2) &&
     (((pbVar8 - (int)(char)(&REFG(undefined, 0x12b21fc))[(int)((*(uint *)&gen_args[2]))] != pbVar6 && -1 < iVar2 ||
       (local_c < local_c - (int)cVar5)) || ((local_c - (int)cVar5) / (*(uint *)&gen_args[2]) != local_10)))) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x22;
    if ((*(undefined4 * PTR32 *)&gen_args[3]) != ((undefined4 *)GEN_TOP(0x0))) {
      *(*(undefined4 * PTR32 *)&gen_args[3]) = 1;
    }
    local_c = 0xffffffff;
    local_5 = 0x2b;
  }
  if (local_5 == 0x2d) {
    local_c = -local_c;
  }
  if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = pbVar8;
    return local_c;
  }
  return local_c;
}

/* ref: __Stoul */
GEN_LIB GEN_NOFRAME uint F_010515e6(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x10515e6u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0105144a(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: __Stolx */
GEN_LIB GEN_NOFRAME uint F_01051600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051600u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  byte * pbVar6;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[0]);
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
    piVar5 = (int *)&(*(byte * PTR32 *)&gen_args[0]);
  }
  bVar1 = *(*(byte * PTR32 *)&gen_args[0]);
  pbVar6 = (*(byte * PTR32 *)&gen_args[0]);
  while (iVar3 = F_00c4873c((uint)bVar1), iVar3 != 0) {
    pbVar6 = pbVar6 + 1;
    bVar1 = *pbVar6;
  }
  bVar1 = *pbVar6;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT13(bVar1,GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 0, 3))));
    pbVar6 = pbVar6 + 1;
  }
  else {
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT13(0x2b,GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 0, 3))));
  }
  uVar4 = F_0105144a(pbVar6,piVar5,(*(undefined4 *)&gen_args[2]),(*(undefined4 * PTR32 *)&gen_args[3]));
  if (pbVar6 == ((byte *)GEN_TOP(*piVar5))) {
    *piVar5 = (int)pbVar2;
  }
  if (((pbVar2 != ((byte *)GEN_TOP(*piVar5))) || (uVar4 == 0)) &&
     (((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) != '+' || (uVar4 < 0x80000000)))) {
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) != '-') {
      return uVar4;
    }
    if (uVar4 < 0x80000001) {
      return -uVar4;
    }
  }
  piVar5 = F_00c51f85();
  *piVar5 = 0x22;
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != ((undefined4 *)GEN_TOP(0x0))) {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = 1;
  }
  return ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) == '-') + 0x7fffffff;
}

/* ref: __Stollx */
GEN_LIB GEN_NOFRAME ulonglong F_010516a5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10516a5u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  int * piVar4;
  byte * pbVar5;
  ulonglong uVar6;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[0]);
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
    piVar4 = (int *)&(*(byte * PTR32 *)&gen_args[0]);
  }
  bVar1 = *(*(byte * PTR32 *)&gen_args[0]);
  pbVar5 = (*(byte * PTR32 *)&gen_args[0]);
  while (iVar3 = F_00c4873c((uint)bVar1), iVar3 != 0) {
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  bVar1 = *pbVar5;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT13(bVar1,GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 0, 3))));
    pbVar5 = pbVar5 + 1;
  }
  else {
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT13(0x2b,GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 0, 3))));
  }
  uVar6 = F_01051782(pbVar5,piVar4,(*(undefined4 *)&gen_args[2]),(*(undefined4 * PTR32 *)&gen_args[3]));
  if (pbVar5 == ((byte *)GEN_TOP(*piVar4))) {
    *piVar4 = (int)pbVar2;
  }
  if (((pbVar2 != ((byte *)GEN_TOP(*piVar4))) || (uVar6 == 0)) &&
     (((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) != '+' || (uVar6 < 0x8000000000000000)))) {
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) != '-') {
      return uVar6;
    }
    if (uVar6 < 0x8000000000000001) {
      return CONCAT44(-((int)(uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6);
    }
  }
  piVar4 = F_00c51f85();
  *piVar4 = 0x22;
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != ((undefined4 *)GEN_TOP(0x0))) {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = 1;
  }
  if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) == '-') {
    uVar6 = 0x8000000000000000;
  }
  else {
    uVar6 = 0x7fffffffffffffff;
  }
  return uVar6;
}

/* ref: __Stoll */
GEN_LIB GEN_NOFRAME uint F_01051768(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1051768u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ulonglong uVar1;
  
  uVar1 = F_010516a5(param_1,param_2,param_3,0);
  return (uint)uVar1;
}

/* ref: __Stoullx */
GEN_LIB GEN_NOFRAME ulonglong F_01051782(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1051782u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined * pvVar6;
  int * piVar7;
  char cVar8;
  byte * pbVar9;
  byte * pbVar10;
  byte * pbVar11;
  gen_size32 sVar12;
  int local_1c;
  int local_18;
  char local_6;
  byte local_5;
  
  if (param_4 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_4 = 0;
  }
  bVar1 = *param_1;
  pbVar9 = param_1;
  while (iVar5 = F_00c4873c((uint)bVar1), iVar5 != 0) {
    pbVar9 = pbVar9 + 1;
    bVar1 = *pbVar9;
  }
  local_5 = *pbVar9;
  if ((local_5 == 0x2d) || (local_5 == 0x2b)) {
    pbVar9 = pbVar9 + 1;
  }
  else {
    local_5 = 0x2b;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) goto LAB_01051979;
  pbVar10 = pbVar9;
  if ((int)param_3 < 1) {
    if (*pbVar9 == 0x30) {
      if ((pbVar9[1] == 0x78) || (pbVar9[1] == 0x58)) {
        param_3 = 0x10;
        goto LAB_01051826;
      }
      param_3 = 8;
    }
    else {
      param_3 = 10;
    }
  }
  else if (((param_3 == 0x10) && (*pbVar9 == 0x30)) && ((pbVar9[1] == 0x78 || (pbVar9[1] == 0x58))))
  {
LAB_01051826: ;
    pbVar9 = pbVar9 + 2;
    pbVar10 = pbVar9;
  }
  for (; *pbVar9 == 0x30; pbVar9 = pbVar9 + 1) {
  }
  local_6 = '\0';
  sVar12 = param_3;
  iVar5 = F_00c4ef4f((int)(char)*pbVar9);
  pvVar6 = F_00c48f80(((char *)REFP(0x12b2224)),iVar5,sVar12);
  pbVar11 = pbVar9;
  cVar8 = local_6;
  uVar4 = 0;
  uVar3 = 0;
  while (uVar2 = uVar4, pvVar6 != ((undefined *)GEN_TOP(0x0))) {
    cVar8 = (char)pvVar6 - 0x24;
    pbVar11 = pbVar11 + 1;
    sVar12 = param_3;
    iVar5 = F_00c4ef4f((int)(char)*pbVar11);
    pvVar6 = F_00c48f80(((char *)REFP(0x12b2224)),iVar5,sVar12);
    uVar4 = (longlong)(int)param_3 * uVar2 + (longlong)(int)cVar8;
    uVar3 = uVar2;
  }
  if (pbVar10 != pbVar11) {
    iVar5 = (int)(pbVar11 - (int)(char)(&REFG(undefined, 0x12b224c))[(int)(param_3)]) - (int)pbVar9;
    if ((-1 < iVar5) &&
       (((pbVar11 - (int)(char)(&REFG(undefined, 0x12b224c))[(int)(param_3)] != pbVar9 && -1 < iVar5 ||
         (uVar2 < uVar2 - (longlong)(int)cVar8)) ||
        ((uVar2 - (longlong)(int)cVar8) / (ulonglong)(longlong)(int)param_3 != uVar3)))) {
      piVar7 = F_00c51f85();
      *piVar7 = 0x22;
      if (param_4 != ((undefined4 *)GEN_TOP(0x0))) {
        *param_4 = 1;
      }
      uVar2 = 0xffffffffffffffff;
      local_5 = 0x2b;
    }
    local_18 = (int)(uVar2 >> 0x20);
    local_1c = (int)uVar2;
    if (local_5 == 0x2d) {
      uVar2 = CONCAT44(-(local_18 + (uint)(local_1c != 0)),-local_1c);
    }
    if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
      return uVar2;
    }
    *param_2 = pbVar11;
    return uVar2;
  }
LAB_01051979: ;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = param_1;
  }
  return 0;
}

/* ref: __Stoull */
GEN_LIB GEN_NOFRAME uint F_01051986(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1051986u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ulonglong uVar1;
  
  uVar1 = F_01051782(param_1,param_2,param_3,0);
  return (uint)uVar1;
}

/* ref: __Stofx */
GEN_LIB GEN_NOFRAME float F_010519a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10519a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  double dVar1;
  
  dVar1 = F_010519e1(param_1,param_2,param_3,param_4);
  return (float)dVar1;
}

/* ref: __Stof */
GEN_LIB GEN_NOFRAME float F_010519c2(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * PTR32 * param_2, unsigned int gen_a1), GEN_P(gen_long param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x10519c2u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * PTR32 * param_2 = (char * PTR32 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_long param_3 = (gen_long)gen_a2;)
  double dVar1;
  
  dVar1 = F_01051a4a(param_1,param_2,param_3);
  return (float)dVar1;
}

/* ref: FUN_010519e1 */
GEN_LIB GEN_NOFRAME double F_010519e1(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10519e1u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  double dVar1;
  int * piVar2;
  int iVar3;
  double local_c;
  
  piVar2 = F_00c51f85();
  iVar3 = *piVar2;
  piVar2 = F_00c51f85();
  *piVar2 = 0;
  local_c = F_00c52474(param_1,param_2);
  piVar2 = F_00c51f85();
  *param_4 = *piVar2;
  piVar2 = F_00c51f85();
  dVar1 = REFG(double, 0x10944b8);
  *piVar2 = iVar3;
  for (iVar3 = param_3; 0 < iVar3; iVar3 = iVar3 - 1) {
    local_c = GEN_X87(local_c * dVar1);
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    do {
      iVar3 = iVar3 - 1;
      local_c = GEN_X87(local_c / dVar1);
    } while (iVar3 != 0);
  }
  return local_c;
}

/* ref: __Stod */
GEN_LIB GEN_NOFRAME double F_01051a4a(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * PTR32 * param_2, unsigned int gen_a1), GEN_P(gen_long param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1051a4au, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * PTR32 * param_2 = (char * PTR32 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_long param_3 = (gen_long)gen_a2;)
  GEN_FRAME_DECL(0x8, 8);
  double dVar1;
  
  dVar1 = F_010519e1(param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x0)));
  return dVar1;
}

/* ref: FUN_01051a67 */
GEN_LIB GEN_NOFRAME double F_01051a67(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1051a67u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  double dVar1;
  
  dVar1 = F_010519e1(param_1,param_2,param_3,param_4);
  return dVar1;
}

/* ref: __Stold */
GEN_LIB GEN_NOFRAME double F_01051a72(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * PTR32 * param_2, unsigned int gen_a1), GEN_P(gen_long param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1051a72u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * PTR32 * param_2 = (char * PTR32 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_long param_3 = (gen_long)gen_a2;)
  double dVar1;
  
  dVar1 = F_01051a4a(param_1,param_2,param_3);
  return dVar1;
}

/* ref: std::ios_base::precision */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01051a8a(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1051a8au, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x18);
  *(undefined4 *)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0x1c) = param_2;
  return uVar1;
}

/* ref: FUN_01051aa7 */
GEN_LIB GEN_NOFRAME uint F_01051aa7(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1051aa7u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) & ~param_2;
  return param_1;
}

/* ref: std::sifun */
GEN_LIB GEN_NOFRAME unsigned int F_01051ab9(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1051ab9u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *(uint *)(param_1 + 0x14) = ~param_2 & *(uint *)(param_1 + 0x14) | param_2 & 0xffffU;
  return 0;
}

/* ref: std::sbfun */
GEN_LIB GEN_NOFRAME unsigned int F_01051ad7(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1051ad7u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  if (param_2 == 8) {
    uVar1 = 0x400;
  }
  else if (param_2 == 10) {
    uVar1 = 0x200;
  }
  else if (param_2 == 0x10) {
    uVar1 = 0x800;
  }
  else {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x14) =
       *(uint *)(param_1 + 0x14) ^ (*(uint *)(param_1 + 0x14) ^ uVar1) & 0xe00;
  return 0;
}

/* ref: FUN_01051b18 */
GEN_LIB GEN_NOFRAME uint F_01051b18(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1051b18u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = param_3;
  return param_1;
}

/* ref: FUN_01051b2e */
GEN_LIB GEN_NOFRAME uint F_01051b2e(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1051b2eu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = param_3;
  return param_1;
}

/* ref: FUN_01051b44 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01051b44(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1051b44u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_01051b5a */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01051b5a(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1051b5au, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  *in_ecx = param_2;
  in_ecx[2] = param_3;
  in_ecx[3] = param_4;
  return (uint)in_ecx;
}

/* ref: FUN_01051b76 */
GEN_LIB GEN_NOFRAME uint F_01051b76(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1051b76u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = ((code *)REFP(0x1051aa7));
  param_1[1] = param_2;
  return (uint)param_1;
}

/* ref: FUN_01051b8c */
GEN_LIB GEN_NOFRAME uint F_01051b8c(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1051b8cu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = ((code *)REFP(0x1051ab9));
  param_1[1] = param_2;
  return (uint)param_1;
}

/* ref: FUN_01051ba2 */
GEN_LIB GEN_NOFRAME uint F_01051ba2(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1051ba2u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = ((code *)REFP(0x1051ad7));
  param_1[1] = param_2;
  return (uint)param_1;
}

/* ref: FUN_01051bb8 */
GEN_LIB GEN_NOFRAME uint F_01051bb8(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1051bb8u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  param_1[2] = param_2;
  *param_1 = ((code *)REFP(0x1051b18));
  param_1[3] = param_3;
  return (uint)param_1;
}

/* ref: FUN_01051bd4 */
GEN_LIB GEN_NOFRAME uint F_01051bd4(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1051bd4u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  param_1[2] = param_2;
  *param_1 = ((code *)REFP(0x1051b2e));
  param_1[3] = param_3;
  return (uint)param_1;
}

/* ref: __vsnprintf_l */
GEN_LIB GEN_NOFRAME int F_01051bf0(GEN_P(char * _DstBuf, unsigned int gen_a0), GEN_P(gen_size32 _MaxCount, unsigned int gen_a1), GEN_P(char * _Format, unsigned int gen_a2), GEN_P(undefined * _Locale, unsigned int gen_a3), GEN_P(undefined * _ArgList, unsigned int gen_a4))
{
  GEN_ENTER(0x1051bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * _DstBuf = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a1;)
  GEN_PIN(char * _Format = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x24, 12);
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = ((char *)GEN_TOP(0x0));
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 - 1) {
    *ppcVar4 = ((char *)GEN_TOP(0x0));
    ppcVar4 = ppcVar4 + 1;
  }
  if (_Format == ((char *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  else if ((_MaxCount == 0) || (_DstBuf != ((char *)GEN_TOP(0x0)))) {
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = _MaxCount;
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 12))) = 0x42;
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = _DstBuf;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = _DstBuf;
    uVar2 = F_00c56a1d(((undefined *)(gen_frame + 0x0)),_Format,_Locale,_ArgList);
    if (_DstBuf != ((char *)GEN_TOP(0x0))) {
      iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) - 1;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = iVar3;
      if (iVar3 < 0) {
        F_00c567c4(0,((undefined *)(gen_frame + 0x0)));
      }
      else {
        *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = '\0';
      }
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: __vsnprintf */
GEN_LIB GEN_NOFRAME int F_01051c9c(GEN_P(char * _Dest, unsigned int gen_a0), GEN_P(gen_size32 _Count, unsigned int gen_a1), GEN_P(char * _Format, unsigned int gen_a2), GEN_P(undefined * _Args, unsigned int gen_a3))
{
  GEN_ENTER(0x1051c9cu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * _Dest = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _Count = (gen_size32)gen_a1;)
  GEN_PIN(char * _Format = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _Args = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  
  iVar1 = F_01051bf0(_Dest,_Count,_Format,((undefined *)GEN_TOP(0x0)),_Args);
  return iVar1;
}

/* ref: __ArrayUnwind */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_01051ccb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051ccbu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x4c, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x3c);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  
  (*(undefined4 *)(gen_frame + 0x34)) = 0x14;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = &REFG(undefined, 0x12f7560);
  (*(uint volatile *)(gen_frame + 0x2c)) = 0x1051cd7;
  (*(gen_code32 *)(gen_frame + 0x28)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ 0x12f7560;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  (*(undefined1 * PTR32 *)(gen_frame + 0x1c)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x24));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x24)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0x0));
  while( true ) {
    (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) - 1;
    if ((*(int *)&gen_args[2]) < 0) break;
    (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) - (*(uint *)&gen_args[1]))));
    (((code *)GEN_TOP((*(gen_code32 *)&gen_args[3]))))();
  }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x24));
  return 0;
}

/* ref: FUN_01051cee */
GEN_LIB GEN_NOFRAME uint F_01051cee(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1051ceeu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ebp - 0x1c))) = *((undefined4 *)GEN_TOP((in_ebp - 0x14)));
  *((undefined4 *)GEN_TOP((in_ebp - 0x20))) = **((undefined4 * PTR32 *)GEN_TOP((in_ebp - 0x1c)));
  if (**((int * PTR32 *)GEN_TOP((in_ebp - 0x20))) != -0x1f928c9d) {
    *((undefined4 *)GEN_TOP((in_ebp - 0x24))) = 0;
    return *((uint *)GEN_TOP((in_ebp - 0x24)));
  }
                    
  F_00c5aa82();
}

/* ref: FUN_01051d17 */
GEN_LIB GEN_NOFRAME unsigned int F_01051d17(GEN_P(int in_ebp, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x1051d17u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = 0x1051d26;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
  return;
}

/* ref: `eh_vector_destructor_iterator' */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_01051d29(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051d29u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x44, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f7580);
  (*(uint volatile *)(gen_frame + 0x24)) = 0x1051d35;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f7580;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * (*(int *)&gen_args[2]))));
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
  while( true ) {
    (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) - 1;
    if ((*(int *)&gen_args[2]) < 0) break;
    (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) - uVar1)));
    (((code *)GEN_TOP((*(gen_code32 *)&gen_args[3]))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_01051d74((gen_frame + 0x2c));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_01051d74 */
GEN_LIB GEN_NOFRAME uint F_01051d74(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1051d74u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  if (*((int *)GEN_TOP((in_ebp - 0x1c))) == 0) {
    F_01051ccb(*((undefined * PTR32 *)GEN_TOP((in_ebp + 8))),*((uint *)GEN_TOP((in_ebp + 0xc))),*((int *)GEN_TOP((in_ebp + 0x10))),
                  *((gen_code32 *)GEN_TOP((in_ebp + 0x14))));
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}

/* ref: `eh_vector_constructor_iterator' */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_01051d8c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x1051d8cu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x4c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined * pvVar1;
  
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f75a0);
  (*(uint volatile *)(gen_frame + 0x28)) = 0x1051d98;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f75a0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
  for ((*(int *)(gen_frame + 0x14)) = 0; pvVar1 = (*(undefined * PTR32 *)&gen_args[0]), (*(int *)(gen_frame + 0x14)) < (*(int *)&gen_args[2]); (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1) {
    (((code *)GEN_TOP((*(gen_code32 *)&gen_args[3]))))((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)pvVar1 + (*(uint *)&gen_args[1]))));
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_01051dd9((gen_frame + 0x30));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 0;
}

/* ref: FUN_01051dd9 */
GEN_LIB GEN_NOFRAME uint F_01051dd9(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1051dd9u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  if (*((int *)GEN_TOP((in_ebp - 0x20))) == 0) {
    F_01051ccb(*((undefined * PTR32 *)GEN_TOP((in_ebp + 8))),*((uint *)GEN_TOP((in_ebp + 0xc))),*((int *)GEN_TOP((in_ebp - 0x1c))),
                  *((gen_code32 *)GEN_TOP((in_ebp + 0x18))));
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}

/* ref: _memmove_s */
GEN_LIB GEN_NOFRAME int F_01051df1(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1051df1u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int * piVar1;
  int eVar2;
  
  if (param_4 == 0) {
LAB_01051e3f: ;
    eVar2 = 0;
  }
  else {
    if ((param_1 == 0) || (param_3 == 0)) {
      piVar1 = F_00c51f85();
      eVar2 = 0x16;
      *piVar1 = 0x16;
    }
    else {
      if (param_4 <= param_2) {
        F_00c46e20(param_1,param_3,param_4);
        goto LAB_01051e3f;
      }
      piVar1 = F_00c51f85();
      eVar2 = 0x22;
      *piVar1 = 0x22;
    }
    F_00c4c305();
  }
  return eVar2;
}

/* ref: Global::libm_sse2_acosf */
GEN_LIB GEN_NOFRAME float F_01051e46(GEN_P(float in_xmm0, float gen_a0))
{
  GEN_ENTER(0x1051e46u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float in_xmm0 = (float)gen_a0;)
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = ABS(in_xmm0);
  if ((int)gen_fl2bits(fVar2) + 0xc2800000U < 0x1ddb3d7) {
    uVar3 = (int)gen_fl2bits(fVar2) + 0xc2800000U >> 0x10 & 0x1fe;
    iVar1 = uVar3 * 4;
    fVar2 = gen_bits2f((uint)gen_fl2bits(in_xmm0) & 0xfffe0000 | 0x10000);
    fVar5 = fVar2 * SQRT(1.0 - in_xmm0 * in_xmm0);
    fVar7 = ((in_xmm0 - fVar2) * (in_xmm0 + fVar2)) /
            (in_xmm0 * *(float *)(&REFG(undefined, 0x12b2a80) + uVar3 * 2) + fVar5);
    fVar5 = fVar5 - in_xmm0 * *(float *)(&REFG(undefined, 0x12b2a80) + uVar3 * 2);
    fVar2 = REFG(float, 0x12b2e84) -
            gen_bits2f(*(uint *)(&REFG(undefined, 0x12b2284) + iVar1) ^ (uint)gen_fl2bits(in_xmm0) & 0x80000000);
    fVar6 = fVar2 - fVar7;
    return (((fVar5 * 0.16666667) * (fVar5 * fVar5) +
            (REFG(float, 0x12b2e80) -
            gen_bits2f(*(uint *)(&REFG(undefined, 0x12b2280) + iVar1) ^ (uint)gen_fl2bits(in_xmm0) & 0x80000000)))
           - (fVar7 - (fVar2 - fVar6))) + fVar6;
  }
  uVar3 = (int)gen_fl2bits(in_xmm0) >> 0x1f;
  if ((int)gen_fl2bits(fVar2) + 0xc0a24c29U < 0x204c29) {
    fVar8 = gen_bits2f((uint)gen_fl2bits(in_xmm0) & 0xfffff000);
    fVar6 = 1.0 - fVar8 * fVar8;
    fVar5 = (in_xmm0 + fVar8) * (in_xmm0 - fVar8);
    fVar7 = SQRT(fVar6 - fVar5);
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar7) & 0xfffe0000 |
                       (uint)gen_fl2bits(in_xmm0) & 0x80000000 | 0x10000);
    uVar3 = -((uVar3 & 8) >> 3);
    uVar4 = ((uint)gen_fl2bits(fVar7) >> 0x10) - 0x3d80 & 0xfffe;
    fVar7 = fVar7 * *(float *)(&REFG(undefined, 0x12b2a80) + uVar4 * 2);
    fVar8 = (fVar8 * fVar2 - fVar7) + (in_xmm0 - fVar8) * fVar2;
    iVar1 = uVar4 * 4;
    return gen_bits2f(uVar3 & 0x80000000 ^
                      (uint)gen_fl2bits((((fVar8 * -0.16666667) * (fVar8 * fVar8) +
                                         (gen_bits2f(uVar3 & *(uint *)&REFG(undefined, 0x12b2e90)) +
                                         *(float *)(&REFG(undefined, 0x12b2280) + iVar1))) +
                                        ((fVar6 - fVar2 * fVar2) - fVar5) /
                                        ((fVar7 + fVar7) + fVar8)) +
                                        (gen_bits2f(uVar3 & *(uint *)&REFG(undefined, 0x12b2e94)) +
                                        *(float *)(&REFG(undefined, 0x12b2284) + iVar1))));
  }
  if ((int)gen_fl2bits(fVar2) + 0xc8800000U < 0x6000000) {
    fVar2 = in_xmm0 * in_xmm0;
    return (((fVar2 * fVar2) * (in_xmm0 * -0.075) + ((in_xmm0 * -0.16666667) * fVar2 + REFG(float, 0x12b2e80))
            ) - (in_xmm0 - (REFG(float, 0x12b2e84) + (in_xmm0 - REFG(float, 0x12b2e84))))) - (in_xmm0 - REFG(float, 0x12b2e84));
  }
  if ((int)gen_fl2bits(fVar2) + 0xc0820000U < 0x20000) {
    fVar5 = 0.5 - ABS(in_xmm0) * 0.5;
    fVar6 = SQRT(fVar5);
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar6) & 0xfffff000);
    return gen_bits2f((uint)gen_fl2bits(gen_bits2f(uVar3 & REFG(uint, 0x12b2ea4)) +
                                        ((((((fVar5 * -0.075 + -0.16666667) +
                                            (fVar5 * fVar5) * -0.04464286) * fVar5) *
                                           (fVar6 + fVar6) + gen_bits2f(uVar3 & REFG(uint, 0x12b2ea0))) -
                                         ((fVar5 - fVar2 * fVar2) -
                                         (fVar6 - fVar2) * ((fVar6 + fVar6) - (fVar6 - fVar2))) /
                                         fVar6) - (fVar6 + fVar6))) ^
                      uVar3 & 0x80000000 ^ 0x80000000);
  }
  if ((uint)gen_fl2bits(fVar2) < 0x37800000) {
    return (REFG(float, 0x12b2e80) + ((REFG(float, 0x12b2e84) + (in_xmm0 - REFG(float, 0x12b2e84))) - in_xmm0)) -
           (in_xmm0 - REFG(float, 0x12b2e84));
  }
  if (fVar2 != 1.0) {
    if ((uint)gen_fl2bits(fVar2) < 0x7f800001) {
      return -NAN;
    }
    return in_xmm0 + 0.0;
  }
  return gen_bits2f(uVar3 & REFG(uint, 0x12b2ea4)) + gen_bits2f(REFG(uint, 0x12b2ea0) & uVar3);
}

/* ref: Global::libm_sse2_sinf */
GEN_LIB GEN_NOFRAME float F_01052223(GEN_P(double in_xmm0, double gen_a0))
{
  GEN_ENTER(0x1052223u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(double in_xmm0 = (double)gen_a0;)
  double dVar2;
  double dVar3;
  ushort uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  ulonglong uVar9;
  
  fVar6 = gen_bits2f((uint)(ulonglong)gen_d2bits(in_xmm0));
  uVar4 = ((ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x10) & 0x7fff) - 0x80;
  if (uVar4 < 0x4580) {
    fVar7 = gen_bits2f((uint)REFG(ulonglong, 0x12b3300)) * fVar6;
    uVar9 = (*(ulonglong *)&REFG(undefined, 0x12b32b0) & (ulonglong)gen_d2bits(in_xmm0)) << 0x20 ^
            (*(ulonglong *)&REFG(undefined, 0x12b32b0) & (ulonglong)gen_d2bits(in_xmm0)) << 0x1d;
    iVar5 = ((int)ROUND(fVar7) + 0x1c7600U & 0x3f) * 0x10;
    dVar8 = gen_bits2d((longlong)
                       CONCAT44((int)((ulonglong)REFG(ulonglong, 0x12b3300) >> 0x20),
                                (uint)gen_fl2bits((fVar7 + *(float *)&REFG(undefined, 0x12b3308)) -
                                                  *(float *)&REFG(undefined, 0x12b3308))) << 0x1d);
    dVar2 = (double)fVar6 - gen_bits2d(REFG(ulonglong, 0x12b32c8) ^ uVar9) * dVar8;
    dVar3 = dVar2 * dVar2;
    return ((float)GEN_TOF((*(double *)(&REFG(undefined, 0x12b2eb0) + iVar5) *
                   ((REFG(double, 0x12b32e8) * dVar3 + *(double *)&REFG(undefined, 0x12b32d0)) +
                   REFG(double, 0x12b32f0) * (dVar3 * dVar3)) +
                  ((gen_bits2d(uVar9 ^ *(ulonglong *)&REFG(undefined, 0x12b32c0)) * dVar8 + dVar2) *
                  *(double *)(&REFG(undefined, 0x12b2eb8) + iVar5)) *
                  ((REFG(double, 0x12b32d8) * dVar3 + *(double *)&REFG(undefined, 0x12b32d0)) +
                  REFG(double, 0x12b32e0) * (dVar3 * dVar3)))));
  }
  if ((short)uVar4 < 0x4580) {
    return (float)((double)fVar6 * *(double *)&REFG(undefined, 0x12b32f8));
  }
  if (((uint)gen_fl2bits(fVar6) & 0x7f800000) != 0x7f800000) {
    dVar2 = (GEN_X87MATH(((double)fVar6),0xb));
    return (float)dVar2;
  }
  return fVar6 - fVar6;
}

/* ref: Global::libm_sse2_cosf */
GEN_LIB GEN_NOFRAME float F_01052372(GEN_P(double in_xmm0, double gen_a0))
{
  GEN_ENTER(0x1052372u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(double in_xmm0 = (double)gen_a0;)
  double dVar2;
  double dVar3;
  ushort uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  ulonglong uVar9;
  
  fVar6 = gen_bits2f((uint)(ulonglong)gen_d2bits(in_xmm0));
  uVar4 = ((ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x10) & 0x7fff) - 0x80;
  if (uVar4 < 0x4580) {
    fVar7 = gen_bits2f((uint)REFG(ulonglong, 0x12b3758)) * fVar6;
    uVar9 = (*(ulonglong *)&REFG(undefined, 0x12b3710) & (ulonglong)gen_d2bits(in_xmm0)) << 0x20 ^
            (*(ulonglong *)&REFG(undefined, 0x12b3710) & (ulonglong)gen_d2bits(in_xmm0)) << 0x1d;
    iVar5 = ((int)ROUND(fVar7) + 0x1c7610U & 0x3f) * 0x10;
    dVar8 = gen_bits2d((longlong)
                       CONCAT44((int)((ulonglong)REFG(ulonglong, 0x12b3758) >> 0x20),
                                (uint)gen_fl2bits((fVar7 + *(float *)&REFG(undefined, 0x12b3760)) -
                                                  *(float *)&REFG(undefined, 0x12b3760))) << 0x1d);
    dVar2 = (double)fVar6 - gen_bits2d(REFG(ulonglong, 0x12b3728) ^ uVar9) * dVar8;
    dVar3 = dVar2 * dVar2;
    return ((float)GEN_TOF((*(double *)(&REFG(undefined, 0x12b3310) + iVar5) *
                   ((REFG(double, 0x12b3748) * dVar3 + REFG(double, 0x12b3730)) + REFG(double, 0x12b3750) * (dVar3 * dVar3)) +
                  ((gen_bits2d(uVar9 ^ *(ulonglong *)&REFG(undefined, 0x12b3720)) * dVar8 + dVar2) *
                  *(double *)(&REFG(undefined, 0x12b3318) + iVar5)) *
                  ((REFG(double, 0x12b3738) * dVar3 + REFG(double, 0x12b3730)) + REFG(double, 0x12b3740) * (dVar3 * dVar3)))));
  }
  if ((short)uVar4 < 0x4580) {
    return (float)(REFG(double, 0x12b3730) - (double)fVar6 * (double)fVar6);
  }
  if (((uint)gen_fl2bits(fVar6) & 0x7f800000) != 0x7f800000) {
    dVar2 = (GEN_X87MATH(((double)fVar6),0xc));
    return (float)dVar2;
  }
  return fVar6 - fVar6;
}

/* ref: Global::libm_sse2_asinf */
GEN_LIB GEN_NOFRAME float F_010524c9(GEN_P(float in_xmm0, float gen_a0))
{
  GEN_ENTER(0x10524c9u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float in_xmm0 = (float)gen_a0;)
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = ABS(in_xmm0);
  uVar3 = (int)gen_fl2bits(fVar2) + 0xc2800000;
  gen_vset(((unsigned char *)(auVar4) + 4), 12, ((unsigned char *)(in_XMM1) + 4), 12);
  if (-1 < (int)(0x3f5db3d7U - (int)gen_fl2bits(fVar2) | uVar3)) {
    uVar3 = uVar3 >> 0x10 & 0x1fe;
    iVar1 = uVar3 * 4;
    fVar2 = gen_bits2f(REFG(uint, 0x12b43b4) & (uint)gen_fl2bits(in_xmm0) | 0x10000);
    fVar5 = fVar2 * SQRT(REFG(float, 0x12b43b0) - in_xmm0 * in_xmm0);
    fVar6 = in_xmm0 * *(float *)(&REFG(undefined, 0x12b3f70) + uVar3 * 2) - fVar5;
    return (((in_xmm0 - fVar2) * (in_xmm0 + fVar2)) /
            (in_xmm0 * *(float *)(&REFG(undefined, 0x12b3f70) + uVar3 * 2) + fVar5) +
           ((REFG(float, 0x12b43b8) * fVar6) * (fVar6 * fVar6) +
           gen_bits2f(*(uint *)(&REFG(undefined, 0x12b3770) + iVar1) ^ (uint)gen_fl2bits(in_xmm0) & 0x80000000)))
           + gen_bits2f(*(uint *)(&REFG(undefined, 0x12b3774) + iVar1) ^ (uint)gen_fl2bits(in_xmm0) & 0x80000000);
  }
  if (-1 < (int)(0x1feffff - uVar3 | uVar3)) {
    (*(undefined4 *)((char *)&auVar4 + 0)) = (undefined4)gen_fl2bits(in_xmm0);
    fVar6 = SQRT(REFG(float, 0x12b43b0) - in_xmm0 * in_xmm0);
    fVar8 = gen_bits2f((uint)gen_fl2bits(in_xmm0) & *(uint *)&REFG(undefined, 0x12b4380));
    fVar2 = gen_bits2f((uint)gen_fl2bits(in_xmm0) & *(uint *)&REFG(undefined, 0x12b4370)) - fVar8;
    fVar5 = gen_bits2f(REFG(uint, 0x12b43b4) & (uint)gen_fl2bits(fVar6) | 0x10000);
    uVar3 = ((uint)gen_fl2bits(fVar6) >> 0x10) - 0x3d80 & 0xfffe;
    fVar6 = fVar6 * *(float *)(&REFG(undefined, 0x12b3f70) + uVar3 * 2);
    fVar7 = (fVar8 * fVar5 - fVar6) + fVar2 * fVar5;
    fVar2 = (((REFG(float, 0x12b43b0) - fVar8 * fVar8) - fVar5 * fVar5) -
            (gen_bits2f((uint)gen_fl2bits(in_xmm0) & *(uint *)&REFG(undefined, 0x12b4370)) + fVar8) * fVar2) /
            ((fVar6 + fVar6) + fVar7);
    iVar1 = uVar3 * 4;
    fVar5 = fVar2 - (REFG(float, 0x12b43a4) - *(float *)(&REFG(undefined, 0x12b3774) + iVar1));
    return gen_bits2f((uint)(((unsigned char)gen_vbits(auVar4, 16, 31, 1)) & 1) << 0x1f | (uint)gen_fl2bits((((REFG(float, 0x12b43b8) * fVar7) * (fVar7 * fVar7) + (REFG(float, 0x12b43a0) - *(float *)(&REFG(undefined, 0x12b3770) + iVar1))) - (fVar2 - ((REFG(float, 0x12b43a4) - *(float *)(&REFG(undefined, 0x12b3774) + iVar1)) + fVar5))) - fVar5));
  }
  if ((int)uVar3 < 0) {
    if (-1 < (int)((int)gen_fl2bits(fVar2) + 0xc8800000U)) {
      fVar2 = in_xmm0 * in_xmm0;
      return (((fVar2 * fVar2) * (in_xmm0 * *(float *)&REFG(undefined, 0x12b43bc)) +
              (in_xmm0 * REFG(float, 0x12b43b8)) * fVar2) +
             (in_xmm0 * *(float *)&REFG(undefined, 0x12b43c0)) * (fVar2 * (fVar2 * fVar2))) + in_xmm0;
    }
    return in_xmm0;
  }
  if ((int)uVar3 < 0x2000000) {
    fVar5 = SQRT(REFG(float, 0x12b43b0) - in_xmm0 * in_xmm0);
    fVar8 = gen_bits2f((uint)gen_fl2bits(in_xmm0) & *(uint *)&REFG(undefined, 0x12b4390));
    fVar6 = gen_bits2f((uint)gen_fl2bits(fVar5) & *(uint *)&REFG(undefined, 0x12b4390));
    fVar2 = in_xmm0 - fVar8;
    fVar7 = fVar5 * fVar5;
    return gen_bits2f((uint)gen_fl2bits((((REFG(float, 0x12b43a0) -
                                          ((fVar5 * REFG(float, 0x12b43b8)) * fVar7 +
                                          (fVar5 * *(float *)&REFG(undefined, 0x12b43bc)) * (fVar7 * fVar7))) -
                                         (((((REFG(float, 0x12b43b0) - fVar8 * fVar8) -
                                            (fVar8 + fVar8) * fVar2) - fVar6 * fVar6) -
                                          fVar2 * fVar2) +
                                         ((fVar5 + fVar5) + (fVar6 - fVar5)) * (fVar6 - fVar5)) /
                                         (fVar5 + fVar5)) -
                                        (fVar5 - (REFG(float, 0x12b43a4) + (fVar5 - REFG(float, 0x12b43a4))))) -
                                        (fVar5 - REFG(float, 0x12b43a4))) |
                      (uint)((ushort)((uint)gen_fl2bits(in_xmm0) >> 0x10) & 0x8000) << 0x10);
  }
  if (ABS(in_xmm0) == 1.0) {
    return gen_bits2f((uint)gen_fl2bits(in_xmm0) & REFG(uint, 0x12b43c4) |
                      (uint)gen_fl2bits(REFG(float, 0x12b43a4) + REFG(float, 0x12b43a0)));
  }
  if ((uint)gen_fl2bits(ABS(in_xmm0)) < 0x7f800001) {
    return -NAN;
  }
  return in_xmm0 + 0.0;
}

/* ref: __snprintf */
GEN_LIB GEN_NOFRAME int F_01052886(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0x1052886u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _Dest = (char *)(uintptr_t)gen_a0;
  gen_size32 _Count = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  GEN_FRAME_DECL(0x24, 12);
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = ((char *)GEN_TOP(0x0));
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 - 1) {
    *ppcVar4 = ((char *)GEN_TOP(0x0));
    ppcVar4 = ppcVar4 + 1;
  }
  if (_Format == ((char *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  else if ((_Count == 0) || (_Dest != ((char *)GEN_TOP(0x0)))) {
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = 0x7fffffff;
    if (_Count < 0x80000000) {
      (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = _Count;
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 12))) = 0x42;
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = _Dest;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = _Dest;
    uVar2 = F_00c56a1d(((undefined *)(gen_frame + 0x0)),_Format,0,((undefined *)&gen_args[3]));
    if (_Dest != ((char *)GEN_TOP(0x0))) {
      iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) - 1;
      (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = iVar3;
      if (iVar3 < 0) {
        F_00c567c4(0,((undefined *)(gen_frame + 0x0)));
      }
      else {
        *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = '\0';
      }
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: __snprintf_l */
GEN_LIB GEN_NOFRAME int F_01052932(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, ...)
{
  GEN_ENTER(0x1052932u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[36];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  { va_list gen_va; va_start(gen_va, gen_a3);
    for (int gen_i = 4; gen_i < 36; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = F_01051bf0(_DstBuf,_MaxCount,_Format,_Locale,((undefined *)&gen_args[4]));
  return iVar1;
}

/* ref: Global::_except_handler3 */
GEN_LIB GEN_FRAME uint F_01052968(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1052968u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc, 4);
  code * pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  int iVar6;
  int iVar7;
  
  puVar5 = (gen_frame + 0x8);
  if ((*((uint *)GEN_TOP((param_1 + 4))) & 6) == 0) {
    (*(int *)(gen_frame + 0x0)) = param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_3;
    *((int * PTR32 *)GEN_TOP((param_2 - 4))) = &(*(int *)(gen_frame + 0x0));
    iVar6 = *((int *)GEN_TOP((param_2 + 0xc)));
    iVar7 = *((int *)GEN_TOP((param_2 + 8)));
    uVar3 = F_01052b80(param_2);
    iVar4 = param_2;
    if ((int)uVar3 < 1) {
      *((uint *)GEN_TOP((param_1 + 4))) = *((uint *)GEN_TOP((param_1 + 4))) | 8;
    }
    else {
      for (; iVar6 != -1; iVar6 = *((int *)GEN_TOP((iVar7 + iVar6 * 0xc)))) {
        pcVar1 = *((gen_code32 *)GEN_TOP((iVar7 + 4 + iVar6 * 0xc)));
        if (pcVar1 != ((code *)GEN_TOP(0x0))) {
          uVar3 = (*pcVar1)(0,0);
          iVar4 = *(int *)(puVar5 + 0xc);
          if (uVar3 != 0) {
            if ((int)uVar3 < 0) {
              return 0;
            }
            F_01052a81(*(undefined4 *)(puVar5 + 8),1);
            iVar2 = *((int *)GEN_TOP((iVar4 + 8)));
            F_00c6f9a0(iVar4);
            puVar5 = ((undefined1 *)GEN_TOP((iVar4 + 0x10)));
            F_00c6fa05(iVar4,iVar6);
            F_00c6fab5(*((undefined4 *)GEN_TOP((iVar2 + 8 + iVar6 * 0xc))),1);
            *((undefined4 *)GEN_TOP((iVar4 + 0xc))) = *((undefined4 *)GEN_TOP((iVar2 + iVar6 * 0xc)));
            iVar7 = iVar6 * 0xc;
            iVar4 = 0;
            iVar6 = 0;
            ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 8 + iVar7))))(0,0);
          }
        }
        iVar7 = *((int *)GEN_TOP((iVar4 + 8)));
      }
    }
  }
  else {
    F_00c6fa05(param_2,0xffffffff);
  }
  return 1;
}

/* ref: Global::_seh_longjmp_unwind */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_01052a66(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1052a66u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  F_00c6fa05(*((undefined4 *)GEN_TOP((param_1 + 0x18))),*((undefined4 *)GEN_TOP((param_1 + 0x1c))));
  return;
}

/* ref: _CallDestructExceptionObject */
GEN_LIB GEN_NOFRAME unsigned int F_01052a81(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1052a81u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  BOOL BVar1;
  
  if ((*param_1 == -0x1f928c9d) && ((*(undefined * PTR32 (*)[1])REFP(0x1125c80))[0] != ((undefined *)GEN_TOP(0x0)))) {
    BVar1 = F_00c5b7a0((GEN_LPANY)(*(undefined * PTR32 (*)[1])REFP(0x1125c80)));
    if (BVar1 != 0) {
      F_00c73b13(param_1,param_2);
    }
  }
  return;
}

/* ref: _ValidateScopeTableHandlers */
GEN_LIB GEN_NOFRAME uint F_01052ac0(GEN_P(int in_ecx, unsigned int gen_a0), GEN_P(GEN_LPANY in_edi, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1052ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(GEN_LPANY in_edi = (GEN_LPANY)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  GEN_LPANY p_Var2;
  uint uVar3;
  uint uVar4;
  
  p_Var2 = (GEN_LPANY)0x0;
  uVar3 = 0xffffffff;
  while( true ) {
    if (in_ecx == -1) {
      return 1;
    }
    piVar1 = ((int *)GEN_TOP((param_3 + in_ecx * 0xc)));
    uVar4 = piVar1[2] - (int)in_edi & 0xfffff000;
    if (((uVar4 != uVar3) &&
        ((((uVar3 = uVar4, p_Var2 == (GEN_LPANY)0x0 || (uVar4 < (*(DWORD *)(((char *)(p_Var2) + 12)))))
          || ((*(DWORD *)(((char *)(p_Var2) + 8))) + (*(DWORD *)(((char *)(p_Var2) + 12))) <= uVar4)) &&
         ((p_Var2 = F_00c5b750(in_edi,uVar4), p_Var2 == (GEN_LPANY)0x0 ||
          (((*(DWORD *)(((char *)(p_Var2) + 36))) & 0x20000000) == 0)))))) ||
       (((piVar1[1] != 0 &&
         ((uVar4 = piVar1[1] - (int)in_edi & 0xfffff000, uVar4 != uVar3 &&
          ((uVar3 = uVar4, uVar4 < (*(DWORD *)(((char *)(p_Var2) + 12))) ||
           ((*(DWORD *)(((char *)(p_Var2) + 8))) + (*(DWORD *)(((char *)(p_Var2) + 12))) <= uVar4)))))) &&
        ((p_Var2 = F_00c5b750(in_edi,uVar4), p_Var2 == (GEN_LPANY)0x0 ||
         (((*(DWORD *)(((char *)(p_Var2) + 36))) & 0x20000000) == 0)))))) break;
    in_ecx = *piVar1;
  }
  return 0;
}

/* ref: __ValidateEH3RN */
GEN_LIB GEN_NOFRAME uint F_01052b80(unsigned int gen_a0)
{
  GEN_ENTER(0x1052b80u, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x5c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x58);
  gen_args[0] = gen_a0;
  GEN_LPANY pBVar1;
  undefined4 uVar2;
  PVOID pImageBase;
  uint uVar3;
  BOOL BVar4;
  GEN_LPANY p_Var5;
  int iVar6;
  SIZE_T SVar7;
  uint uVar8;
  uint * puVar9;
  uint * puVar10;
  uint * puVar11;
  GEN_LPANY pBVar12;
  int iVar13;
  bool bVar14;
  undefined _Stack_44[28];
  
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xfffffffe;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = &REFG(undefined, 0x12f75c0);
  (*(gen_code32 *)(gen_frame + 0x44)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP((REFG(undefined4, 0x134ab78) ^ 0x12f75c0)));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  (*(undefined1 * PTR32 *)(gen_frame + 0x38)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  puVar11 = ((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2]));
  (*(uint * PTR32 *)(gen_frame + 0x34)) = puVar11;
  if (((uint)puVar11 & 3) != 0) {
    return 0;
  }
  puVar9 = *((uint * PTR32 *)GEN_TOP(((int)(*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x18)))) + 8)));
  (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar9;
  if ((puVar9 <= puVar11) && (puVar11 < *((uint * PTR32 *)GEN_TOP(((int)(*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x18)))) + 4))))) {
    return 0;
  }
  uVar8 = (*(uint * PTR32 *)&gen_args[0])[3];
  (*(uint *)(gen_frame + 0x2c)) = uVar8;
  if (uVar8 == 0xffffffff) {
    return 1;
  }
  bVar14 = false;
  uVar3 = 0;
  puVar10 = puVar11;
  do {
    if ((*puVar10 != 0xffffffff) && (uVar3 <= *puVar10)) {
      return 0;
    }
    if (puVar10[1] != 0) {
      bVar14 = true;
    }
    uVar3 = uVar3 + 1;
    puVar10 = puVar10 + 3;
  } while (uVar3 <= uVar8);
  if (bVar14) {
    if (((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[-2])) < puVar9) {
      return 0;
    }
    if ((*(uint * PTR32 *)&gen_args[0]) <= ((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[-2]))) {
      return 0;
    }
  }
  (*(uint * PTR32 *)(gen_frame + 0x30)) = ((uint *)GEN_TOP(((uint)puVar11 & 0xfffff000)));
  for (iVar13 = 0; (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x40)), iVar13 < REFG(int, 0x15e3fa0); iVar13 = iVar13 + 1) {
    uVar8 = (&REFG(undefined4, 0x15e3fa8))[(int)(iVar13 * 2)];
    pBVar12 = (GEN_LPANY)(&REFG(undefined4, 0x15e3fac))[(int)(iVar13 * 2)];
    if (uVar8 == ((uint)puVar11 & 0xfffff000)) {
      (*(undefined4 *)(gen_frame + 0x4c)) = 0;
      BVar4 = F_00c5b710(pBVar12);
      if (((BVar4 != 0) &&
          (uVar3 = F_01052ac0((*(uint *)(gen_frame + 0x2c)),pBVar12,(*(uint * PTR32 *)(gen_frame + 0x34))), uVar3 != 0)) &&
         (p_Var5 = F_00c5b750(pBVar12,(*(uint * PTR32 *)&gen_args[0])[1] - (int)pBVar12),
         p_Var5 != (GEN_LPANY)0x0)) {
        (*(undefined4 *)(gen_frame + 0x4c)) = 0xfffffffe;
        if (iVar13 < 1) {
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x40));
          return 1;
        }
        iVar6 = _InterlockedExchange((volatile gen_long *)(&REFG(undefined4, 0x15e3fa4)), (gen_long)(1));
        if (iVar6 != 0) {
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x40));
          return 1;
        }
        if (((uint *)GEN_TOP((&REFG(undefined4, 0x15e3fa8))[(int)(iVar13 * 2)])) == (*(uint * PTR32 *)(gen_frame + 0x30))) goto LAB_01052d16;
        iVar13 = REFG(int, 0x15e3fa0) - 1;
        if (-1 < iVar13) goto LAB_01052ce7;
        goto LAB_01052d07;
      }
      (*(undefined4 *)(gen_frame + 0x4c)) = 0xfffffffe;
      break;
    }
  }
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xfffffffe;
  SVar7 = gen_imp_VirtualQuery((*(uint * PTR32 *)(gen_frame + 0x34)),&_Stack_44,0x1c);
  pImageBase = (*(PVOID *)(((char *)&(_Stack_44) + 4)));
  if (SVar7 == 0) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x40));
    return 1;
  }
  if (((*(DWORD *)(((char *)&(_Stack_44) + 24))) != 0x1000000) ||
     (BVar4 = F_00c5b710((*(PVOID *)(((char *)&(_Stack_44) + 4)))), BVar4 == 0)) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x40));
    return 0xffffffff;
  }
  if (((byte)(*(DWORD *)(((char *)&(_Stack_44) + 20))) & 0xcc) != 0) {
    p_Var5 = F_00c5b750(pImageBase,(int)(*(uint * PTR32 *)(gen_frame + 0x34)) - (int)pImageBase);
    if (p_Var5 == (GEN_LPANY)0x0) {
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x40));
      return 0;
    }
    if (((*(DWORD *)(((char *)(p_Var5) + 36))) & 0x80000000) != 0) {
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x40));
      return 0;
    }
  }
  uVar8 = F_01052ac0((*(uint *)(gen_frame + 0x2c)),pImageBase,(*(uint * PTR32 *)(gen_frame + 0x34)));
  if (uVar8 == 0) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x40));
    return 0;
  }
  p_Var5 = F_00c5b750(pImageBase,(*(uint * PTR32 *)&gen_args[0])[1] - (int)pImageBase);
  if (p_Var5 == (GEN_LPANY)0x0) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x40));
    return 0;
  }
  iVar13 = _InterlockedExchange((volatile gen_long *)(&REFG(undefined4, 0x15e3fa4)), (gen_long)(1));
  if (iVar13 != 0) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x40));
    return 1;
  }
  iVar13 = REFG(int, 0x15e3fa0);
  if (0 < REFG(int, 0x15e3fa0)) {
    puVar11 = (uint *)(&REFG(int, 0x15e3fa0) + REFG(int, 0x15e3fa0) * 2);
    do {
      if (((uint *)GEN_TOP(*puVar11)) == (*(uint * PTR32 *)(gen_frame + 0x30))) break;
      iVar13 = iVar13 - 1;
      puVar11 = puVar11 - 2;
    } while (0 < iVar13);
  }
  if (iVar13 == 0) {
    iVar13 = 0xf;
    if (REFG(int, 0x15e3fa0) < 0x10) {
      iVar13 = REFG(int, 0x15e3fa0);
    }
    if (-1 < iVar13) {
      puVar9 = &REFG(undefined4, 0x15e3fa8);
      iVar13 = iVar13 + 1;
      puVar11 = (*(uint * PTR32 *)(gen_frame + 0x30));
      pBVar12 = (*(PVOID *)(((char *)&(_Stack_44) + 4)));
      do {
        uVar8 = *puVar9;
        pBVar1 = (GEN_LPANY)puVar9[1];
        *puVar9 = (uint)puVar11;
        puVar9[1] = (uint)pBVar12;
        puVar9 = puVar9 + 2;
        iVar13 = iVar13 - 1;
        puVar11 = ((uint *)GEN_TOP(uVar8));
        pBVar12 = pBVar1;
      } while (iVar13 != 0);
    }
    if (REFG(int, 0x15e3fa0) < 0x10) {
      REFG(int, 0x15e3fa0) = REFG(int, 0x15e3fa0) + 1;
    }
  }
  else {
    (&REFG(undefined4, 0x15e3fa4))[(int)(iVar13 * 2)] = (*(PVOID *)(((char *)&(_Stack_44) + 4)));
  }
LAB_01052ea6: ;
  uVar2 = _InterlockedExchange((volatile gen_long *)(&REFG(undefined4, 0x15e3fa4)), (gen_long)(0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x40));
  return 1;
  while (iVar13 = iVar13 - 1, -1 < iVar13) {
LAB_01052ce7: ;
    if (((uint *)GEN_TOP((&REFG(undefined4, 0x15e3fa8))[(int)(iVar13 * 2)])) == (*(uint * PTR32 *)(gen_frame + 0x30))) {
      uVar8 = (&REFG(undefined4, 0x15e3fa8))[(int)(iVar13 * 2)];
      pBVar12 = (GEN_LPANY)(&REFG(undefined4, 0x15e3fac))[(int)(iVar13 * 2)];
      break;
    }
  }
  bVar14 = false;
  if (iVar13 < 0) {
LAB_01052d07: ;
    if (REFG(int, 0x15e3fa0) < 0x10) {
      REFG(int, 0x15e3fa0) = REFG(int, 0x15e3fa0) + 1;
    }
    iVar13 = REFG(int, 0x15e3fa0) - 1;
LAB_01052d16: ;
    bVar14 = iVar13 < 0;
  }
  if ((iVar13 != 0 && !bVar14) && (iVar6 = 0, -1 < iVar13)) {
    do {
      uVar3 = (&REFG(undefined4, 0x15e3fa8))[(int)(iVar6 * 2)];
      pBVar1 = (GEN_LPANY)(&REFG(undefined4, 0x15e3fac))[(int)(iVar6 * 2)];
      (&REFG(undefined4, 0x15e3fa8))[(int)(iVar6 * 2)] = uVar8;
      (&REFG(undefined4, 0x15e3fac))[(int)(iVar6 * 2)] = pBVar12;
      iVar6 = iVar6 + 1;
      uVar8 = uVar3;
      pBVar12 = pBVar1;
    } while (iVar6 <= iVar13);
  }
  goto LAB_01052ea6;
}

/* ref: FUN_01052d5a */
GEN_LIB GEN_NOFRAME uint F_01052d5a(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1052d5au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  return (uint)(*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((in_ebp - 0x14))))) == -0x3ffffffb);
}

/* ref: FUN_01052d6d */
GEN_LIB GEN_NOFRAME uint F_01052d6d(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1052d6du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  SIZE_T SVar3;
  BOOL BVar4;
  GEN_LPANY p_Var5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  int * piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 * puVar12;
  
  iVar7 = *((int *)GEN_TOP((in_ebp - 0x18)));
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
  uVar10 = *((undefined4 *)GEN_TOP((in_ebp - 0x1c)));
  *((undefined4 *)GEN_TOP((iVar7 - 4))) = 0x1c;
  *((int *)GEN_TOP((iVar7 - 8))) = in_ebp - 0x40;
  *((undefined4 *)GEN_TOP((iVar7 - 0xc))) = uVar10;
  puVar12 = ((undefined1 *)GEN_TOP((iVar7 - 0x10)));
  *((undefined4 *)GEN_TOP((iVar7 - 0x10))) = 0x1052d87;
  SVar3 = gen_imp_VirtualQuery(*((LPCVOID *)GEN_TOP((iVar7 - 0xc))),*((GEN_LPANY *)GEN_TOP((iVar7 - 8))),
                       *((SIZE_T *)GEN_TOP((iVar7 - 4))));
  if (SVar3 == 0) {
LAB_01052eaf: ;
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
    return 1;
  }
  if (*((int *)GEN_TOP((in_ebp - 0x28))) != 0x1000000) {
LAB_01052d98: ;
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
    return 0xffffffff;
  }
  iVar7 = *((int *)GEN_TOP((in_ebp - 0x3c)));
  *(int *)(puVar12 - 4) = iVar7;
  *(undefined4 *)(puVar12 - 8) = 0x1052dbc;
  BVar4 = F_00c5b710(*(GEN_LPANY *)(puVar12 - 4));
  if (BVar4 == 0) goto LAB_01052d98;
  if ((*((byte *)GEN_TOP((in_ebp - 0x2c))) & 0xcc) != 0) {
    *(int *)(puVar12 - 4) = *((int *)GEN_TOP((in_ebp - 0x1c))) - iVar7;
    *(int *)(puVar12 - 8) = iVar7;
    *(undefined4 *)(puVar12 - 0xc) = 0x1052dd5;
    p_Var5 = F_00c5b750(*(GEN_LPANY *)(puVar12 - 8),*(DWORD_PTR *)(puVar12 - 4));
    if ((p_Var5 == (GEN_LPANY)0x0) || (((*(DWORD *)(((char *)(p_Var5) + 36))) & 0x80000000) != 0))
    goto LAB_01052bc3;
  }
  *(undefined4 *)(puVar12 - 4) = *((undefined4 *)GEN_TOP((in_ebp - 0x1c)));
  uVar10 = *((undefined4 *)GEN_TOP((in_ebp - 0x24)));
  *(undefined4 *)(puVar12 - 8) = 0x1052df9;
  uVar6 = F_01052ac0(uVar10,iVar7,*(undefined4 *)(puVar12 - 4));
  if (uVar6 != 0) {
    *(int *)(puVar12 - 4) = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ebp + 8))) + 4))) - iVar7;
    *(int *)(puVar12 - 8) = iVar7;
    *(undefined4 *)(puVar12 - 0xc) = 0x1052e13;
    p_Var5 = F_00c5b750(*(GEN_LPANY *)(puVar12 - 8),*(DWORD_PTR *)(puVar12 - 4));
    if (p_Var5 != (GEN_LPANY)0x0) {
      iVar7 = _InterlockedExchange((volatile gen_long *)(&REFG(undefined4, 0x15e3fa4)), (gen_long)(1));
      if (iVar7 == 0) {
        iVar7 = REFG(int, 0x15e3fa0);
        if (0 < REFG(int, 0x15e3fa0)) {
          piVar9 = &REFG(int, 0x15e3fa0) + REFG(int, 0x15e3fa0) * 2;
          do {
            if (*piVar9 == *((int *)GEN_TOP((in_ebp - 0x20)))) break;
            iVar7 = iVar7 - 1;
            piVar9 = piVar9 - 2;
          } while (0 < iVar7);
        }
        if (iVar7 == 0) {
          iVar7 = 0xf;
          if (REFG(int, 0x15e3fa0) < 0x10) {
            iVar7 = REFG(int, 0x15e3fa0);
          }
          if (-1 < iVar7) {
            puVar8 = &REFG(undefined4, 0x15e3fa8);
            iVar7 = iVar7 + 1;
            uVar10 = *((undefined4 *)GEN_TOP((in_ebp - 0x20)));
            uVar11 = *((undefined4 *)GEN_TOP((in_ebp - 0x3c)));
            do {
              uVar1 = *puVar8;
              uVar2 = puVar8[1];
              *puVar8 = uVar10;
              puVar8[1] = uVar11;
              puVar8 = puVar8 + 2;
              iVar7 = iVar7 - 1;
              uVar10 = uVar1;
              uVar11 = uVar2;
            } while (iVar7 != 0);
          }
          if (REFG(int, 0x15e3fa0) < 0x10) {
            REFG(int, 0x15e3fa0) = REFG(int, 0x15e3fa0) + 1;
          }
        }
        else {
          (&REFG(undefined4, 0x15e3fa4))[(int)(iVar7 * 2)] = *((undefined4 *)GEN_TOP((in_ebp - 0x3c)));
        }
        uVar10 = _InterlockedExchange((volatile gen_long *)(&REFG(undefined4, 0x15e3fa4)), (gen_long)(0));
      }
      goto LAB_01052eaf;
    }
  }
LAB_01052bc3: ;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
  return 0;
}

/* ref: FUN_01052f50 */
GEN_LIB GEN_NOFRAME uint F_01052f50(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1052f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = param_1[4] - *param_1;
  fVar4 = param_1[5] - param_1[1];
  fVar6 = param_1[6] - param_1[2];
  fVar8 = param_1[7] - param_1[3];
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = fVar4;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x2c)) = fVar8;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0x14)) = fVar4;
  (*(float *)(gen_frame + 0x18)) = fVar6;
  (*(float *)(gen_frame + 0x1c)) = fVar8;
  fVar3 = param_1[8] - *param_1;
  fVar5 = param_1[9] - param_1[1];
  fVar7 = param_1[10] - param_1[2];
  fVar9 = param_1[0xb] - param_1[3];
  (*(float *)(gen_frame + 0x0)) = fVar3;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  (*(float *)(gen_frame + 0x8)) = fVar7;
  (*(float *)(gen_frame + 0xc)) = fVar9;
  (*(float *)(gen_frame + 0x20)) = fVar3;
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x28)) = fVar7;
  (*(float *)(gen_frame + 0x2c)) = fVar9;
  fVar9 = fVar4 * fVar7 - fVar6 * fVar5;
  fVar6 = fVar6 * fVar3 - fVar2 * fVar7;
  fVar2 = fVar2 * fVar5 - fVar4 * fVar3;
  (*(float *)(gen_frame + 0x0)) = fVar9;
  (*(float *)(gen_frame + 0x4)) = fVar6;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  (*(float *)(gen_frame + 0xc)) = fVar8;
  (*(float *)(gen_frame + 0x10)) = fVar9;
  (*(float *)(gen_frame + 0x14)) = fVar6;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  *param_2 = fVar9;
  param_2[1] = fVar6;
  param_2[2] = fVar2;
  param_2[3] = fVar8;
  pfVar1 = ((float *)GEN_TOP(F_00d034e0(param_2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)))));
  *param_2 = *pfVar1;
  param_2[1] = pfVar1[1];
  param_2[2] = pfVar1[2];
  fVar2 = pfVar1[3];
  param_2[3] = fVar2;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_010530d0 */
GEN_LIB GEN_NOFRAME byte F_010530d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10530d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar4 = ((float *)GEN_TOP(F_00d0bdf0(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_1 + 0x10)));
  fVar3 = (float10)0;
  (*(float *)(gen_frame + 0x2c)) = *pfVar4;
  (*(float *)(gen_frame + 0x30)) = pfVar4[1];
  fVar6 = pfVar4[3];
  fVar1 = param_2[3];
  (*(float *)(gen_frame + 0x34)) = pfVar4[2];
  (*(float *)(gen_frame + 0x38)) = fVar6;
  (*(float *)(gen_frame + 0x10)) = *param_2;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  (*(float *)(gen_frame + 0x18)) = param_2[2];
  (*(float *)(gen_frame + 0x1c)) = param_2[3];
  fVar5 = pfVar4[1] * param_2[1];
  fVar7 = pfVar4[2] * param_2[2];
  fVar8 = (fVar7 + *pfVar4 * *param_2) + fVar5;
  (*(float *)(gen_frame + 0x0)) = fVar8;
  (*(float *)(gen_frame + 0x4)) = (fVar7 + fVar5) + fVar5;
  (*(float *)(gen_frame + 0x8)) = (fVar7 + fVar7) + fVar5;
  (*(float *)(gen_frame + 0xc)) = (fVar7 + fVar6 * fVar1) + fVar5;
  fVar2 = (float10)fVar8;
  if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
    (*(int *)(gen_frame + 0x3c)) = param_1 + 0x20;
    pfVar4 = ((float *)GEN_TOP(F_00d0bdf0(param_1 + 0x10 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_1 + 0x20)));
    fVar3 = (float10)0;
    (*(float *)(gen_frame + 0x2c)) = *pfVar4;
    (*(float *)(gen_frame + 0x30)) = pfVar4[1];
    fVar1 = pfVar4[3];
    (*(float *)(gen_frame + 0x34)) = pfVar4[2];
    (*(float *)(gen_frame + 0x38)) = fVar1;
    fVar6 = pfVar4[1] * (*(float *)(gen_frame + 0x14));
    fVar5 = pfVar4[2] * (*(float *)(gen_frame + 0x18));
    fVar7 = (fVar5 + *pfVar4 * (*(float *)(gen_frame + 0x10))) + fVar6;
    (*(float *)(gen_frame + 0x0)) = fVar7;
    (*(float *)(gen_frame + 0x4)) = (fVar5 + fVar6) + fVar6;
    (*(float *)(gen_frame + 0x8)) = (fVar5 + fVar5) + fVar6;
    (*(float *)(gen_frame + 0xc)) = (fVar5 + fVar1 * (*(float *)(gen_frame + 0x1c))) + fVar6;
    fVar2 = (float10)fVar7;
    if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      pfVar4 = ((float *)GEN_TOP(F_00d0bdf0((*(int *)(gen_frame + 0x3c)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_1)));
      fVar3 = (float10)0;
      (*(float *)(gen_frame + 0x2c)) = *pfVar4;
      (*(float *)(gen_frame + 0x30)) = pfVar4[1];
      fVar1 = pfVar4[3];
      (*(float *)(gen_frame + 0x34)) = pfVar4[2];
      (*(float *)(gen_frame + 0x38)) = fVar1;
      fVar6 = pfVar4[1] * (*(float *)(gen_frame + 0x14));
      fVar5 = pfVar4[2] * (*(float *)(gen_frame + 0x18));
      fVar7 = (fVar5 + *pfVar4 * (*(float *)(gen_frame + 0x10))) + fVar6;
      (*(float *)(gen_frame + 0x0)) = fVar7;
      (*(float *)(gen_frame + 0x4)) = (fVar5 + fVar6) + fVar6;
      (*(float *)(gen_frame + 0x8)) = (fVar5 + fVar5) + fVar6;
      (*(float *)(gen_frame + 0xc)) = (fVar5 + fVar1 * (*(float *)(gen_frame + 0x1c))) + fVar6;
      fVar2 = (float10)fVar7;
      if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_01053270 */
GEN_LIB GEN_NOFRAME byte F_01053270(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1053270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar4 = ((float *)GEN_TOP(F_00d0bdf0(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_1 + 0x10)));
  fVar3 = (float10)0;
  (*(float *)(gen_frame + 0x2c)) = *pfVar4;
  (*(float *)(gen_frame + 0x30)) = pfVar4[1];
  fVar6 = pfVar4[3];
  fVar1 = param_2[3];
  (*(float *)(gen_frame + 0x34)) = pfVar4[2];
  (*(float *)(gen_frame + 0x38)) = fVar6;
  (*(float *)(gen_frame + 0x10)) = *param_2;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  (*(float *)(gen_frame + 0x18)) = param_2[2];
  (*(float *)(gen_frame + 0x1c)) = param_2[3];
  fVar5 = pfVar4[1] * param_2[1];
  fVar7 = pfVar4[2] * param_2[2];
  fVar8 = (fVar7 + *pfVar4 * *param_2) + fVar5;
  (*(float *)(gen_frame + 0x0)) = fVar8;
  (*(float *)(gen_frame + 0x4)) = (fVar7 + fVar5) + fVar5;
  (*(float *)(gen_frame + 0x8)) = (fVar7 + fVar7) + fVar5;
  (*(float *)(gen_frame + 0xc)) = (fVar7 + fVar6 * fVar1) + fVar5;
  fVar2 = (float10)fVar8;
  if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
    pfVar4 = ((float *)GEN_TOP(F_00d0bdf0(param_1 + 0x10 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_1 + 0x20)));
    fVar3 = (float10)0;
    (*(float *)(gen_frame + 0x2c)) = *pfVar4;
    (*(float *)(gen_frame + 0x30)) = pfVar4[1];
    fVar1 = pfVar4[3];
    (*(float *)(gen_frame + 0x34)) = pfVar4[2];
    (*(float *)(gen_frame + 0x38)) = fVar1;
    fVar6 = pfVar4[1] * (*(float *)(gen_frame + 0x14));
    fVar5 = pfVar4[2] * (*(float *)(gen_frame + 0x18));
    fVar7 = (fVar5 + *pfVar4 * (*(float *)(gen_frame + 0x10))) + fVar6;
    (*(float *)(gen_frame + 0x0)) = fVar7;
    (*(float *)(gen_frame + 0x4)) = (fVar5 + fVar6) + fVar6;
    (*(float *)(gen_frame + 0x8)) = (fVar5 + fVar5) + fVar6;
    (*(float *)(gen_frame + 0xc)) = (fVar5 + fVar1 * (*(float *)(gen_frame + 0x1c))) + fVar6;
    fVar2 = (float10)fVar7;
    if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      (*(int *)(gen_frame + 0x3c)) = param_1 + 0x30;
      pfVar4 = ((float *)GEN_TOP(F_00d0bdf0(param_1 + 0x20 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_1 + 0x30)));
      fVar3 = (float10)0;
      (*(float *)(gen_frame + 0x2c)) = *pfVar4;
      (*(float *)(gen_frame + 0x30)) = pfVar4[1];
      fVar1 = pfVar4[3];
      (*(float *)(gen_frame + 0x34)) = pfVar4[2];
      (*(float *)(gen_frame + 0x38)) = fVar1;
      fVar6 = pfVar4[1] * (*(float *)(gen_frame + 0x14));
      fVar5 = pfVar4[2] * (*(float *)(gen_frame + 0x18));
      fVar7 = (fVar5 + *pfVar4 * (*(float *)(gen_frame + 0x10))) + fVar6;
      (*(float *)(gen_frame + 0x0)) = fVar7;
      (*(float *)(gen_frame + 0x4)) = (fVar5 + fVar6) + fVar6;
      (*(float *)(gen_frame + 0x8)) = (fVar5 + fVar5) + fVar6;
      (*(float *)(gen_frame + 0xc)) = (fVar5 + fVar1 * (*(float *)(gen_frame + 0x1c))) + fVar6;
      fVar2 = (float10)fVar7;
      if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
        pfVar4 = ((float *)GEN_TOP(F_00d0bdf0((*(int *)(gen_frame + 0x3c)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_1)));
        fVar3 = (float10)0;
        (*(float *)(gen_frame + 0x2c)) = *pfVar4;
        (*(float *)(gen_frame + 0x30)) = pfVar4[1];
        fVar1 = pfVar4[3];
        (*(float *)(gen_frame + 0x34)) = pfVar4[2];
        (*(float *)(gen_frame + 0x38)) = fVar1;
        fVar6 = pfVar4[1] * (*(float *)(gen_frame + 0x14));
        fVar5 = pfVar4[2] * (*(float *)(gen_frame + 0x18));
        fVar7 = (fVar5 + *pfVar4 * (*(float *)(gen_frame + 0x10))) + fVar6;
        (*(float *)(gen_frame + 0x0)) = fVar7;
        (*(float *)(gen_frame + 0x4)) = (fVar5 + fVar6) + fVar6;
        (*(float *)(gen_frame + 0x8)) = (fVar5 + fVar5) + fVar6;
        (*(float *)(gen_frame + 0xc)) = (fVar5 + fVar1 * (*(float *)(gen_frame + 0x1c))) + fVar6;
        fVar2 = (float10)fVar7;
        if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_01053470 */
GEN_LIB GEN_NOFRAME uint F_01053470(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1053470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  uint uVar1;
  bool bVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  fVar8 = *param_2 - *param_1;
  fVar9 = param_2[1] - param_1[1];
  fVar10 = param_2[2] - param_1[2];
  fVar11 = param_2[3] - param_1[3];
  fVar4 = (param_3[1] - param_1[1]) * fVar9;
  fVar6 = (param_3[2] - param_1[2]) * fVar10;
  fStack_3c = (fVar6 + fVar4) + fVar4;
  fStack_38 = (fVar6 + fVar6) + fVar4;
  fStack_34 = (fVar6 + (param_3[3] - param_1[3]) * fVar11) + fVar4;
  fVar5 = fVar9 * fVar9;
  fVar7 = fVar10 * fVar10;
  fStack_4c = (fVar7 + fVar5) + fVar5;
  fStack_48 = (fVar7 + fVar7) + fVar5;
  fStack_44 = (fVar7 + fVar11 * fVar11) + fVar5;
  fVar3 = GEN_X87(((float10)GEN_TOD(((fVar7 + fVar8 * fVar8) + fVar5))));
  bVar2 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar3);
  if (bVar2 == (bVar2 || (float10)0 == fVar3)) {
    fVar4 = ((float)GEN_TOF((((float10)GEN_TOD(((fVar6 + (*param_3 - *param_1) * fVar8) + fVar4))) / fVar3)));
    fVar3 = (float10)fVar4;
    if (!((float10)0 <= fVar3) == (GEN_ISNAN(fVar3) || GEN_ISNAN((float10)0))) {
      if (!(fVar3 <= (float10)1) != (GEN_ISNAN((float10)1) || GEN_ISNAN(fVar3))) {
        *param_4 = *param_2;
        param_4[1] = param_2[1];
        param_4[2] = param_2[2];
        param_4[3] = param_2[3];
        return (uint)param_4;
      }
      *param_4 = fVar4 * fVar8;
      param_4[1] = fVar4 * fVar9;
      param_4[2] = fVar4 * fVar10;
      param_4[3] = fVar4 * fVar11;
      uVar1 = F_00c34180(param_4 GEN_EDX_ARG,param_1);
      return uVar1;
    }
  }
  *param_4 = *param_1;
  param_4[1] = param_1[1];
  param_4[2] = param_1[2];
  param_4[3] = param_1[3];
  return (uint)param_4;
}

/* ref: FUN_010536a0 */
GEN_LIB GEN_NOFRAME float F_010536a0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x10536a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  bool bVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  volatile float fStack_34;
  
  fVar7 = *param_2 - *param_1;
  fVar8 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar10 = param_2[3] - param_1[3];
  fVar3 = (0.0 - param_1[1]) * fVar8;
  fVar5 = (0.0 - param_1[2]) * fVar9;
  fStack_3c = (fVar5 + fVar3) + fVar3;
  fStack_38 = (fVar5 + fVar5) + fVar3;
  fStack_34 = (fVar5 + (0.0 - param_1[3]) * fVar10) + fVar3;
  fVar4 = fVar8 * fVar8;
  fVar6 = fVar9 * fVar9;
  fStack_4c = (fVar6 + fVar4) + fVar4;
  fStack_48 = (fVar6 + fVar6) + fVar4;
  fStack_44 = (fVar6 + fVar10 * fVar10) + fVar4;
  fVar2 = GEN_X87(((float10)GEN_TOD(((fVar6 + fVar7 * fVar7) + fVar4))));
  bVar1 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar2);
  if (bVar1 == (bVar1 || (float10)0 == fVar2)) {
    fVar3 = ((float)GEN_TOF((((float10)GEN_TOD(((fVar5 + (0.0 - *param_1) * fVar7) + fVar3))) / fVar2)));
    fVar2 = (float10)fVar3;
    if (!((float10)0 <= fVar2) == (GEN_ISNAN(fVar2) || GEN_ISNAN((float10)0))) {
      if (!(fVar2 <= (float10)1) == (GEN_ISNAN((float10)1) || GEN_ISNAN(fVar2))) {
        *param_3 = fVar3 * fVar7;
        param_3[1] = fVar3 * fVar8;
        param_3[2] = fVar3 * fVar9;
        param_3[3] = fVar3 * fVar10;
        F_00c34180(param_3 GEN_EDX_ARG,param_1);
      }
      else {
        *param_3 = *param_2;
        param_3[1] = param_2[1];
        param_3[2] = param_2[2];
        param_3[3] = param_2[3];
      }
    }
    else {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
  }
  else {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
  }
  fVar3 = param_3[1] * param_3[1];
  fVar4 = param_3[2] * param_3[2];
  fStack_4c = (fVar4 + fVar3) + fVar3;
  fStack_48 = (fVar4 + fVar4) + fVar3;
  fStack_44 = (fVar4 + param_3[3] * param_3[3]) + fVar3;
  return GEN_X87(SQRT((fVar4 + *param_3 * *param_3) + fVar3));
}

/* ref: FUN_010538c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_010538c0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10538c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x40))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x44))) = 0;
  return in_ecx;
}

/* ref: FUN_010538d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_010538d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10538d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x40))) = 0;
  return;
}

/* ref: FUN_010538e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_010538e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10538e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  
  iVar1 = param_3;
  if (8 < param_3) {
    iVar1 = 8;
  }
  iVar6 = 0;
  puVar3 = param_2;
  if (3 < iVar1) {
    iVar4 = (iVar1 - 4U >> 2) + 1;
    iVar6 = iVar4 * 4;
    puVar2 = param_2;
    puVar5 = ((undefined4 *)GEN_TOP((param_1 + 8)));
    do {
      puVar3 = puVar2 + 8;
      puVar5[-2] = *puVar2;
      iVar4 = iVar4 - 1;
      puVar5[-1] = puVar2[1];
      *puVar5 = puVar2[2];
      puVar5[1] = puVar2[3];
      puVar5[2] = puVar2[4];
      puVar5[3] = puVar2[5];
      puVar5[4] = puVar2[6];
      puVar5[5] = puVar2[7];
      puVar2 = puVar3;
      puVar5 = puVar5 + 8;
    } while (iVar4 != 0);
  }
  while (iVar6 < iVar1) {
    iVar6 = iVar6 + 1;
    *((undefined4 *)GEN_TOP((param_1 - 8 + iVar6 * 8))) = *puVar3;
    *((undefined4 *)GEN_TOP((param_1 - 4 + iVar6 * 8))) = puVar3[1];
    puVar3 = puVar3 + 2;
  }
  *((int *)GEN_TOP((param_1 + 0x40))) = iVar1;
  *((undefined1 *)GEN_TOP((param_1 + 0x44))) = param_4;
  return 0;
}

/* ref: FUN_01053980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01053980(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x1053980u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar7 = (float10)param_2;
  iVar4 = *((int *)GEN_TOP((param_1 + 0x40)));
  uVar2 = 0;
  if (0 < iVar4) {
    do {
      fVar8 = (float10)*((float *)GEN_TOP((param_1 + uVar2 * 8)));
      if (fVar7 <= fVar8 && ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && fVar8 != fVar7)) {
        if (iVar4 == 8) {
          return 0xffffffff;
        }
        if ((int)uVar2 < iVar4) {
          if (3 < (int)(iVar4 - uVar2)) {
            iVar3 = ((iVar4 - uVar2) - 4 >> 2) + 1;
            iVar5 = iVar4 * 8;
            iVar4 = iVar4 + iVar3 * -4;
            puVar1 = ((undefined4 *)GEN_TOP((param_1 - 8 + iVar5)));
            do {
              iVar3 = iVar3 - 1;
              puVar1[2] = *puVar1;
              puVar1[3] = puVar1[1];
              *puVar1 = puVar1[-2];
              puVar1[1] = puVar1[-1];
              puVar1[-2] = puVar1[-4];
              puVar1[-1] = puVar1[-3];
              puVar1[-4] = puVar1[-6];
              puVar1[-3] = puVar1[-5];
              puVar1 = puVar1 - 8;
            } while (iVar3 != 0);
          }
          if ((int)uVar2 < iVar4) {
            iVar5 = iVar4 - uVar2;
            puVar1 = ((undefined4 *)GEN_TOP((param_1 - 4 + iVar4 * 8)));
            do {
              iVar5 = iVar5 - 1;
              puVar1[1] = puVar1[-1];
              puVar1[2] = *puVar1;
              puVar1 = puVar1 - 2;
            } while (iVar5 != 0);
          }
        }
        *((float *)GEN_TOP((param_1 + uVar2 * 8))) = param_2;
        *((float *)GEN_TOP((param_1 + 4 + uVar2 * 8))) = param_3;
        *((int *)GEN_TOP((param_1 + 0x40))) = *((int *)GEN_TOP((param_1 + 0x40))) + 1;
        return uVar2;
      }
      fVar8 = (float10)*((float *)GEN_TOP((param_1 + uVar2 * 8)));
      bVar6 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar8);
      if (bVar6 != (bVar6 || fVar7 == fVar8)) {
        *((float *)GEN_TOP((param_1 + 4 + uVar2 * 8))) = param_3;
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar4);
    if (uVar2 == 8) {
      return 0xffffffff;
    }
  }
  *((float *)GEN_TOP((param_1 + uVar2 * 8))) = param_2;
  *((float *)GEN_TOP((param_1 + 4 + uVar2 * 8))) = param_3;
  *((int *)GEN_TOP((param_1 + 0x40))) = *((int *)GEN_TOP((param_1 + 0x40))) + 1;
  return uVar2;
}

/* ref: FUN_01053a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01053a80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x1053a80u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if (*((int *)GEN_TOP((in_ecx + 0x40))) <= (int)param_2) {
    return 0xffffffff;
  }
  *((float *)GEN_TOP((in_ecx + 4 + param_2 * 8))) = param_3;
  return param_2;
}

/* ref: FUN_01053aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01053aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1053aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  if ((int)param_1 < *((int *)GEN_TOP(((int)this + 0x40)))) {
    if ((int)param_1 < *((int *)GEN_TOP(((int)this + 0x40))) - 1) {
      puVar1 = ((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xc)));
      uVar2 = param_1;
      do {
        uVar2 = uVar2 + 1;
        puVar1[-3] = puVar1[-1];
        puVar1[-2] = *puVar1;
        puVar1 = puVar1 + 2;
      } while ((int)uVar2 < *((int *)GEN_TOP(((int)this + 0x40))) - 1);
    }
    *((int *)GEN_TOP(((int)this + 0x40))) = *((int *)GEN_TOP(((int)this + 0x40))) - 1;
    return param_1;
  }
  return 0xffffffff;
}

/* ref: FUN_01053af0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_01053af0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x1053af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float * pfVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 0x40)));
  if (iVar2 == 0) {
    return (float10)0;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    fVar5 = (float10)param_2;
    do {
      fVar6 = (float10)*((float *)GEN_TOP((param_1 + iVar3 * 8)));
      if (!(fVar5 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5))) {
        if (iVar3 == 0) {
          return (float10)*((float *)GEN_TOP((param_1 + 4)));
        }
        fVar6 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + iVar3 * 8))) -
                                (float10)*((float *)GEN_TOP((param_1 - 8 + iVar3 * 8)))))));
        bVar4 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar6);
        if (bVar4 == (bVar4 || (float10)0 == fVar6)) {
          pfVar1 = ((float *)GEN_TOP((param_1 - 4 + iVar3 * 8)));
          return GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar5 - (float10)*((float *)GEN_TOP((param_1 - 8 +
                                                                               iVar3 * 8)))) / fVar6)))
                                  * (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 4 + iVar3 * 8))) -
                                                    (float10)*pfVar1))) + (float10)*pfVar1))));
        }
        return (float10)*((float *)GEN_TOP((param_1 + 4 + iVar3 * 8)));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return (float10)*((float *)GEN_TOP((param_1 - 4 + iVar3 * 8)));
}

/* ref: FUN_01053b90 */
GEN_LIB GEN_FRAME float10 GEN_STDCALL F_01053b90(GEN_P(float param_1, float gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1053b90u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_1;
  fVar2 = GEN_X87((float10)(float)((float10)1 - fVar1));
  fVar3 = (float10)REFG(double, 0x1088108);
  return GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar3))) *
                          (float10)*((float *)GEN_TOP((param_2 + 0x14))) +
                         ((float10)(float)(fVar2 * fVar1 + fVar3) *
                          (float10)*((float *)GEN_TOP((param_2 + 0xc))) +
                         (float10)((float)GEN_TOF((fVar2 * (fVar2 * fVar3)))) *
                         (float10)*((float *)GEN_TOP((param_2 + 4))))))));
}

/* ref: FUN_01053c00 */
GEN_LIB GEN_FRAME float10 GEN_STDCALL F_01053c00(GEN_P(float param_1, float gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1053c00u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP(param_2)) -
                  (float10)*((float *)GEN_TOP((param_2 + 8))) * (float10)*(double *)&REFG(undefined, 0x1092098)) +
                 (float10)*((float *)GEN_TOP((param_2 + 0x10))))));
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) - (float10)*((float *)GEN_TOP(param_2)))));
  fVar3 = (float10)REFG(float, 0x10947f8);
  fVar4 = (float10)fVar1;
  if (!(fVar3 <= fVar4) != ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3)) || fVar4 == fVar3)) {
    return (float10)REFG(float, 0x10928e4);
  }
  fVar3 = (float10)fVar2;
  return GEN_X87((float10)((float)GEN_TOF((((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 -
                                                                fVar4 * (float10)((float)GEN_TOF((((float10)*
                                                  ((float *)GEN_TOP((param_2 + 8))) +
                                                  (float10)*((float *)GEN_TOP(param_2))) -
                                                  (float10)param_1 *
                                                  (float10)*(double *)&REFG(undefined, 0x1092098))))))))))) -
                          (float10)fVar2) / (float10)fVar1))));
}

/* ref: FUN_01053c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01053c90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x1053c90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x40)));
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      fVar6 = (float10)*((float *)GEN_TOP((param_1 + uVar3 * 8)));
      bVar5 = GEN_ISNAN((float10)param_2) || GEN_ISNAN(fVar6);
      if (bVar5 != (bVar5 || (float10)param_2 == fVar6)) {
        if (iVar1 <= (int)uVar3) {
          return 0xffffffff;
        }
        if ((int)uVar3 < iVar1 - 1) {
          puVar2 = ((undefined4 *)GEN_TOP((param_1 + 0xc + uVar3 * 8)));
          uVar4 = uVar3;
          do {
            uVar4 = uVar4 + 1;
            puVar2[-3] = puVar2[-1];
            puVar2[-2] = *puVar2;
            puVar2 = puVar2 + 2;
          } while ((int)uVar4 < *((int *)GEN_TOP((param_1 + 0x40))) - 1);
        }
        *((int *)GEN_TOP((param_1 + 0x40))) = *((int *)GEN_TOP((param_1 + 0x40))) - 1;
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_01053d00 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_01053d00(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x1053d00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  int iVar2;
  float * pfVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = param_1[0x10];
  if (fVar1 == 0.0) {
    return (float10)0;
  }
  iVar2 = 0;
  if (0 < (int)gen_fl2bits(fVar1)) {
    fVar5 = (float10)param_2;
    do {
      if (fVar5 <= (float10)param_1[iVar2 * 2]) {
        if (iVar2 == 0) {
          return (float10)param_1[1];
        }
        if (iVar2 == 1) {
          pfVar3 = param_1;
          if (fVar5 <= ((float10)param_1[2] - (float10)*param_1) * (float10)REFG(double, 0x1088108) +
                       (float10)*param_1) {
LAB_01053de6: ;
            fVar6 = GEN_X87((float10)(float)((float10)param_1[iVar2 * 2] - (float10)param_1[iVar2 * 2 - 2]));
            bVar4 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar6);
            if (bVar4 == (bVar4 || (float10)0 == fVar6)) {
              return GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar5 - (float10)param_1[iVar2 * 2 - 2]) /
                                                      fVar6))) *
                                      (float10)(float)((float10)param_1[iVar2 * 2 + 1] -
                                                      (float10)param_1[iVar2 * 2 - 1]) +
                                     (float10)param_1[iVar2 * 2 - 1]))));
            }
            return (float10)param_1[iVar2 * 2 + 1];
          }
        }
        else {
          pfVar3 = param_1 + iVar2 * 2 - 2;
          if (fVar5 <= ((float10)param_1[iVar2 * 2] - (float10)*pfVar3) * (float10)REFG(double, 0x1088108) +
                       (float10)*pfVar3) {
            pfVar3 = param_1 + iVar2 * 2 - 4;
          }
          else if (iVar2 == (int)gen_fl2bits(fVar1) - 1) goto LAB_01053de6;
        }
        fVar5 = F_01053c00(param_2,(uint)pfVar3);
        fVar5 = (float10)(float)fVar5;
        bVar4 = GEN_ISNAN((float10)REFG(float, 0x10928e4)) || GEN_ISNAN(fVar5);
        if (bVar4 != (bVar4 || (float10)REFG(float, 0x10928e4) == fVar5)) {
          fVar5 = GEN_X87((float10)((float)GEN_TOF((((((float10)param_2 + (float10)param_2) - (float10)*pfVar3) -
                                   (float10)pfVar3[2]) / ((float10)pfVar3[4] - (float10)*pfVar3)))));
        }
        fVar5 = F_01053b90((float)fVar5,pfVar3);
        return (float10)(float)fVar5;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)gen_fl2bits(fVar1));
  }
  return (float10)param_1[iVar2 * 2 - 1];
}

/* ref: FUN_01053e40 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_01053e40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x1053e40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  if (*((char *)GEN_TOP((param_1 + 0x44))) == '\0') {
    fVar1 = F_01053af0(param_1 GEN_EDX_FWD,param_2);
    return fVar1;
  }
  if (*((char *)GEN_TOP((param_1 + 0x44))) != '\x01') {
    return (float10)0;
  }
  fVar1 = F_01053d00(param_1 GEN_EDX_ARG,param_2);
  return fVar1;
}

/* ref: FUN_01053e80 */
GEN_LIB GEN_FRAME unsigned int F_01053e80(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1053e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01053ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1053ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cc7020(param_1,(undefined1)param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01053ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1053ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc7150(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01053ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1053ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cc8c90(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01053f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1053f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00cc8970(param_1,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01053f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1053f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00cc7310(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_01053f40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_01053f40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1053f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cc73f0(param_1);
  return uVar1;
}

/* ref: FUN_01053fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01053fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1053fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x136de60) + 1;
  REFG(undefined4, 0x136de60) = uVar1;
  F_00d08b40(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2,uVar1,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_01054000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x1054000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x136de60) + 1;
  REFG(undefined4, 0x136de60) = uVar1;
  F_00d08c80(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2,uVar1,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_01054040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1054040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x136de60) + 1;
  REFG(undefined4, 0x136de60) = uVar1;
  F_00d08d60(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,uVar1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf9 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_01054070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1054070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (this[0x2c] != (undefined1)0x0) {
    F_00cc32f0(param_1);
    F_00cc25e0(param_1);
    F_00cea2f0(param_1);
    F_00cbf830(param_1);
    F_00cc74f0();
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010540b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10540b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = F_00427d90();
  iVar1 = (int)uVar2 - *(int *)(this + 0x18);
  if (this[0x2c] != (undefined1)0x0) {
    F_00cc3430(iVar1);
    F_00cc33c0(iVar1);
  }
  *(ulonglong *)(this + 0x18) = uVar2;
  return (uint)(uVar2 >> 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010540f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10540f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = F_00427d90();
  iVar1 = (int)uVar2 - *(int *)(this + 0x10);
  if (this[0x2c] != (undefined1)0x0) {
    F_00cc3490(iVar1);
    F_00cbf830(iVar1);
    F_00cc74f0();
  }
  *(ulonglong *)(this + 0x10) = uVar2;
  return (uint)(uVar2 >> 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf28 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1054140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc52a0(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1054170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cc5d00(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf31 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054190(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1054190u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cbfb60(param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_010541b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10541b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010541c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10541c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00cbbd50(param_1 GEN_EDX_FWD,param_2,*(undefined4 *)(this + 4));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010541e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10541e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00cbe360(param_1 GEN_EDX_FWD,param_2);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1054200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cc6f60(param_2);
  F_00cbe360(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: FUN_01054230 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_01054230(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1054230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_01055cb0(param_1 GEN_EDX_ARG,param_2);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1054250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cbfc80(param_2);
  F_00cbb870(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1054280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cbfcb0(param_2);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010542b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10542b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cbfce0(param_2);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010542e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10542e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cbfd10(param_2);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1054310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cbfd40(param_2);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1054340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cbfd70(param_2);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1054370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00cbfe20(param_2,param_3);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010543a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10543a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00cbaea0(param_1 GEN_EDX_FWD,param_2);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf27 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010543c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x10543c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  bVar1 = F_00cc6ea0(param_1,param_2,param_3);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf68 */
GEN_LIB GEN_NOFRAME uint F_010543e0(void)
{
  GEN_ENTER(0x10543e0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7754);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf33 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1054400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x404, 12, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00cc5520(((undefined4 *)(gen_frame + 0x0)),0x100);
  uVar4 = param_2;
  if (uVar2 < param_2) {
    uVar4 = uVar2;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((undefined4 *)(gen_frame + 0x0))[(int)(uVar2)])) + 0xd0))))(((int *)GEN_TOP(((undefined4 *)(gen_frame + 0x0))[(int)(uVar2)])) GEN_EDX_ARG);
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *((uint *)GEN_TOP((param_1 + iVar1))) = uVar3;
    } while (uVar2 < uVar4);
  }
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf36 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1054490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc77f0(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf37 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_010544b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10544b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (*(int *)(this + 4) != 0) {
    F_00d05de0(*(int *)(this + 4) GEN_EDX_FWD,0xffffffff,param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf38 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010544d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10544d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc84b0((undefined1)param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf41 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010544f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10544f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cc5440(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf42 */
GEN_LIB GEN_NOFRAME unsigned int F_01054510(void)
{
  GEN_ENTER(0x1054510u, 0u, 0u, 0u, 0u);
  F_00cc5800();
  F_00cc00e0();
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf43 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1054520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc8600(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf44 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1054540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc8690(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf45 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x1054560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00cc8710(param_1,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf46 */
GEN_LIB GEN_NOFRAME uint F_01054580(void)
{
  GEN_ENTER(0x1054580u, 0u, 0u, 0u, 0u);
  return REFG(int, 0x15d86bc) - REFG(int, 0x15d86b8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf47 */
GEN_LIB GEN_NOFRAME uint F_01054590(void)
{
  GEN_ENTER(0x1054590u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d86b8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf48 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_010545a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10545a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00cc87b0(param_1);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf49 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010545c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10545c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00cc8800(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf64 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010545e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10545e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cbf720(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf65 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01054600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1054600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00cbf7b0(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf63 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01054620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1054620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00cc74d0(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf69 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_01054640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1054640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x30));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_01054660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1054660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x30));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf74 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_01054680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1054680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x118, 8, 4);
  char cVar1;
  int iVar2;
  byte bVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char * pcVar10;
  float10 fVar11;
  double dVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x110)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x114));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(int *)(gen_frame + 0x8)) = param_1;
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b4498)));
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b44ac)));
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b44b8)),(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0xc))[0x2c]);
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b44cc)),(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0xc))[0x2d]);
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b44e4)),(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0xc))[0x2e]);
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xdc))))((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b44fc)),uVar5 & 0xff);
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b4510)),(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0xc))[0x2f]);
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xe4))))((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b4524)),uVar5 & 0xff);
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b4540)),*(int *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x20));
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b455c)),*(int *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x24));
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b4574)),*(int *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x28));
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b4588)),*(int *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8));
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b45a0)),*(int *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x10),*(int *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x14));
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b45b8)),*(int *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x18),*(int *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x1c));
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xb8))))((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b45cc)),uVar5);
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xbc))))((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b45e0)),uVar5);
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(REFG(int, 0x15d7754)));
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b45f0)),REFG(int, 0x15d7754));
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  uVar8 = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  if (0 < (int)(*(undefined * PTR32 *)(gen_frame + 0xc))) {
    do {
      F_00cbf720(uVar8);
      uVar5 = F_00cbf770(uVar8);
      fVar11 = F_00cbfef0(uVar8);
      dVar12 = (double)fVar11;
      bVar3 = F_00cbfb10(uVar8);
      uVar6 = (uint)bVar3;
      bVar3 = F_00cbfad0(uVar8,uVar6,(int)(ulonglong)gen_d2bits(dVar12),
                           (int)((ulonglong)gen_d2bits(dVar12) >> 0x20),uVar5);
      uVar9 = (uint)bVar3;
      uVar7 = F_00cbfbc0(uVar8);
      bVar3 = F_00cbf7b0(uVar8);
      F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b4600)),uVar8,
               (uint)bVar3,uVar7,uVar9,uVar6,(int)(ulonglong)gen_d2bits(dVar12),
               (int)((ulonglong)gen_d2bits(dVar12) >> 0x20),uVar5);
      pcVar4 = ((char *)(gen_frame + 0x10));
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
      pcVar4 = ((char *)GEN_TOP(((*(int *)(gen_frame + 0x8)) - 1)));
      do {
        pcVar10 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar10 != '\0');
      pcVar10 = ((char *)(gen_frame + 0x10));
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar4 = pcVar4 + 4;
      }
      uVar8 = uVar8 + 1;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar4 = pcVar4 + 1;
      }
    } while ((int)uVar8 < (int)(*(undefined * PTR32 *)(gen_frame + 0xc)));
  }
  F_00d2de20(((undefined1 *)(gen_frame + 0x0)),0);
  dVar12 = F_00cbb9b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  bVar3 = F_00cbb930(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar6 = (uint)bVar3;
  uVar5 = F_00cbb9f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar8 = F_00cbb8f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b4644)),uVar8,uVar5,uVar6,
           (int)(ulonglong)gen_d2bits(dVar12),(int)((ulonglong)gen_d2bits(dVar12) >> 0x20));
  iVar2 = (*(int *)(gen_frame + 0x8));
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP(((*(int *)(gen_frame + 0x8)) - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = F_00cc54e0();
  F_00c4720f(((char *)(gen_frame + 0x10)),((char *)REFP(0x12b4678)),uVar5);
  pcVar4 = ((char *)(gen_frame + 0x10));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x10));
  pcVar4 = ((char *)GEN_TOP((iVar2 - 1)));
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x10));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00cc5940(iVar2);
  F_00ce9e30(iVar2);
  uVar5 = F_00ccb6c0(iVar2);
  F_00cbb890(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf54 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054d90(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1054d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cbfe50()));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,(uint)(param_2 == '\0'));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf55 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01054dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1054dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cbfe50()));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf56 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054de0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1054de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cbfe60()));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,(uint)(param_2 == '\0'));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf57 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01054e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1054e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cbfe60()));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054e30(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1054e30u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float10 fVar1;
  uint uVar2;
  undefined4 uVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x60))))(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x60))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),1);
  fVar1 = (float10)1;
  if (((float10)param_2 <= fVar1) && (param_2 = (float)fVar1, param_3 == 0)) {
    F_00cc26e0((float)fVar1,0);
    F_00cc6ad0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
    uVar3 = 1;
  }
  else {
    F_00cc26e0(param_2,param_3);
    F_00cc6b10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,0,param_3);
    F_00cc6ad0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
    F_00cc6b10(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_2,0,param_3);
    uVar3 = 0;
  }
  uVar2 = F_00cc6ad0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar3);
  F_00cc6ac0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00cc6ac0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf62 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054f00(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1054f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined1 * puVar4;
  
  iVar1 = *param_1;
  uVar2 = F_00cbfda0();
  puVar4 = ((undefined1 *)(gen_frame + 0x0));
  ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x60))))(param_1);
  fVar3 = F_00cbfdc0(param_2,puVar4,uVar2);
  uVar2 = F_00cbfdf0(param_2);
  F_00cc26e0(fVar3,uVar2);
  F_00cc6b10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,fVar3,0,uVar2);
  uVar2 = F_00cc6ad0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  F_00cc6ac0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_01054f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01054f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1054f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b47fc));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar2 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x10))) = uVar2;
  uVar2 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x18))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x10000;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  *((undefined1 *)GEN_TOP(((int)this + 0x48))) = 1;
  F_00cc0dd0(param_1);
  F_00cc8dd0(param_1);
  F_00cc5dc0(param_1);
  (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  F_00cea4e0(&(*(undefined4 *)(gen_frame + 0x10)));
  if (*((char *)GEN_TOP((param_1 + 0x1bc))) == '\0') {
    uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x44)));
    (*(undefined4 *)(gen_frame + 0x4)) = 0x10000;
    (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)REFP(0x12b4420));
    (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
    F_00ce3d30(&(*(char * PTR32 *)(gen_frame + 0x0)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 3;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP((param_1 + 0x4c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP((param_1 + 0x50)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((param_1 + 0x60)));
  *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 1;
  return (uint)this;
}

/* ref: FUN_01055030 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_01055030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b47fc));
  if ((REFG(int, 0x15d8c04) != 0) && (REFG(int, 0x15d8c04) != -0xa0)) {
    F_00ce3b10(1);
    F_00ce3530();
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 0;
  F_00cc5320();
  F_00cc27e0();
  F_00ce9fe0();
  F_00cc6d60();
  F_00cbf410();
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b46cc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf7 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01055090(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1055090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  undefined * this;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x12) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_3 != '\0') {
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_2)));
    F_00cbe4b0(this GEN_EDX_ARG);
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  piVar2 = ((int *)GEN_TOP(F_00cc6e00(param_2)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    if ((char)param_1[0x12] != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  bVar1 = F_00cc2b60(piVar2);
  if ((bVar1 == 0) && ((short)piVar2[8] < 1)) {
    if ((*(byte *)(piVar2 + 0x12) & 8) != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
      if (uVar3 != 3) {
        bVar1 = F_00ce3460(piVar2[5]);
        if (bVar1 != 0) goto LAB_0105513a;
      }
    }
    bVar1 = F_00cc8a70(param_2);
    if ((char)param_1[0x12] != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return bVar1;
  }
LAB_0105513a: ;
  if ((char)param_1[0x12] != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf8 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01055170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1055170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x30);
  this[0x48] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar2 = ((int *)GEN_TOP(F_00cc6e00(param_1)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_00cc2b60(piVar2);
    if ((bVar1 != 0) || (0 < (short)piVar2[8])) {
LAB_010551ce: ;
      if (this[0x48] != (undefined1)0x0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    if ((*(byte *)(piVar2 + 0x12) & 8) != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
      if (uVar3 != 3) {
        bVar1 = F_00ce3460(piVar2[5]);
        if (bVar1 != 0) goto LAB_010551ce;
      }
    }
  }
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

/* ref: FUN_01055200 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_01055200(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(byte param_8, unsigned int gen_a7), GEN_P(byte param_9, unsigned int gen_a8))
{
  GEN_ENTER(0x1055200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(byte param_8 = (byte)gen_a7;)
  GEN_PIN(byte param_9 = (byte)gen_a8;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  char * pcVar8;
  undefined4 uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) = param_1;
  ((byte *)(gen_frame + 0x0))[0x10] = param_4;
  (*(undefined4 *)(gen_frame + 0x20)) = param_5;
  (*(uint *)(gen_frame + 0x24)) = param_2;
  ((byte *)(gen_frame + 0x0))[0x1c] = param_8;
  ((byte *)(gen_frame + 0x0))[0x14] = param_9;
  F_00ccb2c0(((char *)(gen_frame + 0x2c)) GEN_EDX_FWD);
  uVar6 = param_2;
  if ((*((byte *)GEN_TOP((param_3 + 4))) & 0x80) == 0) {
LAB_010552ac: ;
    puVar2 = ((undefined4 *)GEN_TOP(F_00ce9a60(param_2,param_3)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      pcVar8 = ((char *)(gen_frame + 0x2c));
      for (iVar3 = 0x1f; uVar6 = (*(uint *)(gen_frame + 0x24)), iVar3 != 0; iVar3 = iVar3 - 1) {
        *(undefined4 *)pcVar8 = *puVar2;
        puVar2 = puVar2 + 1;
        pcVar8 = pcVar8 + 4;
      }
    }
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    if (REFG(char, 0x15d7798) == '\0') goto LAB_010552ac;
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    F_00cca3f0(&REFG(char, 0x15d7798) GEN_EDX_ARG,((char *)(gen_frame + 0x2c)),(uint)*((ushort *)GEN_TOP((param_3 + 6))));
  }
  uVar4 = (*(uint *)(gen_frame + 0x30));
  bVar1 = (byte)((*(uint *)(gen_frame + 0x30)) >> 0x10);
  if (((*(uint *)(gen_frame + 0x30)) >> 0x10 & 4) == 0) {
    if (((*(uint *)(gen_frame + 0x30)) & 0x80000) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 2)) = bVar1 | 2;
      iVar3 = *((int *)GEN_TOP((uVar6 + 0x10))) * 1000;
      (*(int *)(gen_frame + 0x34)) = iVar3;
      iVar3 = iVar3 + 999;
      goto LAB_0105530a;
    }
  }
  else {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 2)) = bVar1 | 2;
    iVar3 = *((int *)GEN_TOP((uVar6 + 0x10))) * 1000 + (uint)*((ushort *)GEN_TOP((param_3 + 0xc)));
    (*(int *)(gen_frame + 0x34)) = iVar3;
LAB_0105530a: ;
    (*(uint *)(gen_frame + 0x30)) = uVar4 | 0x20000;
    (*(int *)(gen_frame + 0x38)) = iVar3;
  }
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)(gen_frame + 0x2b)) = 0;
  if (((*(undefined2 *)((char *)((char *)(gen_frame + 0x2c)) + 2)) != 0) && (((char *)(gen_frame + 0x2c))[0] != '\0')) {
    uVar4 = F_00cc1e50(((char *)(gen_frame + 0x2c)),param_3,(*(undefined4 *)(gen_frame + 0x20)),param_6,param_7,&(*(undefined1 *)(gen_frame + 0x2b)),0);
    (*(uint *)(gen_frame + 0x24)) = uVar4;
    if ((uVar4 != 0) && (uVar4 - 1 < 5)) {
      if (uVar4 == 1) {
        pcVar8 = ((char *)(gen_frame + 0x3c));
      }
      else {
        pcVar8 = ((char *)(gen_frame + 0x3c)) + (uVar4 * 3 - 6) * 8 + 0x18;
        if (pcVar8 == ((char *)GEN_TOP(0x0))) goto LAB_01055390;
      }
      iVar3 = 0;
      do {
        if (pcVar8[iVar3] == '\a') {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 1);
    }
  }
LAB_01055390: ;
  bVar1 = F_00cbf6a0(param_3);
  if ((bVar1 != 0) &&
     (piVar5 = ((int *)GEN_TOP(F_00cc5fc0(uVar6,param_3,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)),(byte)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))))),
     piVar5 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x198))))(piVar5 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x9c))))(piVar5 GEN_EDX_ARG,param_6,param_7);
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xec))))(piVar5 GEN_EDX_ARG);
    if ((uVar6 == 2) || (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xec))))(piVar5 GEN_EDX_ARG), uVar6 == 0xc)) {
      *(undefined1 *)(piVar5 + 0x106) = (*(undefined1 *)(gen_frame + 0x2b));
    }
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xa4))))(piVar5 GEN_EDX_ARG);
    piVar7 = ((int *)GEN_TOP(F_00cbf660(uVar6)));
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      uVar9 = *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + 4)));
      iVar3 = *piVar7;
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xd0))))(piVar5 GEN_EDX_ARG);
      uVar6 = F_00cbbd50(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar6,uVar9);
      ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 8))))(piVar7,uVar6);
      F_00cbbdb0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    F_00ce9cd0(((char *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x24)),piVar5);
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xd0))))(piVar5 GEN_EDX_ARG);
    return uVar6;
  }
  return 0;
}

/* ref: FUN_010554c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010554c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x10554c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[10];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  gen_args[8] = gen_a9;
  gen_args[9] = gen_a10;
  GEN_FRAME_DECL_TOP(0x58, 8, 4);
  uint uVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  code * pcVar6;
  bool bVar7;
  undefined4 uVar8;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x48))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  uVar4 = (*(uint *)&gen_args[2]);
  (*(uint *)(gen_frame + 0x48)) = (*(uint *)&gen_args[1]);
  (*(ulonglong *)(gen_frame + 0x10)) = F_00427d90();
  uVar1 = (*(uint *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = (*(uint *)&gen_args[4]);
  (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x48));
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x80001;
  (*(uint *)(gen_frame + 0x28)) = (*(uint *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 *)&gen_args[7]);
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)&gen_args[8]);
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x0)),0x38);
  (*(uint *)(gen_frame + 0x50)) = (*(uint *)&gen_args[4]) & 1;
  if (((*(uint *)&gen_args[4]) & 1) == 0) {
    piVar3 = ((int *)GEN_TOP(F_00cc6e60(uVar1)));
  }
  else {
    piVar3 = ((int *)GEN_TOP(F_00cc6e00((*(uint *)&gen_args[1]))));
  }
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
    if (uVar4 == 3) {
LAB_0105556b: ;
      piVar3 = ((int *)GEN_TOP(F_00cc5fc0(piVar3,0,(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[9]),0)));
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        uVar8 = *((undefined4 *)GEN_TOP(((int)this + 4)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xd0))))(piVar3 GEN_EDX_ARG);
        F_00cbbd50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar4,uVar8);
        goto LAB_01055815;
      }
    }
    else if ((*(byte *)(piVar3 + 0x12) & 8) == 0) {
LAB_01055633: ;
      F_00ce11f0(piVar3 GEN_EDX_ARG);
      if ((*(uint *)(gen_frame + 0x50)) == 0) {
        pcVar6 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x28)));
        uVar4 = (*(uint *)&gen_args[3]);
      }
      else {
        pcVar6 = *((gen_code32 *)GEN_TOP((*piVar3 + 0xc)));
        uVar4 = (*(uint *)&gen_args[2]);
      }
      uVar4 = (*pcVar6)(piVar3,uVar4);
      (*(uint *)(gen_frame + 0x4c)) = uVar4;
      if (uVar4 != 0) {
        if ((*(uint *)(gen_frame + 0x50)) == 0) {
          pcVar6 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x2c)));
          uVar4 = (*(uint *)&gen_args[3]);
        }
        else {
          pcVar6 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x18)));
          uVar4 = (*(uint *)&gen_args[2]);
        }
        uVar4 = (*pcVar6)(piVar3,uVar4);
        (*(uint *)(gen_frame + 0x48)) = uVar4;
        if (uVar4 != 0) {
          F_00d2de20(((undefined1 *)(gen_frame + 0x40)),0);
          (*(uint *)(gen_frame + 0x48)) = (uint)*((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x48)) + 0xd)));
          uVar4 = F_00cbb9f0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
          if (uVar4 != (*(uint *)(gen_frame + 0x48))) {
            F_00cbba10(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x48)));
          }
          F_00cbb890(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
        }
        bVar2 = F_00cbf7b0((uint)*((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 1))));
        if ((bVar2 == 0) || (((*(uint *)&gen_args[4]) & 0x10) != 0)) {
          if (((*(byte *)(piVar3 + 0x12) & 8) != 0) || (((*(uint *)&gen_args[4]) & 0x10) != 0)) {
            if ((*(uint *)(gen_frame + 0x50)) == 0) {
              pcVar6 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x2c)));
              uVar4 = (*(uint *)&gen_args[3]);
            }
            else {
              pcVar6 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x18)));
              uVar4 = (*(uint *)&gen_args[2]);
            }
            uVar4 = (*pcVar6)(piVar3,uVar4);
            bVar7 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*((float *)GEN_TOP((uVar4 + 0x54))));
            (*(uint *)&gen_args[3]) = F_01055200(this GEN_EDX_ARG,piVar3,(*(uint *)(gen_frame + 0x4c)),(char)(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),
                                   (char)(*(undefined4 *)&gen_args[9]),
                                   bVar7 == (bVar7 || (float10)0 ==
                                                      (float10)*((float *)GEN_TOP((uVar4 + 0x54)))));
            F_00ce1230(piVar3 GEN_EDX_ARG);
            F_00cbbd50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(uint *)&gen_args[3]),*((undefined4 *)GEN_TOP(((int)this + 4))));
            goto LAB_01055815;
          }
          if ((*(uint *)(gen_frame + 0x50)) == 0) {
            F_00cc6ea0((*(uint *)&gen_args[3]),&(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[2]));
          }
          (*(uint *)&gen_args[3]) = F_01054000(this GEN_EDX_ARG,(*(uint *)&gen_args[1]),(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]));
        }
        else {
          if ((*(uint *)(gen_frame + 0x50)) == 0) {
            F_00cc6ea0((*(uint *)&gen_args[3]),&(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[2]));
          }
          (*(uint *)&gen_args[3]) = F_01053fc0(this GEN_EDX_ARG,(*(uint *)&gen_args[1]),(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]));
        }
        F_00ce1230(piVar3 GEN_EDX_ARG);
        F_00cbbd50(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG,(*(uint *)&gen_args[3]),*((undefined4 *)GEN_TOP(((int)this + 4))));
        F_00cbc4e0(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[6]));
        F_00cbbd90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x38)));
        F_00cbbdb0(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG);
        goto LAB_01055815;
      }
      F_00ce1230(piVar3 GEN_EDX_ARG);
    }
    else if ((*(byte *)(piVar3 + 0x12) & 0x20) == 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xa0))))(piVar3 GEN_EDX_ARG);
      if ((char)uVar4 != '\0') {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x88))))(piVar3 GEN_EDX_ARG);
        if ((char)uVar4 == '\0') goto LAB_0105556b;
        goto LAB_01055633;
      }
    }
    else {
      bVar2 = F_00cc5160(piVar3);
      if (bVar2 != 0) {
        piVar5 = ((int *)GEN_TOP(F_00cc5fc0(piVar3,0,(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[9]),0)));
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          piVar3[0x30] = (int)piVar5;
          uVar8 = *((undefined4 *)GEN_TOP(((int)this + 4)));
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xd0))))(piVar5 GEN_EDX_ARG);
          F_00cbbd50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar4,uVar8);
          goto LAB_01055815;
        }
      }
    }
  }
  F_00cbbd70((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
LAB_01055815: ;
  if (*((char *)GEN_TOP(((int)this + 0x48))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x1055830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  F_010554c0(this GEN_EDX_FWD,param_1,0,0,param_2,2,param_4,param_3,param_5,param_6,param_7);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x1055870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  F_010554c0(this GEN_EDX_FWD,param_1,param_2,param_3,0,0x11,0,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010558b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x10558b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  F_010554c0(this GEN_EDX_FWD,param_1,0,0,param_2,0x12,0,param_3,param_4,param_5,param_6);
  return param_1;
}

/* ref: FUN_010558e0 */
GEN_LIB_GS GEN_FRAME uint F_010558e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x10558e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x12b46ac)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x12b468c)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1055980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  F_010554c0(this GEN_EDX_FWD,param_1,param_2,param_3,0,1,param_5,param_4,param_6,param_7,param_8);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_010559c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10559c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(int *)(this + 4) == 0) {
    piVar1 = ((int *)GEN_TOP(F_00d2cce0()));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0x10558e0));
      }
      ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x12b4490)),"",((char *)REFP(0x12b4480)),0xb1,
                      ((char *)REFP(0x12b4438)));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x9c))))(piVar1 GEN_EDX_ARG,0);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa0))))(piVar1 GEN_EDX_ARG,uVar2)));
    *(undefined * PTR32 *)(this + 4) = this_00;
    F_00d05170(this_00 GEN_EDX_ARG,1,1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ISoundDriver::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055a50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[75])REFP(0x12b46cc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_01055af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc0))) = param_2;
  return param_2;
}

/* ref: FUN_01055b00 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01055b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x418))) = param_2;
  return param_2;
}

/* ref: FUN_01055b40 */
GEN_LIB GEN_FRAME uint F_01055b40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x1055b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_01055b50 */
GEN_LIB GEN_FRAME ulonglong F_01055b50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return CONCAT44(param_2,param_1);
}

/* ref: FUN_01055b60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_01055b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9))
{
  GEN_ENTER(0x1055b60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_8;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_9;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf66 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf67 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01055bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf39 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01055bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf50 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01055be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2d))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf51 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01055bf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x2d)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf52 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01055c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2e))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf53 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01055c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x2e)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf58 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01055c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2f))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf59 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01055c30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x2f)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf71 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01055c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf72 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01055c50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf73 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01055c60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x28)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055c70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_01055030(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_01055ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_01055cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055cb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00cbe360(in_ecx GEN_EDX_FWD,param_2);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  return (uint)in_ecx;
}

/* ref: FUN_01055cd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01055cd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00cbe380(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  return (uint)in_ecx;
}

/* ref: FUN_01055cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055cf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  F_00cbe380(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  in_ecx[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
  return (uint)in_ecx;
}

/* ref: FUN_01055d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055d30(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (in_ecx != param_2) {
    *((undefined4 *)GEN_TOP((in_ecx + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  }
  return in_ecx;
}

/* ref: FUN_01055d50 */
GEN_LIB GEN_FRAME byte F_01055d50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00cbe3e0(param_1 GEN_EDX_ARG);
  uVar2 = F_00cbe3e0(param_2 GEN_EDX_ARG);
  return uVar1 == uVar2;
}

/* ref: FUN_01055d70 */
GEN_LIB GEN_FRAME byte F_01055d70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00cbe3e0(param_1 GEN_EDX_ARG);
  uVar2 = F_00cbe3e0(param_2 GEN_EDX_ARG);
  return uVar1 != uVar2;
}

/* ref: FUN_01055d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1055d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x10))) = param_1;
  }
  return uVar1;
}

/* ref: FUN_01055dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1055dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1055e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1055e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x3c))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1055e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1055e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055ec0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01055ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1055ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))));
  while (uVar1 != 0) {
    uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))));
  }
  return 0;
}

/* ref: FUN_01055ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1055ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1055f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1055f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1055f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x1055fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBankController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01055fe0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1055fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  F_00cbe3b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_01056010 */
GEN_LIB GEN_FRAME unsigned int F_01056010(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1056010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_01056030 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_01056030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4bd0));
  iVar2 = 0;
  do {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x28))))));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    }
    *((undefined4 *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x28)))))) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x78);
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x28))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x2c))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x2c))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4ba4));
  return 0;
}

/* ref: FUN_010560d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010560d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x10560d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  
  iVar1 = (int)param_3;
  if (2 < iVar1) {
    iVar1 = 2;
  }
  if (iVar1 == 0) {
    *((undefined4 *)GEN_TOP((param_2 + 4))) = **((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x2c)));
    return param_2;
  }
  if (iVar1 == 1) {
    *((undefined4 *)GEN_TOP((param_2 + 4))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2c))) + 4)));
    return param_2;
  }
  if (iVar1 == 2) {
    *((undefined4 *)GEN_TOP((param_2 + 4))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2c))) + 8)));
    return param_2;
  }
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01056130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1056130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: FUN_01056140 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01056140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01056150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1056150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_01056160 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01056160(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01056170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x34)));
}

/* ref: FUN_01056180 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01056180(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x1056180u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  byte bVar1;
  byte extraout_AL = 0;
  int iVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  *((undefined1 *)GEN_TOP((param_1 + 0x1c))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar2 = (int)param_4;
  if (2 < iVar2) {
    iVar2 = 2;
  }
  if (iVar2 == 0) {
    uVar3 = **((uint * PTR32 *)GEN_TOP((param_1 + 0x2c)));
  }
  else if (iVar2 == 1) {
    uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2c))) + 4)));
  }
  else {
    uVar3 = (*(uint *)(gen_frame + 0x0));
    if (iVar2 == 2) {
      uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2c))) + 8)));
    }
  }
  if ((uVar3 != 0xffffffff) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x24))) + 0x6c))))
                        (*((int * PTR32 *)GEN_TOP((param_1 + 0x24))) GEN_EDX_ARG,uVar3,&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8))), (char)uVar3 != '\0'))
  {
    if (0x1d < *((int *)GEN_TOP((param_1 + 0x34)))) {
      *((undefined4 *)GEN_TOP((param_1 + 0x34))) = 0;
    }
    bVar1 = F_01056c50(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + *((int *)GEN_TOP((param_1 + 0x34))) * 4))) GEN_EDX_ARG,
                         param_2,param_3,param_4,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
    uVar3 = (uint)bVar1;
    *((int *)GEN_TOP((param_1 + 0x34))) = *((int *)GEN_TOP((param_1 + 0x34))) + 1;
  }
  bVar1 = (byte)uVar3;
  if (*((char *)GEN_TOP((param_1 + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    bVar1 = extraout_AL;
  }
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf6 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_01056260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1056260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  *(undefined4 *)(this + 0x38) = param_1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20) + 0x30))))(*(int * PTR32 *)(this + 0x20) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  if ((char)uVar2 != '\0') {
    iVar3 = 0;
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))) + 0x34))) != -1) {
        bVar1 = F_01057480(*((int *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x0)));
        if (bVar1 != 0) {
          F_010570f0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + iVar3))) GEN_EDX_ARG);
        }
        if (*((char *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))) + 0x40))) != '\0') {
          F_01056d30(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))) GEN_EDX_ARG);
        }
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x78);
  }
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4));
  }
  return 0;
}

/* ref: FUN_01056300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01056300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1056300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (*((int *)GEN_TOP((*piVar3 + 0x34))) == param_1) break;
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 1;
    uVar2 = 0xffffffff;
  } while ((int)uVar1 < 0x1e);
  if (*((char *)GEN_TOP(((int)this + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  }
  return uVar2;
}

/* ref: FUN_01056350 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_01056350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1056350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  int iVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  iVar1 = 0;
  do {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0x28))))));
    if (*((int *)GEN_TOP(((int)this_00 + 0x34))) != -1) {
      F_010569e0(this_00 GEN_EDX_ARG,param_1,param_2);
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x78);
  if (*((char *)GEN_TOP(((int)this + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf9 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010563b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x10563b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte extraout_AL = 0;
  byte bVar1;
  byte extraout_AL_00 = 0;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 4);
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar3 = *(int * PTR32 *)(this + 0x28);
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    if (*((int *)GEN_TOP((*piVar3 + 0x34))) == param_1) goto LAB_010563f7;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x1e);
  iVar4 = -1;
LAB_010563f7: ;
  bVar1 = (byte)iVar2;
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL;
  }
  if (iVar4 != -1) {
    bVar1 = F_01056cc0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + iVar4 * 4))) GEN_EDX_ARG);
  }
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL_00;
  }
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf8 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01056430(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x1056430u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  byte extraout_AL = 0;
  int iVar2;
  int * piVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *((undefined1 *)GEN_TOP((param_1 + 0x1c))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined1 *)GEN_TOP((param_1 + 0x1c))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar3 = *((int * PTR32 *)GEN_TOP((param_1 + 0x28)));
  iVar2 = 0;
  do {
    if (*((int *)GEN_TOP((*piVar3 + 0x34))) == param_3) goto LAB_0105647a;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x1e);
  iVar2 = -1;
LAB_0105647a: ;
  if (*((char *)GEN_TOP((param_1 + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  if (iVar2 == -1) {
    bVar1 = F_01056180(param_1 GEN_EDX_ARG,param_3,param_4,param_5);
  }
  else {
    bVar1 = F_01057600(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + iVar2 * 4))) GEN_EDX_ARG,param_2,
                         *((undefined4 *)GEN_TOP((param_1 + 0x38))));
  }
  if (*((char *)GEN_TOP((param_1 + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL;
  }
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_010564e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10564e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  if (0x1e < *(int *)(this + 0x30)) {
    *(undefined4 *)(this + 0x30) = 0;
    uVar1 = F_01056300(this GEN_EDX_ARG,0);
    if (uVar1 != 0xffffffff) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,*(undefined4 *)(this + 0x30));
    }
  }
  uVar1 = *(uint *)(this + 0x30);
  *(uint *)(this + 0x30) = uVar1 + 1;
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4));
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf7 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01056540(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x1056540u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  byte extraout_AL = 0;
  int iVar2;
  int * piVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *((undefined1 *)GEN_TOP((param_1 + 0x1c))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined1 *)GEN_TOP((param_1 + 0x1c))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar3 = *((int * PTR32 *)GEN_TOP((param_1 + 0x28)));
  iVar2 = 0;
  do {
    if (*((int *)GEN_TOP((*piVar3 + 0x34))) == param_3) goto LAB_0105658a;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x1e);
  iVar2 = -1;
LAB_0105658a: ;
  if (*((char *)GEN_TOP((param_1 + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  if (iVar2 == -1) {
    bVar1 = F_01056180(param_1 GEN_EDX_ARG,param_3,param_4,param_4);
  }
  else {
    bVar1 = F_01057600(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + iVar2 * 4))) GEN_EDX_ARG,param_2,
                         *((undefined4 *)GEN_TOP((param_1 + 0x38))));
  }
  if (*((char *)GEN_TOP((param_1 + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL;
  }
  return bVar1;
}

/* ref: FUN_010565e0 */
GEN_LIB_GS GEN_FRAME uint F_010565e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x10565e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x12b4b84)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x12b4b64)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_01056680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_01056680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4bd0));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x1248,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10);
  *((uint *)GEN_TOP(((int)this + 0x28))) = uVar2;
  if (uVar2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0x10565e0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x12b4a48),&REFG(undefined, 0x12b49ff),((char *)REFP(0x12b4a38)),0x26,
                    "SQEX::CDev::Engine::Sd::Whiz::WhizManager::WhizManager");
  }
  else {
    iVar3 = 0;
    do {
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
      }
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                  (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x9c,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_01056b90(this_00 GEN_EDX_ARG,this);
      }
      *((uint *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0x28)))))) = uVar2;
      F_01056cc0(*((undefined * PTR32 *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0x28)))))) GEN_EDX_ARG);
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x78);
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xc,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10);
  *((uint *)GEN_TOP(((int)this + 0x2c))) = uVar2;
  if (uVar2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0x10565e0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x12b4b24),&REFG(undefined, 0x12b4a37),((char *)REFP(0x12b4b14)),0x2e,
                    "SQEX::CDev::Engine::Sd::Whiz::WhizManager::WhizManager");
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2c)));
  *puVar1 = 0x99;
  puVar1[1] = 0x9a;
  puVar1[2] = 0x9b;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::IWhizManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01056840(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1056840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x12b4ba4));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf4 */
GEN_LIB GEN_NOFRAME uint F_010568a0(void)
{
  GEN_ENTER(0x10568a0u, 0u, 0u, 0u, 0u);
  return 0x1e;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_010568b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x10568b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_01056030(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_010568e0 */
GEN_LIB GEN_FRAME float10 F_010568e0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x10568e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF(ABS((float10)param_1)));
}

/* ref: FUN_01056940 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_01056940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  F_00cbbdb0((int)this + 0x48 GEN_EDX_FWD);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: FUN_01056960 */
GEN_LIB GEN_FRAME byte F_01056960(GEN_P(float * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0x1056960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * in_esi = (float *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c51673((double)*in_esi);
  if (iVar1 == 0) {
    iVar1 = F_00c51673((double)in_esi[1]);
    if (iVar1 == 0) {
      iVar1 = F_00c51673((double)in_esi[2]);
      if (iVar1 == 0) {
        iVar1 = F_00c51673((double)in_esi[3]);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_010569e0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_010569e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x10569e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  HGDIOBJ h;
  HGDIOBJ pvVar5;
  undefined * h_00;
  HGDIOBJ pvVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  ulong color;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = param_2;
  h = gen_imp_GetStockObject(5);
  pvVar5 = gen_imp_SelectObject(param_2,h);
  if (*((char *)GEN_TOP(((int)this + 0x40))) == '\0') {
    color = 0x900000;
  }
  else {
    color = 0x90;
  }
  h_00 = gen_imp_CreatePen(0,1,color);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = h_00;
  pvVar6 = gen_imp_SelectObject(param_2,h_00);
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x24)));
  iVar10 = (*(tagRECT *)(gen_frame + 0x24)).bottom / 2;
  iVar9 = (*(tagRECT *)(gen_frame + 0x24)).right / 2;
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),iVar9 - 300,iVar10 - 300,iVar9 + 300,iVar10 + 300);
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),iVar9 - 0x96,iVar10 - 0x96,iVar9 + 0x96,iVar10 + 0x96);
  piVar7 = ((int *)GEN_TOP(F_01056160(*((undefined4 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x30))))(piVar7 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)) + 0x14);
  fVar1 = *((float *)GEN_TOP(((int)this + 0x20)));
  fVar2 = *((float *)GEN_TOP(((int)this + 0x28)));
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = (undefined4)gen_fl2bits(fVar2);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = uVar3;
  fVar11 = GEN_X87((float10)fVar2 - ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28))))));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = (undefined4)gen_fl2bits((float)fVar11);
  iVar9 = (int)((float10)fVar1 - ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)))))) * 5 + iVar9;
  iVar10 = (int)fVar11 * 5 + iVar10;
  iVar4 = (int)*((float *)GEN_TOP(((int)this + 0x84)));
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),iVar9 + iVar4 * -5,iVar10 + iVar4 * -5,iVar4 * 5 + iVar9,
          iVar4 * 5 + iVar10);
  uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
  iVar4 = (int)*((float *)GEN_TOP(((int)this + 0x80)));
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),iVar9 + iVar4 * -5,iVar10 + iVar4 * -5,iVar4 * 5 + iVar9,
          iVar4 * 5 + iVar10);
  gen_imp_SelectObject(uVar3,pvVar6);
  gen_imp_SelectObject(uVar3,pvVar5);
  gen_imp_DeleteObject((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
  uVar8 = gen_imp_DeleteObject(h);
  return uVar8;
}

/* ref: FUN_01056b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01056b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x1056b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float10 fVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = param_1;
  F_00cbbd70((int)this + 0x48 GEN_EDX_ARG);
  fVar1 = (float10)0;
  *((float *)GEN_TOP(((int)this + 0x80))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x84))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x88))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0xffffffff;
  *((float *)GEN_TOP(((int)this + 0x8c))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0xffffffff;
  *((float *)GEN_TOP(((int)this + 0x98))) = (float)(float10)1;
  uVar2 = F_00cbbd70(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00cbbdc0(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,uVar2);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  fVar1 = (float10)0;
  *((float *)GEN_TOP(((int)this + 0x58))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x5c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x60))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 100))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((float *)GEN_TOP(((int)this + 0x68))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x6c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x70))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x74))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  return (uint)this;
}

/* ref: FUN_01056c50 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01056c50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x1056c50u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  *((undefined1 *)GEN_TOP((param_1 + 0x1c))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  *((float *)GEN_TOP((param_1 + 0x80))) = param_3;
  *((float *)GEN_TOP((param_1 + 0x84))) = param_4;
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = param_2;
  *((float *)GEN_TOP((param_1 + 0x88))) = (float)(float10)0;
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x40))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x90))) = param_5;
  *((undefined4 *)GEN_TOP((param_1 + 0x94))) = param_6;
  if (*((char *)GEN_TOP((param_1 + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  return 1;
}

/* ref: FUN_01056cc0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01056cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  fVar1 = (float10)0;
  *((float *)GEN_TOP(((int)this + 0x80))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x84))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0xffffffff;
  *((float *)GEN_TOP(((int)this + 0x88))) = (float)(float10)1;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((float *)GEN_TOP(((int)this + 0x98))) = (float)(float10)1;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0xffffffff;
  *((float *)GEN_TOP(((int)this + 0x8c))) = (float)fVar1;
  if (*((char *)GEN_TOP(((int)this + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  }
  return 1;
}

/* ref: FUN_01056d30 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_01056d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x80, 0);
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  undefined4 in_ecx;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 4);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x38)) = lpCriticalSection;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((char *)GEN_TOP(((int)this + 0x40))) != '\0') {
    bVar2 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG);
    if (bVar2 == 0) {
      *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 0;
    }
    else {
      fVar7 = (float10)0;
      in_ecx = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
      (*(float *)(gen_frame + 0x5c)) = (float)fVar7;
      (*(undefined4 *)(gen_frame + 0x68)) = 0;
      (*(float *)(gen_frame + 0x60)) = (float)fVar7;
      (*(float *)(gen_frame + 0x64)) = (float)fVar7;
      piVar3 = ((int *)GEN_TOP(F_01056160(in_ecx GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x4c)));
      if ((char)uVar4 != '\0') {
        bVar2 = F_01056960(&(*(float *)(gen_frame + 0x4c)));
        if (bVar2 != 0) {
          fVar7 = (float10)0;
          (*(undefined4 *)(gen_frame + 0x68)) = 0;
          (*(float *)(gen_frame + 0x60)) = (float)fVar7;
          (*(float *)(gen_frame + 0x64)) = (float)fVar7;
          fVar8 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x20))) - (float10)(*(float *)(gen_frame + 0x4c)))));
          (*(float *)(gen_frame + 0x44)) = fVar8;
          fVar9 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x24))) - (float10)(*(float *)(gen_frame + 0x50)))));
          (*(float *)(gen_frame + 0x48)) = fVar9;
          fVar10 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x28))) - (float10)(*(float *)(gen_frame + 0x54)))));
          (*(float *)(gen_frame + 0x40)) = fVar10;
          fVar5 = (float10)fVar8;
          fVar6 = (float10)fVar10;
          if (((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) ||
             ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6))) {
            fVar7 = ((float10)GEN_TOD(atan2(fVar5,-fVar6)));
            (*(float *)(gen_frame + 0x3c)) = (float)fVar7;
          }
          else {
            (*(float *)(gen_frame + 0x3c)) = (float)fVar7;
          }
          fVar8 = (float)((float10)fVar8 * (float10)fVar8 + (float10)fVar10 * (float10)fVar10);
          (*(float *)(gen_frame + 0x44)) = fVar8;
          fVar8 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar8))));
          (*(float *)(gen_frame + 0x44)) = fVar8;
          (*(float *)(gen_frame + 0x40)) = fVar8;
          fVar5 = (float10)fVar9;
          fVar7 = (float10)0;
          fVar6 = (float10)fVar8;
          if (((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) ||
             ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6))) {
            fVar7 = ((float10)GEN_TOD(atan2(fVar5,fVar6)));
            (*(float *)(gen_frame + 0x48)) = (float)fVar7;
            fVar7 = (float10)(float)fVar7;
          }
          (*(float *)(gen_frame + 0x44)) = (float)fVar7;
          (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)GEN_TOP(((int)this + 0x48)));
          (*(float *)(gen_frame + 0x5c)) = *((float *)GEN_TOP(((int)this + 0x88)));
          uVar4 = F_00cbbff0(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG);
          piVar3 = ((int *)GEN_TOP(F_00d2cce0()));
          this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xa0))))(piVar3 GEN_EDX_ARG,0)));
          if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (uVar4 = F_00d05480(this_00 GEN_EDX_ARG,uVar4), uVar4 != 0)) {
            F_00cbbd90(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar4 + 8);
            fVar8 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x44)) * (float10)*(double *)&REFG(undefined, 0x1092098)) /
                           (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x48)) = fVar8;
            fVar9 = ((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x1092098) * (float10)(*(float *)(gen_frame + 0x3c))) /
                           (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x48)) = fVar9;
            F_00cbc9e0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,fVar9,fVar8,&(*(float *)(gen_frame + 0x5c)));
            F_00cbbdb0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG);
          }
          F_00d03460((int)this + 0x58 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x4c)));
          F_00d03460((int)this + 0x68 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x4c)));
          fVar8 = (*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x4));
          fVar9 = (*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x8));
          fVar10 = GEN_X87(SQRT((fVar9 + (*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x0))) + fVar8));
          (*(float *)(gen_frame + 0x0)) = fVar10;
          (*(float *)(gen_frame + 0x4)) = (fVar9 + fVar8) + fVar8;
          (*(float *)(gen_frame + 0x8)) = (fVar9 + fVar9) + fVar8;
          (*(float *)(gen_frame + 0xc)) = (fVar9 + (*(float *)(gen_frame + 0xc)) * (*(float *)(gen_frame + 0xc))) + fVar8;
          fVar8 = (*(float *)(gen_frame + 0x24)) * (*(float *)(gen_frame + 0x24));
          fVar9 = (*(float *)(gen_frame + 0x28)) * (*(float *)(gen_frame + 0x28));
          fVar11 = GEN_X87(SQRT((fVar9 + (*(float *)(gen_frame + 0x20)) * (*(float *)(gen_frame + 0x20))) + fVar8));
          (*(float *)(gen_frame + 0x20)) = fVar11;
          (*(float *)(gen_frame + 0x24)) = (fVar9 + fVar8) + fVar8;
          (*(float *)(gen_frame + 0x28)) = (fVar9 + fVar9) + fVar8;
          (*(float *)(gen_frame + 0x2c)) = (fVar9 + (*(float *)(gen_frame + 0x2c)) * (*(float *)(gen_frame + 0x2c))) + fVar8;
          fVar8 = ((float)GEN_TOF((((float10)fVar10 - (float10)fVar11) / (float10)*(double *)&REFG(undefined, 0x10947f0))));
          (*(float *)(gen_frame + 0x48)) = fVar8;
          fVar8 = ((float)GEN_TOF((((float10)fVar8 + (float10)*(double *)&REFG(undefined, 0x1133e48)) /
                         (float10)*(double *)&REFG(undefined, 0x1133e48))));
          (*(float *)(gen_frame + 0x48)) = fVar8;
          fVar8 = ((float)GEN_TOF((((float10)1 - (float10)*((float *)GEN_TOP(((int)this + 0x8c)))) +
                         (float10)fVar8 * (float10)*((float *)GEN_TOP(((int)this + 0x8c))))));
          (*(float *)(gen_frame + 0x40)) = fVar8;
          fVar5 = (float10)0;
          fVar7 = (float10)fVar8;
          if (fVar7 <= fVar5 && ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar7)) && fVar5 != fVar7)) {
            (*(float *)(gen_frame + 0x40)) = (float)fVar5;
          }
          (*(float *)(gen_frame + 0x48)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
          F_00cbdeb0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,(*(float *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x48)));
          if (*(char *)&(*(undefined * PTR32 *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x38))) + (1) * 24))) != '\0') {
            gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x38)));
          }
          return 1;
        }
        cVar1 = *(char *)&(*(undefined * PTR32 *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x38))) + (1) * 24)));
        lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x38));
        goto joined_r0x01056d81;
      }
    }
  }
  cVar1 = *((char *)GEN_TOP(((int)this + 0x1c)));
joined_r0x01056d81: ;
  if (cVar1 != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_01057050 */
GEN_LIB GEN_FRAME uint GEN_FASTCALL F_01057050(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x1057050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[3];
  fVar2 = param_1[3];
  fVar3 = param_2[1] * param_1[1];
  fVar4 = param_2[2] * param_1[2];
  *param_3 = (fVar4 + *param_2 * *param_1) + fVar3;
  param_3[1] = (fVar4 + fVar3) + fVar3;
  param_3[2] = (fVar4 + fVar4) + fVar3;
  param_3[3] = (fVar4 + fVar1 * fVar2) + fVar3;
  return (uint)param_3;
}

/* ref: FUN_010570f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_010570f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x10570f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 4);
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((char *)GEN_TOP(((int)this + 0x40))) != '\0') {
    if (*((char *)GEN_TOP(((int)this + 0x1c))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  piVar2 = ((int *)GEN_TOP(F_01056140(*((undefined4 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG);
  if (bVar1 == 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x34))))
                      ((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x90))),
                       *((undefined4 *)GEN_TOP(((int)this + 0x94))),(int)this + 0x20,0,0,0,1);
    F_00cbbdc0(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,uVar3);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00cbd610(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x14)),(int)this + 0x88,(int)this + 0x8c);
    F_00cbc630(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,1);
    *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 1;
    F_01056d30(this GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0)));
    F_00cbdf90((int)this + 0x48 GEN_EDX_ARG,(uint)&(*(int * PTR32 *)(gen_frame + 0x18)),0);
    if (*((char *)GEN_TOP(((int)this + 0x1c))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  if (*((char *)GEN_TOP(((int)this + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_01057200 */
GEN_LIB GEN_NOFRAME double GEN_STDCALL F_01057200(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1057200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fVar1 = (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]);
  fVar2 = (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]);
  fStack_2c = (fVar2 + fVar1) + fVar1;
  fStack_28 = (fVar2 + fVar2) + fVar1;
  fStack_24 = (fVar2 + (param_1[3] - param_2[3]) * (param_1[3] - param_2[3])) + fVar1;
  return ((double)GEN_TOD(SQRT((fVar2 + (*param_1 - *param_2) * (*param_1 - *param_2)) + fVar1)));
}

/* ref: FUN_010572c0 */
GEN_LIB GEN_NOFRAME float GEN_STDCALL F_010572c0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x10572c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *param_1 - *param_2;
  fVar5 = param_1[1] - param_2[1];
  fVar6 = param_1[2] - param_2[2];
  fVar8 = param_1[3] - param_2[3];
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x2c)) = fVar8;
  (*(float *)(gen_frame + 0x3c)) = fVar4;
  (*(float *)(gen_frame + 0x40)) = fVar5;
  (*(float *)(gen_frame + 0x44)) = fVar6;
  (*(float *)(gen_frame + 0x48)) = fVar8;
  fVar4 = *param_3 - *param_2;
  fVar5 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  fVar8 = param_3[3] - param_2[3];
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x2c)) = fVar8;
  (*(float *)(gen_frame + 0x10)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = fVar5;
  (*(float *)(gen_frame + 0x18)) = fVar6;
  (*(float *)(gen_frame + 0x1c)) = fVar8;
  pfVar1 = ((float *)GEN_TOP(F_00d034e0(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  (*(float *)(gen_frame + 0x20)) = *pfVar1;
  (*(float *)(gen_frame + 0x24)) = pfVar1[1];
  fVar4 = pfVar1[3];
  (*(float *)(gen_frame + 0x28)) = pfVar1[2];
  (*(float *)(gen_frame + 0x2c)) = fVar4;
  fVar5 = pfVar1[1] * (*(float *)(gen_frame + 0x40));
  fVar6 = pfVar1[2] * (*(float *)(gen_frame + 0x44));
  fVar9 = (fVar6 + *pfVar1 * (*(float *)(gen_frame + 0x3c))) + fVar5;
  fVar8 = (*(float *)(gen_frame + 0x40)) * (*(float *)(gen_frame + 0x40));
  fVar7 = (*(float *)(gen_frame + 0x44)) * (*(float *)(gen_frame + 0x44));
  (*(float *)(gen_frame + 0x10)) = fVar9;
  (*(float *)(gen_frame + 0x14)) = (fVar6 + fVar5) + fVar5;
  (*(float *)(gen_frame + 0x18)) = (fVar6 + fVar6) + fVar5;
  (*(float *)(gen_frame + 0x1c)) = (fVar6 + fVar4 * (*(float *)(gen_frame + 0x48))) + fVar5;
  fVar2 = (float10)fVar9;
  fVar4 = GEN_X87(SQRT((fVar7 + (*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c))) + fVar8));
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = (fVar7 + fVar8) + fVar8;
  (*(float *)(gen_frame + 0x28)) = (fVar7 + fVar7) + fVar8;
  (*(float *)(gen_frame + 0x2c)) = (fVar7 + (*(float *)(gen_frame + 0x48)) * (*(float *)(gen_frame + 0x48))) + fVar8;
  fVar3 = (float10)fVar4;
  fVar4 = (float)(fVar2 * fVar2 - fVar3 * fVar3);
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar4 = ((float)GEN_TOF(ABS((float10)fVar4)));
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar4 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar4))));
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  return fVar4;
}

/* ref: FUN_01057440 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_01057440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x1057440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x7c)));
  uVar3 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar3) - uVar3;
  if (iVar2 == 0) {
    return *((float *)GEN_TOP(((int)this + 0x30)));
  }
  dVar4 = F_01057200((int)this + 0x58,(int)this + 0x20);
  return GEN_X87(((float)GEN_TOF((((float10)dVar4 / (float10)iVar2) * (float10)*(double *)&REFG(undefined, 0x10912a8)))));
}

/* ref: FUN_01057480 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01057480(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1057480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *((undefined1 *)GEN_TOP((param_1 + 0x1c))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*((int *)GEN_TOP((param_1 + 0x3c))) < 2) || (*((char *)GEN_TOP((param_1 + 0x40))) != '\0')) {
    if (*((char *)GEN_TOP((param_1 + 0x1c))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  iVar1 = param_1 + 0x20;
  dVar6 = F_01057200(param_2,iVar1);
  fVar3 = (float10)dVar6;
  fVar2 = GEN_X87((float10)*((float *)GEN_TOP((param_1 + 0x80))) + (float10)*(double *)&REFG(undefined, 0x1088070));
  if (fVar3 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar3)) && fVar2 != fVar3)) {
    if (((*((char *)GEN_TOP((param_1 + 0x41))) != '\x01') && (*((char *)GEN_TOP((param_1 + 0x41))) == '\0')) &&
       (fVar3 = (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x98))) *
                                (float10)*(double *)&REFG(undefined, 0x10947f0)))),
       !((float10)*((float *)GEN_TOP((param_1 + 0x30))) <= fVar3) !=
       (GEN_ISNAN(fVar3) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x30))))))) {
      *((undefined1 *)GEN_TOP((param_1 + 0x41))) = 1;
LAB_010575c6: ;
      if (*((char *)GEN_TOP((param_1 + 0x1c))) != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 1;
    }
  }
  else {
    if (*((char *)GEN_TOP((param_1 + 0x41))) == '\0') {
      dVar6 = F_01057200(param_2,param_1 + 0x58);
      dVar7 = F_01057200(param_2,iVar1);
      fVar3 = (float10)(float)dVar6;
      fVar2 = (float10)(float)dVar7;
      fVar4 = (float10)*(double *)&REFG(undefined, 0x10943d8);
      if (((!((float10)((float)GEN_TOF(ABS((float10)(float)(fVar3 - fVar2)))) <= fVar4) !=
            (GEN_ISNAN(fVar4) || GEN_ISNAN((float10)((float)GEN_TOF(ABS((float10)(float)(fVar3 - fVar2))))))) &&
          (fVar4 = fVar4 + (float10)*((float *)GEN_TOP((param_1 + 0x84))),
          fVar2 <= fVar4 && ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar2)) && fVar4 != fVar2))) &&
         (fVar3 <= fVar4 && ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar3)) && fVar4 != fVar3))) {
        fVar5 = F_010572c0(param_2,iVar1,param_1 + 0x58);
        fVar2 = GEN_X87(((float10)fVar5 - (float10)*((float *)GEN_TOP((param_1 + 0x80)))) -
                (float10)*(double *)&REFG(undefined, 0x1088070));
        fVar3 = (float10)*(double *)&REFG(undefined, 0x108bec8);
        if ((!(fVar3 <= fVar2) != ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar3)) || fVar2 == fVar3)) &&
           (fVar3 = (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x98))) *
                                    (float10)*(double *)&REFG(undefined, 0x10947f0)))),
           !((float10)*((float *)GEN_TOP((param_1 + 0x30))) <= fVar3) !=
           (GEN_ISNAN(fVar3) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x30))))))) goto LAB_010575c6;
      }
    }
    *((undefined1 *)GEN_TOP((param_1 + 0x41))) = 0;
  }
  if (*((char *)GEN_TOP((param_1 + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_01057600 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_01057600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x1057600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte extraout_AL = 0;
  uint uVar6;
  uint extraout_EAX = 0;
  float fVar7;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  bVar5 = F_01056960(param_1);
  uVar6 = (uint)bVar5;
  if ((bVar5 != 0) && (uVar6 = param_2, param_2 != *((uint *)GEN_TOP(((int)this + 0x78))))) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
    uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_1[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_1[3];
    bVar5 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG);
    if (bVar5 != 0) {
      F_00cbc4e0(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,param_1);
    }
    fVar7 = F_00d2e2e0();
    *((float *)GEN_TOP(((int)this + 0x98))) = fVar7;
    if (*((int *)GEN_TOP(((int)this + 0x38))) < 2) {
      *((undefined4 *)GEN_TOP(((int)this + 0x58))) = uVar4;
      *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = uVar1;
      *((undefined4 *)GEN_TOP(((int)this + 0x60))) = uVar2;
      *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar3;
      *((int *)GEN_TOP(((int)this + 0x38))) = *((int *)GEN_TOP(((int)this + 0x38))) + 1;
    }
    else {
      *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
      *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
      *((undefined4 *)GEN_TOP(((int)this + 0x74))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
      *((undefined4 *)GEN_TOP(((int)this + 0x58))) = uVar4;
      *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = uVar1;
      *((undefined4 *)GEN_TOP(((int)this + 0x60))) = uVar2;
      *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar3;
      *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 2;
    }
    if (*((int *)GEN_TOP(((int)this + 0x3c))) < 1) {
      uVar6 = *((int *)GEN_TOP(((int)this + 0x3c))) + 1;
      *((uint *)GEN_TOP(((int)this + 0x78))) = param_2;
      *((uint *)GEN_TOP(((int)this + 0x3c))) = uVar6;
    }
    else {
      *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 2;
      *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = *((undefined4 *)GEN_TOP(((int)this + 0x78)));
      *((uint *)GEN_TOP(((int)this + 0x78))) = param_2;
      fVar7 = F_01057440(this GEN_EDX_ARG);
      *((float *)GEN_TOP(((int)this + 0x30))) = fVar7;
      uVar6 = extraout_EAX;
    }
  }
  bVar5 = (byte)uVar6;
  if (*((char *)GEN_TOP(((int)this + 0x1c))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
    bVar5 = extraout_AL;
  }
  return bVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizObject::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_01057720(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x1057720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  F_00cbbdb0(param_1 + 0x12 GEN_EDX_FWD);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

