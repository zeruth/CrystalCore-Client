#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00ba34e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba34e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba34e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x29))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x29))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x29))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x29))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x29)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x29)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x29))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00ba3550 */
GEN_OWN GEN_FRAME uint F_00ba3550(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba3550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ba3560 */
GEN_OWN GEN_FRAME uint F_00ba3560(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba3560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ba3570 */
GEN_OWN GEN_FRAME uint F_00ba3570(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba3570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ba3580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba3580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba35a0 */
GEN_OWN GEN_FRAME uint F_00ba35a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba35a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ba35e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba35e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba35e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba3600 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ba3600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba3600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ba3620 */
GEN_OWN GEN_FRAME uint F_00ba3620(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba3620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_00ba3660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba3660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  *((undefined1 *)GEN_TOP(((int)in_ecx + param_2))) = 0;
  return param_2;
}

/* ref: FUN_00ba3680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3680(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xba3680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ba36c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba36c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba36c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x29))) == '\0') {
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

/* ref: FUN_00ba3730 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ba3730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba3730u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ba3770 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba3770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba3770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ba3440(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ba3780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba3780u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ba3820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba3820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba3840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xba3840u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00ba38b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba38b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba38b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ba34e0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ba38d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba38d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba38d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba38f0 */
GEN_OWN GEN_FRAME unsigned int F_00ba38f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xba38f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
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
      if (*((char *)GEN_TOP(((int)piVar4 + 0x29))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x29))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x29)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x29)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x29)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x29)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00ba3960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba3960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba39a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ba39a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xba39a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 uVar1;
  
  if ((param_2 != '\0') && (0xf < (uint)param_1[5])) {
    uVar1 = *param_1;
    if (param_3 != 0) {
      F_00c46aa0(param_1,uVar1,param_3);
    }
    F_00429760(uVar1,param_1[5] + 1,0x2c3);
  }
  param_1[4] = param_3;
  param_1[5] = 0xf;
  *((undefined1 *)GEN_TOP((param_3 + (int)param_1))) = 0;
  return;
}

/* ref: FUN_00ba39f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba39f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xba39f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ba3a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3a00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba3a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ba3a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba3a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00ba3440(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00ba3a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba3a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x29))) == '\0') {
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

/* ref: FUN_00ba3ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba3ae0u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar4 = F_004296a0(uVar5 + 1,0,0x2c3);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    F_00429760(*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 0x14))) + 1,0x2c3);
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

/* ref: FUN_00ba3ba0 */
GEN_OWN GEN_FRAME unsigned int F_00ba3ba0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xba3ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00ba38f0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00ba3bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba3bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = F_00ba3840(this GEN_EDX_FWD,0,*((undefined4 *)GEN_TOP(((int)this + 0x10))),puVar1,param_1[4]);
  return uVar2;
}

/* ref: FUN_00ba3bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba3bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ba3c10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba3c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ba3c20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba3c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba3c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x2c3);
    uVar1 = (uint)uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ba3c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3c90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xba3c90u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00ba3ae0(param_1 GEN_EDX_ARG,param_2,param_1[4]);
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
      F_00429760(uVar2,param_1[5] + 1,0x2c3);
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

/* ref: FUN_00ba3d50 */
GEN_OWN GEN_FRAME byte F_00ba3d50(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba3d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_2));
  }
  uVar2 = F_00ba3840(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),puVar1,param_2[4]);
  return (int)uVar2 < 0;
}

/* ref: FUN_00ba3d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3d80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba3d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (0xf < (uint)param_1[5]) {
    F_00429760(*param_1,param_1[5] + 1,0x2c3);
  }
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ba3dd0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00ba3dd0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba3dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_2));
  }
  uVar2 = F_00ba3840(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),puVar1,param_2[4]);
  return (int)uVar2 < 0;
}

/* ref: FUN_00ba3e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba3e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  int * piVar8;
  undefined4 * puVar9;
  undefined4 * local_18;
  undefined4 * local_10;
  undefined4 * local_8;
  
  local_18 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = ((undefined4 *)GEN_TOP(local_18[1]));
  local_10 = local_18;
  if (*((char *)GEN_TOP(((int)local_8 + 0x29))) == '\0') {
    uVar1 = param_2[4];
    uVar2 = param_2[5];
    do {
      puVar9 = local_8 + 3;
      puVar6 = param_2;
      if (0xf < uVar2) {
        puVar6 = ((undefined4 *)GEN_TOP(*param_2));
      }
      uVar3 = local_8[7];
      uVar5 = uVar1;
      if (uVar3 < uVar1) {
        uVar5 = uVar3;
      }
      uVar7 = local_8[8];
      puVar4 = puVar9;
      if (0xf < uVar7) {
        puVar4 = ((undefined4 *)GEN_TOP(*puVar9));
      }
      uVar5 = F_0040d320(puVar4,puVar6,uVar5);
      if (uVar5 == 0) {
        if (uVar1 <= uVar3) {
          uVar5 = (uint)(uVar3 != uVar1);
          goto LAB_00ba3e92;
        }
LAB_00ba3e94: ;
        local_8 = ((undefined4 *)GEN_TOP(local_8[2]));
      }
      else {
LAB_00ba3e92: ;
        if ((int)uVar5 < 0) goto LAB_00ba3e94;
        if (*((char *)GEN_TOP(((int)local_10 + 0x29))) != '\0') {
          if (0xf < uVar7) {
            puVar9 = ((undefined4 *)GEN_TOP(*puVar9));
          }
          uVar5 = param_2[4];
          if (uVar1 < (uint)param_2[4]) {
            uVar5 = uVar1;
          }
          uVar7 = uVar5;
          if (uVar3 <= uVar5) {
            uVar7 = uVar3;
          }
          puVar6 = param_2;
          if (0xf < uVar2) {
            puVar6 = ((undefined4 *)GEN_TOP(*param_2));
          }
          uVar7 = F_0040d320(puVar6,puVar9,uVar7);
          if (uVar7 == 0) {
            if (uVar3 <= uVar5) {
              uVar7 = (uint)(uVar5 != uVar3);
              goto LAB_00ba3ee7;
            }
          }
          else {
LAB_00ba3ee7: ;
            if (-1 < (int)uVar7) goto LAB_00ba3ef4;
          }
          local_10 = local_8;
        }
LAB_00ba3ef4: ;
        local_18 = local_8;
        local_8 = ((undefined4 *)GEN_TOP(*local_8));
      }
    } while (*((char *)GEN_TOP(((int)local_8 + 0x29))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)local_10 + 0x29))) == '\0') {
    puVar6 = ((undefined4 *)GEN_TOP(*local_10));
  }
  else {
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  puVar9 = local_10;
  if (*((char *)GEN_TOP(((int)puVar6 + 0x29))) == '\0') {
    uVar1 = param_2[4];
    uVar2 = param_2[5];
    do {
      uVar3 = puVar6[7];
      piVar8 = puVar6 + 3;
      if (0xf < (uint)puVar6[8]) {
        piVar8 = ((int *)GEN_TOP(*piVar8));
      }
      uVar5 = uVar1;
      if (uVar3 <= uVar1) {
        uVar5 = uVar3;
      }
      puVar9 = param_2;
      if (0xf < uVar2) {
        puVar9 = ((undefined4 *)GEN_TOP(*param_2));
      }
      uVar5 = F_0040d320(puVar9,piVar8,uVar5);
      if (uVar5 == 0) {
        if (uVar3 <= uVar1) {
          uVar5 = (uint)(uVar1 != uVar3);
          goto LAB_00ba3f86;
        }
LAB_00ba3f88: ;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar6));
        local_10 = puVar6;
      }
      else {
LAB_00ba3f86: ;
        if ((int)uVar5 < 0) goto LAB_00ba3f88;
        puVar4 = ((undefined4 *)GEN_TOP(puVar6[2]));
      }
      puVar9 = local_10;
      puVar6 = puVar4;
    } while (*((char *)GEN_TOP(((int)puVar4 + 0x29))) == '\0');
  }
  *param_1 = (int)local_18;
  param_1[1] = (int)puVar9;
  return (uint)param_1;
}

/* ref: FUN_00ba3fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba3fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba3fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * local_8;
  
  local_8 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)local_8[1] + 0x29))) == '\0') {
    uVar1 = param_1[5];
    uVar2 = param_1[4];
    puVar7 = ((undefined4 *)GEN_TOP(local_8[1]));
    do {
      piVar4 = puVar7 + 3;
      puVar6 = param_1;
      if (0xf < uVar1) {
        puVar6 = ((undefined4 *)GEN_TOP(*param_1));
      }
      uVar3 = puVar7[7];
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = uVar2;
      }
      if (0xf < (uint)puVar7[8]) {
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      uVar5 = F_0040d320(piVar4,puVar6,uVar5);
      if (uVar5 == 0) {
        if (uVar2 <= uVar3) {
          uVar5 = (uint)(uVar3 != uVar2);
          goto LAB_00ba4018;
        }
LAB_00ba401a: ;
        puVar6 = ((undefined4 *)GEN_TOP(puVar7[2]));
      }
      else {
LAB_00ba4018: ;
        if ((int)uVar5 < 0) goto LAB_00ba401a;
        puVar6 = ((undefined4 *)GEN_TOP(*puVar7));
        local_8 = puVar7;
      }
      puVar7 = puVar6;
    } while (*((char *)GEN_TOP(((int)puVar6 + 0x29))) == '\0');
  }
  return (uint)local_8;
}

/* ref: FUN_00ba4040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba4040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar3 = param_1[4] - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    F_00ba3780(this GEN_EDX_ARG,uVar3 + param_2,0xffffffff);
    F_00ba3780(this GEN_EDX_ARG,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar3) {
    F_00ba3ae0(this GEN_EDX_ARG,uVar3,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    if (uVar3 == 0) {
      return (uint)this;
    }
  }
  else if (uVar3 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = ((undefined4 *)GEN_TOP(*param_1));
  }
  pvVar1 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar1,(int)puVar2 + param_2,uVar3);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar3;
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < 0x10) {
    *((undefined1 *)GEN_TOP(((int)this + uVar3))) = 0;
    return (uint)this;
  }
  *((undefined1 *)GEN_TOP((*(int *)this + uVar3))) = 0;
  return (uint)this;
}

/* ref: FUN_00ba4130 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ba4130(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba4130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1[5];
  if (0xf < uVar1) {
    uVar2 = F_00429760(*param_1,uVar1 + 1,0x2c3);
    uVar1 = (uint)uVar2;
  }
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return uVar1;
}

/* ref: FUN_00ba4170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba4170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_00ba4040(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00ba41a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba41a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba41a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ba3fb0(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00ba41c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba41c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba41c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00ba3e00(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00ba41e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba41e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba41e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    if (pvVar2 <= param_1) {
      pvVar2 = this;
      if (0xf < uVar1) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar2)))) {
        if (0xf < uVar1) {
          uVar1 = F_00ba4040(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_00ba4040(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < param_2) {
    F_00ba3ae0(this GEN_EDX_ARG,param_2,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar2,param_1,param_2);
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_2;
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < 0x10) {
    *((undefined1 *)GEN_TOP(((int)this + param_2))) = 0;
    return (uint)this;
  }
  *((undefined1 *)GEN_TOP((*(int *)this + param_2))) = 0;
  return (uint)this;
}

/* ref: FUN_00ba42e0 */
GEN_OWN GEN_FRAME uint F_00ba42e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba42e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2[5];
  if (0xf < uVar1) {
    uVar2 = F_00429760(*param_2,uVar1 + 1,0x2c3);
    uVar1 = (uint)uVar2;
  }
  param_2[5] = 0xf;
  param_2[4] = 0;
  *(undefined1 *)param_2 = 0;
  return uVar1;
}

/* ref: FUN_00ba4320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4320(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xba4320u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    if (0xf < (uint)param_5[8]) {
      F_00429760(param_5[3],param_5[8] + 1,0x2c3);
    }
    param_5[8] = 0xf;
    param_5[7] = 0;
    *(undefined1 *)(param_5 + 3) = 0;
    F_00429760(param_5,0x2c,0x2c0);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x28)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x28))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x28))) == '\0') {
        *(undefined1 *)(piVar5 + 10) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x28))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x28))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x29))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x28))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x28))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x29))) == '\0') {
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
LAB_00ba454d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x28))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x29))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x28))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x28))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x29))) == '\0') {
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
        goto LAB_00ba454d;
      }
      *(undefined1 *)(piVar5 + 10) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x28))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x28))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x28)));
  } while( true );
}

/* ref: FUN_00ba4580 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00ba4580(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba4580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00ba4040(param_1 GEN_EDX_ARG,param_2,0,0xffffffff);
  }
  return;
}

/* ref: FUN_00ba45b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba45b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba45b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = F_00ba3fb0(this GEN_EDX_FWD,param_2);
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 4)))) {
    puVar2 = ((undefined4 *)GEN_TOP((uVar1 + 0xc)));
    if (0xf < *((uint *)GEN_TOP((uVar1 + 0x20)))) {
      puVar2 = ((undefined4 *)GEN_TOP(*puVar2));
    }
    uVar3 = F_00ba3840(param_2 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_2 + 0x10))),puVar2,
                         *((undefined4 *)GEN_TOP((uVar1 + 0x1c))));
    if (-1 < (int)uVar3) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *((uint *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00ba4620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba4620u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_00ba41e0(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00ba4650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba4650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x29))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00ba3440(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x29))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x29))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x29))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[10];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 10))) = (char)piVar3[10];
      *(char *)(piVar3 + 10) = (char)iVar1;
      goto LAB_00ba476a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x29))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x29))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00ba33a0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x29))) == '\0') {
      uVar5 = F_00ba3380(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00ba476a: ;
  if ((char)piVar3[10] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[10] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[10] == '\0') {
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(piVar4 + 10) = 0;
            F_00ba3a80(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x29))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x28))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x28))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x28))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x28))) = 1;
                *(undefined1 *)(piVar6 + 10) = 0;
                F_00ba36c0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 10) = (char)piVar4[10];
              *(undefined1 *)(piVar4 + 10) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x28))) = 1;
              F_00ba3a80(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00ba4828: ;
            *(undefined1 *)(piVar6 + 10) = 0;
          }
        }
        else {
          if ((char)piVar6[10] == '\0') {
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(piVar4 + 10) = 0;
            F_00ba36c0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x29))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x28))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x28))) == '\x01'))
            goto LAB_00ba4828;
            if (*((char *)GEN_TOP((*piVar6 + 0x28))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x28))) = 1;
              *(undefined1 *)(piVar6 + 10) = 0;
              F_00ba3a80(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 10) = (char)piVar4[10];
            *(undefined1 *)(piVar4 + 10) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x28))) = 1;
            F_00ba36c0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 10) = 1;
  }
  if (0xf < (uint)piVar3[8]) {
    F_00429760(piVar3[3],piVar3[8] + 1,0x2c3);
  }
  piVar3[8] = 0xf;
  piVar3[7] = 0;
  *(undefined1 *)(piVar3 + 3) = 0;
  F_00429760(piVar3,0x2c,0x2c0);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ba48e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ba48e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba48e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x29)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00ba48e0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    if (0xf < (uint)piVar3[8]) {
      F_00429760(piVar3[3],piVar3[8] + 1,0x2c3);
    }
    piVar3[8] = 0xf;
    piVar3[7] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
    F_00429760(piVar3,0x2c,0x2c0);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x29)));
  }
  return;
}

/* ref: FUN_00ba4950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba4950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  bool bVar10;
  bool local_c;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  puVar9 = ((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x29)));
  local_c = true;
  puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar10 = local_c;
  while (cVar1 == '\0') {
    piVar3 = puVar5 + 3;
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      uVar7 = puVar5[7];
      if (0xf < (uint)puVar5[8]) {
        piVar3 = ((int *)GEN_TOP(*piVar3));
      }
      uVar2 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x1c)));
      uVar4 = uVar2;
      if (uVar7 <= uVar2) {
        uVar4 = uVar7;
      }
      puVar8 = puVar9;
      if (0xf < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x20)))) {
        puVar8 = ((undefined4 *)GEN_TOP(*puVar9));
      }
      uVar4 = F_0040d320(puVar8,piVar3,uVar4);
      if (uVar4 == 0) {
        if (uVar2 < uVar7) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar2 != uVar7);
        }
      }
      bVar10 = (int)uVar4 < 0;
    }
    else {
      puVar8 = puVar9;
      if (0xf < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x20)))) {
        puVar8 = ((undefined4 *)GEN_TOP(*puVar9));
      }
      uVar7 = puVar5[7];
      uVar2 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x1c)));
      uVar4 = uVar7;
      if (uVar2 <= uVar7) {
        uVar4 = uVar2;
      }
      if (0xf < (uint)puVar5[8]) {
        piVar3 = ((int *)GEN_TOP(*piVar3));
      }
      uVar4 = F_0040d320(piVar3,puVar8,uVar4);
      if (uVar4 == 0) {
        if (uVar7 < uVar2) {
          bVar10 = false;
          goto LAB_00ba4a30;
        }
        uVar4 = (uint)(uVar7 != uVar2);
      }
      bVar10 = -1 < (int)uVar4;
    }
LAB_00ba4a30: ;
    if (bVar10 == false) {
      puVar6 = ((undefined4 *)GEN_TOP(puVar5[2]));
    }
    else {
      puVar6 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    puVar8 = puVar5;
    puVar5 = puVar6;
    cVar1 = *((char *)GEN_TOP(((int)puVar6 + 0x29)));
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar8;
  if (bVar10 != false) {
    if (puVar8 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      bVar10 = true;
      goto LAB_00ba4a73;
    }
    F_00ba34e0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
  puVar6 = puVar9;
  if (0xf < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x20)))) {
    puVar6 = ((undefined4 *)GEN_TOP(*puVar9));
  }
  uVar7 = F_00ba3840((*(undefined4 * PTR32 *)&gen_args[2]) + 3 GEN_EDX_ARG,0,(*(undefined4 * PTR32 *)&gen_args[2])[7],puVar6,*((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x1c))));
  if (-1 < (int)uVar7) {
    if (0xf < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x20)))) {
      F_00429760(*puVar9,*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x20))) + 1,0x2c3);
    }
    *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x20))) = 0xf;
    *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x1c))) = 0;
    *(undefined1 *)puVar9 = 0;
    F_00429760((*(int *)&gen_args[1]),0x2c,0x2c0);
    *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
LAB_00ba4a73: ;
  puVar5 = ((undefined4 *)GEN_TOP(F_00ba4320(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar10,puVar8,(*(int *)&gen_args[1]))));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ba4b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba4b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_00ba41e0(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (uint)this;
}

/* ref: FUN_00ba4b60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba4b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba4b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00ba48e0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00ba4b90 */
GEN_OWN_GS GEN_FRAME uint F_00ba4b90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xba4b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = ((uint *)(gen_frame + 0x0))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  pcVar2 = ((char *)GEN_TOP(*param_3));
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x0))[0] = uVar4 & 0xffffff00;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00ba41e0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00ba4040(param_2 GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),0,0xffffffff);
  }
  uVar4 = (*(uint *)(gen_frame + 0x14));
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    uVar5 = F_00429760(((uint *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c3);
    uVar4 = (uint)uVar5;
  }
  return uVar4;
}

/* ref: FUN_00ba4c30 */
GEN_OWN_GS GEN_FRAME uint F_00ba4c30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xba4c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = ((uint *)(gen_frame + 0x0))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x0))[0] = uVar3 & 0xffffff00;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_00ba41e0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,param_3,(int)pcVar2 - (int)(param_3 + 1));
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_00ba4040(param_2 GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),0,0xffffffff);
  }
  uVar3 = (*(uint *)(gen_frame + 0x14));
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    uVar4 = F_00429760(((uint *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c3);
    uVar3 = (uint)uVar4;
  }
  return uVar3;
}

/* ref: FUN_00ba4cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba4cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_00ba48e0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x29))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x29))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x29)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x29)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x29)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x29)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00ba4650(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ba4d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba4d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00ba4cd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ba4db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba4db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x2c,0,0x2c0)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00ba4b90((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00ba4e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba4e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x2c,0,0x2c0)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00ba4c30((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00ba4e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba4e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00ba4cd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x2c,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_00ba4e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba4e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00ba3e00(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_00ba38f0((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00ba4cd0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00ba4ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba4ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x2c,0,0x2c0)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00ba4b90((int)this + 0xd,puVar1 + 3,param_2);
  F_00ba4950(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00ba4f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba4f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x2c,0,0x2c0)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00ba4c30((int)this + 0xd,puVar1 + 3,param_2);
  F_00ba4950(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00ba4fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba4fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba4fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00ba4cd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x2c,0x2c0);
  return (uint)uVar1;
}

/* ref: Component::Prohibit::ProhibitModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba5030(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba5030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x1103ccc));
  F_00ba4cd0(param_1 + 0x20 GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(param_1[0x21])),((undefined4 *)GEN_TOP(param_1[0x21])));
  F_00429760(param_1[0x21],0x2c,0x2c0);
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x1103ca8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ba5090 */
GEN_OWN GEN_FRAME float10 F_00ba5090(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xba5090u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00ba50b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba50b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba50b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = param_2;
  switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((param_2 + 2))))) {
  case 100: ;
    uVar1 = F_00c07490(param_1,param_2 + 0x10);
    return uVar1;
  case 0x65: ;
    uVar1 = F_00c07750(param_1,param_2 + 0x10);
    return uVar1;
  case 0x66: ;
    uVar1 = F_00c07620(param_1,param_2 + 0x10);
    return uVar1;
  case 0x67: ;
    uVar1 = F_00c07680(param_1,param_2 + 0x10);
    return uVar1;
  case 0x68: ;
    F_00c07480(param_1,param_2 + 0x10);
    return param_2 + 0x10;
  case 0x69: ;
    uVar1 = F_00c07ad0(param_1,param_2 + 0x10);
    break;
  case 0x6a: ;
    uVar1 = F_00c076e0(param_1,param_2 + 0x10);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00ba5190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba5190(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba5190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x1104450));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1104468));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x110445c));
  in_ecx[2] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ba51c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ba51c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba51c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x1104450));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  return;
}

/* ref: Client::Network::PacketDispatcher::Dispatch */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba51d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba51d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  F_00a558c0(param_1,(uint)*((ushort *)GEN_TOP((param_2 + 2))));
  uVar1 = *((ushort *)GEN_TOP((param_2 + 2))) - 0x67;
  if (uVar1 < 0x285) {
                    
                    
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xba6358) + *((ushort *)GEN_TOP((param_2 + 2))) + 1))))) {
    case 0: ;
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x7c))))(piVar2 GEN_EDX_ARG,1,0,param_2);
      }
      uVar1 = F_00a4f220(param_1,param_2 + 0x10);
      return uVar1;
    case 1: ;
      uVar1 = F_00b04930(param_1,param_2 + 0x10);
      return uVar1;
    case 2: ;
      uVar1 = F_00b04990(param_1,param_2 + 0x10);
      return uVar1;
    case 3: ;
      uVar1 = F_00b049f0(param_1,param_2 + 0x10);
      return uVar1;
    case 4: ;
      uVar1 = F_00b02710(param_1,param_2 + 0x10);
      return uVar1;
    case 5: ;
      uVar1 = F_00b02800(param_1,param_2 + 0x10);
      return uVar1;
    case 6: ;
      uVar1 = F_00b02840(param_1,param_2 + 0x10);
      return uVar1;
    case 7: ;
      uVar1 = F_00b02940(param_1,param_2 + 0x10);
      return uVar1;
    case 8: ;
      uVar1 = F_00b029c0(param_1,param_2 + 0x10);
      return uVar1;
    case 9: ;
      uVar1 = F_00b02a00(param_1,param_2 + 0x10);
      return uVar1;
    case 10: ;
      uVar1 = F_00b02b20(param_1,param_2 + 0x10);
      return uVar1;
    case 0xb: ;
      uVar1 = F_00b02be0(param_1,param_2 + 0x10);
      return uVar1;
    case 0xc: ;
      uVar1 = F_00b02ca0(param_1,param_2 + 0x10);
      return uVar1;
    case 0xd: ;
      uVar1 = F_00b03190(param_1,param_2 + 0x10);
      return uVar1;
    case 0xe: ;
      uVar1 = F_00b031e0(param_1,param_2 + 0x10);
      return uVar1;
    case 0xf: ;
      uVar1 = F_00b036a0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x10: ;
      uVar1 = F_00b03740(param_1,param_2 + 0x10);
      return uVar1;
    case 0x11: ;
      uVar1 = F_00b037e0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x12: ;
      uVar1 = F_00b03bd0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x13: ;
      uVar1 = F_00b03d00(param_1,param_2 + 0x10);
      return uVar1;
    case 0x14: ;
      uVar1 = F_00b04a50(param_1,param_2 + 0x10);
      return uVar1;
    case 0x15: ;
      uVar1 = F_00b03cb0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x16: ;
      uVar1 = F_00b05490(param_1,param_2 + 0x10);
      return uVar1;
    case 0x17: ;
      uVar1 = F_00b03d60(param_1,param_2 + 0x10);
      return uVar1;
    case 0x18: ;
      uVar1 = F_00b03da0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x19: ;
      uVar1 = F_00b03de0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1a: ;
      uVar1 = F_00b03e20(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1b: ;
      uVar1 = F_00b03e90(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1c: ;
      uVar1 = F_00b03ed0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1d: ;
      uVar1 = F_00b05750(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1e: ;
      uVar1 = F_00b058e0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x1f: ;
      uVar1 = F_00b03f10(param_1,param_2 + 0x10);
      return uVar1;
    case 0x20: ;
      uVar1 = F_00b03f50(param_1,param_2 + 0x10);
      return uVar1;
    case 0x21: ;
      uVar1 = F_00b05ac0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x22: ;
      uVar1 = F_00b03f90(param_1,param_2 + 0x10);
      return uVar1;
    case 0x23: ;
      uVar1 = F_00b05d70(param_1,param_2 + 0x10);
      return uVar1;
    case 0x24: ;
      uVar1 = F_00b04640(param_1,param_2 + 0x10);
      return uVar1;
    case 0x25: ;
      uVar1 = F_00b04680(param_1,param_2 + 0x10);
      return uVar1;
    case 0x26: ;
      uVar1 = F_00b046c0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x27: ;
      uVar1 = F_00b04700(param_1,param_2 + 0x10);
      return uVar1;
    case 0x28: ;
      uVar1 = F_00b04740(param_1,param_2 + 0x10);
      return uVar1;
    case 0x29: ;
      uVar1 = F_00b047b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2a: ;
      uVar1 = F_00b04830(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2b: ;
      uVar1 = F_00b047f0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2c: ;
      uVar1 = F_00b04870(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2d: ;
      uVar1 = F_00b048b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2e: ;
      uVar1 = F_00b048f0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x2f: ;
      uVar1 = F_00b02cd0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x30: ;
      uVar1 = F_00a53c00(*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x14))),
                           (uint)*((ushort *)GEN_TOP((param_2 + 0x1a))),param_2 + 0x1c,
                           (uint)*((ushort *)GEN_TOP((param_2 + 0x18))));
      return uVar1;
    case 0x31: ;
      uVar1 = F_00a555b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x32: ;
      uVar1 = F_00a4ee20(param_1,param_2 + 0x10);
      return uVar1;
    case 0x33: ;
      uVar1 = F_00a55f80(param_1,(uint)*((ushort *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x14)))
                           ,*((undefined4 *)GEN_TOP((param_2 + 0x18))),*((undefined4 *)GEN_TOP((param_2 + 0x1c))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x20))),0,0,0xe0000000,0);
      return uVar1;
    case 0x34: ;
      uVar1 = F_00a55f80(param_1,(uint)*((ushort *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x14)))
                           ,*((undefined4 *)GEN_TOP((param_2 + 0x18))),*((undefined4 *)GEN_TOP((param_2 + 0x1c))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x20))),*((undefined4 *)GEN_TOP((param_2 + 0x24))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x28))),0xe0000000,0);
      return uVar1;
    case 0x35: ;
      uVar1 = F_00a55f80(param_1,(uint)*((ushort *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x14)))
                           ,*((undefined4 *)GEN_TOP((param_2 + 0x18))),*((undefined4 *)GEN_TOP((param_2 + 0x1c))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x20))),0,0,*((undefined4 *)GEN_TOP((param_2 + 0x28))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x2c))));
      return uVar1;
    case 0x36: ;
      uVar1 = F_00a554c0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x37: ;
      uVar1 = F_00a4e520(param_1,param_2 + 0x10);
      return uVar1;
    case 0x38: ;
      uVar1 = F_00a4e510(param_1,param_2 + 0x10);
      return uVar1;
    case 0x39: ;
      uVar1 = F_00a4e4b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3a: ;
      uVar1 = F_00a4e440(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3b: ;
      uVar1 = F_00a4f1e0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3c: ;
      uVar1 = F_00a55c00(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3d: ;
      uVar1 = F_00a4e400(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3e: ;
      uVar1 = F_00a55c40(param_1,param_2 + 0x10);
      return uVar1;
    case 0x3f: ;
      uVar1 = F_00a55c60(param_1,param_2 + 0x10);
      return uVar1;
    case 0x40: ;
      uVar1 = F_00a4e4f0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x41: ;
      uVar1 = F_00a52d10(param_1,param_2 + 0x10);
      return uVar1;
    case 0x42: ;
      uVar1 = F_00a52fd0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x43: ;
      uVar1 = F_00a4e9a0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x44: ;
      uVar1 = F_00a4e9c0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x45: ;
      uVar1 = F_00a4ea20(param_1,param_2 + 0x10);
      return uVar1;
    case 0x46: ;
      uVar1 = F_00a53340(param_1,param_2 + 0x10);
      return uVar1;
    case 0x47: ;
      uVar1 = F_00a4ecc0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x48: ;
      uVar1 = F_00a4ed60(param_1,param_2 + 0x10);
      return uVar1;
    case 0x49: ;
      uVar1 = F_00a53550(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4a: ;
      uVar1 = F_00a4ecf0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4b: ;
      uVar1 = F_00a4f110(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4c: ;
      uVar1 = F_00a4f150(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4d: ;
      uVar1 = F_00a535a0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4e: ;
      uVar1 = F_00a4f1b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x4f: ;
      uVar1 = F_00a6ab30(&REFG(undefined, 0x14ab3a4) GEN_EDX_ARG,param_1,param_2 + 0x10);
      return uVar1;
    case 0x50: ;
      uVar1 = F_00aadf20(&REFG(undefined, 0x14b5ef0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x10))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x14))),param_2 + 0x18);
      return uVar1;
    case 0x51: ;
      uVar1 = F_00a4f6b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x52: ;
      uVar1 = F_00a39bc0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,param_2 + 0x10);
      return uVar1;
    case 0x53: ;
      uVar1 = F_00a558a0(param_1,param_2);
      return uVar1;
    case 0x54: ;
      uVar1 = F_00a55880(param_1,param_2);
      return uVar1;
    case 0x55: ;
      uVar1 = F_00a55ca0(param_1,param_2);
      return uVar1;
    case 0x56: ;
      uVar1 = F_00a55860(param_1,param_2);
      return uVar1;
    case 0x57: ;
      uVar1 = F_00a4f260(param_1,param_2 + 0x10);
      return uVar1;
    case 0x58: ;
      uVar1 = F_00a4f280(param_1,param_2 + 0x10);
      return uVar1;
    case 0x59: ;
      uVar1 = F_00a4e610(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5a: ;
      uVar1 = F_00a4f2c0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5b: ;
      uVar1 = F_00a4f310(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5c: ;
      uVar1 = F_00a4f330(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5d: ;
      uVar1 = F_00a4f5a0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5e: ;
      uVar1 = F_00a4f470(param_1,param_2 + 0x10);
      return uVar1;
    case 0x5f: ;
      uVar1 = F_00a4f5b0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x60: ;
      uVar1 = F_00a4f5d0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x61: ;
      uVar1 = F_00a4ea80(param_1,param_2 + 0x10);
      return uVar1;
    case 0x62: ;
      uVar1 = F_00a4f5f0(param_1);
      return uVar1;
    case 99: ;
      uVar1 = F_00a4f2a0(param_1,param_2 + 0x10);
      return uVar1;
    case 100: ;
      uVar1 = F_00a50d10(*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x14))),
                                  *((undefined4 *)GEN_TOP((param_2 + 0x18))),(uint)*((ushort *)GEN_TOP((param_2 + 0x1c))),
                                  *((undefined4 *)GEN_TOP((param_2 + 0x20))),param_2 + 0x28,
                                  (uint)*((byte *)GEN_TOP((param_2 + 0x24))));
      return uVar1;
    case 0x65: ;
      uVar1 = F_00a4e0d0(*((undefined4 *)GEN_TOP((param_2 + 0x18))),*((undefined4 *)GEN_TOP((param_2 + 0x10))),
                         *((undefined4 *)GEN_TOP((param_2 + 0x14))),(uint)*((byte *)GEN_TOP((param_2 + 0x1c))),
                         *((undefined4 *)GEN_TOP((param_2 + 0x20))),(uint)*((byte *)GEN_TOP((param_2 + 0x1d))));
      return uVar1;
    case 0x66: ;
      uVar1 = F_00a4e100(*((undefined4 *)GEN_TOP((param_2 + 0x10))),(uint)*((byte *)GEN_TOP((param_2 + 0x14))),
                         *((undefined4 *)GEN_TOP((param_2 + 0x18))),(uint)*((byte *)GEN_TOP((param_2 + 0x15))));
      return uVar1;
    case 0x67: ;
      uVar1 = F_00a4e040(*((undefined4 *)GEN_TOP((param_2 + 0x10))),(uint)*((ushort *)GEN_TOP((param_2 + 0x14))),
                           param_2 + 0x18,(uint)*((byte *)GEN_TOP((param_2 + 0x16))));
      return uVar1;
    case 0x68: ;
      uVar1 = F_00a4e070(*((undefined4 *)GEN_TOP((param_2 + 0x10))),(uint)*((ushort *)GEN_TOP((param_2 + 0x14))),
                           (uint)*((byte *)GEN_TOP((param_2 + 0x16))),param_2 + 0x18,
                           (uint)*((byte *)GEN_TOP((param_2 + 0x17))));
      return uVar1;
    case 0x69: ;
      uVar1 = F_00a54690(param_2 + 0x10,0x1e);
      return uVar1;
    case 0x6a: ;
      uVar1 = F_00a50040((uint)*((byte *)GEN_TOP((param_2 + 0x10))),param_2 + 0x14,1,1,1);
      return uVar1;
    case 0x6b: ;
      uVar1 = F_00a50160(param_2 + 0x10,200);
      return uVar1;
    case 0x6c: ;
      uVar1 = F_00a501b0((uint)*((ushort *)GEN_TOP((param_2 + 0x10))),
                           (uint)(*((char *)GEN_TOP((param_2 + 0x12))) != '\0'),
                           (uint)(*((char *)GEN_TOP((param_2 + 0x13))) != '\0'));
      return uVar1;
    case 0x6d: ;
      uVar1 = F_00a547d0(param_2 + 0x10,0x10);
      return uVar1;
    case 0x6e: ;
      uVar1 = F_00a50240((uint)*((byte *)GEN_TOP((param_2 + 0x10))),param_2 + 0x14,1,1);
      return uVar1;
    case 0x6f: ;
      uVar1 = F_00a50330(param_2 + 0x10,200);
      return uVar1;
    case 0x70: ;
      uVar1 = F_00a50380((uint)*((ushort *)GEN_TOP((param_2 + 0x10))),*((char *)GEN_TOP((param_2 + 0x12))) != '\0');
      return uVar1;
    case 0x71: ;
      uVar1 = F_00a4e130(*((undefined4 *)GEN_TOP((param_2 + 0x10))),(uint)*((byte *)GEN_TOP((param_2 + 0x14))),
                           param_2 + 0x18,(uint)*((byte *)GEN_TOP((param_2 + 0x15))));
      return uVar1;
    case 0x72: ;
      uVar1 = F_00a50560(param_2 + 0x10,5);
      return uVar1;
    case 0x73: ;
      uVar1 = F_00a39b90(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,param_2 + 0x10);
      return uVar1;
    case 0x74: ;
      uVar1 = F_00a50210(param_2 + 0x10,0x28);
      return uVar1;
    case 0x75: ;
      uVar1 = F_00a4e0a0(*((undefined4 *)GEN_TOP((param_2 + 0x10))),(uint)*((ushort *)GEN_TOP((param_2 + 0x14))),
                           (uint)*((byte *)GEN_TOP((param_2 + 0x16))),param_2 + 0x17);
      return uVar1;
    case 0x76: ;
      uVar1 = F_00a536c0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x77: ;
      uVar1 = F_00a4e1a0(*((undefined4 *)GEN_TOP((param_2 + 0x10))),(uint)*((byte *)GEN_TOP((param_2 + 0x14))),
                           (uint)*((byte *)GEN_TOP((param_2 + 0x15))),param_2 + 0x16,10);
      return uVar1;
    case 0x78: ;
      uVar1 = F_00a4e1d0(*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x14))),
                           param_2 + 0x1c,(uint)*((byte *)GEN_TOP((param_2 + 0x18))));
      return uVar1;
    case 0x79: ;
      uVar1 = F_00a4e160(*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x18))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x1c))),(uint)*((byte *)GEN_TOP((param_2 + 0x20))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x24))),*((undefined4 *)GEN_TOP((param_2 + 0x28))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x2c))),param_2 + 0x34,
                           (uint)*((byte *)GEN_TOP((param_2 + 0x30))));
      return uVar1;
    case 0x7a: ;
      uVar1 = F_00a4e200(*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x18))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x1c))),(uint)*((byte *)GEN_TOP((param_2 + 0x20))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x24))),(uint)*((byte *)GEN_TOP((param_2 + 0x28))));
      return uVar1;
    case 0x7b: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x1c,param_2 + 0x24,
                           (uint)*((byte *)GEN_TOP((param_2 + 0x10))));
      return uVar1;
    case 0x7c: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x24,param_2 + 0x34,
                           (uint)*((byte *)GEN_TOP((param_2 + 0x10))));
      return uVar1;
    case 0x7d: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x34,param_2 + 0x54,
                           (uint)*((byte *)GEN_TOP((param_2 + 0x10))));
      return uVar1;
    case 0x7e: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x54,param_2 + 0x94,
                           (uint)*((byte *)GEN_TOP((param_2 + 0x10))));
      return uVar1;
    case 0x7f: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x94,param_2 + 0x114,
                           (uint)*((byte *)GEN_TOP((param_2 + 0x10))));
      return uVar1;
    case 0x80: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x114,param_2 + 0x214,
                           (uint)*((byte *)GEN_TOP((param_2 + 0x10))));
      return uVar1;
    case 0x81: ;
      uVar1 = F_00a4e230(param_2 + 0x14,param_2 + 0x214,param_2 + 0x414,
                           (uint)*((byte *)GEN_TOP((param_2 + 0x10))));
      return uVar1;
    case 0x82: ;
      uVar1 = F_00a4f640((uint)*((byte *)GEN_TOP((param_2 + 0x10))));
      return uVar1;
    case 0x83: ;
      uVar1 = F_00a4f680(param_1,param_2 + 0x10);
      return uVar1;
    case 0x84: ;
      uVar1 = F_00a4f660(param_1,param_2 + 0x10);
      return uVar1;
    case 0x85: ;
      *((undefined4 *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x1228))) = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
      uVar1 = REFG(undefined4, 0x137104c);
      *((undefined4 *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x122c))) = *((undefined4 *)GEN_TOP((param_2 + 0x14)));
      return uVar1;
    case 0x86: ;
      uVar1 = F_00a4f7a0(param_2 + 0x10);
      return uVar1;
    case 0x87: ;
      uVar1 = F_00a536f0(param_1,(uint)*((ushort *)GEN_TOP((param_2 + 0x10))),param_2 + 0x14,
                           (uint)*((byte *)GEN_TOP((param_2 + 0x12))));
      return uVar1;
    case 0x88: ;
      uVar1 = F_00a50d60(*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x18))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x1c))),param_2 + 0x20,0x1e);
      return uVar1;
    case 0x89: ;
      uVar1 = F_00a50fd0(*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x18))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x1c))),param_2 + 0x20,0x10);
      return uVar1;
    case 0x8a: ;
      uVar1 = F_00a53740(*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x18))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x1c))),param_2 + 0x20,0x10);
      return uVar1;
    case 0x8b: ;
      uVar1 = F_00a548d0(param_1,param_2 + 0x10);
      return uVar1;
    case 0x8c: ;
      uVar1 = F_00a4f7c0(param_2 + 0x10);
      return uVar1;
    case 0x8d: ;
      uVar1 = F_00a4f7f0(param_2 + 0x10);
      return uVar1;
    case 0x8e: ;
      uVar1 = F_00a4e250(*((undefined4 *)GEN_TOP((param_2 + 0x10))),param_2 + 0x14);
      return uVar1;
    case 0x8f: ;
      uVar1 = F_00a4f820(param_2 + 0x10);
      return uVar1;
    case 0x90: ;
      uVar1 = F_00a4e270(*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x14))));
      return uVar1;
    case 0x91: ;
      uVar1 = F_00a4e290(*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0x18))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x1c))),*((undefined4 *)GEN_TOP((param_2 + 0x20))),
                           *((undefined4 *)GEN_TOP((param_2 + 0x24))));
      return uVar1;
    case 0x92: ;
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar1 = 0;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x7c))))(piVar2 GEN_EDX_ARG,7,0,param_2);
        return uVar1;
      }
      break;
    case 0x93: ;
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar1 = 0;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x7c))))(piVar2 GEN_EDX_ARG,4,0,param_2);
        return uVar1;
      }
      break;
    case 0x94: ;
      uVar1 = F_00a4e2c0((uint)*((ushort *)GEN_TOP((param_2 + 0x10))),param_2 + 0x12);
      return uVar1;
    case 0x95: ;
      uVar1 = F_00a4e2e0(param_2 + 0x10);
      return uVar1;
    case 0x96: ;
      uVar1 = F_00ba26d0(param_2 + 0x10);
      return uVar1;
    case 0x97: ;
      uVar1 = F_00a4f840(param_2 + 0x10);
      return uVar1;
    case 0x98: ;
      uVar1 = F_00a4f860(param_2 + 0x10);
      return uVar1;
    case 0x99: ;
      uVar1 = F_00ba2990(param_2 + 0x10);
      return uVar1;
    case 0x9a: ;
      uVar1 = F_00a4e300(param_2 + 0x10);
      return uVar1;
    case 0x9b: ;
      uVar1 = F_00a4e320(param_2 + 0x10);
      return uVar1;
    case 0x9c: ;
      uVar1 = F_00ba2b40(param_2 + 0x10);
      return uVar1;
    case 0x9d: ;
      uVar1 = F_00a503e0(param_2 + 0x10,0x1c,param_2 + 0x2c,0x12,param_2 + 0x3e,10,param_2 + 0x48,
                           6,param_2 + 0x4e,2);
      return uVar1;
    case 0x9e: ;
      uVar1 = F_00a504a0(param_2 + 0x10,0x1c,param_2 + 0x2c,0x12,param_2 + 0x3e,10,param_2 + 0x48,
                           6,param_2 + 0x4e,2);
      return uVar1;
    case 0x9f: ;
      uVar1 = F_00ba2a00(param_2 + 0x10);
      return uVar1;
    case 0xa0: ;
      uVar1 = F_00a4f880(param_2 + 0x10);
      return uVar1;
    case 0xa1: ;
      uVar1 = F_00ba2930(param_2 + 0x10);
      return uVar1;
    case 0xa2: ;
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar1 = 0;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x7c))))(piVar2 GEN_EDX_ARG,8,0,param_2);
        return uVar1;
      }
      break;
    case 0xa3: ;
      uVar1 = F_00a4f610(param_1,(uint)*((ushort *)GEN_TOP((param_2 + 0x10))));
      return uVar1;
    case 0xa4: ;
      uVar1 = F_00a4f8a0(param_2 + 0x10);
      return uVar1;
    case 0xa5: ;
      uVar1 = F_00a39eb0(param_1,param_2 + 0x10);
      return uVar1;
    case 0xa6: ;
      iVar3 = param_2 + 0x10;
      F_00b070f0();
      uVar1 = F_00b0b4a0(iVar3);
    }
  }
  return uVar1;
}

/* ref: FUN_00ba6660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba6660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba6660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return param_1;
}

/* ref: Client::Network::Protocol::Chat::PacketReceiverCallbackInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba6690(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba6690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1104450));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ba66c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba66c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba66c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ba66d0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Network::PacketDispatcher::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba66d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba66d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x1104450));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ba6710 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba6710(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *(undefined2 *)(in_ecx + 4) = 0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ba6730 */
GEN_OWN GEN_NOFRAME unsigned int F_00ba6730(void)
{
  GEN_ENTER(0xba6730u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ba6740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba6740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba6740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  ushort uVar1;
  ulong uVar2;
  char * pcVar3;
  
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  uVar2 = gen_imp_inet_addr((*(char * PTR32 *)&gen_args[0]));
  if (uVar2 != 0xffffffff) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = 2;
    (*(uint *)(gen_frame + 0x10)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)),2);
    uVar1 = gen_imp_htons((ushort)(*(undefined4 *)&gen_args[1]));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = uVar1;
    (*(uint *)(gen_frame + 0x10)) = CONCAT22(uVar1,(undefined2)(*(uint *)(gen_frame + 0x10)));
    *(uint *)this = (*(uint *)(gen_frame + 0x10));
    *((ulong *)GEN_TOP(((int)this + 4))) = uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
    return (*(uint *)(gen_frame + 0x10));
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  pcVar3 = ((char *)GEN_TOP(gen_imp_getaddrinfo((*(char * PTR32 *)&gen_args[0]),0,&(*(undefined4 *)(gen_frame + 0x0)),&(*(char * PTR32 *)&gen_args[0]))));
  if (((pcVar3 == ((char *)GEN_TOP(0x0))) && (pcVar3 = (*(char * PTR32 *)&gen_args[0]), (*(char * PTR32 *)&gen_args[0]) != ((char *)GEN_TOP(0x0)))) &&
     (*((int *)GEN_TOP(((*(char * PTR32 *)&gen_args[0]) + 0x18))) != 0)) {
    uVar1 = gen_imp_htons((ushort)(*(undefined4 *)&gen_args[1]));
    pcVar3 = (*(char * PTR32 *)&gen_args[0]);
    *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(char * PTR32 *)&gen_args[0]) + 0x18))) + 2))) = uVar1;
    F_00c46aa0(this,*((undefined4 *)GEN_TOP(((*(char * PTR32 *)&gen_args[0]) + 0x18))),*((undefined4 *)GEN_TOP(((*(char * PTR32 *)&gen_args[0]) + 0x10))));
    pcVar3 = ((char *)GEN_TOP(gen_imp_freeaddrinfo(pcVar3)));
  }
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)pcVar3;
}

/* ref: FUN_00ba6820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba6820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba6820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  uVar1 = param_1[3];
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = (undefined2)param_2;
  return uVar1;
}

/* ref: FUN_00ba6850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba6850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba6850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = param_2;
  if (0x10 < param_2) {
    iVar1 = 0x10;
  }
  uVar2 = F_00c46aa0(this,param_1,iVar1);
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = (undefined2)param_3;
  return (uint)uVar2;
}

/* ref: FUN_00ba6880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba6880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba6880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ba68b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba68b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba68b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00ba68e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ba68e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba68e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (((*((short *)GEN_TOP(((int)this + 2))) == *((short *)GEN_TOP((param_1 + 2)))) &&
      (*((int *)GEN_TOP(((int)this + 4))) == *((int *)GEN_TOP((param_1 + 4))))) &&
     ((*((short *)GEN_TOP(((int)this + 0x10))) == 0 ||
      (*((short *)GEN_TOP(((int)this + 0x10))) == *((short *)GEN_TOP((param_1 + 0x10))))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ba6930 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_00ba6930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return CONCAT44((int)((uint)*((ushort *)GEN_TOP(((int)this + 2))) << 0x10) >> 0x1f | *((uint *)GEN_TOP(((int)this + 4)))
                  ,CONCAT22(*((ushort *)GEN_TOP(((int)this + 2))),*((undefined2 *)GEN_TOP(((int)this + 0x10)))));
}

/* ref: FUN_00ba6970 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba6970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char * pcVar1;
  
  pcVar1 = gen_imp_inet_ntoa((undefined4)(*(undefined (*)[4])(((char *)GEN_TOP((((int)this + 4)))))));
  F_00c4d9ef((int)this + 0x12U,0x2e,pcVar1,0x10);
  *((undefined1 *)GEN_TOP(((int)this + 0x21))) = 0;
  return (int)this + 0x12U;
}

/* ref: Client::Network::Socket::RUDPSocket::vf13 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba6a10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba6a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x7c)));
  if (iVar1 == 0) {
    return 0x2736;
  }
  if (iVar1 != 1) {
    if (iVar1 != 5) {
      return 0x1000;
    }
    return 0;
  }
  return 0x2726;
}

/* ref: Client::Network::Socket::RUDPSocket::vf12 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba6a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba6a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x7c);
  if (iVar2 == 0) {
    return 0x2736;
  }
  if (iVar2 != 1) {
    if (iVar2 != 5) {
      return 0x1000;
    }
    uVar1 = *(undefined2 *)(this + 0x94);
    *param_1 = *(undefined4 *)(this + 0x84);
    param_1[1] = *(undefined4 *)(this + 0x88);
    param_1[2] = *(undefined4 *)(this + 0x8c);
    param_1[3] = *(undefined4 *)(this + 0x90);
    *(undefined2 *)(param_1 + 4) = uVar1;
    return 0;
  }
  return 0x2749;
}

/* ref: FUN_00ba6ab0 */
GEN_OWN GEN_FRAME uint F_00ba6ab0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba6ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 0x1104480;
  case 1: ;
    return 0x110448c;
  case 2: ;
    return 0x110449c;
  case 3: ;
    return 0x11044ac;
  case 4: ;
    return 0x11044c0;
  case 5: ;
    return 0x11044d4;
  case 6: ;
    return 0x11044e8;
  case 7: ;
    return 0x11044fc;
  case 8: ;
    return 0x1104510;
  case 9: ;
    return 0x1104524;
  case 10: ;
    return 0x1104534;
  case 0xb: ;
    return 0x1104544;
  case 0xc: ;
    return 0x1104554;
  case 0xd: ;
    return 0x1104564;
  default: ;
    return 0x110448b;
  }
}

/* ref: FUN_00ba6b70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ba6b70(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba6b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  return param_1 & 0x8000003f;
}

/* ref: FUN_00ba6bc0 */
GEN_OWN GEN_FRAME uint F_00ba6bc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba6bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 0x1104570;
  case 1: ;
    return 0x1104574;
  case 2: ;
    return 0x1104588;
  case 3: ;
    return 0x1104584;
  case 4: ;
    return 0x110457c;
  case 5: ;
    return 0x110458c;
  default: ;
    return 0;
  }
}

/* ref: Client::Network::Socket::RUDPSocket::vf6 */
GEN_OWN GEN_NOFRAME uint F_00ba6c20(void)
{
  GEN_ENTER(0xba6c20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Network::Socket::RUDPSocket::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba6c30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0xc4))) = 1;
  return 0;
}

/* ref: Client::Network::Socket::RUDPSocket::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba6c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((in_ecx + 0x7c))))) {
  default: ;
    return 0;
  case 1: ;
    return 1;
  case 2: ;
  case 3: ;
  case 4: ;
    return 3;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xd: ;
    return 4;
  case 0xc: ;
    return 7;
  }
}

/* ref: FUN_00ba6cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba6cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  __time64_t _Var4;
  uint local_8;
  
  local_8 = 0;
  _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  if (((*((int *)GEN_TOP(((int)this + 0x58))) != 0 || *((int *)GEN_TOP(((int)this + 0x5c))) != 0) &&
      ((longlong)*((int *)GEN_TOP(((int)this + 0x2c))) <= _Var4 - *((longlong *)GEN_TOP(((int)this + 0x58))))) &&
     (*((int *)GEN_TOP(((int)this + 0xd0))) != 0)) {
    if (*((gen_code32 *)GEN_TOP(((int)this + 0x24))) != ((code *)GEN_TOP(0x0))) {
      ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x24))))(*((int *)GEN_TOP(((int)this + 0xd0))));
    }
    local_8 = 1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x30)));
  if ((uVar1 & (int)uVar1 >> 0x1f) != 0xffffffff) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x60)));
    iVar3 = *((int *)GEN_TOP(((int)this + 100)));
    if ((uVar2 != 0 || iVar3 != 0) ||
       (*((int *)GEN_TOP(((int)this + 0x68))) != 0 || *((int *)GEN_TOP(((int)this + 0x6c))) != 0)) {
      if ((iVar3 < *((int *)GEN_TOP(((int)this + 0x6c)))) ||
         ((iVar3 <= *((int *)GEN_TOP(((int)this + 0x6c))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x68))))))) {
        iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
        uVar2 = *((uint *)GEN_TOP(((int)this + 0x68)));
      }
      if (((longlong)(int)uVar1 <= _Var4 - (longlong)CONCAT44(iVar3,uVar2)) &&
         (*((int *)GEN_TOP(((int)this + 0xd0))) != 0)) {
        if (*((gen_code32 *)GEN_TOP(((int)this + 0x28))) != ((code *)GEN_TOP(0x0))) {
          ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x28))))(*((int *)GEN_TOP(((int)this + 0xd0))));
        }
        return 1;
      }
    }
  }
  return local_8;
}

/* ref: FUN_00ba6da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba6da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba6da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_2;
  *((int *)GEN_TOP(((int)this + 0x38))) = *((int *)GEN_TOP(((int)this + 0x38))) + 1;
  *((int *)GEN_TOP(((int)this + 0x40))) = *((int *)GEN_TOP(((int)this + 0x40))) + param_3;
  *((int *)GEN_TOP(((int)this + 0x4c))) = *((int *)GEN_TOP(((int)this + 0x4c))) + param_3;
  *((uint *)GEN_TOP(((int)this + 0x54))) = param_3;
  return param_3;
}

/* ref: FUN_00ba6dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba6dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba6dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_2;
  *((int *)GEN_TOP(((int)this + 0x3c))) = *((int *)GEN_TOP(((int)this + 0x3c))) + 1;
  *((int *)GEN_TOP(((int)this + 0x44))) = *((int *)GEN_TOP(((int)this + 0x44))) + param_3;
  *((int *)GEN_TOP(((int)this + 0x48))) = *((int *)GEN_TOP(((int)this + 0x48))) + param_3;
  *((uint *)GEN_TOP(((int)this + 0x50))) = param_3;
  return param_3;
}

/* ref: FUN_00ba6e30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba6e30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba6e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: FUN_00ba6e40 */
GEN_OWN GEN_FRAME uint F_00ba6e40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba6e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *(uint *)&REFG(undefined, 0x13416b0) = param_1;
  return param_1;
}

/* ref: FUN_00ba6e60 */
GEN_OWN GEN_FRAME uint F_00ba6e60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba6e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x271e: ;
    return 0x11045f4;
  default: ;
    return 0x1104630;
  case 0x2726: ;
    return 0x1104608;
  case 0x2736: ;
    return 0x11045e0;
  case 0x2749: ;
    return 0x110461c;
  case 0x274c: ;
    return 0x11045cc;
  case 0x274d: ;
    return 0x11045b4;
  }
}

/* ref: FUN_00ba6f10 */
GEN_OWN GEN_FRAME uint F_00ba6f10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xba6f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x271e: ;
    return 0x11045f4;
  default: ;
    return 0x1104630;
  case 0x2726: ;
    return 0x1104608;
  case 0x2736: ;
    return 0x11045e0;
  case 0x2749: ;
    return 0x110461c;
  case 0x274c: ;
    return 0x11045cc;
  case 0x274d: ;
    return 0x11045b4;
  }
}

/* ref: FUN_00ba6fb0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ba6fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ulong param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba6fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ulong param_1 = (ulong)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  (*(undefined2 *)(gen_frame + 0x0)) = 2;
  uVar2 = gen_imp_htonl(param_1);
  (*(ulong *)(gen_frame + 0x4)) = uVar2;
  uVar1 = gen_imp_htons((ushort)param_2);
  (*(ushort *)(gen_frame + 0x2)) = uVar1;
  uVar3 = F_00c07c40(this GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x10);
  if (uVar3 == 0xffffffff) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* ref: FUN_00ba7020 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ba7020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x10;
  uVar1 = F_00c07e60(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)));
  if (uVar1 == 0) {
    *param_1 = (*(undefined4 *)(gen_frame + 0x4));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x8));
    param_1[2] = (*(undefined4 *)(gen_frame + 0xc));
    param_1[3] = (*(undefined4 *)(gen_frame + 0x10));
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ba7080 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ba7080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x10;
  uVar1 = F_00c07eb0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)));
  if (uVar1 == 0) {
    *param_1 = (*(undefined4 *)(gen_frame + 0x4));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x8));
    param_1[2] = (*(undefined4 *)(gen_frame + 0xc));
    param_1[3] = (*(undefined4 *)(gen_frame + 0x10));
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ba7100 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba7100(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba7100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ba7110 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba7110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba7110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    this_00 = ((undefined *)GEN_TOP(F_00406b90(0x14,0,0)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00c09bf0(this_00 GEN_EDX_ARG,this);
      *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
      return uVar1;
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return *((uint *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_00ba7160 */
GEN_OWN GEN_FRAME uint F_00ba7160(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba7160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  ushort * puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  puVar2 = param_1;
  iVar4 = param_2;
  if (1 < param_2) {
    iVar1 = (param_2 - 2U >> 1) + 1;
    iVar4 = param_2 + iVar1 * -2;
    do {
      uVar3 = uVar3 + *puVar2;
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  if (0 < iVar4) {
    uVar3 = uVar3 + (*puVar2 & 0xff00);
  }
  uVar3 = (uVar3 >> 0x10) + (uVar3 & 0xffff);
  return ~((uVar3 >> 0x10) + uVar3);
}

/* ref: FUN_00ba71c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba71c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba71c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 100))) = param_2;
  return param_2;
}

/* ref: FUN_00ba71d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba71d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba71d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x68))) = param_2;
  return param_2;
}

/* ref: FUN_00ba71f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba71f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba71f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
  F_00ba6740(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00ba7220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba7220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00ba7250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = F_00c0fd50(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))));
  if (uVar1 == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0xffffffff;
  }
  *((int *)GEN_TOP((uVar1 + 8))) = param_1;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00ba72a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba72a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba72a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = F_00c0fdc0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))));
  if ((int)uVar1 < 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0xffffffff;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00ba72f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba72f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba72f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c0f990(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 4))),param_2);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00ba7310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  *((uint *)GEN_TOP(((int)this + 0x7c))) = param_1;
  uVar1 = param_1;
  if ((9 < (int)param_1) && ((int)param_1 < 0xc)) {
    _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((int *)GEN_TOP(((int)this + 0xf20))) = (int)_Var2;
    uVar3 = F_00427d90();
    *((ulonglong *)GEN_TOP(((int)this + 0xf28))) = uVar3;
    uVar3 = F_00427e30();
    uVar1 = (uint)uVar3;
    *((ulonglong *)GEN_TOP(((int)this + 0xf30))) = uVar3;
    *((undefined1 *)GEN_TOP(((int)this + 0xf38))) = 1;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::RUDPSocket::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba7370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c4f2dd();
  *(short *)(this + 0xc6) = (short)uVar1;
  *(undefined4 *)(this + 0x7c) = 1;
  return 0;
}

/* ref: FUN_00ba7390 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba7390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba7390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x7c)));
  if (iVar1 == 6) {
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 7;
    uVar2 = 0;
  }
  else {
    if (iVar1 == 9) {
      *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0xb;
      _Var3 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
      *((int *)GEN_TOP(((int)this + 0xf20))) = (int)_Var3;
      uVar4 = F_00427d90();
      *((ulonglong *)GEN_TOP(((int)this + 0xf28))) = uVar4;
      uVar4 = F_00427e30();
      *((ulonglong *)GEN_TOP(((int)this + 0xf30))) = uVar4;
      *((undefined1 *)GEN_TOP(((int)this + 0xf38))) = 1;
      return (uint)uVar4;
    }
    uVar2 = iVar1 - 10;
    if (uVar2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0xc;
      return 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00ba7400 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ba7400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba7400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  int * piVar3;
  ulonglong uVar4;
  
  iVar2 = 0;
  piVar1 = ((int *)GEN_TOP(((int)this + 0xcf0)));
  piVar3 = ((int *)GEN_TOP(((int)this + 0x4f8)));
  do {
    if (((char)piVar3[4] != '\0') && (uVar4 = F_00427d90(), *piVar1 < (int)uVar4 - *piVar3)) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 8;
  } while (iVar2 < 0x40);
  if ((*((char *)GEN_TOP(((int)this + 0xf18))) != '\0') &&
     (uVar4 = F_00427d90(), 100 < (int)uVar4 - *((int *)GEN_TOP(((int)this + 0xf08))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ba7490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba7490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba7490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint * puVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    puVar3 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x98)));
    uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar3), 0);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00ba74d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba74d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba74d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7510 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ba7510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ulong param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba7510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ulong param_1 = (ulong)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  undefined * this_00;
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar3 = 0xfffff000;
  }
  else {
    (*(undefined2 *)(gen_frame + 0x0)) = 2;
    uVar2 = gen_imp_htonl(param_1);
    (*(ulong *)(gen_frame + 0x4)) = uVar2;
    uVar1 = gen_imp_htons((ushort)param_2);
    (*(ushort *)(gen_frame + 0x2)) = uVar1;
    uVar3 = F_00c07c40(this_00 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x10);
    if (uVar3 == 0xffffffff) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 0xc))))(this_00 GEN_EDX_ARG);
      return 0xffffffff;
    }
  }
  return uVar3;
}

/* ref: FUN_00ba75a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba75a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba75a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ba7510(this GEN_EDX_FWD,0,param_1);
  return uVar1;
}

/* ref: FUN_00ba75c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba75c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba75c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = param_1[1];
  uVar1 = gen_imp_ntohs((ushort)((uint)*param_1 >> 0x10));
  uVar3 = (uint)uVar1;
  uVar2 = gen_imp_ntohl(uVar2);
  uVar3 = F_00ba7510(this GEN_EDX_ARG,uVar2,uVar3);
  return uVar3;
}

/* ref: FUN_00ba7610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba7610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_FWD,param_1,param_2);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,param_1,param_2);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,param_1,param_2);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba7650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_FWD,param_1,param_2);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG,param_1,param_2);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,param_1,param_2);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7690 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ba7690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_FWD,param_1);
      return uVar2;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG,param_1);
      return uVar2;
    }
    uVar2 = 0xffffffff;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x0)) = 0x10;
    uVar2 = F_00c07e60(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)));
    if (uVar2 == 0) {
      *param_1 = (*(undefined4 *)(gen_frame + 0x4));
      param_1[1] = (*(undefined4 *)(gen_frame + 0x8));
      param_1[2] = (*(undefined4 *)(gen_frame + 0xc));
      param_1[3] = (*(undefined4 *)(gen_frame + 0x10));
      *(undefined2 *)(param_1 + 4) = 0;
      return 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00ba7750 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ba7750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_FWD,param_1);
      return uVar2;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG,param_1);
      return uVar2;
    }
    uVar2 = 0xffffffff;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x0)) = 0x10;
    uVar2 = F_00c07eb0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)));
    if (uVar2 == 0) {
      *param_1 = (*(undefined4 *)(gen_frame + 0x4));
      param_1[1] = (*(undefined4 *)(gen_frame + 0x8));
      param_1[2] = (*(undefined4 *)(gen_frame + 0xc));
      param_1[3] = (*(undefined4 *)(gen_frame + 0x10));
      *(undefined2 *)(param_1 + 4) = 0;
      return 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00ba7810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xba7810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))
                      (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar3;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xba7840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))
                      (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar3;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xba7870u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if ((*((int *)GEN_TOP(((int)this + 4))) == 1) && (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc))), piVar1 != ((int *)GEN_TOP(0x0))))
  {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x34))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x14))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) = param_1;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba78e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba78e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba78e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x28))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 8))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 8))) = param_1;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x2c))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0xc))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc))) = param_1;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x30))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x10))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x10))) = param_1;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba79d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba79d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba79d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP((in_ecx + 0xc))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + 0x38))) = param_2;
    return 0;
  }
  return 0xfffff000;
}

/* ref: FUN_00ba79f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba79f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba79f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x3c))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x1c))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x1c))) = param_1;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba7a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 0x44))) = param_1;
    *((undefined4 *)GEN_TOP((iVar1 + 0x4c))) = param_2;
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 0x24))) = param_1;
    *((undefined4 *)GEN_TOP((iVar1 + 0x2c))) = param_2;
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 0x24))) = param_1;
    *((undefined4 *)GEN_TOP((iVar1 + 0x2c))) = param_2;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba7aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 0x48))) = param_1;
    *((undefined4 *)GEN_TOP((iVar1 + 0x50))) = param_2;
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 0x28))) = param_1;
    *((undefined4 *)GEN_TOP((iVar1 + 0x30))) = param_2;
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 0x28))) = param_1;
    *((undefined4 *)GEN_TOP((iVar1 + 0x30))) = param_2;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x40))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x20))) = param_1;
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x20))) = param_1;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7c10 */
GEN_OWN GEN_NOFRAME uint F_00ba7c10(void)
{
  GEN_ENTER(0xba7c10u, 0u, 0u, 0u, 0u);
  int iVar1;
  bool bVar2;
  
  iVar1 = REFG(int, 0x14c595c) + 1;
  bVar2 = REFG(int, 0x14c595c) == 0;
  REFG(int, 0x14c595c) = iVar1;
  if (bVar2) {
    F_00c08040();
    REFG(undefined4 * PTR32, 0x14c5958) = ((undefined4 *)GEN_TOP(F_00406b90(0xc,0,0)));
    if (REFG(undefined4 * PTR32, 0x14c5958) == ((undefined4 *)GEN_TOP(0x0))) {
      REFG(undefined4 * PTR32, 0x14c5958) = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *REFG(undefined4 * PTR32, 0x14c5958) = 0;
      REFG(undefined4 * PTR32, 0x14c5958)[1] = 0;
      REFG(undefined4 * PTR32, 0x14c5958)[2] = 0;
    }
    if (REFG(int, 0x14c595c) == 0) {
      F_00ba7c10();
    }
  }
  return 0;
}

/* ref: FUN_00ba7c80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba7c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba7c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x94)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this_00 + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = F_00c0fdc0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))));
  if ((int)uVar1 < 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0xffffffff;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  return 0;
}

/* ref: FUN_00ba7ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) != ((undefined *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(F_00c0f990(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),
                              param_1)));
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::SocketImpl::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c07b30((undefined *)this GEN_EDX_FWD,param_1);
  if (uVar1 == 0xffffffff) {
    return 0xffffffff;
  }
  _InterlockedExchange((volatile long *)(((uint *)(this + 0x98))), (long)((uint)(param_1 == 1) * 4 + 1));
  return 0;
}

/* ref: FUN_00ba7d40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba7d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba7d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c07c80(this GEN_EDX_FWD,0x7fffffff);
  if (uVar1 == 0xffffffff) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
    return 0xffffffff;
  }
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x98))))), (long)(2));
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c0f990(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),0);
  }
  return uVar1;
}

/* ref: FUN_00ba7d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba7d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  ushort uVar1;
  uint uVar2;
  __time64_t _Var3;
  
  uVar1 = gen_imp_ntohs(*((ushort *)GEN_TOP((param_1 + 2))));
  uVar2 = F_00c07ce0(this GEN_EDX_ARG,param_1,0x10,(uint)uVar1);
  _Var3 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((__time64_t *)GEN_TOP(((int)this + 0x78))) = _Var3;
  if (uVar2 == 0xfffffffe) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c0f990(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),1);
    }
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x98))))), (long)(3));
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
    if (uVar2 == 0xffffffff) {
      if ((*((int *)GEN_TOP(((int)this + 0x90))) != 0) && (*((int *)GEN_TOP(((int)this + 0x94))) != 0)) {
        F_00badec0(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x90))),0xffffffff);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
      return 0xffffffff;
    }
    _Var3 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((__time64_t *)GEN_TOP(((int)this + 0x80))) = _Var3;
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c0f990(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),2);
    }
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x98))))), (long)(4));
    if ((*((int *)GEN_TOP(((int)this + 0x90))) != 0) && (*((int *)GEN_TOP(((int)this + 0x94))) != 0)) {
      F_00badec0(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x90))),uVar2);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00ba7ea0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba7ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba7ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  
  uVar3 = F_00c07e10(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  if (uVar3 == 0) {
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((__time64_t *)GEN_TOP(((int)this + 0x80))) = _Var4;
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x98))))), (long)(4));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x90)));
  if (iVar2 != 0) {
    if (uVar3 == 0) {
      if (*((gen_code32 *)GEN_TOP(((int)this + 0x28))) == ((code *)GEN_TOP(0x0))) {
        return 0;
      }
      ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x28))))(iVar2,0);
      return 0;
    }
    if (*((gen_code32 *)GEN_TOP(((int)this + 0x2c))) != ((code *)GEN_TOP(0x0))) {
      ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x2c))))(iVar2,uVar3);
    }
  }
  if (uVar3 != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + 0x98)));
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    if (iVar2 != 7) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_00ba7f40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba7f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba7f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  uint local_8;
  
  local_8 = 0;
  _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  if (((*((int *)GEN_TOP(((int)this + 0x78))) != 0 || *((int *)GEN_TOP(((int)this + 0x7c))) != 0) &&
      ((longlong)*((int *)GEN_TOP(((int)this + 0x4c))) <= _Var4 - *((longlong *)GEN_TOP(((int)this + 0x78))))) &&
     (*((int *)GEN_TOP(((int)this + 0x90))) != 0)) {
    if (*((gen_code32 *)GEN_TOP(((int)this + 0x44))) != ((code *)GEN_TOP(0x0))) {
      ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x44))))(*((int *)GEN_TOP(((int)this + 0x90))));
    }
    local_8 = 1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x50)));
  if ((uVar1 & (int)uVar1 >> 0x1f) != 0xffffffff) {
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x80)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x84)));
    if ((uVar3 != 0 || iVar2 != 0) ||
       (*((int *)GEN_TOP(((int)this + 0x88))) != 0 || *((int *)GEN_TOP(((int)this + 0x8c))) != 0)) {
      if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
        if ((iVar2 < *((int *)GEN_TOP(((int)this + 0x8c)))) ||
           ((iVar2 <= *((int *)GEN_TOP(((int)this + 0x8c))) && (uVar3 <= *((uint *)GEN_TOP(((int)this + 0x88))))))) {
          iVar2 = *((int *)GEN_TOP(((int)this + 0x8c)));
          uVar3 = *((uint *)GEN_TOP(((int)this + 0x88)));
        }
      }
      if (((longlong)(int)uVar1 <= _Var4 - (longlong)CONCAT44(iVar2,uVar3)) &&
         (*((int *)GEN_TOP(((int)this + 0x90))) != 0)) {
        if (*((gen_code32 *)GEN_TOP(((int)this + 0x48))) != ((code *)GEN_TOP(0x0))) {
          ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x48))))(*((int *)GEN_TOP(((int)this + 0x90))));
        }
        return 1;
      }
    }
  }
  return local_8;
}

/* ref: FUN_00ba8040 */
GEN_OWN GEN_NOFRAME unsigned int F_00ba8040(void)
{
  GEN_ENTER(0xba8040u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x14c595c) == 0) {
    F_00ba7c10();
    return;
  }
  return;
}

/* ref: Client::Network::Socket::PingClient::PingClientRequest::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  DWORD DVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  undefined * local_8;
  
  *(undefined2 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  this[0x24] = (undefined1)0x0;
  if (*(undefined * PTR32 *)(this + 0x18) != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*(undefined * PTR32 *)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0;
  }
  pvVar4 = F_00c51787(0x20);
  *(undefined * PTR32 *)(this + 0x18) = pvVar4;
  local_8 = ((undefined *)GEN_TOP(0x0));
  if (*(short *)(this + 0x6c) != 0) {
    do {
      *(undefined4 *)(this + 0x80) = 0;
      *(undefined4 *)(this + 0x84) = 0;
      _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
      *(int *)(this + 0x28) = (int)_Var6;
      uVar7 = F_00427d90();
      *(ulonglong *)(this + 0x30) = uVar7;
      uVar7 = F_00427e30();
      *(ulonglong *)(this + 0x38) = uVar7;
      DVar5 = gen_imp_IcmpSendEcho(*(HANDLE *)(this + 0x20),*(ulong *)(this + 0x1c),((char *)REFP(0x1104650)),4,
                           (GEN_LPANY)0x0,*(LPVOID *)(this + 0x18),0x3c,400);
      if (DVar5 == 0) {
        gen_imp_GetLastError();
        *(short *)(this + 0x88) = *(short *)(this + 0x88) + 1;
      }
      else {
        uVar7 = F_00427d90();
        *(uint *)(this + 0x80) = (uint)uVar7 - *(uint *)(this + 0x30);
        uVar1 = *(uint *)(this + 0x80);
        *(uint *)(this + 0x84) =
             ((int)(uVar7 >> 0x20) - *(int *)(this + 0x34)) -
             (uint)((uint)uVar7 < *(uint *)(this + 0x30));
        uVar2 = *(uint *)(this + 0x40);
        uVar3 = *(uint *)(this + 0x84);
        if (uVar2 == 0 && *(int *)(this + 0x44) == 0) {
          *(uint *)(this + 0x40) = uVar1;
          *(uint *)(this + 0x44) = uVar3;
        }
        else {
          *(uint *)(this + 0x44) = uVar3 + *(int *)(this + 0x44) + (uint)CARRY4(uVar1,uVar2);
          *(uint *)(this + 0x40) = uVar1 + uVar2 >> 1 | *(uint *)(this + 0x44) << 0x1f;
          *(uint *)(this + 0x44) = *(uint *)(this + 0x44) >> 1;
        }
        uVar2 = *(uint *)(this + 0x7c);
        if ((uVar2 < uVar3) ||
           (((uVar2 <= uVar3 && (*(uint *)(this + 0x78) < uVar1)) ||
            (*(uint *)(this + 0x78) == 0 && uVar2 == 0)))) {
          *(uint *)(this + 0x78) = uVar1;
          *(uint *)(this + 0x7c) = uVar3;
        }
        uVar2 = *(uint *)(this + 0x74);
        if (((uVar3 < uVar2) || ((uVar3 == uVar2 && (uVar1 < *(uint *)(this + 0x70))))) ||
           (*(uint *)(this + 0x70) == 0 && uVar2 == 0)) {
          *(uint *)(this + 0x70) = uVar1;
          *(uint *)(this + 0x74) = uVar3;
        }
      }
      pvVar4 = ((undefined *)GEN_TOP(((int)local_8 + 1)));
      local_8 = pvVar4;
    } while ((ushort)pvVar4 < *(ushort *)(this + 0x6c));
  }
  if ((*(int *)(this + 0x44) == 0) && (*(int *)(this + 0x40) == 0)) {
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x40) = 1000;
    return (uint)pvVar4;
  }
  this[0x24] = (undefined1)0x1;
  return (uint)pvVar4;
}

/* ref: FUN_00ba81e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba81e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba81e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  code * pcVar5;
  ulonglong uVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  ((byte *)(gen_frame + 0x0))[0x24] = (char)uVar2;
  ((byte *)(gen_frame + 0x0))[0x25] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x0))[0x26] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x27] = (char)(uVar2 >> 0x18);
  if (*((char *)GEN_TOP(((int)this + 0x39))) != '\0') {
    uVar6 = F_00427d90();
    if ((((int)(uVar6 >> 0x20) - *((int *)GEN_TOP(((int)this + 0x2c))) ==
          (uint)((uint)uVar6 < *((uint *)GEN_TOP(((int)this + 0x28))))) &&
        ((uint)uVar6 - *((uint *)GEN_TOP(((int)this + 0x28))) < 0x191)) &&
       (uVar2 = F_004cf030(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG), (char)uVar2 == '\0')) {
      return uVar2;
    }
    puVar1 = ((uint *)GEN_TOP(((int)this + 8)));
    uVar6 = F_00427d90();
    uVar2 = (uint)uVar6 - *((uint *)GEN_TOP(((int)this + 0x28)));
    iVar4 = ((int)(uVar6 >> 0x20) - *((int *)GEN_TOP(((int)this + 0x2c)))) -
            (uint)((uint)uVar6 < *((uint *)GEN_TOP(((int)this + 0x28))));
    *puVar1 = uVar2;
    *((int *)GEN_TOP(((int)this + 0xc))) = iVar4;
    if (((iVar4 != 0) || (400 < uVar2)) || (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 0x24))) == '\0')) {
      *puVar1 = 1000;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG);
    }
    *puVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 0x40)));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 0x44)));
    uVar2 = 0;
    if (*((gen_code32 *)GEN_TOP(((int)this + 0x14))) != ((code *)GEN_TOP(0x0))) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x14))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),puVar1);
    }
    *(undefined4 *)this = 3;
    return uVar2;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x4c)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)) + 4,0x20);
      goto LAB_00ba82d3;
    }
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x5c)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      pcVar5 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x28)));
      goto LAB_00ba82cb;
    }
  }
  else {
    pcVar5 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x24)));
LAB_00ba82cb: ;
    uVar2 = (*pcVar5)(piVar3,((byte *)(gen_frame + 0x0)) + 4,0x20);
LAB_00ba82d3: ;
    if (-1 < (int)uVar2) goto LAB_00ba82ee;
  }
  uVar6 = F_00427d90();
  uVar2 = (uint)uVar6 - *((uint *)GEN_TOP(((int)this + 0x28)));
  iVar4 = ((int)(uVar6 >> 0x20) - *((int *)GEN_TOP(((int)this + 0x2c)))) -
          (uint)((uint)uVar6 < *((uint *)GEN_TOP(((int)this + 0x28))));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = iVar4;
  if ((iVar4 == 0) && (uVar2 < 400)) {
    return uVar2;
  }
LAB_00ba82ee: ;
  uVar6 = F_00427d90();
  uVar2 = (uint)uVar6 - *((uint *)GEN_TOP(((int)this + 0x28)));
  if ((((int)(uVar6 >> 0x20) - *((int *)GEN_TOP(((int)this + 0x2c))) !=
        (uint)((uint)uVar6 < *((uint *)GEN_TOP(((int)this + 0x28))))) || (399 < uVar2)) || (((byte *)(gen_frame + 0x0))[0x1c] == 0))
  {
    *(undefined4 *)this = 3;
    puVar1 = ((uint *)GEN_TOP(((int)this + 8)));
    uVar6 = F_00427d90();
    uVar2 = (uint)uVar6 - *((uint *)GEN_TOP(((int)this + 0x28)));
    iVar4 = ((int)(uVar6 >> 0x20) - *((int *)GEN_TOP(((int)this + 0x2c)))) -
            (uint)((uint)uVar6 < *((uint *)GEN_TOP(((int)this + 0x28))));
    *puVar1 = uVar2;
    *((int *)GEN_TOP(((int)this + 0xc))) = iVar4;
    if ((iVar4 != 0) || (1000 < uVar2)) {
      *puVar1 = 1000;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
    uVar2 = 0;
    if (*((gen_code32 *)GEN_TOP(((int)this + 0x14))) != ((code *)GEN_TOP(0x0))) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x14))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),puVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00ba8360 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ba8360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ulong param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba8360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ulong param_1 = (ulong)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  undefined * this_00;
  int * piVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_FWD,param_1,param_2);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x14))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
      return uVar4;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,param_1,param_2);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
      return uVar4;
    }
  }
  else {
    (*(undefined2 *)(gen_frame + 0x0)) = 2;
    uVar3 = gen_imp_htonl(param_1);
    (*(ulong *)(gen_frame + 0x4)) = uVar3;
    uVar2 = gen_imp_htons((ushort)param_2);
    (*(ushort *)(gen_frame + 0x2)) = uVar2;
    uVar4 = F_00c07c40(this_00 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x10);
    if (uVar4 != 0xffffffff) {
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      uVar4 = F_00ba7d40(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
      return uVar4;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 0xc))))(this_00 GEN_EDX_ARG);
  }
  return 0xffffffff;
}

/* ref: FUN_00ba8460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ba8360(this GEN_EDX_FWD,0,param_1);
  return uVar1;
}

/* ref: FUN_00ba8480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = param_1[1];
  uVar1 = gen_imp_ntohs((ushort)((uint)*param_1 >> 0x10));
  uVar3 = (uint)uVar1;
  uVar2 = gen_imp_ntohl(uVar2);
  uVar3 = F_00ba8360(this GEN_EDX_ARG,uVar2,uVar3);
  return uVar3;
}

/* ref: FUN_00ba84d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba84d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xba84d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00ba7d90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba8510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((int)this + 0x98)));
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if ((0 < iVar2) && (*((int *)GEN_TOP(((int)this + 0x94))) == 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x2c);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) = param_1;
    gen_imp_EnterCriticalSection(lpCriticalSection);
    uVar3 = F_00c0fd50(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))));
    if (uVar3 == 0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0xffffffff;
    }
    *((undefined * PTR32 *)GEN_TOP((uVar3 + 8))) = this;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    piVar1 = ((int *)GEN_TOP(((int)this + 0x98)));
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    if ((iVar2 == 5) && (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) != ((undefined *)GEN_TOP(0x0)))) {
      F_00c0f990(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),2);
    }
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba85b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba85b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xba85b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ba85e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba85e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba85e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_FWD);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1c))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x18))));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 8))))));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00ba8690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bb1550(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ba86a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba86a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba86a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bb16a0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ba86b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba86b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba86b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bb1770(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ba86c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ba86c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba86c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  int * piVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  (*(undefined2 *)(gen_frame + 0x10)) = 0;
  F_00ba6740(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,param_2);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00ba7d90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba8770 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ba8770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba8770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  int * piVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  (*(undefined2 *)(gen_frame + 0x10)) = 0;
  F_00ba6740(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,param_2);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00ba7d90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba8820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = param_1;
  if (*((int *)GEN_TOP(((int)this + 0xb4))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0xb4))));
    *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  }
  uVar4 = F_00406bb0(*((int *)GEN_TOP(((int)this + 0x9c))) + 1,0,0);
  *((uint *)GEN_TOP(((int)this + 0xb4))) = uVar4;
  piVar5 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0xa8)))));
  if (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 0xa8)))) {
    do {
      F_00ba8820(((undefined *)GEN_TOP(piVar5[3])) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x9c))));
      if (*((char *)GEN_TOP(((int)piVar5 + 0x11))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar5[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
          piVar5 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
            piVar5 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x11)));
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar5[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x11)));
            piVar3 = ((int *)GEN_TOP(piVar5[1]));
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 0xa8))));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00ba88f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba88f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba88f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  piVar6 = ((int *)GEN_TOP(*piVar4));
  if (piVar6 != piVar4) {
    do {
      piVar4 = ((int *)GEN_TOP(piVar6[4]));
      if ((piVar4 != ((int *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)piVar4 + 7))) == '\0')) {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if ((piVar2[0x24] != 0) && (((code *)GEN_TOP(piVar2[0xf])) != ((code *)GEN_TOP(0x0)))) {
          (*((code *)GEN_TOP(piVar2[0xf])))(piVar2[0x24]);
        }
        piVar3 = piVar2 + 0x26;
        LOCK();
        piVar4 = ((int *)GEN_TOP(*piVar3));
        *piVar3 = *piVar3;
        UNLOCK();
        if ((piVar4 != ((int *)GEN_TOP(0x2))) && (piVar4 = ((int *)GEN_TOP(F_00ba7f40(piVar2 GEN_EDX_ARG))), piVar4 == ((int *)GEN_TOP(0x1))))
        {
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
          return uVar5;
        }
      }
      if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
        piVar4 = ((int *)GEN_TOP(piVar6[2]));
        if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
          piVar6 = piVar4;
          piVar4 = ((int *)GEN_TOP(*piVar4));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
            piVar6 = piVar4;
            piVar4 = ((int *)GEN_TOP(*piVar4));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP(piVar6[1]));
          piVar2 = piVar6;
          while ((piVar4 = piVar3, piVar6 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2])))))
          {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar6 != *((int * PTR32 *)GEN_TOP(((int)this + 8))));
  }
  return (uint)piVar4;
}

/* ref: FUN_00ba89b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba89b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba89b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00ba8820(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG,param_1);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG,param_1);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba89f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba89f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba89f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004cefe0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1104740));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x24))) = 0;
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0xf;
  *((undefined1 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x6c))) = 3;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  return (uint)this;
}

/* ref: FUN_00ba8a40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ba8a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba8a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1104740));
  if (*((HANDLE *)GEN_TOP(((int)this + 0x20))) != (HANDLE)0x0) {
    gen_imp_IcmpCloseHandle(*((HANDLE *)GEN_TOP(((int)this + 0x20))));
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))));
  }
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x5c)))) {
    F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x48))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x48))) = 0;
  F_004cf880(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00ba8aa0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ba8aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2c));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x354)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  piVar3[1] = iVar2;
  *piVar3 = iVar1;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x358))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 0x358))) = *((int *)GEN_TOP(((int)this + 0x358))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2c)));
}

/* ref: FUN_00ba8b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x20))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00ba8b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  
  *((undefined * PTR32 *)GEN_TOP((param_1 + 0xd8))) = this;
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0x25c)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xe0)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 0xe0)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 0xe0)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((int *)GEN_TOP(0x0))) {
    puVar1[3] = param_1;
  }
  uVar2 = F_00bb3ea0(((undefined *)GEN_TOP(((int)this + 0xdc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar1,0);
  return uVar2;
}

/* ref: FUN_00ba8be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xba8be0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00ba8820(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba8c20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ba8c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba8c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 0x90))) != 0) && (*((gen_code32 *)GEN_TOP(((int)this + 0x40))) != ((code *)GEN_TOP(0x0)))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x40))))(*((int *)GEN_TOP(((int)this + 0x90))));
    if (((char)uVar1 != '\0') && (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) != ((undefined *)GEN_TOP(0x0)))) {
      F_00ba8aa0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,this);
    }
  }
  return;
}

/* ref: FUN_00ba8c50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ba8c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  *((undefined * PTR32 *)GEN_TOP((param_1 + 0xa0))) = this;
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0x25a)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((int *)GEN_TOP(0x0))) {
    puVar1[3] = param_1;
  }
  F_00bb3dc0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar1,0);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc)));
}

/* ref: FUN_00ba8cd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba8cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba8cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00c0fd80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110475c));
  *((undefined4 *)GEN_TOP(((int)this + 0x358))) = 0;
  uVar1 = F_004296a0(0xc,0,0x25a);
  *((uint *)GEN_TOP(((int)this + 0x354))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x354))) + 4))) = *((int *)GEN_TOP(((int)this + 0x354)));
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerImpl::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ba8d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba8d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  F_00bb57c0((undefined *)this GEN_EDX_FWD);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2c));
  iVar1 = *(int *)(this + 0x358);
  while (iVar1 != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)(this + 0x354) + 8))) + 0x90)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
    piVar3 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x354)));
    if (piVar3 != *(int * PTR32 *)(this + 0x354)) {
      *((int *)GEN_TOP(piVar3[1])) = *piVar3;
      *((int *)GEN_TOP((*piVar3 + 4))) = piVar3[1];
      F_00429760(piVar3,0xc,0x25a);
      *(int *)(this + 0x358) = *(int *)(this + 0x358) - 1;
    }
    iVar1 = *(int *)(this + 0x358);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2c)));
}

/* ref: Client::Network::Socket::RUDPSocket::vf14 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x74);
  *(undefined4 *)(this + 0xd4) = param_1;
  if (iVar1 == 0) {
    return 0;
  }
  if (*((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = F_00ba8820(*((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc))) GEN_EDX_FWD,param_1);
    return uVar3;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x14)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG,param_1);
    return uVar3;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x1c)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x34))))(piVar2 GEN_EDX_ARG,param_1);
    return uVar3;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba8e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba8e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined * this_00;
  int iVar1;
  int * piVar2;
  code * pcVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xe4)));
  while (iVar1 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xe0))) + 0xc)));
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    piVar2[0x36] = 0;
    (*pcVar3)(piVar2);
    F_00bb32f0(((undefined *)GEN_TOP(((int)this + 0xdc))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xe0))));
    iVar1 = *((int *)GEN_TOP(((int)this + 0xe4)));
  }
  uVar4 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xd8))) != 0) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd8))) + 0xdc)));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    F_00bb2410(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    uVar4 = F_00bb4740(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
    *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  }
  return uVar4;
}

/* ref: FUN_00ba8ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba8ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  __time64_t _Var2;
  
  uVar1 = F_00c07ca0(this GEN_EDX_FWD);
  if (uVar1 == 0xffffffff) {
    return 0xffffffff;
  }
  F_00ba8c50(this GEN_EDX_ARG,param_1);
  param_1[1] = uVar1;
  if (*((int *)GEN_TOP(((int)this + 0x94))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    F_00ba8820(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x9c))));
    F_00ba8510(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x94))));
    if (((undefined *)GEN_TOP(param_1[0x25])) != ((undefined *)GEN_TOP(0x0))) {
      F_00c0f990(((undefined *)GEN_TOP(param_1[0x25])) GEN_EDX_ARG,param_1[1],2);
    }
  }
  LOCK();
  param_1[0x26] = 4;
  UNLOCK();
  _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(__time64_t *)(param_1 + 0x20) = _Var2;
  return uVar1;
}

/* ref: FUN_00ba8f40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba8f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba8f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int * local_18;
  int local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  local_18 = ((int *)GEN_TOP(0x0));
  if (*((int *)GEN_TOP(((int)this + 200))) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0xc4)));
  local_8 = 0;
  if ((*((int * PTR32 *)GEN_TOP(((int)this + 0xb8))) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0xb8))))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    local_18 = ((int *)GEN_TOP(*puVar1));
  }
  uVar7 = *((int *)GEN_TOP(((int)this + 200))) + uVar4;
  for (; uVar4 != uVar7; uVar4 = uVar4 + 1) {
    iVar6 = 0;
    if (local_18 != ((int *)GEN_TOP(0x0))) {
      iVar6 = *local_18;
    }
    uVar3 = uVar4;
    if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar4) {
      uVar3 = uVar4 - *((uint *)GEN_TOP((iVar6 + 8)));
    }
    local_8 = local_8 + *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar3 * 4))) + 8)));
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0xdc)));
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xd0)));
  piVar5 = ((int *)GEN_TOP(0x0));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar5 = *((int * PTR32 *)GEN_TOP(*piVar2));
  }
  uVar7 = (*((int *)GEN_TOP(((int)this + 0xe0))) + uVar4) - 1;
  if (((piVar5 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar5)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar5 = *((int * PTR32 *)GEN_TOP(*piVar5)), piVar5 == ((int *)GEN_TOP(0x0)))) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar5;
  }
  if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar7) {
    uVar7 = uVar7 - *((uint *)GEN_TOP((iVar6 + 8)));
  }
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar2;
  }
  if (*((uint *)GEN_TOP((iVar8 + 8))) <= uVar4) {
    uVar4 = uVar4 - *((uint *)GEN_TOP((iVar8 + 8)));
  }
  iVar6 = **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar7 * 4))) - **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar8 + 4))) + uVar4 * 4)));
  if (iVar6 == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return local_8 / iVar6;
}

/* ref: FUN_00ba9060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba9060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  int local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar8 = ((int *)GEN_TOP(0x0));
  if (*((int *)GEN_TOP(((int)this + 0xe0))) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xd0)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 0xdc)));
  local_8 = 0;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar1)) != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar8 = *((int * PTR32 *)GEN_TOP(*piVar1));
  }
  uVar5 = *((int *)GEN_TOP(((int)this + 0xe0))) + uVar4;
  for (uVar3 = uVar4; uVar3 != uVar5; uVar3 = uVar3 + 1) {
    if (piVar8 == ((int *)GEN_TOP(0x0))) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar8;
    }
    uVar2 = uVar3;
    if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar3) {
      uVar2 = uVar3 - *((uint *)GEN_TOP((iVar6 + 8)));
    }
    local_8 = local_8 + *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar2 * 4))) + 8)));
  }
  piVar8 = ((int *)GEN_TOP(0x0));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar1)) != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar8 = *((int * PTR32 *)GEN_TOP(*piVar1));
  }
  uVar5 = uVar5 - 1;
  if (((piVar8 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar8)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar8 = *((int * PTR32 *)GEN_TOP(*piVar8)), piVar8 == ((int *)GEN_TOP(0x0)))) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar8;
  }
  if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar5) {
    uVar5 = uVar5 - *((uint *)GEN_TOP((iVar6 + 8)));
  }
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar1;
  }
  if (*((uint *)GEN_TOP((iVar7 + 8))) <= uVar4) {
    uVar4 = uVar4 - *((uint *)GEN_TOP((iVar7 + 8)));
  }
  iVar6 = **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar5 * 4))) - **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 4))) + uVar4 * 4)));
  if (iVar6 == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return local_8 / iVar6;
}

/* ref: FUN_00ba9170 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ba9170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba9170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * this_00;
  int iVar1;
  int * piVar2;
  code * pcVar3;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  iVar1 = *((int *)GEN_TOP(((int)this + 0xac)));
  while (iVar1 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xa8))) + 0xc)));
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0xc)));
    piVar2[0x28] = 0;
    (*pcVar3)(piVar2);
    F_00bb2ee0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0xc)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xa8))));
    iVar1 = *((int *)GEN_TOP(((int)this + 0xac)));
  }
  if (*((int *)GEN_TOP(((int)this + 0xa0))) != 0) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + 0xa4)));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
    F_00bb2180(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0xc)));
    F_00bb4600(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
    *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  }
  return (uint)(gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8))));
}

/* ref: FUN_00ba9220 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba9220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba9220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * this_00;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x360,0,0)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00c0fd80(this_00 GEN_EDX_ARG);
    *this_00 = (*(undefined * PTR32 (*)[9])REFP(0x110475c));
    this_00[0xd6] = 0;
    uVar1 = F_004296a0(0xc,0,0x25a);
    this_00[0xd5] = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((undefined4 *)GEN_TOP((this_00[0xd5] + 4))) = this_00[0xd5];
    *(undefined4 * PTR32 *)this = this_00;
    return (uint)this;
  }
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: FUN_00ba9290 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba9290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba9290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110475c));
  F_00ba8d10(this GEN_EDX_FWD);
  F_00bb4280(((undefined *)GEN_TOP(((int)this + 0x354))) GEN_EDX_ARG);
  uVar1 = F_00c0fdb0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ba92c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba92c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba92c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  __time64_t _Var4;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  uVar2 = (uint)_Var4;
  uVar3 = (uint)*((ushort *)GEN_TOP((iVar1 + 0x46)));
  *((__time64_t *)GEN_TOP(((int)this + 0x60))) = _Var4;
  *((int *)GEN_TOP(((int)this + 0x38))) = *((int *)GEN_TOP(((int)this + 0x38))) + 1;
  *((int *)GEN_TOP(((int)this + 0x40))) = *((int *)GEN_TOP(((int)this + 0x40))) + uVar3;
  *((int *)GEN_TOP(((int)this + 0x4c))) = *((int *)GEN_TOP(((int)this + 0x4c))) + uVar3;
  *((uint *)GEN_TOP(((int)this + 0x54))) = uVar3;
  if (*((char *)GEN_TOP(((int)this + 0xc4))) == '\0') {
    uVar2 = F_00bb5bf0(((undefined *)GEN_TOP(((int)this + 0xf78))) GEN_EDX_ARG,param_1);
  }
  else if ((*((int *)GEN_TOP(((int)this + 0xd0))) != 0) && (*((gen_code32 *)GEN_TOP(((int)this + 0x14))) != ((code *)GEN_TOP(0x0)))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x14))))
                      (*((int *)GEN_TOP(((int)this + 0xd0))),*((int *)GEN_TOP((param_1 + 4))) + 0x48,
                       (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x46))));
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_00ba9340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba9340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00bb5bf0(((undefined *)GEN_TOP(((int)this + 0xf6c))) GEN_EDX_FWD,param_1);
  return (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x46)));
}

/* ref: FUN_00ba9360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba9360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x60, 0);
  undefined * this_00;
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  undefined * pvVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  if ((int)param_2 < 7) {
    return REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  }
  uVar4 = CONCAT11(param_1[5],param_1[6]);
  uVar5 = uVar4 + 7;
  if (uVar5 != param_2) {
    return uVar5;
  }
  puVar6 = ((undefined4 *)GEN_TOP(F_00406b90(0x5ba,0,0)));
  if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar6 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *(undefined2 *)(puVar6 + 4) = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
  }
  F_00bb19a0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar6);
  *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x10) = *param_1;
  *((undefined1 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x41))) = param_1[1];
  *((undefined1 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x42))) = param_1[2];
  *(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x11) = CONCAT11(param_1[3],param_1[4]);
  *((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x46))) = uVar4;
  if (uVar4 != 0) {
    F_00c46aa0((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x12,param_1 + 7,(uint)uVar4);
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  *(*(undefined4 * PTR32 *)(gen_frame + 0x4)) = *param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4))[1] = param_3[1];
  (*(undefined4 * PTR32 *)(gen_frame + 0x4))[2] = param_3[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x4))[3] = param_3[3];
  *(undefined2 *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 4) = *(undefined2 *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x11);
  if (*(char *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x10) == '\0') {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x2c)));
    if (iVar1 != 0) {
      iVar2 = *((int *)GEN_TOP((iVar1 + 0xf6c)));
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = *((undefined * PTR32 *)GEN_TOP((iVar2 + 4)));
      piVar7 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
      piVar7[1] = (int)(*(undefined * PTR32 *)(gen_frame + 0x14));
      *piVar7 = iVar2;
      if (piVar7 + 2 != ((int *)GEN_TOP(0x0))) {
        *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + 1;
        piVar7[2] = (int)(*(int * PTR32 *)(gen_frame + 0x0));
        piVar7[3] = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      if (*((int *)GEN_TOP((iVar1 + 0xf70))) == -2) {
                    
        F_00c4579a(((char *)REFP(0x108b258)));
      }
      *((int *)GEN_TOP((iVar1 + 0xf70))) = *((int *)GEN_TOP((iVar1 + 0xf70))) + 1;
      *((int * PTR32 *)GEN_TOP((iVar2 + 4))) = piVar7;
      *((int * PTR32 *)GEN_TOP(piVar7[1])) = piVar7;
    }
    goto LAB_00ba95c0;
  }
  uVar4 = *((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 2)));
  uVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x4))[1];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(uVar4,*(undefined2 *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 4));
  (*(uint *)(gen_frame + 0xc)) = (int)((uint)uVar4 << 0x10) >> 0x1f | uVar5;
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x30)));
  F_00bb44f0(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 0x34)));
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 0x34)))) {
    if (*(char *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x10) != '\x01') goto LAB_00ba95c0;
    F_00ba7220(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((*(ushort *)(gen_frame + 0x1a)),(*(undefined2 *)(gen_frame + 0x28)));
    (*(uint *)(gen_frame + 0xc)) = (int)((uint)(*(ushort *)(gen_frame + 0x1a)) << 0x10) >> 0x1f | (*(uint *)(gen_frame + 0x1c));
    piVar7 = ((int *)GEN_TOP(F_00bb44f0(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x8)))));
    pvVar8 = ((undefined *)GEN_TOP(*piVar7));
    if (pvVar8 == (*(undefined * PTR32 *)(gen_frame + 0x10))) goto LAB_00ba95c0;
  }
  **((int * PTR32 *)GEN_TOP(((int)pvVar8 + 0x18))) = **((int * PTR32 *)GEN_TOP(((int)pvVar8 + 0x18))) + 1;
  uVar5 = *((uint *)GEN_TOP(((int)pvVar8 + 0x1c)));
  iVar1 = *((int *)GEN_TOP((uVar5 + 0xf6c)));
  pvVar3 = *((undefined * PTR32 *)GEN_TOP((iVar1 + 4)));
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)pvVar8 + 0x18)));
  (*(uint *)(gen_frame + 0xc)) = uVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar3;
  piVar7 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
  piVar7[1] = (int)(*(undefined * PTR32 *)(gen_frame + 0x14));
  *piVar7 = iVar1;
  if (piVar7 + 2 != ((int *)GEN_TOP(0x0))) {
    *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + 1;
    piVar7[2] = (int)(*(int * PTR32 *)(gen_frame + 0x0));
    piVar7[3] = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  }
  if (*((int *)GEN_TOP((uVar5 + 0xf70))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP((uVar5 + 0xf70))) = *((int *)GEN_TOP((uVar5 + 0xf70))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar7;
  *((int * PTR32 *)GEN_TOP(piVar7[1])) = piVar7;
  F_00bb1600(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
LAB_00ba95c0: ;
  uVar5 = F_00bb3550(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar5;
}

/* ref: Client::Network::Socket::SocketImpl::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba9600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba9600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pSVar1;
  int iVar2;
  uint uVar3;
  
  pSVar1 = this + 0x98;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pSVar1)), 0);
  if (iVar2 != 0) {
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pSVar1)), 0);
    if (iVar2 != 7) {
      F_00ba9170(this GEN_EDX_FWD);
      F_00c07bf0((undefined *)this GEN_EDX_ARG);
      _InterlockedExchange((volatile long *)(((int *)pSVar1)), (long)(7));
      if ((*(int *)(this + 0x90) != 0) && ((code *)*(gen_code32 *)(this + 0x40) != ((code *)GEN_TOP(0x0)))) {
        uVar3 = ((code *)*(gen_code32 *)(this + 0x40))(*(int *)(this + 0x90));
        if (((char)uVar3 != '\0') && (*(undefined * PTR32 *)(this + 0x94) != ((undefined *)GEN_TOP(0x0)))) {
          F_00ba8aa0(*(undefined * PTR32 *)(this + 0x94) GEN_EDX_ARG,this);
        }
      }
      F_00ba7c80(this GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_00ba9670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba9670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  uint uVar2;
  
  if ((0x3f < *((uint *)GEN_TOP(((int)this + 200)))) && (*((int *)GEN_TOP(((int)this + 200))) != 0)) {
    *((int *)GEN_TOP(((int)this + 0xc4))) = *((int *)GEN_TOP(((int)this + 0xc4))) + 1;
    if (*((uint *)GEN_TOP(((int)this + 0xc0))) <= *((uint *)GEN_TOP(((int)this + 0xc4)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 200))) - 1;
    *((int *)GEN_TOP(((int)this + 200))) = iVar1;
    if (iVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
    }
  }
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  uVar2 = F_00bb5a40(((undefined *)GEN_TOP(((int)this + 0xb8))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00ba96f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba96f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba96f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  uint uVar2;
  
  if ((0x3f < *((uint *)GEN_TOP(((int)this + 0xe0)))) && (*((int *)GEN_TOP(((int)this + 0xe0))) != 0)) {
    *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 1;
    if (*((uint *)GEN_TOP(((int)this + 0xd8))) <= *((uint *)GEN_TOP(((int)this + 0xdc)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0xe0))) - 1;
    *((int *)GEN_TOP(((int)this + 0xe0))) = iVar1;
    if (iVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
    }
  }
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  uVar2 = F_00bb5a40(((undefined *)GEN_TOP(((int)this + 0xd0))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00ba9770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba9770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = param_2;
  *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) + 1;
  *((int *)GEN_TOP(((int)this + 0x60))) = *((int *)GEN_TOP(((int)this + 0x60))) + param_3;
  *((int *)GEN_TOP(((int)this + 0x6c))) = *((int *)GEN_TOP(((int)this + 0x6c))) + param_3;
  *((int *)GEN_TOP(((int)this + 0x74))) = param_3;
  uVar1 = F_00ba96f0(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ba97b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba97b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba97b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = param_2;
  *((int *)GEN_TOP(((int)this + 0x5c))) = *((int *)GEN_TOP(((int)this + 0x5c))) + 1;
  *((int *)GEN_TOP(((int)this + 100))) = *((int *)GEN_TOP(((int)this + 100))) + param_3;
  *((int *)GEN_TOP(((int)this + 0x68))) = *((int *)GEN_TOP(((int)this + 0x68))) + param_3;
  *((int *)GEN_TOP(((int)this + 0x70))) = param_3;
  uVar1 = F_00ba9670(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ba97f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ba97f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba97f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  if (*(int *)this == 0) {
    this_00 = ((undefined *)GEN_TOP(F_00406b90(4,0,0)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00ba9220(this_00 GEN_EDX_ARG);
      *(uint *)this = uVar1;
      return uVar1;
    }
    *(undefined4 *)this = 0;
  }
  return *(uint *)this;
}

/* ref: FUN_00ba9820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba9820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  
  F_00bb61e0(param_1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  piVar5 = ((int *)GEN_TOP(*piVar4));
  if (piVar5 != piVar4) {
    iVar6 = 0;
    do {
      piVar4 = ((int *)GEN_TOP(*param_1));
      *((int *)GEN_TOP((iVar6 + (int)piVar4))) = piVar5[4];
      iVar6 = iVar6 + 4;
      if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar5[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar4 = ((int *)GEN_TOP(*piVar2));
          while (piVar5 = piVar2, cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
            piVar2 = piVar4;
            piVar4 = ((int *)GEN_TOP(*piVar4));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          piVar2 = piVar5;
          while ((piVar4 = piVar3, piVar5 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2])))))
          {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 8))));
  }
  return (uint)piVar4;
}

/* ref: FUN_00ba98a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba98a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba98a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int iVar2;
  code * pcVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  ulonglong uVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x8)) = 0;
  piVar6 = ((int *)GEN_TOP(F_00ba9820(this GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x0)))));
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x4));
  piVar4 = (*(int * PTR32 *)(gen_frame + 0x0));
  for (piVar7 = (*(int * PTR32 *)(gen_frame + 0x0)); piVar7 != piVar5; piVar7 = piVar7 + 1) {
    piVar6 = ((int *)GEN_TOP(*piVar7));
    if ((piVar6 != ((int *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)piVar6 + 7))) == '\0')) {
      piVar6 = ((int *)GEN_TOP(piVar6[2]));
      piVar1 = piVar6 + 0x26;
      iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
      if (iVar2 != 7) {
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar6 + 0xc)));
        piVar6 = ((int *)GEN_TOP((*pcVar3)(piVar6)));
      }
    }
  }
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    uVar8 = F_00429760(piVar4,((*(int *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)piVar4) >> 2) * 4,0x25a);
    piVar6 = ((int *)GEN_TOP((uint)uVar8));
  }
  return (uint)piVar6;
}

/* ref: FUN_00ba9930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba9930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int iVar2;
  int * piVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  ulonglong uVar8;
  
  (*(uint * PTR32 *)(gen_frame + 0x0)) = ((uint *)GEN_TOP(0x0));
  (*(uint * PTR32 *)(gen_frame + 0x4)) = ((uint *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar5 = F_00ba9820(this GEN_EDX_FWD,&(*(uint * PTR32 *)(gen_frame + 0x0)));
  puVar4 = (*(uint * PTR32 *)(gen_frame + 0x0));
  puVar7 = (*(uint * PTR32 *)(gen_frame + 0x0));
  if ((*(uint * PTR32 *)(gen_frame + 0x0)) != (*(uint * PTR32 *)(gen_frame + 0x4))) {
    do {
      uVar5 = *puVar7;
      if ((uVar5 != 0) && (*((char *)GEN_TOP((uVar5 + 7))) == '\0')) {
        piVar3 = *((int * PTR32 *)GEN_TOP((uVar5 + 8)));
        piVar1 = piVar3 + 0x26;
        iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
        if (iVar2 != 2) {
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x44))))(piVar3 GEN_EDX_ARG);
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
          }
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (*(uint * PTR32 *)(gen_frame + 0x4)));
  }
  if (puVar4 != ((uint *)GEN_TOP(0x0))) {
    uVar8 = F_00429760(puVar4,((*(int *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)puVar4) >> 2) * 4,0x25a);
    uVar5 = (uint)uVar8;
  }
  return uVar5;
}

/* ref: FUN_00ba99c0 */
GEN_OWN GEN_FRAME uint F_00ba99c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xba99c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00ba9360(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x24))) GEN_EDX_ARG,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ba99e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba99e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xba99e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  F_00bb4cc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,0x1a923d22,((char *)REFP(0x11045a8)));
  iVar1 = *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 4)));
  if (*((int *)GEN_TOP((iVar1 + 0x78))) == 2) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
    if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x2c))) != 0)) {
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x28))));
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2c)));
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
        }
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  }
  else {
    uVar8 = (int)((uint)*((ushort *)GEN_TOP((iVar1 + 0x86))) << 0x10) >> 0x1f | *((uint *)GEN_TOP((iVar1 + 0x88)));
    uVar6 = CONCAT22(*((ushort *)GEN_TOP((iVar1 + 0x86))),*((undefined2 *)GEN_TOP((iVar1 + 0x94))));
    (*(uint *)(gen_frame + 0x4)) = uVar6;
    (*(uint *)(gen_frame + 0x8)) = uVar8;
    uVar4 = F_00bb0c00(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)));
    uVar7 = *((uint *)GEN_TOP(((int)this + 0x34)));
    (*(uint *)&gen_args[0]) = uVar4;
    if (((uVar4 == uVar7) || (uVar8 < *((uint *)GEN_TOP((uVar4 + 0x14))))) ||
       ((uVar8 == *((uint *)GEN_TOP((uVar4 + 0x14))) && (uVar6 < *((uint *)GEN_TOP((uVar4 + 0x10))))))) {
      (*(uint *)(gen_frame + 0x8)) = uVar7;
      puVar5 = &(*(uint *)(gen_frame + 0x8));
    }
    else {
      puVar5 = &(*(uint *)&gen_args[0]);
    }
    if (*puVar5 != *((uint *)GEN_TOP(((int)this + 0x34)))) {
      F_00bb6270(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,&(*(uint *)&gen_args[0]),*puVar5);
    }
  }
  if ((*((int *)GEN_TOP(((int)this + 0x2c))) == 0) && (*((int *)GEN_TOP(((int)this + 0x38))) == 0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  F_00bb1800(&REFG(undefined4, 0x14c5960) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return uVar7;
}

/* ref: FUN_00ba9ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba9ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *((uint * PTR32 *)GEN_TOP(((int)this + 0x20))) = param_1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    if (*param_1 == 0) {
      this_00 = ((undefined *)GEN_TOP(F_00406b90(4,0,0)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        uVar3 = 0;
      }
      else {
        uVar3 = F_00ba9220(this_00 GEN_EDX_ARG);
      }
      *param_1 = uVar3;
    }
    F_00ba8510(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(*param_1)));
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *((uint * PTR32 *)GEN_TOP(((int)this + 0x20))) = param_1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
    return uVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *((uint * PTR32 *)GEN_TOP(((int)this + 0x20))) = param_1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba9b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xba9b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  *((undefined1 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0x78;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0x2d;
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
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110479c));
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x98))))), (long)(0));
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0x1000;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  uVar2 = F_004296a0(0x14,0,0x25a);
  *((uint *)GEN_TOP(((int)this + 0xa8))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 4))) = *((int *)GEN_TOP(((int)this + 0xa8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 8))) = *((int *)GEN_TOP(((int)this + 0xa8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 0x11))) = 1;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0xb8)));
  *puVar1 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x25a)));
  *puVar1 = puVar3;
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0xd0)));
  *puVar1 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x25a)));
  *puVar1 = puVar3;
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  uVar2 = F_00406bb0(*((int *)GEN_TOP(((int)this + 0x9c))) + 1,0,0);
  *((uint *)GEN_TOP(((int)this + 0xb4))) = uVar2;
  return (uint)this;
}

/* ref: FUN_00ba9d20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ba9d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba9d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110479c));
  if (*((int *)GEN_TOP(((int)this + 0xb4))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0xb4))));
    *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  }
  F_00ba9600(this GEN_EDX_ARG);
  F_00bb3890(((undefined *)GEN_TOP(((int)this + 0xd0))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0xd0))),8,0x25a);
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  F_00bb3890(((undefined *)GEN_TOP(((int)this + 0xb8))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0xb8))),8,0x25a);
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  F_00bb4600(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xa8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xa8))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0xa8))),0x14,0x25a);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc)));
}

/* ref: Client::Network::Socket::SocketImpl::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba9df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * pSVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  
  pSVar1 = this + 0x98;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pSVar1)), 0);
  if (iVar2 != 4) {
    return 0xffffffff;
  }
  uVar3 = F_00c07d20((undefined *)this GEN_EDX_FWD,param_1,param_2);
  if (0 < (int)uVar3) {
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(__time64_t *)(this + 0x88) = _Var4;
    *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
    *(uint *)(this + 100) = *(int *)(this + 100) + uVar3;
    *(uint *)(this + 0x68) = *(int *)(this + 0x68) + uVar3;
    *(uint *)(this + 0x70) = uVar3;
    F_00ba9670(this GEN_EDX_ARG,(int)_Var4,(int)((ulonglong)_Var4 >> 0x20),uVar3);
  }
  if (uVar3 == 0xffffffff) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: Client::Network::Socket::SocketImpl::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xba9e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  __time64_t _Var2;
  
  uVar1 = F_00c07d50((undefined *)this GEN_EDX_FWD,param_1,param_2);
  if (-1 < (int)uVar1) {
    _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(__time64_t *)(this + 0x80) = _Var2;
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
    *(uint *)(this + 0x60) = *(int *)(this + 0x60) + uVar1;
    *(uint *)(this + 0x6c) = *(int *)(this + 0x6c) + uVar1;
    *(uint *)(this + 0x74) = uVar1;
    F_00ba96f0(this GEN_EDX_ARG,(int)_Var2,(int)((ulonglong)_Var2 >> 0x20),uVar1);
  }
  if (uVar1 == 0xffffffff) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00ba9ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba9ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  __time64_t _Var2;
  
  uVar1 = F_00c07d90(this GEN_EDX_FWD,param_1,param_2,param_3,0x10);
  if (0 < (int)uVar1) {
    _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((__time64_t *)GEN_TOP(((int)this + 0x88))) = _Var2;
    *((int *)GEN_TOP(((int)this + 0x5c))) = *((int *)GEN_TOP(((int)this + 0x5c))) + 1;
    *((int *)GEN_TOP(((int)this + 100))) = *((int *)GEN_TOP(((int)this + 100))) + uVar1;
    *((int *)GEN_TOP(((int)this + 0x68))) = *((int *)GEN_TOP(((int)this + 0x68))) + uVar1;
    *((uint *)GEN_TOP(((int)this + 0x70))) = uVar1;
    F_00ba9670(this GEN_EDX_ARG,(int)_Var2,(int)((ulonglong)_Var2 >> 0x20),uVar1);
  }
  if (uVar1 == 0xffffffff) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00ba9f40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xba9f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  __time64_t _Var2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x10));
  uVar1 = F_00c07dd0(this GEN_EDX_FWD,param_1,param_2,param_3,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  if (-1 < (int)uVar1) {
    _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((__time64_t *)GEN_TOP(((int)this + 0x80))) = _Var2;
    *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) + 1;
    *((int *)GEN_TOP(((int)this + 0x60))) = *((int *)GEN_TOP(((int)this + 0x60))) + uVar1;
    *((int *)GEN_TOP(((int)this + 0x6c))) = *((int *)GEN_TOP(((int)this + 0x6c))) + uVar1;
    *((uint *)GEN_TOP(((int)this + 0x74))) = uVar1;
    F_00ba96f0(this GEN_EDX_ARG,(int)_Var2,(int)((ulonglong)_Var2 >> 0x20),uVar1);
  }
  if (uVar1 == 0xffffffff) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00ba9fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ba9fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xba9fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  uint uVar2;
  undefined * this_00;
  int * this_01;
  __time64_t _Var3;
  undefined4 * local_8;
  
  uVar2 = F_00c07ca0(this GEN_EDX_FWD);
  this_01 = ((int *)GEN_TOP(0x0));
  if ((int)uVar2 < 1) {
    return 0;
  }
  local_8 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (local_8 == ((undefined4 *)GEN_TOP(0x0))) {
    local_8 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *local_8 = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
    local_8[1] = 0;
    local_8[2] = 0;
    local_8[3] = 0;
    local_8[4] = 0;
    local_8[5] = 0;
    local_8[6] = 0;
    local_8[7] = 0;
    local_8[8] = 0;
    local_8[9] = 0;
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0xe8,0,0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    this_01 = ((int *)GEN_TOP(F_00ba9b90(this_00 GEN_EDX_ARG,local_8)));
  }
  F_00ba8c50(this GEN_EDX_ARG,this_01);
  LOCK();
  this_01[0x26] = 1;
  UNLOCK();
  F_00bb1550(local_8 + 2 GEN_EDX_ARG,this_01);
  pcVar1 = *((gen_code32 *)GEN_TOP((*this_01 + 4)));
  this_01[1] = uVar2;
  (*pcVar1)(this_01);
  F_00ba8820(this_01 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x9c))));
  F_00ba8510(this_01 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x94))));
  F_00c0f990(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,this_01[1],2);
  LOCK();
  this_01[0x26] = 4;
  UNLOCK();
  _Var3 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(__time64_t *)(this_01 + 0x20) = _Var3;
  if ((*((int *)GEN_TOP(((int)this + 0x90))) != 0) && (*((gen_code32 *)GEN_TOP(((int)this + 0x30))) != ((code *)GEN_TOP(0x0)))) {
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x30))))(*((int *)GEN_TOP(((int)this + 0x90))),local_8);
  }
  return (uint)local_8;
}

/* ref: FUN_00baa0d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00baa0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaa0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  __time64_t _Var2;
  
  uVar1 = F_00c07d50(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0xb4))),*((undefined4 *)GEN_TOP(((int)this + 0x9c))));
  if (-1 < (int)uVar1) {
    _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((__time64_t *)GEN_TOP(((int)this + 0x80))) = _Var2;
    *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) + 1;
    *((int *)GEN_TOP(((int)this + 0x60))) = *((int *)GEN_TOP(((int)this + 0x60))) + uVar1;
    *((int *)GEN_TOP(((int)this + 0x6c))) = *((int *)GEN_TOP(((int)this + 0x6c))) + uVar1;
    *((uint *)GEN_TOP(((int)this + 0x74))) = uVar1;
    F_00ba96f0(this GEN_EDX_ARG,(int)_Var2,(int)((ulonglong)_Var2 >> 0x20),uVar1);
  }
  if (uVar1 == 0xffffffff) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
    return 0xffffffff;
  }
  if (uVar1 == 0xfffffffe) {
    return 0xfffffffe;
  }
  if ((*((int *)GEN_TOP(((int)this + 0x90))) != 0) && (*((gen_code32 *)GEN_TOP(((int)this + 0x34))) != ((code *)GEN_TOP(0x0)))) {
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x34))))
              (*((int *)GEN_TOP(((int)this + 0x90))),*((undefined4 *)GEN_TOP(((int)this + 0xb4))),uVar1);
  }
  if ((*((int *)GEN_TOP(((int)this + 8))) == 0) && (uVar1 == 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00baa170 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00baa170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaa170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x9c)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xb4)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x10;
  *((undefined1 *)GEN_TOP((iVar1 + iVar2))) = 0;
  uVar3 = F_00c07dd0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0xb4))),*((undefined4 *)GEN_TOP(((int)this + 0x9c))),
                     ((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)));
  if (-1 < (int)uVar3) {
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((__time64_t *)GEN_TOP(((int)this + 0x80))) = _Var4;
    *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) + 1;
    *((int *)GEN_TOP(((int)this + 0x60))) = *((int *)GEN_TOP(((int)this + 0x60))) + uVar3;
    *((int *)GEN_TOP(((int)this + 0x6c))) = *((int *)GEN_TOP(((int)this + 0x6c))) + uVar3;
    *((uint *)GEN_TOP(((int)this + 0x74))) = uVar3;
    F_00ba96f0(this GEN_EDX_ARG,(int)_Var4,(int)((ulonglong)_Var4 >> 0x20),uVar3);
  }
  if (uVar3 == 0xffffffff) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
    return 0xffffffff;
  }
  if (uVar3 == 0xfffffffe) {
    return 0xfffffffe;
  }
  if ((*((int *)GEN_TOP(((int)this + 0x90))) != 0) && (*((gen_code32 *)GEN_TOP(((int)this + 0x38))) != ((code *)GEN_TOP(0x0)))) {
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x38))))
              (*((int *)GEN_TOP(((int)this + 0x90))),*((undefined4 *)GEN_TOP(((int)this + 0xb4))),uVar3,((undefined1 *)(gen_frame + 0x4)));
  }
  if ((*((int *)GEN_TOP(((int)this + 8))) == 0) && (uVar3 == 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00baa270 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00baa270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaa270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  char cVar1;
  byte * pbVar2;
  char * pcVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  ulong uVar6;
  undefined * phVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_FWD,param_1,(int)pcVar3 - (int)(param_1 + 1));
  if (*((HANDLE *)GEN_TOP(((int)this + 0x20))) != (HANDLE)0x0) {
    gen_imp_IcmpCloseHandle(*((HANDLE *)GEN_TOP(((int)this + 0x20))));
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  pvVar4 = gen_imp_IcmpCreateFile();
  *((HANDLE *)GEN_TOP(((int)this + 0x20))) = pvVar4;
  DVar5 = gen_imp_GetLastError();
  if (DVar5 != 0) {
    return 0;
  }
  uVar6 = gen_imp_inet_addr(param_1);
  *((ulong *)GEN_TOP(((int)this + 0x1c))) = uVar6;
  if (uVar6 == 0xffffffff) {
    phVar7 = gen_imp_gethostbyname(param_1);
    if (phVar7 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    pbVar2 = ((byte *)GEN_TOP(*(*(undefined * PTR32 *)(((char *)(phVar7) + 12)))));
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x10,((char *)REFP(0x1104644)),(uint)*pbVar2,(uint)pbVar2[1],(uint)pbVar2[2],
               (uint)pbVar2[3]);
    uVar6 = gen_imp_inet_addr(((undefined1 *)(gen_frame + 0x0)));
    *((ulong *)GEN_TOP(((int)this + 0x1c))) = uVar6;
  }
  return 1;
}

/* ref: FUN_00baa370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baa370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaa370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  F_00bb4cc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,0x1a923d22,((char *)REFP(0x1104590)));
  iVar3 = param_1[1];
  if (*((int *)GEN_TOP((iVar3 + 0x78))) == 2) {
    F_00bb1640(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,param_1);
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((iVar3 + 0x86)));
    uVar2 = *((undefined2 *)GEN_TOP((iVar3 + 0x94)));
    uVar4 = *((uint *)GEN_TOP((iVar3 + 0x88)));
    *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
    (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(*param_1));
    puVar5 = ((undefined4 *)GEN_TOP(param_1[1]));
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT22(uVar1,uVar2);
    (*(uint *)(gen_frame + 0x4)) = (int)((uint)uVar1 << 0x10) >> 0x1f | uVar4;
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar5;
    F_00bb6910(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x30))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x0)));
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    if ((((*(int * PTR32 *)(gen_frame + 0x8)) != ((int *)GEN_TOP(0x0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != ((undefined4 *)GEN_TOP(0x0)))) &&
       (*(*(int * PTR32 *)(gen_frame + 0x8)) = *(*(int * PTR32 *)(gen_frame + 0x8)) - 1, *(*(int * PTR32 *)(gen_frame + 0x8)) == 0)) {
      F_00406ad0((*(int * PTR32 *)(gen_frame + 0x8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
    }
  }
  F_00bb1800(&REFG(undefined4, 0x14c5960) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  return 0;
}

/* ref: FUN_00baa440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baa440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbaa440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  int * piVar8;
  undefined * this_00;
  undefined4 * puVar9;
  
  F_00bb4cc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,0x1a923d22,((char *)REFP(0x110459c)));
  iVar3 = param_1[1];
  puVar9 = ((undefined4 *)GEN_TOP(((int)((uint)*((ushort *)GEN_TOP((iVar3 + 0x86))) << 0x10) >> 0x1f | *((uint *)GEN_TOP((iVar3 + 0x88))))));
  piVar8 = ((int *)GEN_TOP(CONCAT22(*((ushort *)GEN_TOP((iVar3 + 0x86))),*((undefined2 *)GEN_TOP((iVar3 + 0x94))))));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x30)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar9;
  puVar6 = ((undefined4 *)GEN_TOP(F_00bb0c00(this_00 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc)))));
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x34)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar6;
  if (((puVar6 == puVar4) || (puVar9 < ((undefined4 *)GEN_TOP(puVar6[5])))) ||
     ((puVar9 == ((undefined4 *)GEN_TOP(puVar6[5])) && (piVar8 < ((int *)GEN_TOP(puVar6[4])))))) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar4;
    ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
  }
  else {
    ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
  }
  F_00bb6270(this_00 GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x10)),*ppuVar7);
  uVar1 = *((ushort *)GEN_TOP((param_2 + 2)));
  uVar2 = *((undefined2 *)GEN_TOP((param_2 + 0x10)));
  uVar5 = *((uint *)GEN_TOP((param_2 + 4)));
  *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
  puVar4 = ((undefined4 *)GEN_TOP(param_1[1]));
  (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(*param_1));
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar4;
  puVar6 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x25c)));
  puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
  piVar8 = (*(int * PTR32 *)(gen_frame + 0xc));
  *puVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
  puVar6[1] = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
  puVar6[2] = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
  *(undefined2 *)(puVar6 + 8) = 0;
  if (puVar6 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar6[4] = CONCAT22(uVar1,uVar2);
    puVar6[5] = (int)((uint)uVar1 << 0x10) >> 0x1f | uVar5;
    *(*(int * PTR32 *)(gen_frame + 0xc)) = *(*(int * PTR32 *)(gen_frame + 0xc)) + 1;
    puVar6[6] = (*(int * PTR32 *)(gen_frame + 0xc));
    puVar6[7] = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
  }
  F_00bb6720(this_00 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc)),puVar6,0);
  if (((piVar8 != ((int *)GEN_TOP(0x0))) && (puVar4 != ((undefined4 *)GEN_TOP(0x0)))) &&
     (*piVar8 = *piVar8 - 1, *piVar8 == 0)) {
    F_00406ad0(piVar8);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
  }
  F_00bb1800(&REFG(undefined4, 0x14c5960) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 0;
}

/* ref: FUN_00baa590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baa590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbaa590u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00ba9ed0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,param_2,param_3);
    return uVar1;
  }
  return 0xfffff000;
}

/* ref: FUN_00baa5b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baa5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbaa5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00ba9f40(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,param_2,param_3);
    return uVar1;
  }
  return 0xfffff000;
}

/* ref: FUN_00baa5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baa5d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbaa5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x98)));
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 2: ;
    if (param_2 != '\0') {
      uVar3 = F_00ba9fb0(param_1 GEN_EDX_FWD);
      return uVar3;
    }
    break;
  case 3: ;
    if ((param_3 != '\0') || (param_4 != '\0')) {
      F_00ba7ea0(param_1 GEN_EDX_ARG);
      return 0;
    }
    break;
  case 4: ;
    if (param_2 != '\0') {
      F_00baa0d0(param_1 GEN_EDX_ARG);
      return 0;
    }
    break;
  case 5: ;
    if (param_2 != '\0') {
      F_00baa170(param_1 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_00baa650 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00baa650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaa650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(undefined4 * PTR32 *)this != ((undefined4 *)GEN_TOP(0x0))) &&
     (this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)this)), uVar1 = 0, this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00ba98a0(this_00 GEN_EDX_FWD);
  }
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_00c085d0();
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00baa680 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00baa680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbaa680u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  short sVar1;
  undefined * this_00;
  byte bVar2;
  short sVar3;
  ushort * puVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  __time64_t _Var8;
  ulonglong uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  if (*(int *)this != 1) {
    return 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_3;
  _Var8 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)this + 0x20))) = (int)_Var8;
  uVar9 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x28))) = uVar9;
  uVar9 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x30))) = uVar9;
  if (*((char *)GEN_TOP(((int)this + 0x39))) == '\0') {
    ((ushort *)(gen_frame + 0x0))[2] = 0;
    ((ushort *)(gen_frame + 0x0))[3] = 0;
    ((ushort *)(gen_frame + 0x0))[0] = 0;
    ((ushort *)(gen_frame + 0x0))[1] = 0;
    sVar1 = *((short *)GEN_TOP(((int)this + 0x10)));
    ((ushort *)(gen_frame + 0x0))[2] = sVar1;
    sVar3 = sVar1 + 1;
    *((short *)GEN_TOP(((int)this + 0x10))) = sVar3;
    ((ushort *)(gen_frame + 0x0))[3] = sVar3;
    ((ushort *)(gen_frame + 0x0))[0] = 8;
    ((ushort *)(gen_frame + 0x0))[1] = 0;
    puVar4 = ((ushort *)(gen_frame + 0x0));
    uVar5 = 0;
    iVar7 = 4;
    do {
      uVar5 = uVar5 + *puVar4;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
    iVar7 = (uVar5 >> 0x10) + (uVar5 & 0xffff);
    uVar6 = ~((short)((uint)iVar7 >> 0x10) + (short)iVar7);
    ((ushort *)(gen_frame + 0x0))[1] = uVar6;
    ((ushort *)(gen_frame + 0x0))[0] = 8;
    (*(undefined2 *)(gen_frame + 0x18)) = 0;
    F_00ba6740(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1,0);
    _Var8 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((int *)GEN_TOP(((int)this + 0x20))) = (int)_Var8;
    uVar9 = F_00427d90();
    *((ulonglong *)GEN_TOP(((int)this + 0x28))) = uVar9;
    uVar9 = F_00427e30();
    *((ulonglong *)GEN_TOP(((int)this + 0x30))) = uVar9;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar5 = F_00c07d90(this_00 GEN_EDX_ARG,((ushort *)(gen_frame + 0x0)),8,((undefined1 *)(gen_frame + 0x8)),0x10);
      if (0 < (int)uVar5) {
        _Var8 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
        *(__time64_t *)(this_00 + 0x88) = _Var8;
        *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
        *(uint *)(this_00 + 100) = *(int *)(this_00 + 100) + uVar5;
        *(uint *)(this_00 + 0x68) = *(int *)(this_00 + 0x68) + uVar5;
        *(uint *)(this_00 + 0x70) = uVar5;
        F_00ba9670(this_00 GEN_EDX_ARG,(int)_Var8,(int)((ulonglong)_Var8 >> 0x20),uVar5);
      }
      if (uVar5 == 0xffffffff) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 0xc))))(this_00 GEN_EDX_ARG);
      }
      else if (-1 < (int)uVar5) {
        *(undefined4 *)this = 2;
        goto LAB_00baa844;
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 1000;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  else {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x3c))) == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    bVar2 = F_00baa270(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,param_1);
    if (bVar2 != 0) {
      F_004cf9e0(*((undefined4 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,0,0,0,((char *)REFP(0x110465c)));
      *(undefined4 *)this = 2;
      if (*((char *)GEN_TOP(((int)this + 0x38))) == '\0') {
        F_004cf020(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG);
      }
LAB_00baa844: ;
      F_00ba81e0(this GEN_EDX_ARG);
      return 1;
    }
  }
  *(undefined4 *)this = 4;
  return 0;
}

/* ref: FUN_00baa860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baa860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaa860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined4 * puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int * piVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  ((byte *)(gen_frame + 0x0))[8] = 0;
  ((byte *)(gen_frame + 0x0))[9] = 0;
  ((byte *)(gen_frame + 0x0))[10] = 0;
  ((byte *)(gen_frame + 0x0))[0xb] = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  F_00ba9820(this GEN_EDX_FWD,((byte *)(gen_frame + 0x0)));
  ((byte *)(gen_frame + 0x0))[0x14] = ((byte *)(gen_frame + 0x0))[0];
  ((byte *)(gen_frame + 0x0))[0x15] = ((byte *)(gen_frame + 0x0))[1];
  ((byte *)(gen_frame + 0x0))[0x16] = ((byte *)(gen_frame + 0x0))[2];
  ((byte *)(gen_frame + 0x0))[0x17] = ((byte *)(gen_frame + 0x0))[3];
  piVar7 = ((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))));
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))) {
    do {
      iVar4 = *piVar7;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = piVar7;
      if ((iVar4 != 0) && (*((char *)GEN_TOP((iVar4 + 7))) == '\0')) {
        iVar5 = *((int *)GEN_TOP((iVar4 + 8)));
        uVar6 = *((undefined4 *)GEN_TOP((iVar5 + 4)));
        puVar1 = ((undefined4 *)GEN_TOP((iVar5 + 0x98)));
        uVar10 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
        bVar2 = *((byte *)GEN_TOP((iVar4 + 5)));
        bVar3 = *((byte *)GEN_TOP((iVar4 + 4)));
        ((byte *)(gen_frame + 0x0))[0x18] = bVar2;
        ((byte *)(gen_frame + 0x0))[0x10] = bVar3;
        F_00baa5d0(iVar5 GEN_EDX_ARG,bVar3,bVar2,*((undefined1 *)GEN_TOP((iVar4 + 6))));
        switch((unsigned int)(uintptr_t)(uVar10)) {
        case 2: ;
          if (bVar3 != 0) {
            uVar10 = 0;
LAB_00baa8f3: ;
            F_00c0fa30((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,uVar6,uVar10);
          }
          break;
        case 3: ;
          if (((byte *)(gen_frame + 0x0))[0x18] != 0) {
            uVar10 = 1;
            goto LAB_00baa8f3;
          }
          break;
        case 4: ;
        case 5: ;
          if (bVar3 != 0) {
            uVar10 = 2;
            goto LAB_00baa8f3;
          }
        }
      }
      piVar7 = ((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) + 4)));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = piVar7;
    } while (piVar7 != ((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)))));
  }
  uVar8 = 0;
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) != 0) {
    uVar9 = F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),((int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))) >> 2) * 4,0x25a);
    uVar8 = (uint)uVar9;
  }
  return uVar8;
}

/* ref: FUN_00baa950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baa950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaa950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * this_00;
  uint uVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x44)));
  this_00 = ((int *)GEN_TOP(((int)this + 0x44)));
  if (iVar2 == *((int *)GEN_TOP(((int)this + 0x48)))) {
    return 0;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0xfffff000;
  }
  else {
    uVar1 = F_00ba9ed0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,iVar2,*((int *)GEN_TOP(((int)this + 0x48))) - iVar2,
                         (int)this + 0x54);
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x48))) - *this_00;
  if ((int)uVar1 < iVar2) {
    if (0 < (int)uVar1) {
      iVar2 = iVar2 - uVar1;
      F_00c46e20(*this_00,*this_00 + uVar1,iVar2);
      F_00bb6510(this_00 GEN_EDX_ARG,iVar2);
      return 0;
    }
  }
  else {
    iVar2 = *this_00;
    if (iVar2 != *((int *)GEN_TOP(((int)this + 0x48)))) {
      F_00c46e20(iVar2,*((int *)GEN_TOP(((int)this + 0x48))),0);
      *((int *)GEN_TOP(((int)this + 0x48))) = iVar2;
    }
  }
  return uVar1;
}

/* ref: FUN_00baa9f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00baa9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaa9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c0fb00(this GEN_EDX_FWD);
  if (uVar1 == 0) {
    F_00ba88f0(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
    return 0;
  }
  if ((int)uVar1 < 0) {
    uVar1 = F_00c0faf0();
    if (uVar1 != 0) {
      F_00ba9930(this GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
    return 0xffffffff;
  }
  F_00baa860(this GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00baaa50 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00baaa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaaa50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x580, 0, 4);
  undefined2 uVar1;
  int iVar2;
  undefined * this_00;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  __time64_t _Var6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x578)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x57c));
  if ((*((int *)GEN_TOP(((int)this + 0x44))) == *((int *)GEN_TOP(((int)this + 0x48)))) ||
     (uVar4 = F_00baa950(this GEN_EDX_FWD), 0 < (int)uVar4)) {
    iVar2 = *((int *)GEN_TOP((param_1 + 4)));
    ((undefined1 *)(gen_frame + 0x0))[0] = *((undefined1 *)GEN_TOP((iVar2 + 0x40)));
    ((undefined1 *)(gen_frame + 0x0))[1] = *((undefined1 *)GEN_TOP((iVar2 + 0x41)));
    ((undefined1 *)(gen_frame + 0x0))[2] = *((undefined1 *)GEN_TOP((iVar2 + 0x42)));
    ((undefined1 *)(gen_frame + 0x0))[3] = *((undefined1 *)GEN_TOP((iVar2 + 0x45)));
    (*(undefined1 *)(gen_frame + 0x4)) = *((undefined1 *)GEN_TOP((iVar2 + 0x44)));
    (*(undefined1 *)(gen_frame + 0x5)) = *((undefined1 *)GEN_TOP((iVar2 + 0x47)));
    (*(undefined1 *)(gen_frame + 0x6)) = *((undefined1 *)GEN_TOP((iVar2 + 0x46)));
    if (*((short *)GEN_TOP((iVar2 + 0x46))) != 0) {
      F_00c46aa0(((undefined1 *)(gen_frame + 0x7)),iVar2 + 0x48,(uint)*((ushort *)GEN_TOP((iVar2 + 0x46))));
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar5 = 0xfffff000;
    }
    else {
      uVar5 = F_00c07d90(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x46))) + 7,
                         *((int *)GEN_TOP((param_1 + 4))),0x10);
      if (0 < (int)uVar5) {
        _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
        *(__time64_t *)(this_00 + 0x88) = _Var6;
        *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
        *(uint *)(this_00 + 100) = *(int *)(this_00 + 100) + uVar5;
        *(uint *)(this_00 + 0x68) = *(int *)(this_00 + 0x68) + uVar5;
        *(uint *)(this_00 + 0x70) = uVar5;
        F_00ba9670(this_00 GEN_EDX_ARG,(int)_Var6,(int)((ulonglong)_Var6 >> 0x20),uVar5);
      }
      if (uVar5 == 0xffffffff) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 0xc))))(this_00 GEN_EDX_ARG);
      }
    }
    uVar4 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x46)));
    if ((int)uVar5 < (int)(uVar4 + 7)) {
      if ((int)uVar5 < 1) {
        return uVar5;
      }
      iVar2 = (uVar4 - uVar5) + 7;
      F_00bb6510(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,iVar2);
      F_00c46aa0(*((undefined4 *)GEN_TOP(((int)this + 0x44))),((undefined1 *)(gen_frame + 0x0)) + uVar5,iVar2);
      puVar3 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)));
      uVar1 = *(undefined2 *)(puVar3 + 4);
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *puVar3;
      *((undefined4 *)GEN_TOP(((int)this + 0x58))) = puVar3[1];
      *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = puVar3[2];
      *((undefined4 *)GEN_TOP(((int)this + 0x60))) = puVar3[3];
      *((undefined2 *)GEN_TOP(((int)this + 100))) = uVar1;
      uVar4 = 0;
    }
  }
  return uVar4;
}

/* ref: FUN_00baac00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baac00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaac00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  
  uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x41)));
  if (*((int *)GEN_TOP(((int)this + uVar3 * 8 + 0x2f0))) == 0) {
    F_00bb3590(((undefined *)GEN_TOP(((int)this + uVar3 * 8 + 0x2ec))) GEN_EDX_FWD,param_1);
    iVar2 = *((int *)GEN_TOP((param_1 + 4)));
    if (*((char *)GEN_TOP((iVar2 + 0x40))) == '\0') {
      *((undefined4 *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP((iVar2 + 0x41))) * 4 + 0xcf0))) = 500;
    }
    else {
      *((undefined4 *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP((iVar2 + 0x41))) * 4 + 0xcf0))) = 200;
    }
  }
  else if (*((char *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x40))) == '\0') {
    *((undefined4 *)GEN_TOP(((int)this + uVar3 * 4 + 0xcf0))) = 500;
  }
  else {
    *((int *)GEN_TOP(((int)this + uVar3 * 4 + 0xcf0))) = *((int *)GEN_TOP(((int)this + uVar3 * 4 + 0xcf0))) * 2;
  }
  *((undefined4 *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x41))) * 4 + 0xdf0))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x41))) * 0x20 + 0x4f0 + (int)this)));
  _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *puVar1 = (int)_Var4;
  uVar5 = F_00427d90();
  *(ulonglong *)(puVar1 + 2) = uVar5;
  uVar5 = F_00427e30();
  *(ulonglong *)(puVar1 + 4) = uVar5;
  *(undefined1 *)(puVar1 + 6) = 1;
  *((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x42))) = *((char *)GEN_TOP(((int)this + 0xef8))) - 1U & 0x3f;
  *((undefined1 *)GEN_TOP(((int)this + 0xf18))) = 0;
  uVar3 = F_00baaa50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x74))) GEN_EDX_ARG,param_1);
  return uVar3;
}

/* ref: FUN_00baad00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00baad00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaad00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*((int *)GEN_TOP(((int)this + 0xf64))) != 0) && (*((int *)GEN_TOP(((int)this + 0xef4))) < 0x20)) {
    iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0xf60)));
    **((int * PTR32 *)GEN_TOP((iVar1 + 8))) = **((int * PTR32 *)GEN_TOP((iVar1 + 8))) + 1;
    iVar2 = *((int *)GEN_TOP((iVar1 + 0xc)));
    uVar3 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xf60)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = *((int * PTR32 *)GEN_TOP((iVar1 + 8)));
    (*(int *)(gen_frame + 0x4)) = iVar2;
    F_00bb6590(((undefined4 *)GEN_TOP(((int)this + 0xf60))) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x8)),uVar3);
    *((undefined1 *)GEN_TOP((iVar2 + 0x41))) = *((undefined1 *)GEN_TOP(((int)this + 0xef0)));
    F_00baac00(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
    iVar1 = (*(int *)(gen_frame + 0x4));
    *((int *)GEN_TOP(((int)this + 0xef4))) = *((int *)GEN_TOP(((int)this + 0xef4))) + 1;
    *((byte *)GEN_TOP(((int)this + 0xef0))) = *((char *)GEN_TOP(((int)this + 0xef0))) + 1U & 0x3f;
    if (((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) && (((*(int *)(gen_frame + 0x4)) != 0 && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)))
       ) {
      F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
      F_00406ad0(iVar1);
    }
  }
  return;
}

/* ref: FUN_00baadb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baadb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaadb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x44)));
  if (iVar1 != 0) {
    F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 0x4c))) - iVar1,0x25c);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  F_00bb6a20(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x34))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x34))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x34))),0x28,0x25c);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x2c))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x28))));
      puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2c)));
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  }
  uVar4 = F_00ba85e0(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00baae50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baae50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbaae50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  undefined4 * puVar8;
  int * piVar9;
  uint uVar10;
  int iVar11;
  
  puVar8 = ((undefined4 *)GEN_TOP(F_00406b90(0x5ba,0,0)));
  if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  *(undefined2 *)(puVar8 + 4) = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  piVar9 = ((int *)GEN_TOP(F_00406b90(4,0,0)));
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  }
  else {
    *piVar9 = 1;
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar9;
  }
  uVar3 = *((undefined2 *)GEN_TOP(((int)param_1 + 0x94)));
  *puVar8 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x84)));
  puVar8[1] = *((undefined4 *)GEN_TOP(((int)param_1 + 0x88)));
  puVar8[2] = *((undefined4 *)GEN_TOP(((int)param_1 + 0x8c)));
  puVar8[3] = *((undefined4 *)GEN_TOP(((int)param_1 + 0x90)));
  *(undefined2 *)(puVar8 + 4) = uVar3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar8;
  *(char *)(puVar8 + 0x10) = (char)param_2;
  cVar6 = param_3;
  if (param_3 == -1) {
    cVar6 = *((char *)GEN_TOP(((int)param_1 + 0xef0)));
  }
  *((char *)GEN_TOP(((int)puVar8 + 0x41))) = cVar6;
  *(undefined2 *)(puVar8 + 0x11) = *((undefined2 *)GEN_TOP(((int)param_1 + 0xc6)));
  *((short *)GEN_TOP(((int)puVar8 + 0x46))) = (short)param_5;
  if ((char)param_2 == '\x03') {
    *((undefined1 *)GEN_TOP(((int)param_1 + 0xefa))) = 1;
LAB_00baaf38: ;
    if (*((char *)GEN_TOP(((int)param_1 + 0xefc))) != '\0') {
      bVar7 = *((byte *)GEN_TOP(((int)param_1 + 0xef8)));
      iVar11 = param_5;
      while( true ) {
        bVar1 = *((byte *)GEN_TOP(((int)param_1 + 0xef8)));
        bVar2 = *((byte *)GEN_TOP(((int)param_1 + 0xef9)));
        if ((((bVar7 < bVar1) || (bVar2 <= bVar7)) && ((bVar1 <= bVar2 || (bVar7 < bVar1)))) &&
           ((bVar2 <= bVar7 || (bVar1 <= bVar2)))) break;
        if (*((int *)GEN_TOP(((int)param_1 + (uint)bVar7 * 8 + 0xf0))) != 0) {
          *((byte *)GEN_TOP(((int)puVar8 + iVar11 + 0x48))) = bVar7;
          iVar11 = iVar11 + 1;
        }
        bVar7 = bVar7 + 1 & 0x3f;
      }
      *((short *)GEN_TOP(((int)puVar8 + 0x46))) = (short)iVar11;
    }
    if ((char)param_2 == '\x02') goto LAB_00bab0aa;
  }
  else {
    if ((char)param_2 == '\x04') {
      F_00c46aa0(puVar8 + 0x12,param_4,param_5);
      goto LAB_00baafb2;
    }
    if ((char)param_2 == '\x02') goto LAB_00baaf38;
  }
  if ((char)param_2 != '\x03') {
LAB_00baafb2: ;
    if ((*((int *)GEN_TOP(((int)param_1 + 0xef4))) < 0x20) && (*((int *)GEN_TOP(((int)param_1 + 0xf64))) == 0)) {
      uVar10 = F_00baac00(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
      puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      *((int *)GEN_TOP(((int)param_1 + 0xef4))) = *((int *)GEN_TOP(((int)param_1 + 0xef4))) + 1;
      *((byte *)GEN_TOP(((int)param_1 + 0xef0))) = *((char *)GEN_TOP(((int)param_1 + 0xef0))) + 1U & 0x3f;
      if (((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) &&
         (((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0)) && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)))) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
        F_00406ad0(puVar8);
      }
      return uVar10;
    }
    iVar11 = *((int *)GEN_TOP(((int)param_1 + 0xf60)));
    iVar5 = *((int *)GEN_TOP((iVar11 + 4)));
    piVar9 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
    *piVar9 = iVar11;
    piVar9[1] = iVar5;
    if (piVar9 + 2 != ((int *)GEN_TOP(0x0))) {
      *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + 1;
      piVar9[2] = (int)(*(int * PTR32 *)(gen_frame + 0x0));
      piVar9[3] = (int)puVar8;
    }
    if (*((int *)GEN_TOP(((int)param_1 + 0xf64))) == -2) {
                    
      F_00c4579a(((char *)REFP(0x108b258)));
    }
    *((int *)GEN_TOP(((int)param_1 + 0xf64))) = *((int *)GEN_TOP(((int)param_1 + 0xf64))) + 1;
    *((int * PTR32 *)GEN_TOP((iVar11 + 4))) = piVar9;
    *((int * PTR32 *)GEN_TOP(piVar9[1])) = piVar9;
    uVar4 = *((ushort *)GEN_TOP(((int)puVar8 + 0x46)));
    if (((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
      F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
      F_00406ad0(puVar8);
    }
    return (uint)uVar4;
  }
LAB_00bab0aa: ;
  *((byte *)GEN_TOP(((int)puVar8 + 0x42))) = *((char *)GEN_TOP(((int)param_1 + 0xef8))) - 1U & 0x3f;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xf18))) = 0;
  F_00baaa50(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x74))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
  puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
  if ((((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0)))) &&
     (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
    F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
    F_00406ad0(puVar8);
  }
  return 0;
}

/* ref: FUN_00bab110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bab110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbab110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX = 0;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  bVar3 = *((byte *)GEN_TOP(((int)this + 0xef1)));
  while( true ) {
    bVar1 = *((byte *)GEN_TOP(((int)this + 0xef1)));
    uVar5 = CONCAT31((int3)(in_EAX >> 8),bVar1);
    bVar2 = *((byte *)GEN_TOP(((int)this + 0xef0)));
    if ((((bVar3 < bVar1) || (bVar2 <= bVar3)) && ((bVar1 <= bVar2 || (bVar3 < bVar1)))) &&
       ((bVar2 <= bVar3 || (bVar1 <= bVar2)))) break;
    uVar5 = (uint)bVar3;
    if (*((char *)GEN_TOP((uVar5 * 0x20 + 0x508 + (int)this))) == '\0') {
      iVar4 = 0;
    }
    else {
      uVar6 = F_00427d90();
      iVar4 = (int)uVar6 - *((int *)GEN_TOP(((int)this + uVar5 * 0x20 + 0x4f8)));
    }
    if (*((int *)GEN_TOP(((int)this + uVar5 * 4 + 0xcf0))) < iVar4) {
      if ((*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + uVar5 * 8 + 0x2f0))) + 0x40))) == '\0') &&
         (*((int *)GEN_TOP(((int)this + 0xcc))) = *((int *)GEN_TOP(((int)this + 0xcc))) + 1,
         10 < *((int *)GEN_TOP(((int)this + 0xcc))))) {
        *((undefined4 *)GEN_TOP(((int)this + 200))) = 0x3e9;
        if ((*((char *)GEN_TOP(((int)this + 0xc4))) != '\0') &&
           ((*((int *)GEN_TOP(((int)this + 0xd0))) != 0 && (*((gen_code32 *)GEN_TOP(((int)this + 0xc))) != ((code *)GEN_TOP(0x0)))))) {
          ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0xc))))(*((int *)GEN_TOP(((int)this + 0xd0))),0x3e9);
        }
        *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
        return uVar5;
      }
      F_00baac00(this GEN_EDX_ARG,(int)this + uVar5 * 8 + 0x2ec);
    }
    in_EAX = (byte)(bVar3 + 1) & 0x8000003f;
    bVar3 = (byte)in_EAX;
  }
  if (*((char *)GEN_TOP(((int)this + 0xf18))) != '\0') {
    uVar6 = F_00427d90();
    uVar5 = (int)uVar6 - *((int *)GEN_TOP(((int)this + 0xf08)));
    if (100 < (int)uVar5) {
      uVar5 = F_00baae50(this GEN_EDX_ARG,2,0xff,0,0);
    }
  }
  return uVar5;
}

/* ref: Client::Network::Socket::RUDPSocket::vf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bab250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbab250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  __time64_t _Var5;
  
  iVar4 = param_1;
  iVar2 = param_2;
  if (*(int *)(this + 0x7c) != 5) {
    return 0xffffffff;
  }
  for (; 0 < iVar2; iVar2 = iVar2 - uVar1) {
    iVar3 = iVar2;
    if (0x571 < iVar2) {
      iVar3 = 0x571;
    }
    uVar1 = F_00baae50(this GEN_EDX_FWD,4,0xff,iVar4,iVar3);
    if (((int)uVar1 < 0) || (iVar4 = iVar4 + uVar1, (int)uVar1 < iVar3)) break;
  }
  uVar1 = iVar4 - param_1;
  if (0 < (int)uVar1) {
    _Var5 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(__time64_t *)(this + 0x68) = _Var5;
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
    *(uint *)(this + 0x44) = *(int *)(this + 0x44) + uVar1;
    *(uint *)(this + 0x48) = *(int *)(this + 0x48) + uVar1;
    *(uint *)(this + 0x50) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00bab2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bab2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbab2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 0x7c))) - 5;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 8;
    F_00baae50(this GEN_EDX_FWD,2,0xff,0,0);
    if (*((char *)GEN_TOP(((int)this + 0xc4))) != '\0') {
      if ((*((int *)GEN_TOP(((int)this + 0xd0))) != 0) && (*((gen_code32 *)GEN_TOP(((int)this + 0x14))) != ((code *)GEN_TOP(0x0)))) {
        ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x14))))(*((int *)GEN_TOP(((int)this + 0xd0))),*((int *)GEN_TOP((param_1 + 4))) + 0x48,0);
      }
      *((undefined1 *)GEN_TOP(((int)this + 0xefb))) = 1;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    return uVar1;
  case 1: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 9;
    break;
  case 2: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0xb;
    _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((int *)GEN_TOP(((int)this + 0xf20))) = (int)_Var2;
    uVar3 = F_00427d90();
    *((ulonglong *)GEN_TOP(((int)this + 0xf28))) = uVar3;
    uVar3 = F_00427e30();
    *((ulonglong *)GEN_TOP(((int)this + 0xf30))) = uVar3;
    *((undefined1 *)GEN_TOP(((int)this + 0xf38))) = 1;
    break;
  default: ;
    goto switchD_00bab2f5_caseD_8;
  case 6: ;
    break;
  }
  uVar1 = F_00baae50(this GEN_EDX_ARG,2,0xff,0,0);
switchD_00bab2f5_caseD_8: ;
  return uVar1;
}

/* ref: FUN_00bab3d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bab3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbab3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined2 uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = ((int *)GEN_TOP(F_00406b90(0x5ba,0,0)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *(undefined2 *)(piVar3 + 4) = 0;
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar4 = ((int *)GEN_TOP(F_00406b90(4,0,0)));
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    }
    else {
      *piVar4 = 1;
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar4;
    }
    uVar1 = *((undefined2 *)GEN_TOP(((int)this + 0x94)));
    *piVar3 = *((int *)GEN_TOP(((int)this + 0x84)));
    piVar3[1] = *((int *)GEN_TOP(((int)this + 0x88)));
    piVar3[2] = *((int *)GEN_TOP(((int)this + 0x8c)));
    piVar3[3] = *((int *)GEN_TOP(((int)this + 0x90)));
    *(undefined2 *)(piVar3 + 4) = uVar1;
    *(undefined1 *)(piVar3 + 0x10) = 1;
    *((undefined1 *)GEN_TOP(((int)piVar3 + 0x41))) = *((undefined1 *)GEN_TOP(((int)this + 0xef0)));
    *(undefined2 *)(piVar3 + 0x11) = *((undefined2 *)GEN_TOP(((int)this + 0xc6)));
    *((undefined2 *)GEN_TOP(((int)piVar3 + 0x46))) = 0;
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar3;
    if ((*((int *)GEN_TOP(((int)this + 0xef4))) < 0x20) && (*((int *)GEN_TOP(((int)this + 0xf64))) == 0)) {
      F_00baac00(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
      *((int *)GEN_TOP(((int)this + 0xef4))) = *((int *)GEN_TOP(((int)this + 0xef4))) + 1;
      *((byte *)GEN_TOP(((int)this + 0xef0))) = *((char *)GEN_TOP(((int)this + 0xef0))) + 1U & 0x3f;
      piVar3 = (*(int * PTR32 *)(gen_frame + 0x4));
      piVar4 = (*(int * PTR32 *)(gen_frame + 0x4));
      if ((*(int * PTR32 *)(gen_frame + 0x0)) == ((int *)GEN_TOP(0x0))) goto LAB_00bab546;
    }
    else {
      iVar2 = *((int *)GEN_TOP(((int)this + 0xf60)));
      (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP((iVar2 + 4)));
      piVar4 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
      piVar4[1] = (*(int *)(gen_frame + 0x8));
      *piVar4 = iVar2;
      if (piVar4 + 2 != ((int *)GEN_TOP(0x0))) {
        *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + 1;
        piVar4[2] = (int)(*(int * PTR32 *)(gen_frame + 0x0));
        piVar4[3] = (int)piVar3;
      }
      if (*((int *)GEN_TOP(((int)this + 0xf64))) == -2) {
                    
        F_00c4579a(((char *)REFP(0x108b258)));
      }
      *((int *)GEN_TOP(((int)this + 0xf64))) = *((int *)GEN_TOP(((int)this + 0xf64))) + 1;
      *((int * PTR32 *)GEN_TOP((iVar2 + 4))) = piVar4;
      *((int * PTR32 *)GEN_TOP(piVar4[1])) = piVar4;
      piVar4 = (*(int * PTR32 *)(gen_frame + 0x0));
    }
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
      F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
      F_00406ad0(piVar3);
    }
  }
LAB_00bab546: ;
  F_00baad00(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00bab560 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bab560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbab560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined2 uVar1;
  undefined4 * puVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x7c))) == 4) {
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 5;
    F_00baa440(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x74))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0xd0))) + 0x10,
                 *((undefined4 *)GEN_TOP((param_1 + 4))));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)));
    uVar1 = *(undefined2 *)(puVar2 + 4);
    *((undefined4 *)GEN_TOP(((int)this + 0x84))) = *puVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x88))) = puVar2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = puVar2[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x90))) = puVar2[3];
    *((undefined2 *)GEN_TOP(((int)this + 0x94))) = uVar1;
    F_00baae50(this GEN_EDX_ARG,2,0xff,0,0);
    if (((*((char *)GEN_TOP(((int)this + 0xc4))) != '\0') && (*((int *)GEN_TOP(((int)this + 0xd0))) != 0)) &&
       (*((gen_code32 *)GEN_TOP(((int)this + 8))) != ((code *)GEN_TOP(0x0)))) {
      ((code *)*((gen_code32 *)GEN_TOP(((int)this + 8))))(*((int *)GEN_TOP(((int)this + 0xd0))),0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  }
  return;
}

/* ref: FUN_00bab610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bab610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbab610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * this_00;
  int * piVar5;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x78;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x2d;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
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
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x11047ec));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xc6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xd0))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0x1000;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  uVar2 = F_004296a0(0x14,0,0x25c);
  *((uint *)GEN_TOP(((int)this + 0xe0))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe0))) + 4))) = *((int *)GEN_TOP(((int)this + 0xe0)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe0))) + 8))) = *((int *)GEN_TOP(((int)this + 0xe0)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe0))) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe0))) + 0x11))) = 1;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0xec)));
  iVar4 = 0x3f;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x2ec)));
  iVar4 = 0x3f;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x4f0)));
  param_1 = ((undefined4 *)GEN_TOP(0x3f));
  do {
    F_00a1af40(this_00 GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP(((int)this_00 + 0x18))) = 0;
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x20)));
    param_1 = ((undefined4 *)GEN_TOP(((int)param_1 - 1)));
  } while (-1 < (int)param_1);
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0xf00))) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0xf18))) = 0;
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0xf20))) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0xf38))) = 0;
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0xf40))) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0xf58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf64))) = 0;
  uVar2 = F_004296a0(0x10,0,0x25a);
  *((uint *)GEN_TOP(((int)this + 0xf60))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf60))) + 4))) = *((int *)GEN_TOP(((int)this + 0xf60)));
  *((undefined4 *)GEN_TOP(((int)this + 0xf70))) = 0;
  uVar2 = F_004296a0(0x10,0,0x25a);
  *((uint *)GEN_TOP(((int)this + 0xf6c))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf6c))) + 4))) = *((int *)GEN_TOP(((int)this + 0xf6c)));
  *((undefined4 *)GEN_TOP(((int)this + 0xf7c))) = 0;
  uVar2 = F_004296a0(0x10,0,0x25a);
  *((uint *)GEN_TOP(((int)this + 0xf78))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  param_1 = ((undefined4 *)GEN_TOP(((int)this + 0xdf0)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf78))) + 4))) = *((int *)GEN_TOP(((int)this + 0xf78)));
  piVar5 = ((int *)GEN_TOP(((int)this + 0x2f0)));
  local_8 = 0x40;
  do {
    piVar1 = ((int *)GEN_TOP(piVar5[-0x81]));
    if ((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar5[-0x80] != 0)) {
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        F_00406ad0(piVar5[-0x81]);
        if (piVar5[-0x80] != 0) {
          F_00406ad0(piVar5[-0x80]);
        }
      }
      piVar5[-0x81] = 0;
      piVar5[-0x80] = 0;
    }
    piVar5[-0x81] = 0;
    piVar5[-0x80] = 0;
    piVar1 = ((int *)GEN_TOP(piVar5[-1]));
    if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*piVar5 != 0)) {
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        F_00406ad0(piVar5[-1]);
        if (*piVar5 != 0) {
          F_00406ad0(*piVar5);
        }
      }
      piVar5[-1] = 0;
      *piVar5 = 0;
    }
    piVar5[-1] = 0;
    *piVar5 = 0;
    *param_1 = 0;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 2;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  *((undefined2 *)GEN_TOP(((int)this + 0xef0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xef4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xefc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xef8))) = 0x2000;
  return (uint)this;
}

/* ref: FUN_00bab900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bab900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbab900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * this_00;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x11047ec));
  F_00bb6620(((undefined *)GEN_TOP(((int)this + 0xf78))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0xf78))),0x10,0x25a);
  F_00bb6620(((undefined *)GEN_TOP(((int)this + 0xf6c))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0xf6c))),0x10,0x25a);
  F_00bb6620(((undefined *)GEN_TOP(((int)this + 0xf60))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0xf60))),0x10,0x25a);
  iVar2 = 0x3f;
  puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x4ec)));
  do {
    piVar1 = ((int *)GEN_TOP(puVar4[-2]));
    puVar3 = puVar4 - 2;
    if ((piVar1 != ((int *)GEN_TOP(0x0))) && (puVar4[-1] != 0)) {
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        F_00406ad0(*puVar3);
        if (puVar4[-1] != 0) {
          F_00406ad0(puVar4[-1]);
        }
      }
      *puVar3 = 0;
      puVar4[-1] = 0;
    }
    iVar2 = iVar2 - 1;
    puVar4 = puVar3;
  } while (-1 < iVar2);
  iVar2 = 0x3f;
  puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x2ec)));
  do {
    piVar1 = ((int *)GEN_TOP(puVar4[-2]));
    puVar3 = puVar4 - 2;
    if ((piVar1 != ((int *)GEN_TOP(0x0))) && (puVar4[-1] != 0)) {
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        F_00406ad0(*puVar3);
        if (puVar4[-1] != 0) {
          F_00406ad0(puVar4[-1]);
        }
      }
      *puVar3 = 0;
      puVar4[-1] = 0;
    }
    iVar2 = iVar2 - 1;
    puVar4 = puVar3;
  } while (-1 < iVar2);
  F_00bb4740(((undefined *)GEN_TOP(((int)this + 0xdc))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xe0))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xe0))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0xe0))),0x14,0x25c);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x74))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      piVar1 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x70))))));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x74)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        piVar1 = ((int *)GEN_TOP(F_00406ad0(this_00)));
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00baba80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00baba80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaba80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 4))))) {
  case 0: ;
  case 1: ;
  case 4: ;
    pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0xe8,0,0)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      uVar4 = 0;
    }
    else {
      uVar4 = F_00ba9b90(pvVar3 GEN_EDX_ARG,this);
    }
    F_00bb1550(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar4);
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
        if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        }
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
    if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1c))) != 0)) {
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x18))));
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
        if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        }
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
    goto switchD_00baba92_default;
  case 2: ;
    F_00bb1550(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0);
    pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0xfa8,0,0)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      F_00bb16a0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0);
      uVar4 = 0;
    }
    else {
      uVar4 = F_00bab610(pvVar3 GEN_EDX_ARG,this);
      F_00bb16a0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar4);
      uVar4 = 0;
    }
    break;
  case 3: ;
    F_00bb1550(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0);
    F_00bb16a0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0);
    pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x200,0,0)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      uVar4 = 0;
    }
    else {
      uVar4 = F_00c08ae0(pvVar3 GEN_EDX_ARG,this,0,0);
    }
    break;
  default: ;
    goto switchD_00baba92_default;
  }
  F_00bb1770(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,uVar4);
switchD_00baba92_default: ;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))));
    return uVar4;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
      return 0xffffffff;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))));
    return uVar4;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar4;
}

/* ref: FUN_00babc10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00babc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbabc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    if (*((int *)GEN_TOP((param_1 + 0xc))) == 0) {
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xe8,0,0)));
      if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
        uVar3 = 0;
      }
      else {
        uVar3 = F_00ba9b90(pvVar2 GEN_EDX_ARG,param_1);
      }
      F_00bb1550(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,uVar3);
    }
    uVar3 = F_00ba8ea0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0xc))));
    return uVar3;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    if (*((int *)GEN_TOP((param_1 + 0x14))) == 0) {
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xfa8,0,0)));
      if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
        uVar3 = 0;
      }
      else {
        uVar3 = F_00bab610(pvVar2 GEN_EDX_ARG,param_1);
      }
      F_00bb16a0(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,uVar3);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x14))) + 0x20))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1 + 0x10);
    return uVar3;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,param_1 + 0x18,param_1);
    return uVar3;
  }
  return 0xffffffff;
}

/* ref: FUN_00babce0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00babce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbabce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if ((0 < *(int *)this) && (*(int *)this != 4)) {
    return 1;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x38))) = *param_1;
  if (*((char *)GEN_TOP(((int)this + 0x39))) == '\0') {
    pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x40)));
    uVar3 = F_00baba80(pvVar2 GEN_EDX_FWD);
    if ((int)uVar3 < 0) {
      return 0;
    }
    gen_imp_InterlockedExchange(((LONG *)GEN_TOP(((int)this + 100))),(LONG)this);
    if (*((char *)GEN_TOP(((int)this + 0x38))) != '\0') {
      if (REFG(int, 0x14c595c) == 0) {
        F_00ba7c10();
      }
      F_00ba9ae0(pvVar2 GEN_EDX_ARG,(int)this + 0x68);
    }
    if ((*((int *)GEN_TOP(((int)this + 0x3c))) != 0) &&
       (*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 100))) = pvVar2, *((char *)GEN_TOP(((int)this + 0x38))) != '\0'))
    {
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 0x68))) = (int)this + 0x68;
    }
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x3c)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
    }
    pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
    }
    else {
      uVar3 = F_00ba89f0(pvVar2 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0x3c))) = uVar3;
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined4 *)this = 1;
  return 1;
}

/* ref: FUN_00babdc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00babdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbabdc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  uVar3 = F_004296a0(0x28,0,0x25c);
  *((uint *)GEN_TOP(((int)this + 0x34))) = uVar3;
  *((uint *)GEN_TOP(uVar3)) = uVar3;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4))) = *((int *)GEN_TOP(((int)this + 0x34)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 8))) = *((int *)GEN_TOP(((int)this + 0x34)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 0x21))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  gen_imp_InterlockedExchange(((LONG *)GEN_TOP(((int)this + 0x24))),(LONG)this);
  F_00baba80(this GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x38))) = ((code *)REFP(0xba99c0));
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar4 == 0) {
    iVar4 = *((int *)GEN_TOP(((int)this + 0x14)));
    if ((iVar4 != 0) || (iVar4 = *((int *)GEN_TOP(((int)this + 0x1c))), iVar4 != 0)) {
      *((undefined4 *)GEN_TOP((iVar4 + 0x30))) = 0xffffffff;
      *((undefined4 *)GEN_TOP((iVar4 + 0x28))) = 0;
    }
  }
  else {
    *((undefined4 *)GEN_TOP((iVar4 + 0x48))) = 0;
    *((undefined4 *)GEN_TOP((iVar4 + 0x50))) = 0xffffffff;
  }
  iVar4 = REFG(int, 0x14c5958);
  if (param_2 != 0) {
    iVar4 = param_2;
  }
  F_00ba9ae0(this GEN_EDX_ARG,iVar4);
  F_00ba7510(this GEN_EDX_ARG,0,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x2c))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x28))));
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2c)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  return (uint)this;
}

/* ref: FUN_00babf00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00babf00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbabf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  int * piVar6;
  
  F_00bb5ac0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1);
  if ((param_3 != 0) &&
     (piVar6 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4))))), piVar6 != *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    do {
      piVar1 = ((int *)GEN_TOP(*param_2));
      if ((piVar1 != ((int *)GEN_TOP(0x0))) && (param_2[1] != 0)) {
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          F_00406ad0(*param_2);
          pvVar4 = ((undefined *)GEN_TOP(param_2[1]));
          if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
            F_00baadb0(pvVar4 GEN_EDX_ARG);
            F_00406ad0(pvVar4);
          }
        }
        *param_2 = 0;
        param_2[1] = 0;
      }
      *((int *)GEN_TOP(piVar6[2])) = *((int *)GEN_TOP(piVar6[2])) + 1;
      *param_2 = piVar6[2];
      pvVar4 = ((undefined *)GEN_TOP(piVar6[3]));
      param_2[1] = (int)pvVar4;
      if (param_3 == *((int *)GEN_TOP(((int)pvVar4 + 0x40)))) {
        uVar5 = F_00baa370(pvVar4 GEN_EDX_ARG,param_1);
        return uVar5;
      }
      piVar6 = ((int *)GEN_TOP(*piVar6));
    } while (piVar6 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 4))))));
  }
  pvVar4 = ((undefined *)GEN_TOP(F_00406b90(0x94,0,0)));
  if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
    uVar5 = 0;
  }
  else {
    uVar5 = F_00babdc0(pvVar4 GEN_EDX_ARG,param_3,*(undefined4 *)this);
  }
  F_00bb6d40(param_2 GEN_EDX_ARG,uVar5);
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *((int *)GEN_TOP((iVar2 + 4)));
  piVar6 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
  piVar6[1] = iVar3;
  *piVar6 = iVar2;
  if (piVar6 + 2 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_2)) = *((int *)GEN_TOP(*param_2)) + 1;
    piVar6[2] = *param_2;
    piVar6[3] = param_2[1];
  }
  if (*((int *)GEN_TOP(((int)this + 8))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar2 + 4))) = piVar6;
  *((int * PTR32 *)GEN_TOP(piVar6[1])) = piVar6;
  uVar5 = F_00baa370(((undefined *)GEN_TOP(param_2[1])) GEN_EDX_ARG,param_1);
  return uVar5;
}

/* ref: FUN_00bac040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bac040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbac040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ba99e0(*((undefined * PTR32 *)GEN_TOP((param_2 + 4))) GEN_EDX_FWD,param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00bb6f50(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_2);
  }
  return uVar2;
}

/* ref: FUN_00bac070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bac070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbac070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  while (iVar1 != 0) {
    iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    **((int * PTR32 *)GEN_TOP((iVar1 + 8))) = **((int * PTR32 *)GEN_TOP((iVar1 + 8))) + 1;
    piVar2 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0xc)));
    piVar4 = *((int * PTR32 *)GEN_TOP((iVar1 + 8)));
    if (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
      *((int *)GEN_TOP(piVar2[1])) = *piVar2;
      *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
      piVar5 = ((int *)GEN_TOP(piVar2[2]));
      if ((piVar5 != ((int *)GEN_TOP(0x0))) && (piVar2[3] != 0)) {
        *piVar5 = *piVar5 - 1;
        if (*piVar5 == 0) {
          F_00406ad0(piVar2[2]);
          puVar6 = ((undefined4 *)GEN_TOP(piVar2[3]));
          if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
          }
        }
        piVar2[2] = 0;
        piVar2[3] = 0;
      }
      F_00429760(piVar2,0x10,0x25a);
      *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) - 1;
    }
    if (((piVar4 != ((int *)GEN_TOP(0x0))) && (puVar3 != ((undefined4 *)GEN_TOP(0x0)))) &&
       (*piVar4 = *piVar4 - 1, *piVar4 == 0)) {
      F_00406ad0(piVar4);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  while (iVar1 != 0) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 8))) + 0xd0)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    }
    piVar2 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x1c)))));
    if (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
      *((int *)GEN_TOP(piVar2[1])) = *piVar2;
      *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
      F_00429760(piVar2,0xc,0x25a);
      *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) - 1;
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  }
  F_00bb43f0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
  F_00bb5d30(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x10))),0x10,0x25a);
  F_00bb7020(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar7 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x10,0x25a);
  return (uint)uVar7;
}

/* ref: FUN_00bac1c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bac1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbac1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  __time64_t _Var2;
  
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x10,0,0x25a);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  uVar1 = F_004296a0(0x10,0,0x25a);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  uVar1 = F_004296a0(0xc,0,0x25a);
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4))) = *((int *)GEN_TOP(((int)this + 0x1c)));
  _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  F_00c4f2cb((int)_Var2);
  return (uint)this;
}

/* ref: FUN_00bac250 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bac250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbac250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00c09a50(pvVar1 GEN_EDX_FWD);
    F_00406ad0(pvVar1);
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00bac070(pvVar1 GEN_EDX_ARG);
    F_00406ad0(pvVar1);
  }
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(*piVar2));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    }
    F_00406ad0(piVar2);
  }
  return;
}

/* ref: FUN_00bac2b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bac2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbac2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    this_00 = ((undefined *)GEN_TOP(F_00406b90(0x28,0,0)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00bac1c0(this_00 GEN_EDX_ARG,this);
      *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
      return uVar1;
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return *((uint *)GEN_TOP(((int)this + 4)));
}

/* ref: FUN_00bac2f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bac2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbac2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((bool *)GEN_TOP(((int)this + 0x39))) = param_1 == 1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 4;
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
  iVar1 = *((int *)GEN_TOP(((int)this + 0x44)));
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x4c))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG,400);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x44)));
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x4c))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2 GEN_EDX_ARG,400);
  }
  return (uint)this;
}

/* ref: FUN_00bac3b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bac3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbac3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  code * pcVar5;
  
  if (*((char *)GEN_TOP(((int)this + 0x38))) != '\0') {
    if ((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))) != ((undefined4 *)GEN_TOP(0x0))) &&
       (pvVar1 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) {
      F_00ba98a0(pvVar1 GEN_EDX_FWD);
    }
    if (*((int *)GEN_TOP(((int)this + 0x70))) != 0) {
      F_00c085d0();
    }
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x4c)));
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x5c)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) goto LAB_00bac407;
      pcVar5 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x10)));
    }
    else {
      pcVar5 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x14)));
    }
  }
  else {
    pcVar5 = *((gen_code32 *)GEN_TOP((*piVar4 + 0xc)));
  }
  (*pcVar5)(piVar4);
LAB_00bac407: ;
  if ((*((char *)GEN_TOP(((int)this + 0x39))) != '\0') &&
     (puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x3c))), puVar2 != ((undefined4 *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x70)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00c09a50(pvVar1 GEN_EDX_ARG);
    F_00406ad0(pvVar1);
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x6c)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00bac070(pvVar1 GEN_EDX_ARG);
    F_00406ad0(pvVar1);
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x68)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
    F_00406ad0(piVar4);
  }
  uVar3 = F_00ba85e0(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::Network::Socket::RUDPSocket::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bac480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbac480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)(this + 0x80) = param_2;
  iVar1 = *(int *)(this + 0xd0);
  *(undefined4 *)(this + 0x78) = 2;
  iVar5 = *((int *)GEN_TOP((iVar1 + 0x20)));
  if (iVar5 == 0) {
    iVar5 = REFG(int, 0x14c5958);
  }
  if (*((int *)GEN_TOP((iVar5 + 4))) == 0) {
    this_00 = ((undefined *)GEN_TOP(F_00406b90(0x28,0,0)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar4 = 0;
    }
    else {
      uVar4 = F_00bac1c0(this_00 GEN_EDX_ARG,iVar5);
    }
    *((uint *)GEN_TOP((iVar5 + 4))) = uVar4;
  }
  F_00babf00(*((undefined * PTR32 *)GEN_TOP((iVar5 + 4))) GEN_EDX_ARG,iVar1 + 0x10,this + 0x70,param_2);
  iVar1 = *(int *)(this + 0x74);
  uVar2 = *(undefined4 *)(this + 0xd4);
  if (*((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    F_00ba8820(*((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc))) GEN_EDX_ARG,uVar2);
    return 0;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x14)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x38))))(piVar3 GEN_EDX_ARG,uVar2);
    return 0;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x1c)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x34))))(piVar3 GEN_EDX_ARG,uVar2);
  }
  return 0;
}

/* ref: FUN_00bac540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bac540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbac540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined2 uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  undefined * this_01;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)));
  uVar1 = *(undefined2 *)(puVar2 + 4);
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = *puVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = puVar2[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = puVar2[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = puVar2[3];
  *((undefined2 *)GEN_TOP(((int)this + 0x94))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 5;
  uVar4 = F_00c4f2dd();
  *((short *)GEN_TOP(((int)this + 0xc6))) = (short)uVar4;
  iVar3 = *((int *)GEN_TOP(((int)this + 0xd0)));
  this_01 = *((undefined * PTR32 *)GEN_TOP((iVar3 + 0x20)));
  if (this_01 == ((undefined *)GEN_TOP(0x0))) {
    this_01 = REFG(void * PTR32, 0x14c5958);
  }
  if (*((int *)GEN_TOP(((int)this_01 + 4))) == 0) {
    this_00 = ((undefined *)GEN_TOP(F_00406b90(0x28,0,0)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar4 = 0;
    }
    else {
      uVar4 = F_00bac1c0(this_00 GEN_EDX_ARG,this_01);
    }
    *((uint *)GEN_TOP(((int)this_01 + 4))) = uVar4;
  }
  F_00babf00(*((undefined * PTR32 *)GEN_TOP(((int)this_01 + 4))) GEN_EDX_ARG,iVar3 + 0x10,(int)this + 0x70,param_2);
  F_00bb5bf0(((undefined *)GEN_TOP(((int)this + 0xf6c))) GEN_EDX_ARG,param_1);
  uVar4 = F_00bad720(this_01 GEN_EDX_ARG);
  return uVar4;
}

/* ref: Client::Network::Socket::RUDPSocket::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bac600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbac600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x74) != 0) {
    iVar1 = *(int *)(this + 0xd0);
    iVar3 = *((int *)GEN_TOP((iVar1 + 0x20)));
    if (iVar3 == 0) {
      iVar3 = REFG(int, 0x14c5958);
    }
    if (*((int *)GEN_TOP((iVar3 + 4))) == 0) {
      this_00 = ((undefined *)GEN_TOP(F_00406b90(0x28,0,0)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00bac1c0(this_00 GEN_EDX_ARG,iVar3);
      }
      *((uint *)GEN_TOP((iVar3 + 4))) = uVar2;
    }
    iVar3 = *((int *)GEN_TOP((iVar3 + 4)));
    uVar2 = F_00ba99e0(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_ARG,iVar1 + 0x10);
    if (uVar2 != 0) {
      F_00bb6f50(((undefined *)GEN_TOP((iVar3 + 4))) GEN_EDX_ARG,this + 0x70);
    }
    *(undefined4 *)(this + 0xd0) = 0;
    return 0;
  }
  *(undefined4 *)(this + 0xd0) = 0;
  return 0;
}

/* ref: FUN_00bac6a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bac6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbac6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  if ((*((int *)GEN_TOP(((int)this + 0xd0))) != 0) && (*((gen_code32 *)GEN_TOP(((int)this + 0x20))) != ((code *)GEN_TOP(0x0)))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x20))))(*((int *)GEN_TOP(((int)this + 0xd0))));
    if ((char)uVar1 != '\0') {
      iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd0))) + 0x20)));
      if (iVar3 == 0) {
        iVar3 = REFG(int, 0x14c5958);
      }
      if (*((int *)GEN_TOP((iVar3 + 4))) == 0) {
        pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x28,0,0)));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          pvVar2 = ((undefined *)GEN_TOP(F_00bac1c0(pvVar2 GEN_EDX_ARG,iVar3)));
          *((undefined * PTR32 *)GEN_TOP((iVar3 + 4))) = pvVar2;
          F_00ba8b20(pvVar2 GEN_EDX_ARG,this);
          return;
        }
        *((undefined4 *)GEN_TOP((iVar3 + 4))) = 0;
      }
      F_00ba8b20(*((undefined * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_ARG,this);
    }
  }
  return;
}

/* ref: FUN_00bac720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bac720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbac720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * PTR32 * ppuVar8;
  undefined4 * puVar9;
  undefined * this_00;
  uint uVar10;
  int * piVar11;
  
  uVar6 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xf70))) != 0) {
    (*(uint *)(gen_frame + 0x10)) = 1;
    do {
      iVar2 = **((int * PTR32 *)GEN_TOP(((int)this + 0xf6c)));
      **((int * PTR32 *)GEN_TOP((iVar2 + 8))) = **((int * PTR32 *)GEN_TOP((iVar2 + 8))) + 1;
      iVar3 = *((int *)GEN_TOP((iVar2 + 0xc)));
      piVar11 = *((int * PTR32 *)GEN_TOP(((int)this + 0xf6c)));
      piVar4 = ((int *)GEN_TOP(*piVar11));
      (*(int * PTR32 *)(gen_frame + 0x8)) = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
      (*(int *)(gen_frame + 0xc)) = iVar3;
      if (piVar4 != piVar11) {
        *((int *)GEN_TOP(piVar4[1])) = *piVar4;
        *((int *)GEN_TOP((*piVar4 + 4))) = piVar4[1];
        piVar11 = ((int *)GEN_TOP(piVar4[2]));
        if ((piVar11 != ((int *)GEN_TOP(0x0))) && (piVar4[3] != 0)) {
          *piVar11 = *piVar11 - 1;
          if (*piVar11 == 0) {
            F_00406ad0(piVar4[2]);
            if (piVar4[3] != 0) {
              F_00406ad0(piVar4[3]);
            }
          }
          piVar4[2] = 0;
          piVar4[3] = 0;
        }
        F_00429760(piVar4,0x10,0x25a);
        *((int *)GEN_TOP(((int)this + 0xf70))) = *((int *)GEN_TOP(((int)this + 0xf70))) - 1;
      }
      uVar6 = (int)((uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 2))) << 0x10) >> 0x1f | *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 4)));
      puVar9 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + 0x34)));
      uVar10 = CONCAT22(*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 2))),*((undefined2 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x10))));
      cVar1 = *((char *)GEN_TOP(((int)puVar9[1] + 0x21)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar9;
      (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar9;
      puVar5 = ((undefined4 *)GEN_TOP(puVar9[1]));
      while (cVar1 == '\0') {
        if ((uVar6 < (uint)puVar5[5]) || ((uVar6 <= (uint)puVar5[5] && (uVar10 <= (uint)puVar5[4])))
           ) {
          puVar7 = ((undefined4 *)GEN_TOP(*puVar5));
          (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar5;
        }
        else {
          puVar7 = ((undefined4 *)GEN_TOP(puVar5[2]));
        }
        puVar5 = puVar7;
        cVar1 = *((char *)GEN_TOP(((int)puVar7 + 0x21)));
      }
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + 0x34)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) == puVar5) || (uVar6 < (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x20))[5])) ||
         ((uVar6 == (*(undefined4 * PTR32 *)(gen_frame + 0x20))[5] && (uVar10 < (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x20))[4])))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar5;
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
      }
      else {
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      }
      piVar11 = ((int *)GEN_TOP(0x0));
      if (*ppuVar8 == puVar9) {
        puVar9 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd0))) + 0x20)));
        if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = REFG(undefined4 * PTR32, 0x14c5958);
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar9;
        }
        puVar9 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
        if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar9 = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
          puVar9[1] = 2;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar9;
        }
        this_00 = ((undefined *)GEN_TOP(F_00406b90(0xfa8,0,0)));
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          piVar11 = ((int *)GEN_TOP(F_00bab610(this_00 GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x20)))));
        }
        piVar11[0x36] = (int)this;
        puVar9 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0x25c)));
        *puVar9 = *((undefined4 *)GEN_TOP(((int)this + 0xe0)));
        puVar9[1] = *((undefined4 *)GEN_TOP(((int)this + 0xe0)));
        puVar9[2] = *((undefined4 *)GEN_TOP(((int)this + 0xe0)));
        *(undefined2 *)(puVar9 + 4) = 0;
        if (puVar9 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
          puVar9[3] = piVar11;
        }
        F_00bb3ea0(((undefined *)GEN_TOP(((int)this + 0xdc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar9,0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x10))))(piVar11 GEN_EDX_ARG,2);
        puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
        F_00bb16a0((*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 4 GEN_EDX_ARG,piVar11);
        F_00ba9ae0(puVar9 GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
        F_00bac540(((undefined *)GEN_TOP(puVar9[5])) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP(((int)this + 0x80))));
        if ((*((int *)GEN_TOP(((int)this + 0xd0))) != 0) && (*((gen_code32 *)GEN_TOP(((int)this + 0x10))) != ((code *)GEN_TOP(0x0)))) {
          ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x10))))(*((int *)GEN_TOP(((int)this + 0xd0))),puVar9);
        }
        if ((*(int * PTR32 *)(gen_frame + 0x8)) != ((int *)GEN_TOP(0x0))) {
          *(*(int * PTR32 *)(gen_frame + 0x8)) = *(*(int * PTR32 *)(gen_frame + 0x8)) - 1;
          if (*(*(int * PTR32 *)(gen_frame + 0x8)) == 0) {
            F_00406ad0((*(int * PTR32 *)(gen_frame + 0x8)));
            F_00406ad0((*(int *)(gen_frame + 0xc)));
          }
          (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x0));
          (*(int *)(gen_frame + 0xc)) = 0;
        }
      }
      else if ((*(int * PTR32 *)(gen_frame + 0x8)) != ((int *)GEN_TOP(0x0))) {
        *(*(int * PTR32 *)(gen_frame + 0x8)) = *(*(int * PTR32 *)(gen_frame + 0x8)) - 1;
        if (*(*(int * PTR32 *)(gen_frame + 0x8)) == 0) {
          F_00406ad0((*(int * PTR32 *)(gen_frame + 0x8)));
          F_00406ad0((*(int *)(gen_frame + 0xc)));
        }
        (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x0));
        (*(int *)(gen_frame + 0xc)) = 0;
      }
      uVar6 = (*(uint *)(gen_frame + 0x10));
    } while (*((int *)GEN_TOP(((int)this + 0xf70))) != 0);
  }
  if (*((int *)GEN_TOP(((int)this + 0x7c))) - 0xcU < 2) {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

/* ref: Client::Network::Socket::RUDPSocket::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bac9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbac9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined2 uVar1;
  int iVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  F_00ba8e00(this GEN_EDX_FWD);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x7c))) {
  case 5: ;
    *(undefined4 *)(this + 0x7c) = 6;
    puVar4 = ((undefined4 *)GEN_TOP(F_00406b90(0x5ba,0,0)));
    if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00bacd32;
    *(undefined2 *)(puVar4 + 4) = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    piVar5 = ((int *)GEN_TOP(F_00406b90(4,0,0)));
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    }
    else {
      *piVar5 = 1;
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar5;
    }
    uVar1 = *(undefined2 *)(this + 0x94);
    *puVar4 = *(undefined4 *)(this + 0x84);
    puVar4[1] = *(undefined4 *)(this + 0x88);
    puVar4[2] = *(undefined4 *)(this + 0x8c);
    puVar4[3] = *(undefined4 *)(this + 0x90);
    *(undefined2 *)(puVar4 + 4) = uVar1;
    *(undefined1 *)(puVar4 + 0x10) = 5;
    *((undefined *)GEN_TOP(((int)puVar4 + 0x41))) = this[0xef0];
    *(undefined2 *)(puVar4 + 0x11) = *(undefined2 *)(this + 0xc6);
    *((undefined2 *)GEN_TOP(((int)puVar4 + 0x46))) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar4;
    if ((*(int *)(this + 0xef4) < 0x20) && (*(int *)(this + 0xf64) == 0)) {
      F_00baac00(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
      puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      *(int *)(this + 0xef4) = *(int *)(this + 0xef4) + 1;
      this[0xef0] = (undefined1)((char)this[0xef0] + 1U & 0x3f);
      if (((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) &&
         (((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0)) && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)))) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
        F_00406ad0(puVar4);
      }
      goto LAB_00bacd32;
    }
    iVar2 = *(int *)(this + 0xf60);
    (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP((iVar2 + 4)));
    piVar5 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
    piVar5[1] = (*(int *)(gen_frame + 0x8));
    *piVar5 = iVar2;
    break;
  case 6: ;
  case 7: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
    return 0xffffffff;
  case 8: ;
    *(undefined4 *)(this + 0x7c) = 10;
    _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(int *)(this + 0xf20) = (int)_Var6;
    uVar7 = F_00427d90();
    *(ulonglong *)(this + 0xf28) = uVar7;
    uVar7 = F_00427e30();
    *(ulonglong *)(this + 0xf30) = uVar7;
    this[0xf38] = (undefined1)0x1;
    puVar4 = ((undefined4 *)GEN_TOP(F_00406b90(0x5ba,0,0)));
    if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00bacd32;
    *(undefined2 *)(puVar4 + 4) = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    piVar5 = ((int *)GEN_TOP(F_00406b90(4,0,0)));
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    }
    else {
      *piVar5 = 1;
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar5;
    }
    uVar1 = *(undefined2 *)(this + 0x94);
    *puVar4 = *(undefined4 *)(this + 0x84);
    puVar4[1] = *(undefined4 *)(this + 0x88);
    puVar4[2] = *(undefined4 *)(this + 0x8c);
    puVar4[3] = *(undefined4 *)(this + 0x90);
    *(undefined2 *)(puVar4 + 4) = uVar1;
    *(undefined1 *)(puVar4 + 0x10) = 5;
    *((undefined *)GEN_TOP(((int)puVar4 + 0x41))) = this[0xef0];
    *(undefined2 *)(puVar4 + 0x11) = *(undefined2 *)(this + 0xc6);
    *((undefined2 *)GEN_TOP(((int)puVar4 + 0x46))) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar4;
    if ((*(int *)(this + 0xef4) < 0x20) && (*(int *)(this + 0xf64) == 0)) {
      F_00baac00(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
      puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      *(int *)(this + 0xef4) = *(int *)(this + 0xef4) + 1;
      this[0xef0] = (undefined1)((char)this[0xef0] + 1U & 0x3f);
      if (((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) &&
         (((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0)) && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)))) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
        F_00406ad0(puVar4);
      }
      goto LAB_00bacd32;
    }
    iVar2 = *(int *)(this + 0xf60);
    (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP((iVar2 + 4)));
    piVar5 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
    piVar5[1] = (*(int *)(gen_frame + 0x8));
    *piVar5 = iVar2;
    break;
  default: ;
    *(undefined4 *)(this + 0x7c) = 0xd;
    goto LAB_00bacd32;
  }
  piVar3 = piVar5 + 2;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + 1;
    *piVar3 = (int)(*(int * PTR32 *)(gen_frame + 0x0));
    piVar3[1] = (int)puVar4;
  }
  if (*(int *)(this + 0xf64) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *(int *)(this + 0xf64) = *(int *)(this + 0xf64) + 1;
  *((int * PTR32 *)GEN_TOP((iVar2 + 4))) = piVar5;
  *((int * PTR32 *)GEN_TOP(piVar5[1])) = piVar5;
  if (((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
    F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
    F_00406ad0(puVar4);
  }
LAB_00bacd32: ;
  if (this[0xc4] != (undefined1)0x0) {
    F_00bac6a0(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00bacd70 */
GEN_OWN GEN_NOFRAME uint F_00bacd70(void)
{
  GEN_ENTER(0xbacd70u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  piVar4 = REFG(int * PTR32, 0x14c5958);
  REFG(int, 0x14c595c) = REFG(int, 0x14c595c) - 1;
  if (REFG(int, 0x14c595c) == 0) {
    if ((((undefined4 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))) != ((undefined4 *)GEN_TOP(0x0))) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) {
      F_00ba98a0(pvVar1 GEN_EDX_ARG);
    }
    if (piVar4[2] != 0) {
      F_00c085d0();
    }
    piVar4 = REFG(int * PTR32, 0x14c5958);
    if (REFG(int * PTR32, 0x14c5958) != ((int *)GEN_TOP(0x0))) {
      pvVar1 = ((undefined *)GEN_TOP(REFG(int * PTR32, 0x14c5958)[2]));
      if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        F_00c09a50(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
      pvVar1 = ((undefined *)GEN_TOP(piVar4[1]));
      if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        F_00bac070(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
      piVar2 = ((int *)GEN_TOP(*piVar4));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(*piVar2));
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
        }
        F_00406ad0(piVar2);
      }
      F_00406ad0(piVar4);
    }
    REFG(int * PTR32, 0x14c5958) = ((int *)GEN_TOP(0x0));
    gen_imp_WSACleanup();
  }
  return 0;
}

/* ref: FUN_00bace30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bace30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbace30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 * puVar1;
  char cVar2;
  byte bVar3;
  undefined * this_00;
  undefined4 uVar4;
  int * piVar5;
  int * piVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte * pbVar12;
  __time64_t _Var13;
  ulonglong uVar14;
  
  if (*((int *)GEN_TOP(((int)this + 0x78))) == 2) {
    if (*((char *)GEN_TOP(((int)this + 0xc4))) == '\0') {
      return 1;
    }
    uVar9 = F_00bac720(this GEN_EDX_FWD);
    return uVar9;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x74)));
  if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this_00 + 0x44))) != *((int *)GEN_TOP(((int)this_00 + 0x48)))))
  {
    F_00baa950(this_00 GEN_EDX_ARG);
  }
  F_00baad00(this GEN_EDX_ARG);
  uVar9 = (uint)(*((char *)GEN_TOP(((int)this + 0xc4))) == '\0');
  if (*((int *)GEN_TOP(((int)this + 0xf70))) != 0) {
    (*(uint *)(gen_frame + 0x14)) = 1;
    do {
      iVar10 = **((int * PTR32 *)GEN_TOP(((int)this + 0xf6c)));
      **((int * PTR32 *)GEN_TOP((iVar10 + 8))) = **((int * PTR32 *)GEN_TOP((iVar10 + 8))) + 1;
      iVar11 = *((int *)GEN_TOP((iVar10 + 0xc)));
      uVar4 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xf6c)));
      (*(int * PTR32 *)(gen_frame + 0x8)) = *((int * PTR32 *)GEN_TOP((iVar10 + 8)));
      (*(int *)(gen_frame + 0xc)) = iVar11;
      F_00bb6590(((undefined *)GEN_TOP(((int)this + 0xf6c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),uVar4);
      cVar2 = *((char *)GEN_TOP((iVar11 + 0x40)));
      if ((cVar2 == '\x02') || (cVar2 == '\x03')) {
        if ((*((short *)GEN_TOP((iVar11 + 0x46))) != 0) && (*((short *)GEN_TOP((iVar11 + 0x46))) != 0)) {
          iVar10 = -0x48 - (*(int *)(gen_frame + 0xc));
          pbVar12 = ((byte *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x48)));
          (*(int *)(gen_frame + 0x18)) = iVar10;
          iVar11 = (*(int *)(gen_frame + 0xc));
          do {
            puVar1 = ((undefined4 *)GEN_TOP(((int)this + (uint)*pbVar12 * 8 + 0x2ec)));
            piVar5 = ((int *)GEN_TOP(*puVar1));
            if ((piVar5 != ((int *)GEN_TOP(0x0))) && (puVar1[1] != 0)) {
              *piVar5 = *piVar5 - 1;
              if (*piVar5 == 0) {
                F_00406ad0(*puVar1);
                if (puVar1[1] != 0) {
                  F_00406ad0(puVar1[1]);
                }
              }
              *puVar1 = 0;
              puVar1[1] = 0;
              iVar10 = (*(int *)(gen_frame + 0x18));
              iVar11 = (*(int *)(gen_frame + 0xc));
            }
            *puVar1 = 0;
            puVar1[1] = 0;
            *((undefined1 *)GEN_TOP(((uint)*pbVar12 * 0x20 + 0x508 + (int)this))) = 0;
            pbVar12 = pbVar12 + 1;
          } while ((int)(pbVar12 + iVar10) < (int)(uint)*((ushort *)GEN_TOP((iVar11 + 0x46))));
        }
      }
      else {
        bVar8 = *((byte *)GEN_TOP((iVar11 + 0x41)));
        bVar3 = *((byte *)GEN_TOP(((int)this + 0xef8)));
        bVar7 = *((byte *)GEN_TOP(((int)this + 0xef9)));
        if (((((bVar8 < bVar3) || (bVar7 <= bVar8)) && ((bVar3 <= bVar7 || (bVar8 < bVar3)))) &&
            ((bVar7 <= bVar8 || (bVar3 <= bVar7)))) ||
           (*((int *)GEN_TOP(((int)this + (uint)bVar8 * 8 + 0xf0))) != 0)) {
          if ((*((int *)GEN_TOP(((int)this + 0x7c))) == 0xb) && (cVar2 == '\x05')) {
            F_00bab2e0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)));
          }
        }
        else {
          if (bVar8 == bVar3) {
            if (*((char *)GEN_TOP(((int)this + 0xefc))) != '\0') {
              *((undefined1 *)GEN_TOP(((int)this + 0xefc))) = 0;
              bVar8 = bVar3;
              do {
                bVar8 = bVar8 + 1 & 0x3f;
                if ((((bVar8 < bVar3) || (bVar7 <= bVar8)) && ((bVar3 <= bVar7 || (bVar8 < bVar3))))
                   && ((bVar7 <= bVar8 || (bVar3 <= bVar7)))) goto LAB_00bacfb3;
              } while (*((int *)GEN_TOP(((int)this + (uint)bVar8 * 8 + 0xf0))) == 0);
              *((undefined1 *)GEN_TOP(((int)this + 0xefc))) = 1;
            }
LAB_00bacfb3: ;
            _Var13 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
            *((int *)GEN_TOP(((int)this + 0xf00))) = (int)_Var13;
            uVar14 = F_00427d90();
            *((ulonglong *)GEN_TOP(((int)this + 0xf08))) = uVar14;
            uVar14 = F_00427e30();
            *((ulonglong *)GEN_TOP(((int)this + 0xf10))) = uVar14;
            *((undefined1 *)GEN_TOP(((int)this + 0xf18))) = 1;
          }
          else {
            *((undefined1 *)GEN_TOP(((int)this + 0xefc))) = 1;
            if (*((char *)GEN_TOP(((int)this + 0xefa))) == '\0') {
              F_00baae50(this GEN_EDX_ARG,3,0xff,0,0);
            }
            else {
              F_00bb0210(((undefined *)GEN_TOP(((int)this + 0xf00))) GEN_EDX_ARG);
            }
          }
          F_00bb3590(((undefined *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x41))) * 8 + 0xec))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)));
          iVar10 = *((int *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 0xef8))) * 8 + 0xf0)));
          while (iVar10 != 0) {
            uVar9 = (uint)*((byte *)GEN_TOP(((int)this + 0xef8)));
            piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + uVar9 * 8 + 0xec)));
            *piVar5 = *piVar5 + 1;
            piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + uVar9 * 8 + 0xec)));
            iVar10 = *((int *)GEN_TOP(((int)this + uVar9 * 8 + 0xf0)));
            puVar1 = ((undefined4 *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 0xef8))) * 8 + 0xec)));
            *((undefined1 *)GEN_TOP(((int)this + 0xefa))) = 0;
            piVar6 = ((int *)GEN_TOP(*puVar1));
            (*(int * PTR32 *)(gen_frame + 0x0)) = piVar5;
            (*(int *)(gen_frame + 0x4)) = iVar10;
            if ((piVar6 != ((int *)GEN_TOP(0x0))) && (puVar1[1] != 0)) {
              *piVar6 = *piVar6 - 1;
              if (*piVar6 == 0) {
                uVar4 = *puVar1;
                F_00406ad0(uVar4);
                if (puVar1[1] != 0) {
                  F_00406ad0(puVar1[1]);
                }
              }
              *puVar1 = 0;
              puVar1[1] = 0;
            }
            *puVar1 = 0;
            puVar1[1] = 0;
            *((byte *)GEN_TOP(((int)this + 0xef8))) = *((char *)GEN_TOP(((int)this + 0xef8))) + 1U & 0x3f;
            *((byte *)GEN_TOP(((int)this + 0xef9))) = *((char *)GEN_TOP(((int)this + 0xef9))) + 1U & 0x3f;
            _Var13 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
            *((int *)GEN_TOP(((int)this + 0xf00))) = (int)_Var13;
            uVar14 = F_00427d90();
            *((ulonglong *)GEN_TOP(((int)this + 0xf08))) = uVar14;
            uVar14 = F_00427e30();
            *((ulonglong *)GEN_TOP(((int)this + 0xf10))) = uVar14;
            *((undefined1 *)GEN_TOP(((int)this + 0xf18))) = 1;
            switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((iVar10 + 0x40))))) {
            case 0: ;
              F_00bab3d0(this GEN_EDX_ARG);
              break;
            case 1: ;
              F_00bab560(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
              break;
            case 4: ;
              F_00ba92c0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
              break;
            case 5: ;
              F_00bab2e0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
            }
            if ((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) {
              *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1;
              if (*(*(int * PTR32 *)(gen_frame + 0x0)) == 0) {
                F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
                F_00406ad0(iVar10);
              }
              (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
              (*(int *)(gen_frame + 0x4)) = 0;
            }
            iVar10 = *((int *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 0xef8))) * 8 + 0xf0)));
          }
        }
      }
      if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x40))) == '\x03') {
        bVar7 = *((char *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x42))) + 1U & 0x3f;
        bVar8 = *((byte *)GEN_TOP(((int)this + 0xef1)));
        bVar3 = *((byte *)GEN_TOP(((int)this + 0xef0)));
        if ((((bVar8 <= bVar7) && (bVar7 < bVar3)) || ((bVar3 < bVar8 && (bVar8 <= bVar7)))) ||
           ((bVar7 < bVar3 && (bVar3 < bVar8)))) {
          F_00baac00(this GEN_EDX_ARG,(int)this + (uint)bVar7 * 8 + 0x2ec);
        }
      }
      while( true ) {
        bVar8 = *((byte *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x42)));
        bVar3 = *((byte *)GEN_TOP(((int)this + 0xef1)));
        bVar7 = *((byte *)GEN_TOP(((int)this + 0xef0)));
        if ((((bVar8 < bVar3) || (bVar7 <= bVar8)) && ((bVar3 <= bVar7 || (bVar8 < bVar3)))) &&
           ((bVar7 <= bVar8 || (bVar3 <= bVar7)))) break;
        if (*((int *)GEN_TOP(((int)this + (uint)bVar3 * 8 + 0x2f0))) == 0) {
          *((byte *)GEN_TOP(((int)this + 0xef1))) = bVar3 + 1 & 0x3f;
        }
        else {
          *((int *)GEN_TOP(((int)this + 0xef4))) = *((int *)GEN_TOP(((int)this + 0xef4))) - 1;
          *((undefined1 *)GEN_TOP(((uint)bVar3 * 0x20 + 0x508 + (int)this))) = 0;
          uVar9 = (uint)*((byte *)GEN_TOP(((int)this + 0xef1)));
          piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + uVar9 * 8 + 0x2ec)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + uVar9 * 8 + 0x2f0))) + 0x40))) == '\x05') {
            if ((piVar5 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + uVar9 * 8 + 0x2f0))) != 0)) {
              *piVar5 = *piVar5 - 1;
              if (*piVar5 == 0) {
                F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + uVar9 * 8 + 0x2ec))));
                iVar10 = *((int *)GEN_TOP(((int)this + uVar9 * 8 + 0x2f0)));
                if (iVar10 != 0) {
                  F_00406ad0(iVar10);
                }
              }
              *((undefined4 *)GEN_TOP(((int)this + uVar9 * 8 + 0x2ec))) = 0;
              *((undefined4 *)GEN_TOP(((int)this + uVar9 * 8 + 0x2f0))) = 0;
            }
            *((undefined4 *)GEN_TOP(((int)this + uVar9 * 8 + 0x2ec))) = 0;
            *((undefined4 *)GEN_TOP(((int)this + uVar9 * 8 + 0x2f0))) = 0;
            *((byte *)GEN_TOP(((int)this + 0xef1))) = *((char *)GEN_TOP(((int)this + 0xef1))) + 1U & 0x3f;
            iVar10 = *((int *)GEN_TOP(((int)this + 0x7c)));
            if (iVar10 == 6) {
              *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 7;
            }
            else if (iVar10 == 9) {
              *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0xb;
              _Var13 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
              *((int *)GEN_TOP(((int)this + 0xf20))) = (int)_Var13;
              uVar14 = F_00427d90();
              *((ulonglong *)GEN_TOP(((int)this + 0xf28))) = uVar14;
              uVar14 = F_00427e30();
              *((ulonglong *)GEN_TOP(((int)this + 0xf30))) = uVar14;
              *((undefined1 *)GEN_TOP(((int)this + 0xf38))) = 1;
            }
            else if (iVar10 == 10) {
              *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0xc;
            }
          }
          else {
            if ((piVar5 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + uVar9 * 8 + 0x2f0))) != 0)) {
              *piVar5 = *piVar5 - 1;
              if (*piVar5 == 0) {
                F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + uVar9 * 8 + 0x2ec))));
                iVar10 = *((int *)GEN_TOP(((int)this + uVar9 * 8 + 0x2f0)));
                if (iVar10 != 0) {
                  F_00406ad0(iVar10);
                }
              }
              *((undefined4 *)GEN_TOP(((int)this + uVar9 * 8 + 0x2ec))) = 0;
              *((undefined4 *)GEN_TOP(((int)this + uVar9 * 8 + 0x2f0))) = 0;
            }
            *((undefined4 *)GEN_TOP(((int)this + uVar9 * 8 + 0x2ec))) = 0;
            *((undefined4 *)GEN_TOP(((int)this + uVar9 * 8 + 0x2f0))) = 0;
            *((byte *)GEN_TOP(((int)this + 0xef1))) = *((char *)GEN_TOP(((int)this + 0xef1))) + 1U & 0x3f;
          }
        }
      }
      bVar8 = *((byte *)GEN_TOP(((int)this + 0xef1)));
      bVar3 = *((byte *)GEN_TOP(((int)this + 0xef0)));
      while( true ) {
        bVar8 = bVar8 & 0x3f;
        bVar7 = *((byte *)GEN_TOP(((int)this + 0xef1)));
        if (((((bVar8 < bVar7) || (bVar3 <= bVar8)) && ((bVar7 <= bVar3 || (bVar8 < bVar7)))) &&
            ((bVar3 <= bVar8 || (bVar7 <= bVar3)))) ||
           (*((int *)GEN_TOP(((int)this + (uint)bVar8 * 8 + 0x2f0))) != 0)) break;
        *((int *)GEN_TOP(((int)this + 0xef4))) = *((int *)GEN_TOP(((int)this + 0xef4))) - 1;
        *((byte *)GEN_TOP(((int)this + 0xef1))) = bVar8;
        bVar8 = bVar8 + 1;
      }
      if ((*(int * PTR32 *)(gen_frame + 0x8)) != ((int *)GEN_TOP(0x0))) {
        *(*(int * PTR32 *)(gen_frame + 0x8)) = *(*(int * PTR32 *)(gen_frame + 0x8)) - 1;
        if (*(*(int * PTR32 *)(gen_frame + 0x8)) == 0) {
          F_00406ad0((*(int * PTR32 *)(gen_frame + 0x8)));
          F_00406ad0((*(int *)(gen_frame + 0xc)));
        }
        (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x0));
        (*(int *)(gen_frame + 0xc)) = 0;
      }
      uVar9 = (*(uint *)(gen_frame + 0x14));
    } while (*((int *)GEN_TOP(((int)this + 0xf70))) != 0);
  }
  F_00bab110(this GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0x7c))))) {
  case 10: ;
  case 0xb: ;
    if (*((char *)GEN_TOP(((int)this + 0xf38))) == '\0') {
      return uVar9;
    }
    uVar14 = F_00427d90();
    if ((int)uVar14 - *((int *)GEN_TOP(((int)this + 0xf28))) < 0xc9) {
      return uVar9;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0xc;
    *((undefined1 *)GEN_TOP(((int)this + 0xf38))) = 0;
switchD_00bad542_default: ;
    return 0xffffffff;
  case 0xc: ;
  case 0xd: ;
    goto switchD_00bad542_default;
  default: ;
    return uVar9;
  }
}

/* ref: FUN_00bad5b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bad5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbad5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  ulonglong uVar8;
  
  piVar4 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
  if (piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
    do {
      *((int *)GEN_TOP(piVar4[2])) = *((int *)GEN_TOP(piVar4[2])) + 1;
      piVar6 = ((int *)GEN_TOP(piVar4[3]));
      piVar7 = ((int *)GEN_TOP(piVar4[2]));
      uVar3 = F_00bace30(piVar6 GEN_EDX_FWD);
      if ((int)uVar3 < 0) {
        piVar5 = ((int *)GEN_TOP(*piVar4));
        if (piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
          *((int * PTR32 *)GEN_TOP(piVar4[1])) = piVar5;
          *((int *)GEN_TOP((*piVar4 + 4))) = piVar4[1];
          piVar1 = ((int *)GEN_TOP(piVar4[2]));
          if ((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar4[3] != 0)) {
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              F_00406ad0(piVar4[2]);
              puVar2 = ((undefined4 *)GEN_TOP(piVar4[3]));
              if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
              }
            }
            piVar4[2] = 0;
            piVar4[3] = 0;
          }
          F_00429760(piVar4,0x10,0x25a);
          *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) - 1;
        }
      }
      else {
        if (uVar3 == 0) {
          if ((piVar6[0x34] != 0) && (((code *)GEN_TOP(piVar6[7])) != ((code *)GEN_TOP(0x0)))) {
            (*((code *)GEN_TOP(piVar6[7])))(piVar6[0x34]);
          }
          if ((piVar6[0x1e] != 2) && (uVar3 = F_00ba6cc0(piVar6 GEN_EDX_ARG), uVar3 == 1)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x14))))(piVar6 GEN_EDX_ARG);
          }
        }
        piVar5 = ((int *)GEN_TOP(*piVar4));
      }
      if (((piVar7 != ((int *)GEN_TOP(0x0))) && (piVar6 != ((int *)GEN_TOP(0x0)))) &&
         (*piVar7 = *piVar7 - 1, *piVar7 == 0)) {
        F_00406ad0(piVar7);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar6)))(piVar6 GEN_EDX_ARG,1);
      }
      piVar4 = piVar5;
    } while (piVar5 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10))));
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  piVar6 = ((int *)GEN_TOP(*piVar4));
  if (((int *)GEN_TOP(*piVar4)) != piVar4) {
    do {
      for (piVar4 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10))))); piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
          piVar4 = ((int *)GEN_TOP(*piVar4))) {
        if (piVar4[3] == piVar6[2]) {
          piVar7 = ((int *)GEN_TOP(*piVar6));
          goto LAB_00bad70a;
        }
      }
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((piVar6[2] + 0xd0)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1)));
      }
      piVar7 = ((int *)GEN_TOP(*piVar6));
      if (piVar6 != *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
        *((int * PTR32 *)GEN_TOP(piVar6[1])) = piVar7;
        *((int *)GEN_TOP((*piVar6 + 4))) = piVar6[1];
        uVar8 = F_00429760(piVar6,0xc,0x25a);
        piVar4 = ((int *)GEN_TOP((uint)uVar8));
        *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) - 1;
      }
LAB_00bad70a: ;
      piVar6 = piVar7;
    } while (piVar7 != *((int * PTR32 *)GEN_TOP(((int)this + 0x1c))));
  }
  return (uint)piVar4;
}

/* ref: FUN_00bad720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bad720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbad720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if (*(undefined4 * PTR32 *)this != ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)this));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00baa9f0(this_00 GEN_EDX_FWD);
    }
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
    F_00bad5b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c0b250(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Client::Network::Socket::RUDPSocket::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bad760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbad760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 * puVar7;
  int * piVar8;
  int * piVar9;
  __time64_t _Var10;
  
  *(undefined4 *)(this + 0x84) = *param_1;
  *(undefined4 *)(this + 0x88) = param_1[1];
  *(undefined4 *)(this + 0x8c) = param_1[2];
  *(undefined4 *)(this + 0x90) = param_1[3];
  uVar4 = gen_imp_ntohs(*((ushort *)GEN_TOP(((int)param_1 + 2))));
  iVar2 = *(int *)(this + 0xd0);
  *(uint *)(this + 0x80) = (uint)uVar4;
  *(undefined4 *)(this + 0x7c) = 4;
  piVar8 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x20)));
  piVar9 = REFG(int * PTR32, 0x14c5958);
  if (piVar8 != ((int *)GEN_TOP(0x0))) {
    piVar9 = piVar8;
  }
  if (piVar9[1] == 0) {
    pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0x28,0,0)));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      uVar6 = 0;
    }
    else {
      uVar6 = F_00bac1c0(pvVar5 GEN_EDX_ARG,piVar9);
    }
    piVar9[1] = uVar6;
  }
  F_00babf00(((undefined *)GEN_TOP(piVar9[1])) GEN_EDX_ARG,iVar2 + 0x10,this + 0x70,0);
  iVar2 = *(int *)(this + 0x74);
  uVar3 = *(undefined4 *)(this + 0xd4);
  if (*((undefined * PTR32 *)GEN_TOP((iVar2 + 0xc))) == ((undefined *)GEN_TOP(0x0))) {
    piVar8 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x14)));
    if (piVar8 == ((int *)GEN_TOP(0x0))) {
      piVar8 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x1c)));
      if (piVar8 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x34))))(piVar8 GEN_EDX_ARG,uVar3);
      }
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x38))))(piVar8 GEN_EDX_ARG,uVar3);
    }
  }
  else {
    F_00ba8820(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0xc))) GEN_EDX_ARG,uVar3);
  }
  puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x5ba,0,0)));
  if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined2 *)(puVar7 + 4) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    piVar8 = ((int *)GEN_TOP(F_00406b90(4,0,0)));
    if (piVar8 == ((int *)GEN_TOP(0x0))) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    }
    else {
      *piVar8 = 1;
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar8;
    }
    uVar1 = *(undefined2 *)(this + 0x94);
    *puVar7 = *(undefined4 *)(this + 0x84);
    puVar7[1] = *(undefined4 *)(this + 0x88);
    puVar7[2] = *(undefined4 *)(this + 0x8c);
    puVar7[3] = *(undefined4 *)(this + 0x90);
    *(undefined2 *)(puVar7 + 4) = uVar1;
    *(undefined1 *)(puVar7 + 0x10) = 0;
    *((undefined *)GEN_TOP(((int)puVar7 + 0x41))) = this[0xef0];
    *(undefined2 *)(puVar7 + 0x11) = *(undefined2 *)(this + 0xc6);
    *((undefined2 *)GEN_TOP(((int)puVar7 + 0x46))) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar7;
    if ((*(int *)(this + 0xef4) < 0x20) && (*(int *)(this + 0xf64) == 0)) {
      F_00baac00(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      *(int *)(this + 0xef4) = *(int *)(this + 0xef4) + 1;
      this[0xef0] = (undefined1)((char)this[0xef0] + 1U & 0x3f);
      if ((((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) && ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0)))) &&
         (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
        F_00406ad0(puVar7);
      }
    }
    else {
      iVar2 = *(int *)(this + 0xf60);
      (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP((iVar2 + 4)));
      piVar8 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
      piVar8[1] = (*(int *)(gen_frame + 0x8));
      *piVar8 = iVar2;
      if (piVar8 + 2 != ((int *)GEN_TOP(0x0))) {
        *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + 1;
        piVar8[2] = (int)(*(int * PTR32 *)(gen_frame + 0x0));
        piVar8[3] = (int)puVar7;
      }
      if (*(int *)(this + 0xf64) == -2) {
                    
        F_00c4579a(((char *)REFP(0x108b258)));
      }
      *(int *)(this + 0xf64) = *(int *)(this + 0xf64) + 1;
      *((int * PTR32 *)GEN_TOP((iVar2 + 4))) = piVar8;
      *((int * PTR32 *)GEN_TOP(piVar8[1])) = piVar8;
      if (((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
        F_00406ad0(puVar7);
      }
    }
  }
  _Var10 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(__time64_t *)(this + 0x58) = _Var10;
  if (this[0xc4] == (undefined1)0x0) {
    iVar2 = *(int *)(this + 0x7c);
    while (iVar2 == 4) {
      if ((((undefined4 *)GEN_TOP(*piVar9)) != ((undefined4 *)GEN_TOP(0x0))) &&
         (pvVar5 = *((undefined * PTR32 *)GEN_TOP(*piVar9)), pvVar5 != ((undefined *)GEN_TOP(0x0)))) {
        F_00baa9f0(pvVar5 GEN_EDX_ARG);
      }
      if (((undefined *)GEN_TOP(piVar9[1])) != ((undefined *)GEN_TOP(0x0))) {
        F_00bad5b0(((undefined *)GEN_TOP(piVar9[1])) GEN_EDX_ARG);
      }
      if (((undefined *)GEN_TOP(piVar9[2])) != ((undefined *)GEN_TOP(0x0))) {
        F_00c0b250(((undefined *)GEN_TOP(piVar9[2])) GEN_EDX_ARG);
      }
      F_00bace30(this GEN_EDX_ARG);
      iVar2 = *(int *)(this + 0x7c);
    }
    return -(uint)(*(int *)(this + 0x7c) != 5);
  }
  return 1000;
}

/* ref: FUN_00bada50 */
GEN_OWN GEN_NOFRAME uint F_00bada50(void)
{
  GEN_ENTER(0xbada50u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = REFG(int * PTR32, 0x14c5958);
  uVar3 = 0;
  if (REFG(int * PTR32, 0x14c5958) != ((int *)GEN_TOP(0x0))) {
    uVar3 = 0;
    if ((((undefined4 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))) != ((undefined4 *)GEN_TOP(0x0))) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))), uVar3 = 0, pvVar1 != ((undefined *)GEN_TOP(0x0)))) {
      uVar3 = F_00baa9f0(pvVar1 GEN_EDX_ARG);
    }
    pvVar1 = ((undefined *)GEN_TOP(piVar2[1]));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00bad5b0(pvVar1 GEN_EDX_ARG);
    }
    pvVar1 = ((undefined *)GEN_TOP(piVar2[2]));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00c0b250(pvVar1 GEN_EDX_ARG);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00bada90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bada90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbada90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  
  if (*((char *)GEN_TOP(((int)this + 0x38))) != '\0') {
    if ((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))) != ((undefined4 *)GEN_TOP(0x0))) &&
       (pvVar1 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) {
      F_00baa9f0(pvVar1 GEN_EDX_FWD);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x6c))) != ((undefined *)GEN_TOP(0x0))) {
      F_00bad5b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_ARG);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x70))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c0b250(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG);
    }
    piVar2 = REFG(int * PTR32, 0x14c5958);
    if (REFG(int * PTR32, 0x14c5958) != ((int *)GEN_TOP(0x0))) {
      if ((((undefined4 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))) != ((undefined4 *)GEN_TOP(0x0))) &&
         (pvVar1 = *((undefined * PTR32 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) {
        F_00baa9f0(pvVar1 GEN_EDX_ARG);
      }
      pvVar1 = ((undefined *)GEN_TOP(piVar2[1]));
      if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        F_00bad5b0(pvVar1 GEN_EDX_ARG);
      }
      pvVar1 = ((undefined *)GEN_TOP(piVar2[2]));
      if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        F_00c0b250(pvVar1 GEN_EDX_ARG);
      }
    }
  }
  if (*(int *)this == 2) {
    uVar3 = F_00ba81e0(this GEN_EDX_ARG);
    return uVar3;
  }
  uVar3 = *(int *)this - 3;
  if (uVar3 == 0) {
    if (*((char *)GEN_TOP(((int)this + 0x39))) == '\0') {
      *(undefined4 *)this = 4;
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x4c)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
        return uVar3;
      }
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
        return uVar3;
      }
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x5c)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
        return uVar3;
      }
    }
    else {
      uVar3 = F_004cf030(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG);
      if ((char)uVar3 == '\0') {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG);
        return uVar3;
      }
      *(undefined4 *)this = 4;
    }
  }
  return uVar3;
}

/* ref: Client::Network::Socket::RUDPSocket::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00badb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbadb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * this_00;
  int iVar1;
  int * piVar2;
  int iVar3;
  undefined * pvVar4;
  byte bVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x4)) = 0;
  do {
    if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xf70) != 0) {
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xf6c;
      do {
        iVar1 = **(int * PTR32 *)this_00;
        **((int * PTR32 *)GEN_TOP((iVar1 + 8))) = **((int * PTR32 *)GEN_TOP((iVar1 + 8))) + 1;
        piVar2 = *((int * PTR32 *)GEN_TOP((iVar1 + 8)));
        iVar1 = *((int *)GEN_TOP((iVar1 + 0xc)));
        F_00bb6590(this_00 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)this_00);
        bVar5 = F_00bb4e10(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x74) GEN_EDX_ARG,iVar1);
        iVar3 = (*(int *)(gen_frame + 0x4));
        if (bVar5 == 0) {
          if ((((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x4)) != 0)) &&
             (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
            F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
            F_00406ad0(iVar3);
          }
          *piVar2 = *piVar2 + 1;
          iVar3 = *piVar2;
          (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
          (*(int *)(gen_frame + 0x4)) = iVar1;
          if ((iVar1 != 0) && (*piVar2 = iVar3 - 1, iVar3 - 1 == 0)) {
            F_00406ad0(piVar2);
            F_00406ad0(iVar1);
          }
          break;
        }
        if (((piVar2 != ((int *)GEN_TOP(0x0))) && (iVar1 != 0)) && (*piVar2 = *piVar2 - 1, *piVar2 == 0)) {
          F_00406ad0(piVar2);
          F_00406ad0(iVar1);
        }
      } while (*(int *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xf70) != 0);
    }
    piVar2 = REFG(int * PTR32, 0x14c5958);
    if (REFG(int * PTR32, 0x14c5958) != ((int *)GEN_TOP(0x0))) {
      if ((((undefined4 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))) != ((undefined4 *)GEN_TOP(0x0))) &&
         (pvVar4 = *((undefined * PTR32 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))), pvVar4 != ((undefined *)GEN_TOP(0x0)))) {
        F_00baa9f0(pvVar4 GEN_EDX_ARG);
      }
      pvVar4 = ((undefined *)GEN_TOP(piVar2[1]));
      if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
        F_00bad5b0(pvVar4 GEN_EDX_ARG);
      }
      pvVar4 = ((undefined *)GEN_TOP(piVar2[2]));
      if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
        F_00c0b250(pvVar4 GEN_EDX_ARG);
      }
    }
    iVar1 = (*(int *)(gen_frame + 0x4));
    if ((*(int *)(gen_frame + 0x4)) != 0) {
      F_00bac540(*((undefined * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x80));
      if (((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) - 1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
        F_00406ad0(iVar1);
      }
      return 0;
    }
  } while( true );
}

/* ref: Client::Network::Socket::RUDPSocket::vf11 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00badcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbadcc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ushort uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  undefined4 uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (this[0xc4] == (undefined1)0x0) {
    if ((*(int *)(this + 0x7c) != 8) || (this[0xefb] != (undefined1)0x0)) {
      iVar2 = *(int *)(this + 0xf7c);
      piVar4 = REFG(int * PTR32, 0x14c5958);
      while (REFG(int * PTR32, 0x14c5958) = piVar4, iVar2 == 0) {
        if (piVar4 != ((int *)GEN_TOP(0x0))) {
          if ((((undefined4 *)GEN_TOP(*piVar4)) != ((undefined4 *)GEN_TOP(0x0))) &&
             (this_00 = *((undefined * PTR32 *)GEN_TOP(*piVar4)), this_00 != ((undefined *)GEN_TOP(0x0)))) {
            F_00baa9f0(this_00 GEN_EDX_FWD);
          }
          if (((undefined *)GEN_TOP(piVar4[1])) != ((undefined *)GEN_TOP(0x0))) {
            F_00bad5b0(((undefined *)GEN_TOP(piVar4[1])) GEN_EDX_ARG);
          }
          if (((undefined *)GEN_TOP(piVar4[2])) != ((undefined *)GEN_TOP(0x0))) {
            F_00c0b250(((undefined *)GEN_TOP(piVar4[2])) GEN_EDX_ARG);
          }
        }
        piVar4 = REFG(int * PTR32, 0x14c5958);
        iVar2 = *(int *)(this + 0xf7c);
      }
      iVar2 = **(int * PTR32 *)(this + 0xf78);
      **((int * PTR32 *)GEN_TOP((iVar2 + 8))) = **((int * PTR32 *)GEN_TOP((iVar2 + 8))) + 1;
      iVar3 = *((int *)GEN_TOP((iVar2 + 0xc)));
      piVar4 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
      uVar5 = **(undefined4 * PTR32 *)(this + 0xf78);
      F_00bb6590(this + 0xf78 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),uVar5);
      F_00c46aa0(param_1,iVar3 + 0x48,(uint)*((ushort *)GEN_TOP((iVar3 + 0x46))));
      uVar1 = *((ushort *)GEN_TOP((iVar3 + 0x46)));
      if ((piVar4 != ((int *)GEN_TOP(0x0))) && (*piVar4 = *piVar4 - 1, *piVar4 == 0)) {
        F_00406ad0(piVar4);
        F_00406ad0(iVar3);
      }
      return (uint)uVar1;
    }
    this[0xefb] = (undefined1)0x1;
  }
  return 0;
}

/* ref: FUN_00baddf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baddf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaddf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return 0;
}

/* ref: FUN_00bade00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bade00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbade00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = param_2;
  return 0;
}

/* ref: FUN_00bade10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bade10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbade10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = param_2;
  return 0;
}

/* ref: FUN_00bade20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bade20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbade20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return 0;
}

/* ref: FUN_00bade30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bade30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbade30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return 0;
}

/* ref: FUN_00bade40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bade40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbade40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return 0;
}

/* ref: FUN_00bade50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bade50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbade50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return 0;
}

/* ref: FUN_00bade60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bade60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbade60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_2;
  return 0;
}

/* ref: FUN_00bade80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bade80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbade80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_2;
  return 0;
}

/* ref: FUN_00badec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00badec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbadec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 == 0) {
    if ((code *)*(gen_code32 *)this != ((code *)GEN_TOP(0x0))) {
      uVar1 = ((code *)*(gen_code32 *)this)(param_1,0);
      return uVar1;
    }
  }
  else if (*((gen_code32 *)GEN_TOP(((int)this + 4))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 4))))(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00badf00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00badf00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbadf00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 8))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 8))))(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00badf20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00badf20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbadf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 0xc))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0xc))))(param_1,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00badf40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00badf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xbadf40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 0x10))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x10))))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

/* ref: FUN_00badf70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00badf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbadf70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 0x14))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x14))))(param_1);
  }
  return uVar1;
}

/* ref: FUN_00badf90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00badf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbadf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 0x1c))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(param_1);
  }
  return uVar1;
}

/* ref: FUN_00badfb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00badfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbadfb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 0x20))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x20))))(param_1);
  }
  return uVar1;
}

/* ref: FUN_00badfd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00badfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbadfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((gen_code32 *)GEN_TOP(((int)this + 0x18))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x18))))(param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bae080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bae080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbae080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x20))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_2;
  return param_1;
}

/* ref: FUN_00bae0a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bae0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbae0a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x28))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_2;
  return param_1;
}

/* ref: FUN_00bae0c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bae0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbae0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x30))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_2;
  return param_1;
}

/* ref: FUN_00bae110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bae110(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = *in_ecx + 1;
  in_ecx[2] = in_ecx[2] + param_2;
  in_ecx[5] = in_ecx[5] + param_2;
  in_ecx[7] = param_2;
  return param_2;
}

/* ref: FUN_00bae130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bae130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) + 1;
  *((int *)GEN_TOP((in_ecx + 0xc))) = *((int *)GEN_TOP((in_ecx + 0xc))) + param_2;
  *((int *)GEN_TOP((in_ecx + 0x10))) = *((int *)GEN_TOP((in_ecx + 0x10))) + param_2;
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_00bae160 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bae160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbae160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a1af40(this GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  return (uint)this;
}

/* ref: FUN_00bae1f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bae1f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c09a50(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bae220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bae220(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bae300 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bae300(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 4))) == param_2;
}

/* ref: FUN_00bae360 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bae360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbae360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00bae380 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bae380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbae380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00bae3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bae3d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00bae430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bae430(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00bae440 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bae440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbae440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00bae460 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bae460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbae460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00bae4a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bae4a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 4))) != param_2;
}

/* ref: FUN_00bae4f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bae4f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 4))) == param_2;
}

/* ref: FUN_00bae510 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bae510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 4))) != param_2;
}

/* ref: FUN_00bae540 */
GEN_OWN GEN_FRAME uint F_00bae540(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bae570 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bae570(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae5b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bae5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbae5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00bae5d0 */
GEN_OWN GEN_FRAME uint F_00bae5d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00bae5e0 */
GEN_OWN GEN_FRAME uint F_00bae5e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bae5f0 */
GEN_OWN GEN_FRAME uint F_00bae5f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00bae600 */
GEN_OWN GEN_FRAME uint F_00bae600(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00bae610 */
GEN_OWN GEN_FRAME uint F_00bae610(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00bae620 */
GEN_OWN GEN_FRAME uint F_00bae620(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00bae660 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bae660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbae660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00bae6b0 */
GEN_OWN GEN_FRAME uint F_00bae6b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bae6c0 */
GEN_OWN GEN_FRAME uint F_00bae6c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00bae6f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bae6f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae730 */
GEN_OWN GEN_FRAME uint F_00bae730(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00bae740 */
GEN_OWN GEN_FRAME uint F_00bae740(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x11;
}

/* ref: FUN_00bae750 */
GEN_OWN GEN_FRAME uint F_00bae750(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bae760 */
GEN_OWN GEN_FRAME uint F_00bae760(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00bae770 */
GEN_OWN GEN_FRAME uint F_00bae770(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00bae780 */
GEN_OWN GEN_FRAME uint F_00bae780(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00bae790 */
GEN_OWN GEN_FRAME uint F_00bae790(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x11)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x11)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00bae7b0 */
GEN_OWN GEN_FRAME uint F_00bae7b0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x11)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00bae7d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bae7d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae820 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bae820(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00bae8a0 */
GEN_OWN GEN_FRAME uint F_00bae8a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bae8d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bae8d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae8f0 */
GEN_OWN GEN_FRAME uint F_00bae8f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bae900 */
GEN_OWN GEN_FRAME uint F_00bae900(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00bae930 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bae930(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae950 */
GEN_OWN GEN_FRAME uint F_00bae950(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bae960 */
GEN_OWN GEN_FRAME uint F_00bae960(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00bae990 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bae990(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbae990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae9c0 */
GEN_OWN GEN_FRAME uint F_00bae9c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x20;
}

/* ref: FUN_00bae9d0 */
GEN_OWN GEN_FRAME uint F_00bae9d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x21;
}

/* ref: FUN_00bae9e0 */
GEN_OWN GEN_FRAME uint F_00bae9e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bae9f0 */
GEN_OWN GEN_FRAME uint F_00bae9f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbae9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00baea00 */
GEN_OWN GEN_FRAME uint F_00baea00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaea00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00baea10 */
GEN_OWN GEN_FRAME uint F_00baea10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaea10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00baea20 */
GEN_OWN GEN_FRAME uint F_00baea20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaea20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x21)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x21)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00baea40 */
GEN_OWN GEN_FRAME uint F_00baea40(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaea40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x21)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00baea80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baea80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaea80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00baeae0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00baeae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaeae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) == *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00baeb10 */
GEN_OWN GEN_FRAME uint F_00baeb10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaeb10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00baeb20 */
GEN_OWN GEN_FRAME uint F_00baeb20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaeb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x11;
}

/* ref: FUN_00baeb30 */
GEN_OWN GEN_FRAME uint F_00baeb30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaeb30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baeb40 */
GEN_OWN GEN_FRAME uint F_00baeb40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaeb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00baeb50 */
GEN_OWN GEN_FRAME uint F_00baeb50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaeb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00baeb60 */
GEN_OWN GEN_FRAME uint F_00baeb60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaeb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00baeb70 */
GEN_OWN GEN_FRAME uint F_00baeb70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaeb70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x11)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x11)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00baeb90 */
GEN_OWN GEN_FRAME uint F_00baeb90(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaeb90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x11)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00baebd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baebd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaebd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00baec30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baec30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbaec30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00baec50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00baec50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaec50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00baec90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baec90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbaec90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00baecb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00baecb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaecb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00baecf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00baecf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaecf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00baed20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00baed20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaed20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00baed40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00baed40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaed40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x11))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x11))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x11)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x11)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00baedd0 */
GEN_OWN GEN_FRAME uint F_00baedd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaedd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00baede0 */
GEN_OWN GEN_FRAME uint F_00baede0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaede0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00baee10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baee10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaee10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baee60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baee60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaee60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baee70 */
GEN_OWN GEN_FRAME uint F_00baee70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaee70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00baeea0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baeea0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaeea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baef00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baef00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaef00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00baef30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baef30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaef30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baef60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baef60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaef60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00baefc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baefc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaefc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00baf000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf000(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf020 */
GEN_OWN GEN_FRAME uint F_00baf020(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00baf030 */
GEN_OWN GEN_FRAME uint F_00baf030(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00baf060 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf060(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf080 */
GEN_OWN GEN_FRAME uint F_00baf080(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00baf0b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf0b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf0d0 */
GEN_OWN GEN_FRAME uint F_00baf0d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00baf100 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf100(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf180 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf180(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00baf1b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00baf1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaf1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x21))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x21)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x21)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x21)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x21)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00baf220 */
GEN_OWN GEN_FRAME uint F_00baf220(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baf230 */
GEN_OWN GEN_FRAME uint F_00baf230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00baf260 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf260(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf280 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00baf2b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00baf2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00baf2d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00baf2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00baf2f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf2f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf2f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf300 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00baf300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbaf300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x11))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x11))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x11)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x11)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x11)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00baf350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf350(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf3a0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00baf450 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf450(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf480 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf480(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00baf510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf510(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf520 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf520(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00baf540 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf540(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf580 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf580(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf5c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf5c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00baf5f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf5f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00baf620 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00baf650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf650(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf660 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf660(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00baf680 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf680(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00baf6b0 */
GEN_OWN GEN_FRAME uint F_00baf6b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00baf6c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf6c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf6d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf6d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf6d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf6e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf6e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf6f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 8))) = *((int *)GEN_TOP((in_ecx + 8))) + param_2;
  return in_ecx;
}

/* ref: FUN_00baf700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf700(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf710(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf790 */
GEN_OWN GEN_FRAME uint F_00baf790(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baf7f0 */
GEN_OWN GEN_FRAME uint F_00baf7f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

