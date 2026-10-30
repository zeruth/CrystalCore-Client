#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00b4a3c0 */
GEN_OWN GEN_FRAME uint F_00b4a3c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x21;
}

/* ref: FUN_00b4a3d0 */
GEN_OWN GEN_FRAME uint F_00b4a3d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a3e0 */
GEN_OWN GEN_FRAME uint F_00b4a3e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00b4a3f0 */
GEN_OWN GEN_FRAME uint F_00b4a3f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00b4a400 */
GEN_OWN GEN_FRAME uint F_00b4a400(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00b4a410 */
GEN_OWN GEN_FRAME uint F_00b4a410(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a410u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00b4a430 */
GEN_OWN GEN_FRAME uint F_00b4a430(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a430u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00b4a470 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b4a470(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4a470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00b4a4b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b4a4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4a4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x31))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x31))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x31)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x31)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x31)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x31)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00b4a510 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b4a510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4a510u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00b4a570 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b4a570(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4a570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x38,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00b4a5a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b4a5a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4a5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00b4a5f0 */
GEN_OWN GEN_FRAME uint F_00b4a5f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a600 */
GEN_OWN GEN_FRAME uint F_00b4a600(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a610 */
GEN_OWN GEN_FRAME uint F_00b4a610(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a630 */
GEN_OWN GEN_FRAME uint F_00b4a630(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a690 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4a690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4a690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x31))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x31))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x31))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x31))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x31)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x31)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x31))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00b4a6f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4a6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4a6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x21))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x21))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x21))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x21)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x21)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x21))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00b4a750 */
GEN_OWN GEN_FRAME uint F_00b4a750(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a760 */
GEN_OWN GEN_FRAME uint F_00b4a760(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a770 */
GEN_OWN GEN_FRAME uint F_00b4a770(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a780 */
GEN_OWN GEN_FRAME uint F_00b4a780(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a790 */
GEN_OWN GEN_FRAME uint F_00b4a790(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4a7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4a7a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4a7c0 */
GEN_OWN GEN_FRAME uint F_00b4a7c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a7d0 */
GEN_OWN GEN_FRAME uint F_00b4a7d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4a840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4a840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2[5];
  return (uint)this;
}

/* ref: FUN_00b4a880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4a880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4a880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4a8a0 */
GEN_OWN GEN_FRAME uint F_00b4a8a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a8b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4a8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4a8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4a8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4a8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4a8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4a8f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4a8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4a8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00b4a930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4a930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4a930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b4a950 */
GEN_OWN GEN_FRAME uint F_00b4a950(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4a950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4a960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4a960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4a960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2[5];
  return (uint)this;
}

/* ref: FUN_00b4a9a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4a9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4a9a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4a9d0 */
GEN_OWN GEN_FRAME uint F_00b4a9d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4a9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00b4a9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4a9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4a9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0xa70)));
  uVar1 = param_1;
  if (*((char *)GEN_TOP(((int)this_00 + 0x18))) != '\0') {
    uVar1 = F_004f8b30(this_00 GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_00b4aa00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4aa00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4aa00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004f8900(*((undefined * PTR32 *)GEN_TOP(((int)this + param_2 * 4 + 0xa70))) GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: FUN_00b4aa20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b4aa20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4aa20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00b4aa70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4aa70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4aa70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x31))) == '\0') {
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

/* ref: FUN_00b4aad0 */
GEN_OWN GEN_FRAME uint F_00b4aad0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4aad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00b4ab20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4ab20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4ab20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b4a4b0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b4ab40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4ab40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4ab40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b4a510(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b4ab50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ab50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4ab50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00b4a510(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00b4ab90 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_00b4ab90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4ab90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x31))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[4] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x31))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00b4abc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4abc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4abc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x21))) == '\0') {
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

/* ref: FUN_00b4ac20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ac20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4ac20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x21))) == '\0') {
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

/* ref: FUN_00b4ac90 */
GEN_OWN GEN_FRAME uint F_00b4ac90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4ac90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00b4acb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4acb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4acb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00b4a4b0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00b4acd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4acd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4acd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4ace0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ace0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4ace0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4ad10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ad10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4ad10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ad50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4ad50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4ad50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b4a690(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b4ad60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ad60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4ad60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ad80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ad80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4ad80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ada0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4ada0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4ada0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b4a6f0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b4adb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4adb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4adb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2[5];
  return (uint)this;
}

/* ref: FUN_00b4adf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4adf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4adf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ae10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ae10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4ae10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ae30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ae30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4ae30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4ae50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ae50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4ae50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00b4ae90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ae90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4ae90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b4aeb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4aeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4aeb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00b4aef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4aef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4aef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b4af20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4af20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4af20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b4a4b0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b4af40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4af40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4af40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b4a510(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b4af50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b4af50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4af50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x31)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00b4af50(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x38,0x2be);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x31)));
  }
  return;
}

/* ref: FUN_00b4af90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4af90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4af90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x31))) == '\0') {
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

/* ref: FUN_00b4b010 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b4b010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4b010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x21)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00b4b010(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x28,0x2be);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
  }
  return;
}

/* ref: FUN_00b4b0f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b0f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b0f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4b100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b100(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4b110 */
GEN_OWN GEN_FRAME uint F_00b4b110(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  *param_1 = *param_2;
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  param_1[4] = param_3[2];
  param_1[5] = param_3[3];
  uVar1 = param_3[5];
  param_1[6] = param_3[4];
  param_1[7] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b4b150 */
GEN_OWN GEN_FRAME uint F_00b4b150(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00b4b170 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4b170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4b170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b4a690(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b4b180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4b1a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b4b1c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4b1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4b1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b4a6f0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b4b1d0 */
GEN_OWN GEN_FRAME unsigned int F_00b4b1d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb4b1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      if (*((char *)GEN_TOP(((int)piVar4 + 0x21))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x21))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x21)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x21)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00b4b240 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b4b240(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4b240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  return;
}

/* ref: FUN_00b4b280 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b4b280(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4b280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_00b4b2b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4b2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4b2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x31)));
  while (cVar1 == '\0') {
    F_00b4af50(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x38,0x2be);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x31)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00b4b310 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4b310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4b310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
  while (cVar1 == '\0') {
    F_00b4b010(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x28,0x2be);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x21)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00b4b3f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b3f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b3f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4b400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b400(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b4b410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * local_8;
  
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = puVar5;
  if (*((char *)GEN_TOP(((int)puVar5[1] + 0x21))) == '\0') {
    uVar1 = param_2[1];
    puVar3 = ((undefined4 *)GEN_TOP(puVar5[1]));
    do {
      uVar2 = puVar3[5];
      if ((uVar1 < uVar2) || ((uVar1 <= uVar2 && (*param_2 <= (uint)puVar3[4])))) {
        if ((*((char *)GEN_TOP(((int)puVar5 + 0x21))) != '\0') &&
           ((uVar1 <= uVar2 && ((uVar1 < uVar2 || (*param_2 < (uint)puVar3[4])))))) {
          puVar5 = puVar3;
        }
        puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
        local_8 = puVar3;
      }
      else {
        puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      puVar3 = puVar4;
    } while (*((char *)GEN_TOP(((int)puVar4 + 0x21))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar5 + 0x21))) == '\0') {
    puVar3 = ((undefined4 *)GEN_TOP(*puVar5));
  }
  else {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0') {
    do {
      if (((uint)puVar3[5] < param_2[1]) ||
         (((uint)puVar3[5] <= param_2[1] && ((uint)puVar3[4] <= *param_2)))) {
        puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      else {
        puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*((char *)GEN_TOP(((int)puVar4 + 0x21))) == '\0');
  }
  *param_1 = (int)local_8;
  param_1[1] = (int)puVar5;
  return (uint)param_1;
}

/* ref: FUN_00b4b4c0 */
GEN_OWN GEN_FRAME unsigned int F_00b4b4c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b4c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00b4b1d0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00b4b4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b4e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb4b4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x38,0x2be);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x30)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x30))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x30))) == '\0') {
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x30))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x30))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x31))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x30))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x30))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x31))) == '\0') {
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
LAB_00b4b6dd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x30))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x31))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x30))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x30))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x31))) == '\0') {
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
        goto LAB_00b4b6dd;
      }
      *(undefined1 *)(piVar5 + 0xc) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x30))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x30))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x30)));
  } while( true );
}

/* ref: FUN_00b4b710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b710(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb4b710u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x28,0x2be);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x20)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x20))) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x21))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') {
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
LAB_00b4b90d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x20))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x21))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x21))) == '\0') {
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
        goto LAB_00b4b90d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x20)));
  } while( true );
}

/* ref: FUN_00b4b940 */
GEN_OWN GEN_FRAME uint F_00b4b940(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *param_3;
  uVar2 = param_3[5];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[6];
  uVar6 = param_3[7];
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    param_2[2] = param_3[2];
    param_2[3] = uVar3;
    *param_2 = uVar1;
    param_2[4] = uVar4;
    param_2[5] = uVar2;
    param_2[6] = uVar5;
    param_2[7] = uVar6;
  }
  return (uint)param_2;
}

/* ref: FUN_00b4b990 */
GEN_OWN GEN_FRAME uint F_00b4b990(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4b990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
  }
  return (uint)param_2;
}

/* ref: FUN_00b4b9c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b9c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4b9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b4b9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b9e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4b9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b4b9f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4b9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4b9f0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x31))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00b4a4b0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x31))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x31))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x31))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0xc];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0xc))) = (char)piVar3[0xc];
      *(char *)(piVar3 + 0xc) = (char)iVar1;
      goto LAB_00b4bb0a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x31))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x31))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00b4a2d0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x31))) == '\0') {
      uVar5 = F_00b4a2b0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00b4bb0a: ;
  if ((char)piVar3[0xc] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0xc] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[0xc] == '\0') {
            *(undefined1 *)(piVar6 + 0xc) = 1;
            *(undefined1 *)(piVar4 + 0xc) = 0;
            F_00b4af90(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x31))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x30))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x30))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x30))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x30))) = 1;
                *(undefined1 *)(piVar6 + 0xc) = 0;
                F_00b4aa70(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 0xc) = (char)piVar4[0xc];
              *(undefined1 *)(piVar4 + 0xc) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x30))) = 1;
              F_00b4af90(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00b4bbc8: ;
            *(undefined1 *)(piVar6 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar6[0xc] == '\0') {
            *(undefined1 *)(piVar6 + 0xc) = 1;
            *(undefined1 *)(piVar4 + 0xc) = 0;
            F_00b4aa70(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x31))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x30))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x30))) == '\x01'))
            goto LAB_00b4bbc8;
            if (*((char *)GEN_TOP((*piVar6 + 0x30))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x30))) = 1;
              *(undefined1 *)(piVar6 + 0xc) = 0;
              F_00b4af90(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 0xc) = (char)piVar4[0xc];
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x30))) = 1;
            F_00b4aa70(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0xc) = 1;
  }
  F_00429760(piVar3,0x38,0x2be);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00b4bc50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4bc50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4bc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b4bc70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4bc70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4bc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b4bc80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4bc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4bc80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x31))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[4] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x31))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00b4bcc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4bcc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb4bcc0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00b4a510(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x21))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_00b4bdda;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00b4a430(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      uVar5 = F_00b4a410(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00b4bdda: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00b4abc0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x20))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x20))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00b4ac20(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              F_00b4abc0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00b4be98: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00b4ac20(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01'))
            goto LAB_00b4be98;
            if (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00b4abc0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
            F_00b4ac20(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00429760(piVar3,0x28,0x2be);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00b4bf20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4bf20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4bf20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00b4b410(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00b4bf40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4bf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb4bf40u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00b4b2b0(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x31))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x31))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x31)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x31)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x31)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x31)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00b4b9f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00b4bfe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4bfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb4bfe0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x31))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) < (uint)puVar2[4];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) <= (uint)puVar2[4];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x31))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00b4b4e0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00b4a690(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[4] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00b4b4e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x38,0x2be);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00b4c0c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb4c0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  char cVar1;
  bool bVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  bool local_8;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x21)));
  local_8 = true;
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar2 = local_8;
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[2]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
          puVar5 = ((undefined4 *)GEN_TOP(F_00b4b710(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar3,(*(int *)&gen_args[1]))));
          *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00b4a6f0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      }
      puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[4] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        puVar5 = ((undefined4 *)GEN_TOP(F_00b4b710(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar2,puVar3,(*(int *)&gen_args[1]))));
        *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
      F_00429760((*(int *)&gen_args[1]),0x28,0x2be);
      *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      if (((uint)puVar5[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) ||
         (((uint)puVar5[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) &&
          ((uint)puVar5[4] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        local_8 = false;
        goto LAB_00b4c133;
      }
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      local_8 = true;
    }
    else {
      if ((*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) < (uint)puVar5[5]) ||
         ((*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) <= (uint)puVar5[5] &&
          (*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) <= (uint)puVar5[4])))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      local_8 = !bVar2;
      if (local_8) {
        puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      }
      else {
LAB_00b4c133: ;
        puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      }
    }
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x21)));
    puVar3 = puVar5;
    puVar5 = puVar4;
    bVar2 = local_8;
  } while( true );
}

/* ref: FUN_00b4c1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4c1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  
  puVar7 = ((undefined4 *)GEN_TOP(F_004296a0(0x38,0,0x2be)));
  *puVar7 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar7[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar7[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar7 + 0xc) = 0;
  uVar1 = param_1[4];
  uVar2 = *param_1;
  uVar3 = param_1[3];
  uVar4 = param_1[5];
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  if (puVar7 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar7[6] = param_1[2];
    puVar7[4] = uVar2;
    puVar7[7] = uVar3;
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    puVar7[10] = uVar5;
    puVar7[0xb] = uVar6;
  }
  return (uint)puVar7;
}

/* ref: FUN_00b4c260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4c260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x2be)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (puVar3 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3[4] = *param_1;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
  }
  return (uint)puVar3;
}

/* ref: FUN_00b4c2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4c2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x31))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[4] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x31))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[4] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00b4c320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb4c320u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00b4b310(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x21))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x21)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x21)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00b4bcc0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00b4c3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb4c3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00b4b410(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_00b4b1d0((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00b4c320(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00b4c420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4c420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00b4bf40(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00b4c440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4c440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00b4c320(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00b4c460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4c460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00b4c1e0(this GEN_EDX_FWD,param_2);
  F_00b4bfe0(this GEN_EDX_ARG,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_00b4c490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4c490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x2be)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (puVar3 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3[4] = *param_2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
  }
  F_00b4c0c0(this GEN_EDX_ARG,param_1,puVar3,0);
  return param_1;
}

/* ref: FUN_00b4c500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4c500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00b4bf40(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x38,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00b4c540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4c540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00b4c320(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00b4c580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4c580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00b4bf40(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x38,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00b4c5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4c5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4c5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00b4c320(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00b4c680 */
GEN_OWN GEN_FRAME uint F_00b4c680(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4c680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c49908(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00b4c6b0 */
GEN_OWN GEN_NOFRAME uint F_00b4c6b0(void)
{
  GEN_ENTER(0xb4c6b0u, 0u, 0u, 0u, 0u);
  undefined * puVar1;
  undefined4 * puVar2;
  
  if (REFG(char, 0x14c3dc8) == '\0') {
    F_00c49908(&REFG(undefined, 0x14c3148),0x104,&REFG(undefined, 0x10f04a4));
    F_00c473c8(&REFG(undefined, 0x14c3148),0x104,REFG(undefined * PTR32, 0x133a898));
    REFG(undefined4, 0x14c3168) = 0;
    puVar2 = &REFG(undefined4, 0x14c2fb8);
    puVar1 = &REFG(undefined, 0x14c3148);
    do {
      *puVar2 = puVar1;
      puVar1 = puVar1 + 0x20;
      puVar2 = puVar2 + 1;
    } while ((int)puVar1 < 0x14c3dc8);
    REFG(char, 0x14c3dc8) = '\x01';
  }
  return 0x14c2fb8;
}

/* ref: FUN_00b4c720 */
GEN_OWN GEN_NOFRAME uint F_00b4c720(void)
{
  GEN_ENTER(0xb4c720u, 0u, 0u, 0u, 0u);
  undefined * puVar1;
  undefined4 * puVar2;
  
  if (REFG(char, 0x14c4be0) == '\0') {
    F_00c49908(&REFG(undefined, 0x14c3f60),0x104,&REFG(undefined, 0x10f04a8));
    F_00c473c8(&REFG(undefined, 0x14c3f60),0x104,&REFG(undefined, 0x10f04b0));
    F_00c473c8(&REFG(undefined, 0x14c3f60),0x104,REFG(undefined * PTR32, 0x133a898));
    F_00c49908(&REFG(undefined, 0x14c3f80),0x104,&REFG(undefined, 0x10f04b4));
    F_00c473c8(&REFG(undefined, 0x14c3f80),0x104,REFG(undefined * PTR32, 0x133a898));
    F_00c49908(&REFG(undefined, 0x14c3fa0),0x104,&REFG(undefined, 0x10f04b8));
    REFG(undefined4, 0x14c3fc0) = 0;
    puVar2 = &REFG(undefined4, 0x14c3dd0);
    puVar1 = &REFG(undefined, 0x14c3f60);
    do {
      *puVar2 = puVar1;
      puVar1 = puVar1 + 0x20;
      puVar2 = puVar2 + 1;
    } while ((int)puVar1 < 0x14c4be0);
    REFG(char, 0x14c4be0) = '\x01';
  }
  return 0x14c3dd0;
}

/* ref: FUN_00b4c7e0 */
GEN_OWN_GS GEN_FRAME byte F_00b4c7e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4c7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x210, 0, 4);
  byte bVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c));
  F_0042a3f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,1);
  bVar1 = F_004f7c40(((undefined1 *)(gen_frame + 0x0)),param_2);
  F_00429fa0();
  return bVar1;
}

/* ref: FUN_00b4c840 */
GEN_OWN GEN_FRAME uint F_00b4c840(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4c840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 in_ecx;
  uint uVar1;
  
  in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  uVar1 = F_00414500(in_ecx GEN_EDX_ARG,4);
  F_004142d0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar1 + 0x14))));
  uVar1 = F_00b4c940(param_1,(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00b4c880 */
GEN_OWN GEN_FRAME uint F_00b4c880(GEN_P(wchar_t * param_1, unsigned int gen_a0), GEN_P(gen_size32 param_2, unsigned int gen_a1), GEN_P(wchar_t * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4c880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a1;)
  GEN_PIN(wchar_t * param_3 = (wchar_t *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c4a8e0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00b4c890 */
GEN_OWN GEN_FRAME uint F_00b4c890(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4c890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  short sVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  short * psVar3;
  char * pcVar4;
  
  sVar1 = *param_1;
  psVar3 = param_1;
  while (sVar1 != 0) {
    psVar3 = psVar3 + 1;
    sVar1 = *psVar3;
  }
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),*param_2);
  pcVar4 = param_2;
  if (*param_2 != '\0') {
    do {
      pcVar4 = pcVar4 + 1;
      *psVar3 = (short)(char)uVar2;
      uVar2 = CONCAT31((int3)(CONCAT22((short)(uVar2 >> 0x10),(short)(char)uVar2) >> 8),*pcVar4);
      psVar3 = psVar3 + 1;
    } while (*pcVar4 != '\0');
    *psVar3 = 0;
    return uVar2;
  }
  *psVar3 = 0;
  return 0;
}

/* ref: FUN_00b4c8d0 */
GEN_OWN GEN_FRAME unsigned int F_00b4c8d0(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(short * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4c8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a1;)
  short * psVar1;
  short * psVar2;
  short sVar3;
  
  sVar3 = *param_1;
  psVar1 = param_1;
  while (sVar3 != 0) {
    psVar1 = psVar1 + 1;
    sVar3 = *psVar1;
  }
  sVar3 = *param_2;
  if (sVar3 != 0) {
    psVar2 = psVar1;
    do {
      *psVar2 = sVar3;
      sVar3 = *((short *)GEN_TOP(((int)param_2 + (2 - (int)psVar1) + (int)psVar2)));
      psVar2 = psVar2 + 1;
    } while (sVar3 != 0);
    *psVar2 = 0;
    return 0;
  }
  *psVar1 = 0;
  return 0;
}

/* ref: FUN_00b4c930 */
GEN_OWN GEN_FRAME byte F_00b4c930(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4c930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_004f7c40(param_1,param_2);
  return bVar1;
}

/* ref: FUN_00b4c940 */
GEN_OWN_GS GEN_FRAME uint F_00b4c940(GEN_P(wchar_t * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4c940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x258, 8, 4);
  int iVar1;
  char cVar2;
  wchar_t wVar3;
  byte bVar4;
  int iVar5;
  undefined4 * puVar6;
  wchar_t * pwVar7;
  int iVar8;
  wchar_t wVar9;
  int iVar10;
  char * pcVar11;
  wchar_t * pwVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x250)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x254));
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x8)),0x104,param_1);
  iVar8 = -1;
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  iVar5 = 0;
  pwVar12 = ((wchar_t *)(gen_frame + 0x8)) + 1;
  iVar10 = 2;
  do {
    wVar9 = pwVar12[-1];
    if (wVar9 == L'\0') break;
    if (wVar9 == L'.') {
      iVar5 = 0;
      iVar8 = iVar10 - 2;
    }
    if (iVar8 != -1) {
      ((wchar_t *)(gen_frame + 0x210))[(int)(iVar5)] = wVar9;
      iVar5 = iVar5 + 1;
    }
    wVar9 = *pwVar12;
    if (wVar9 == L'\0') break;
    if (wVar9 == L'.') {
      iVar5 = 0;
      iVar8 = iVar10 - 1;
    }
    if (iVar8 != -1) {
      ((wchar_t *)(gen_frame + 0x210))[(int)(iVar5)] = wVar9;
      iVar5 = iVar5 + 1;
    }
    wVar9 = pwVar12[1];
    if (wVar9 == L'\0') break;
    if (wVar9 == L'.') {
      iVar5 = 0;
      iVar8 = iVar10;
    }
    if (iVar8 != -1) {
      ((wchar_t *)(gen_frame + 0x210))[(int)(iVar5)] = wVar9;
      iVar5 = iVar5 + 1;
    }
    wVar9 = pwVar12[2];
    if (wVar9 == L'\0') break;
    if (wVar9 == L'.') {
      iVar5 = 0;
      iVar8 = iVar10 + 1;
    }
    if (iVar8 != -1) {
      ((wchar_t *)(gen_frame + 0x210))[(int)(iVar5)] = wVar9;
      iVar5 = iVar5 + 1;
    }
    wVar9 = pwVar12[3];
    if (wVar9 == L'\0') break;
    if (wVar9 == L'.') {
      iVar5 = 0;
      iVar8 = iVar10 + 2;
    }
    if (iVar8 != -1) {
      ((wchar_t *)(gen_frame + 0x210))[(int)(iVar5)] = wVar9;
      iVar5 = iVar5 + 1;
    }
    iVar1 = iVar10 + 3;
    pwVar12 = pwVar12 + 5;
    iVar10 = iVar10 + 5;
  } while (iVar1 < 0x104);
  ((wchar_t *)(gen_frame + 0x210))[(int)(iVar5)] = L'\0';
  if (iVar8 != -1) {
    ((wchar_t *)(gen_frame + 0x8))[(int)(iVar8)] = L'\0';
    if ((param_2 < 4) && (param_2 < 5)) {
      puVar6 = ((undefined4 *)GEN_TOP(F_00b4c6b0()));
    }
    else {
      puVar6 = ((undefined4 *)GEN_TOP(F_00b4c720()));
    }
    pcVar11 = ((char *)GEN_TOP(*puVar6));
    cVar2 = *pcVar11;
    while (cVar2 != '\0') {
      pwVar12 = ((wchar_t *)(gen_frame + 0x8));
      wVar9 = ((wchar_t *)(gen_frame + 0x8))[0];
      while (wVar9 != L'\0') {
        pwVar12 = pwVar12 + 1;
        wVar9 = *pwVar12;
      }
      cVar2 = *pcVar11;
      while (cVar2 != '\0') {
        pcVar11 = pcVar11 + 1;
        *pwVar12 = (short)cVar2;
        pwVar12 = pwVar12 + 1;
        cVar2 = *pcVar11;
      }
      *pwVar12 = L'\0';
      pwVar12 = ((wchar_t *)(gen_frame + 0x8));
      wVar9 = ((wchar_t *)(gen_frame + 0x8))[0];
      while (wVar9 != L'\0') {
        pwVar12 = pwVar12 + 1;
        wVar9 = *pwVar12;
      }
      pwVar7 = pwVar12;
      if (((wchar_t *)(gen_frame + 0x210))[0] != L'\0') {
        wVar9 = ((wchar_t *)(gen_frame + 0x210))[0];
        do {
          wVar3 = *((wchar_t *)GEN_TOP(((int)((wchar_t *)(gen_frame + 0x210)) + (2 - (int)pwVar12) + (int)pwVar7)));
          *pwVar7 = wVar9;
          pwVar7 = pwVar7 + 1;
          wVar9 = wVar3;
        } while (wVar3 != L'\0');
      }
      *pwVar7 = L'\0';
      bVar4 = F_004f7c40(((wchar_t *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)));
      if (bVar4 != 0) {
        F_00c4a8e0(param_1,0x104,((wchar_t *)(gen_frame + 0x8)));
        return (*(uint *)(gen_frame + 0x0));
      }
      puVar6 = puVar6 + 1;
      ((wchar_t *)(gen_frame + 0x8))[(int)(iVar8)] = L'\0';
      pcVar11 = ((char *)GEN_TOP(*puVar6));
      cVar2 = *pcVar11;
    }
    pwVar12 = ((wchar_t *)(gen_frame + 0x8));
    wVar9 = ((wchar_t *)(gen_frame + 0x8))[0];
    while (wVar9 != L'\0') {
      pwVar12 = pwVar12 + 1;
      wVar9 = *pwVar12;
    }
    pwVar7 = pwVar12;
    if (((wchar_t *)(gen_frame + 0x210))[0] != L'\0') {
      wVar9 = ((wchar_t *)(gen_frame + 0x210))[0];
      do {
        wVar3 = *((wchar_t *)GEN_TOP(((int)((wchar_t *)(gen_frame + 0x210)) + (2 - (int)pwVar12) + (int)pwVar7)));
        *pwVar7 = wVar9;
        pwVar7 = pwVar7 + 1;
        wVar9 = wVar3;
      } while (wVar3 != L'\0');
    }
    *pwVar7 = L'\0';
    F_004f7c40(((wchar_t *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)));
  }
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00b4cbe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4cbe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4cbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20c))) = param_2;
  return param_2;
}

/* ref: FUN_00b4cc00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4cc00(GEN_P(wchar_t * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(wchar_t * param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4cc00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *(undefined1 *)(param_1 + 0x104) = param_3;
  param_1[0x106] = L'\0';
  param_1[0x107] = L'\0';
  F_00c4a8e0(param_1,0x104,param_2);
  return (uint)param_1;
}

/* ref: FUN_00b4cc40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4cc40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(wchar_t * param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4cc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  wchar_t * _Dst;
  uint uVar1;
  
  _Dst = ((wchar_t *)GEN_TOP(F_00406b90(0x210,0,0)));
  if (_Dst == ((wchar_t *)GEN_TOP(0x0))) {
    _Dst = ((wchar_t *)GEN_TOP(0x0));
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(_Dst + 0x104) = param_3;
    _Dst[0x106] = L'\0';
    _Dst[0x107] = L'\0';
    uVar1 = F_00c4a8e0(_Dst,0x104,param_2);
  }
  *(undefined4 *)(_Dst + 0x106) = *((undefined4 *)GEN_TOP((param_1 + 0x20c)));
  *((int *)GEN_TOP((param_1 + 0x210))) = *((int *)GEN_TOP((param_1 + 0x210))) + 1;
  *((wchar_t * PTR32 *)GEN_TOP((param_1 + 0x20c))) = _Dst;
  return uVar1;
}

/* ref: FUN_00b4ccf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ccf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4ccf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_1 < *((uint *)GEN_TOP(((int)this + 0x210)))) {
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x20c)));
    uVar2 = param_1;
    if (param_1 != 0) {
      do {
        uVar2 = uVar2 - 1;
        uVar1 = *((uint *)GEN_TOP((uVar1 + 0x20c)));
      } while (uVar2 != 0);
      return uVar1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00b4cd70 */
GEN_OWN GEN_FRAME int F_00b4cd70(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb4cd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar2 = param_4;
  uVar3 = param_3;
  while ((uVar3 != param_1 || (uVar2 != param_2))) {
    if (1 < uVar3) {
      uVar3 = uVar3 >> 1;
    }
    if (1 < uVar2) {
      uVar2 = uVar2 >> 1;
    }
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

/* ref: FUN_00b4cde0 */
GEN_OWN GEN_NOFRAME uint GEN_FASTCALL F_00b4cde0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4cde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (0x2250 < param_1) {
    if (param_1 < 0x3421) {
      if (param_1 == 0x3420) {
LAB_00b4ce4d: ;
        param_2 = param_2 + 3 >> 2;
      }
    }
    else if ((0x342f < param_1) && (param_1 < 0x3432)) goto LAB_00b4ce4d;
  }
  if (param_1 < 0x2251) {
    if (param_1 != 0x2250) {
      if (param_1 < 0x1452) {
        if (param_1 < 0x1450) {
          if (param_1 < 0x1442) {
            if (0x143f < param_1) goto LAB_00b4ce80;
            if ((0x112f < param_1) && (param_1 < 0x1132)) {
              return param_2;
            }
          }
          return 0;
        }
      }
      else if (param_1 != 0x2150) {
        return 0;
      }
    }
    return param_2 * 4;
  }
  if (param_1 < 0x3421) {
    if ((param_1 == 0x3420) || (param_1 == 0x2460)) {
      param_2 = param_2 * 4;
LAB_00b4ce80: ;
      return param_2 * 2;
    }
    if (param_1 != 0x2470) {
      return 0;
    }
  }
  else {
    if (param_1 < 0x3430) {
      return 0;
    }
    if (0x3431 < param_1) {
      return 0;
    }
  }
  return param_2 << 4;
}

/* ref: FUN_00b4cea0 */
GEN_OWN GEN_FRAME uint GEN_FASTCALL F_00b4cea0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4cea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_3;
  if (0x2250 < param_1) {
    if (param_1 < 0x3421) {
      if (param_1 != 0x3420) {
        if (param_1 != 0x2460) {
          uVar1 = F_00b4cde0(param_1,param_2);
          return uVar1 * param_3;
        }
        goto LAB_00b4cee6;
      }
    }
    else if ((param_1 < 0x3430) || (0x3431 < param_1)) goto LAB_00b4cee6;
    uVar1 = param_3 + 3 >> 2;
  }
LAB_00b4cee6: ;
  uVar2 = F_00b4cde0(param_1,param_2);
  return uVar2 * uVar1;
}

/* ref: FUN_00b4cf00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4cf00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4cf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f0504));
  in_ecx[2] = param_2 + 0x50;
  return (uint)in_ecx;
}

/* ref: FUN_00b4cf20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4cf20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4cf20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: FUN_00b4cf40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b4cf40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4cf40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f0504));
  return;
}

/* ref: FUN_00b4cf50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4cf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4cf50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ushort uVar1;
  
  uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8)));
  if (1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) < (int)(uint)uVar1) {
    return (uint)(uVar1 >> GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
  }
  return 1;
}

/* ref: FUN_00b4cf80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4cf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4cf80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ushort uVar1;
  
  uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 10)));
  if (1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) < (int)(uint)uVar1) {
    return (uint)(uVar1 >> GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
  }
  return 1;
}

/* ref: FUN_00b4cfb0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00b4cfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4cfb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ushort uVar1;
  
  uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0xc)));
  if (1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) < (int)(uint)uVar1) {
    return uVar1 >> GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  }
  return 1;
}

/* ref: FUN_00b4d000 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_00b4d000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4d000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0xe)));
}

/* ref: FUN_00b4d010 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00b4d010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x10 + param_2 * 4)));
}

/* ref: FUN_00b4d030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x1c + param_2 * 4)));
}

/* ref: FUN_00b4d050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  if (iVar3 < (int)(uint)*((ushort *)GEN_TOP((iVar1 + 8)))) {
    uVar2 = (uint)(*((ushort *)GEN_TOP((iVar1 + 8))) >> GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
  }
  else {
    uVar2 = 1;
  }
  if (iVar3 < (int)(uint)*((ushort *)GEN_TOP((iVar1 + 10)))) {
    uVar4 = (uint)(*((ushort *)GEN_TOP((iVar1 + 10))) >> GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
  }
  else {
    uVar4 = 1;
  }
  iVar1 = *((int *)GEN_TOP((iVar1 + 4)));
  if (0x2250 < iVar1) {
    if (iVar1 < 0x3421) {
      if (iVar1 != 0x3420) {
        if (iVar1 != 0x2460) {
          uVar2 = F_00b4cde0(iVar1,uVar2);
          return uVar2 * uVar4;
        }
        goto LAB_00b4d0d4;
      }
    }
    else if ((iVar1 < 0x3430) || (0x3431 < iVar1)) goto LAB_00b4d0d4;
    uVar4 = uVar4 + 3 >> 2;
  }
LAB_00b4d0d4: ;
  uVar2 = F_00b4cde0(iVar1,uVar2);
  return uVar2 * uVar4;
}

/* ref: FUN_00b4d0f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint * puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  
  puVar1 = *((uint * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar3 = (byte)param_1;
  iVar4 = 1 << GEN_SHC(bVar3, bVar3);
  if (iVar4 < (int)(uint)(ushort)puVar1[2]) {
    local_8 = (uint)(ushort)((ushort)puVar1[2] >> GEN_SHC(bVar3, bVar3));
  }
  else {
    local_8 = 1;
  }
  if (iVar4 < (int)(uint)*((ushort *)GEN_TOP(((int)puVar1 + 10)))) {
    uVar5 = (uint)(*((ushort *)GEN_TOP(((int)puVar1 + 10))) >> GEN_SHC(bVar3, bVar3));
  }
  else {
    uVar5 = 1;
  }
  if (iVar4 < (int)(uint)(ushort)puVar1[3]) {
    uVar6 = (uint)(ushort)((ushort)puVar1[3] >> GEN_SHC(bVar3, bVar3));
  }
  else {
    uVar6 = 1;
  }
  uVar2 = puVar1[1];
  if (0x2250 < (int)uVar2) {
    if ((int)uVar2 < 0x3421) {
      if (uVar2 != 0x3420) goto LAB_00b4d168;
    }
    else if (((int)uVar2 < 0x3430) || (0x3431 < (int)uVar2)) goto LAB_00b4d168;
    uVar5 = uVar5 + 3 >> 2;
  }
LAB_00b4d168: ;
  uVar2 = F_00b4cde0(uVar2,local_8);
  uVar2 = uVar2 * uVar5;
  uVar5 = *puVar1 & 0x3c00000;
  if (uVar5 == 0x800000) {
    return uVar2;
  }
  iVar4 = param_1;
  if (uVar5 == 0x1000000) {
    while (iVar4 != 0) {
      iVar4 = iVar4 - 1;
      if (1 < uVar6) {
        uVar6 = uVar6 >> 1;
      }
    }
    return uVar6 * uVar2;
  }
  if (uVar5 == 0x2000000) {
    return uVar2 * 6;
  }
  return 0xffffffff;
}

/* ref: FUN_00b4d200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d200(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x1c + param_2 * 4))) - 0x50;
}

/* ref: FUN_00b4d220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x1c + param_2 * 4))) - 0x50;
}

/* ref: FUN_00b4d240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4d240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *((int *)GEN_TOP((iVar2 + 0x1c + param_1 * 4)));
  bVar5 = (byte)param_1;
  iVar4 = 1 << GEN_SHC(bVar5, bVar5);
  if (iVar4 < (int)(uint)*((ushort *)GEN_TOP((iVar2 + 8)))) {
    uVar6 = (uint)(*((ushort *)GEN_TOP((iVar2 + 8))) >> GEN_SHC(bVar5, bVar5));
  }
  else {
    uVar6 = 1;
  }
  uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 10)));
  if (iVar4 < (int)(uint)uVar1) {
    uVar7 = (uint)(uVar1 >> GEN_SHC(bVar5, bVar5));
  }
  else {
    uVar7 = 1;
  }
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  if (0x2250 < iVar2) {
    if (iVar2 < 0x3421) {
      if (iVar2 != 0x3420) goto LAB_00b4d2b1;
    }
    else if ((iVar2 < 0x3430) || (0x3431 < iVar2)) goto LAB_00b4d2b1;
    uVar7 = uVar7 + 3 >> 2;
  }
LAB_00b4d2b1: ;
  uVar6 = F_00b4cde0(iVar2,uVar6);
  return uVar6 * uVar7 * param_2 + iVar3 - 0x50;
}

/* ref: FUN_00b4d2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4d2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *((int *)GEN_TOP((iVar2 + 0x1c + param_1 * 4)));
  bVar5 = (byte)param_1;
  iVar4 = 1 << GEN_SHC(bVar5, bVar5);
  if (iVar4 < (int)(uint)*((ushort *)GEN_TOP((iVar2 + 8)))) {
    uVar6 = (uint)(*((ushort *)GEN_TOP((iVar2 + 8))) >> GEN_SHC(bVar5, bVar5));
  }
  else {
    uVar6 = 1;
  }
  uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 10)));
  if (iVar4 < (int)(uint)uVar1) {
    uVar7 = (uint)(uVar1 >> GEN_SHC(bVar5, bVar5));
  }
  else {
    uVar7 = 1;
  }
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  if (0x2250 < iVar2) {
    if (iVar2 < 0x3421) {
      if (iVar2 != 0x3420) goto LAB_00b4d351;
    }
    else if ((iVar2 < 0x3430) || (0x3431 < iVar2)) goto LAB_00b4d351;
    uVar7 = uVar7 + 3 >> 2;
  }
LAB_00b4d351: ;
  uVar6 = F_00b4cde0(iVar2,uVar6);
  return uVar6 * uVar7 * param_2 + iVar3 - 0x50;
}

/* ref: FUN_00b4d380 */
GEN_OWN GEN_FRAME uint F_00b4d380(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4d380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (param_1[1] != 0) {
    F_00406810(param_1[1]);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,1);
  return uVar1;
}

/* ref: FUN_00b4d3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined2 *)GEN_TOP(((int)this + 8))) = *(undefined2 *)(param_1 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP(((int)param_1 + 10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0xe)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x12)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x16)));
  return 0x1a;
}

/* ref: FUN_00b4d420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xc)));
  return (uint)param_2;
}

/* ref: FUN_00b4d440 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4d440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4d440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    for (uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0xc))); uVar2 != 0; uVar2 = uVar2 - 1) {
      iVar1 = *((int *)GEN_TOP((iVar3 + 0xc + *((int *)GEN_TOP(((int)this + 0x14))))));
      if (iVar1 != 0) {
        F_00406b30(iVar1);
        *((undefined4 *)GEN_TOP((iVar3 + 0xc + *((int *)GEN_TOP(((int)this + 0x14)))))) = 0;
      }
      iVar3 = iVar3 + 0x10;
    }
    if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
      F_00406b30(*((int *)GEN_TOP(((int)this + 0x14))));
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    }
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar4 = F_00406b30(*((int *)GEN_TOP(((int)this + 0x10))));
    uVar2 = (uint)uVar4;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00b4d4c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b4d4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  int iVar2;
  int * piVar3;
  byte * pbVar4;
  
  uVar1 = param_1[1];
  if (*param_1 != 0x736b6c70) {
    return 0;
  }
  if (uVar1 < 0x31323031) {
    if (uVar1 != 0x31323030) {
      if ((uVar1 != 0x31303030) && (uVar1 != 0x31313030)) {
        return 1;
      }
      piVar3 = param_1;
      pbVar4 = ((byte *)(gen_frame + 0x0));
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 - 1) {
        *(int *)pbVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        pbVar4 = pbVar4 + 4;
      }
      *(undefined4 *)this = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
      *((undefined4 *)GEN_TOP(((int)this + 4))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
      *((undefined4 *)GEN_TOP(((int)this + 8))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12));
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20));
      *((undefined4 *)GEN_TOP(((int)this + 0x18))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24));
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
      return 1;
    }
  }
  else if (uVar1 != 0x31333030) {
    return 1;
  }
  piVar3 = param_1;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
    *(int *)this = *piVar3;
    piVar3 = piVar3 + 1;
    this = ((int *)GEN_TOP(((int)this + 4)));
  }
  return 1;
}

/* ref: FUN_00b4d560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d560(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_2;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 - 1) {
    *in_ecx = *puVar2;
    puVar2 = puVar2 + 1;
    in_ecx = in_ecx + 1;
  }
  return 0x38;
}

/* ref: FUN_00b4d580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4d580(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4d580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0x66706970;
  in_ecx[1] = 0x1000000;
  *(undefined2 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b4d5d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4d5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4d5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *(undefined4 *)this = 0x677a64;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x2000400;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x200000;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x10))),0,0x40);
  return (uint)this;
}

/* ref: FUN_00b4d610 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4d610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4d610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*((char *)GEN_TOP(((int)this + 0xf))) != '\0') {
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + uVar1 * 4))) != 0) {
        F_00406b30(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + uVar1 * 4))));
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + uVar1 * 4))) = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *((byte *)GEN_TOP(((int)this + 0xf))));
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x50))) != 0) {
    uVar2 = F_00406b30(*((int *)GEN_TOP(((int)this + 0x50))));
    uVar1 = (uint)uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b4d670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint local_c;
  uint local_8;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined2 *)GEN_TOP(((int)this + 8))) = *(undefined2 *)(param_1 + 2);
  *((undefined2 *)GEN_TOP(((int)this + 10))) = *((undefined2 *)GEN_TOP(((int)param_1 + 10)));
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = *(undefined2 *)(param_1 + 3);
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0xe)));
  *((undefined1 *)GEN_TOP(((int)this + 0xf))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0xf)));
  bVar1 = *((byte *)GEN_TOP(((int)this + 0xf)));
  puVar4 = param_1 + 4;
  puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x10)));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_8 = 0x50;
  uVar2 = F_00406bb0((uint)bVar1 * 4,0,0);
  *((uint *)GEN_TOP(((int)this + 0x50))) = uVar2;
  local_c = 0;
  if (*((char *)GEN_TOP(((int)this + 0xf))) != '\0') {
    param_1 = param_1 + 0x14;
    do {
      uVar2 = F_00406bb0(0x100,0,0);
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + local_c * 4))) = uVar2;
      local_8 = local_8 + 0x100;
      puVar4 = param_1;
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + local_c * 4)));
      for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_c = local_c + 1;
      param_1 = param_1 + 0x40;
    } while (local_c < *((byte *)GEN_TOP(((int)this + 0xf))));
  }
  return local_8;
}

/* ref: FUN_00b4d7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4d7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  return 0x14;
}

/* ref: FUN_00b4d7f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4d7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4d7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c472af(param_1,param_2,((char *)REFP(0x10f04ec)),(uint)*((byte *)GEN_TOP(((int)this + 0x13))),
                     (uint)*((byte *)GEN_TOP(((int)this + 0x12))),(uint)*((byte *)GEN_TOP(((int)this + 0x11))),
                     (uint)*((byte *)GEN_TOP(((int)this + 0x10))));
  return uVar1;
}

/* ref: FUN_00b4d820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4d820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4d820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined4 *)this = 0x677a64;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x2000400;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x200000;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x10))),0,0x40);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  return (uint)this;
}

/* ref: FUN_00b4d860 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4d860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4d860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x54))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x54))));
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x58))));
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x5c))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x5c))));
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  }
  uVar1 = F_00b4d610(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00b4d8d0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b4d8d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4d8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  if ((*in_ecx == 0x677a64) && (in_ecx[1] == 0x2000400)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b4d900 */
GEN_OWN GEN_FRAME uint F_00b4d900(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4d900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b4d910 */
GEN_OWN GEN_FRAME float10 F_00b4d910(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xb4d910u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)param_1;
}

/* ref: FUN_00b4d920 */
GEN_OWN GEN_FRAME uint F_00b4d920(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xb4d920u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float fVar1;
  uint uVar2;
  uint uVar3;
  
  fVar1 = ABS(param_1);
  uVar3 = (uint)gen_fl2bits(param_1) >> 0x10 & 0x8000;
  if (0x47ffefff < (uint)gen_fl2bits(fVar1)) {
    return uVar3 | 0x7fff;
  }
  if ((uint)gen_fl2bits(fVar1) < 0x38800000) {
    uVar2 = ((uint)gen_fl2bits(param_1) & 0x7fffff | 0x800000) >>
            (0x71U - (char)((uint)gen_fl2bits(fVar1) >> 0x17) & 0x1f);
  }
  else {
    uVar2 = (int)gen_fl2bits(fVar1) + 0xc8000000;
  }
  return (uVar2 >> 0xd & 1) + 0xfff + uVar2 >> 0xd | uVar3;
}

/* ref: FUN_00b4d990 */
GEN_OWN GEN_FRAME float10 F_00b4d990(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4d990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  if ((short)param_1 == 0) {
    return (float10)0;
  }
  uVar3 = (uint)(short)param_1;
  fVar5 = gen_bits2f((uVar3 & 0xffff8000) << 0x10);
  uVar2 = uVar3 & 0x3ff;
  if ((param_1 & 0x7c00) != 0) {
    return ((float10)GEN_TOD(gen_bits2f((((int)uVar3 >> 10 & 0x1fU) + 0x70) * 0x800000 | uVar2 << 0xd |
                               (uint)gen_fl2bits(fVar5))));
  }
  if (uVar2 == 0) {
    return (float10)fVar5;
  }
  iVar1 = 1;
  do {
    iVar4 = iVar1;
    uVar2 = uVar2 * 2;
    iVar1 = iVar4 - 1;
  } while ((uVar2 & 0x400) == 0);
  return ((float10)GEN_TOD(gen_bits2f((uVar2 & 0x3ff) << 0xd | (iVar4 + 0x6f) * 0x800000 |
                             (uint)gen_fl2bits(fVar5))));
}

/* ref: FUN_00b4da20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4da20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4da20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_2;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *in_ecx = *puVar2;
    puVar2 = puVar2 + 1;
    in_ecx = in_ecx + 1;
  }
  return 0x48;
}

/* ref: FUN_00b4da90 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b4da90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4da90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  bVar1 = false;
  if (*((int *)GEN_TOP((in_ecx + 8))) != 0) {
    bVar1 = *((int *)GEN_TOP((in_ecx + 0xc))) == 0;
    bVar2 = *((int *)GEN_TOP((in_ecx + 0x10))) == 0;
    bVar3 = *((int *)GEN_TOP((in_ecx + 0x14))) == 0;
    bVar4 = *((int *)GEN_TOP((in_ecx + 0x18))) == 0;
    bVar5 = *((int *)GEN_TOP((in_ecx + 0x1c))) == 0;
    bVar6 = *((int *)GEN_TOP((in_ecx + 0x20))) == 0;
    bVar7 = *((int *)GEN_TOP((in_ecx + 0x24))) == 0;
    if ((*((int *)GEN_TOP((in_ecx + 0x28))) == 0) &&
       (bVar7 && (bVar6 && (bVar5 && (bVar4 && (bVar3 && (bVar2 && bVar1))))))) {
      return bVar7 && (bVar6 && (bVar5 && (bVar4 && (bVar3 && (bVar2 && bVar1)))));
    }
    bVar1 = true;
  }
  return !bVar1;
}

/* ref: FUN_00b4dbe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4dbe0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4dbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *in_ecx = *puVar2;
    puVar2 = puVar2 + 1;
    in_ecx = in_ecx + 1;
  }
  return 0x40;
}

/* ref: FUN_00b4dc00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b4dc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4dc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar5 = 0;
  iVar4 = 0;
  puVar1 = ((ushort *)GEN_TOP(((int)this + 0x22)));
  local_8 = 4;
  do {
    iVar2 = iVar2 + (uint)puVar1[-1];
    iVar4 = iVar4 + (uint)*puVar1;
    iVar5 = iVar5 + (uint)puVar1[1];
    iVar3 = iVar3 + (uint)puVar1[2];
    puVar1 = puVar1 + 4;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  if (((uint)*((ushort *)GEN_TOP(((int)this + 0x1e))) + (uint)*((ushort *)GEN_TOP(((int)this + 0x1c))) == 0) &&
     (iVar2 + iVar3 + iVar5 + iVar4 == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b4dc80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4dc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4dc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint local_8;
  
  uVar4 = 0;
  puVar2 = param_1;
  puVar6 = this;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar1 = 0x48;
  local_8 = 0x48;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x48)));
    piVar5 = ((int *)GEN_TOP(((int)this + 0xc)));
    do {
      uVar1 = local_8 + 0x40;
      puVar6 = ((undefined4 *)GEN_TOP((*piVar5 + (int)param_1)));
      puVar7 = puVar2;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
      puVar2 = puVar2 + 0x10;
      local_8 = uVar1;
    } while (uVar4 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  return uVar1;
}

/* ref: FUN_00b4dce0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b4dce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4dce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  
  bVar1 = F_00b4da90(this GEN_EDX_FWD);
  if (bVar1 != 0) {
    return 0;
  }
  iVar2 = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x48)));
  iVar3 = 8;
  do {
    bVar1 = F_00b4dc00(this_00 GEN_EDX_ARG);
    if (bVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x40)));
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return iVar2 == *((int *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_00b4dd30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b4dd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4dd30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  
  bVar1 = F_00b4da90(this GEN_EDX_FWD);
  if (bVar1 != 0) {
    return 1;
  }
  iVar2 = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x48)));
  iVar3 = 8;
  do {
    bVar1 = F_00b4dc00(this_00 GEN_EDX_ARG);
    if (bVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x40)));
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return iVar2 != *((int *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_00b4dd90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4dd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4dd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*((char *)GEN_TOP(((int)this + 0x10))) != '\0') {
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + uVar1 * 4))) != 0) {
        F_00406b30(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + uVar1 * 4))));
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + uVar1 * 4))) = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *((byte *)GEN_TOP(((int)this + 0x10))));
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    uVar2 = F_00406b30(*((int *)GEN_TOP(((int)this + 0x14))));
    uVar1 = (uint)uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b4ddf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ddf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4ddf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  puVar6 = param_1;
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = *(undefined2 *)(param_1 + 3);
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0xe)));
  *((undefined1 *)GEN_TOP(((int)this + 0xf))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0xf)));
  bVar1 = *(byte *)(param_1 + 4);
  uVar3 = 0x11;
  *((byte *)GEN_TOP(((int)this + 0x10))) = bVar1;
  param_1 = ((undefined4 *)GEN_TOP(0x11));
  if (bVar1 != 0) {
    uVar3 = F_00406bb0((uint)bVar1 * 4,0,0);
    uVar5 = 0;
    *((uint *)GEN_TOP(((int)this + 0x14))) = uVar3;
    uVar3 = (uint)param_1;
    if (*((char *)GEN_TOP(((int)this + 0x10))) != '\0') {
      puVar6 = ((undefined4 *)GEN_TOP(((int)puVar6 + 0x11)));
      do {
        uVar4 = F_00406bb0(0x10,0,0);
        uVar3 = (int)param_1 + 0x10;
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + uVar5 * 4))) = uVar4;
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + uVar5 * 4)));
        *puVar2 = *puVar6;
        puVar2[1] = puVar6[1];
        puVar2[2] = puVar6[2];
        puVar2[3] = puVar6[3];
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 4;
        param_1 = ((undefined4 *)GEN_TOP(uVar3));
      } while (uVar5 < *((byte *)GEN_TOP(((int)this + 0x10))));
    }
  }
  return uVar3;
}

/* ref: FUN_00b4deb0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b4deb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4deb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_00b4dec0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b4dec0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4dec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 9)));
}

/* ref: FUN_00b4ded0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ded0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4ded0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x20))) + param_2 * 0x18;
}

/* ref: FUN_00b4def0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b4def0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4def0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x34, 12, 4);
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint * puVar7;
  char * pcVar8;
  int iVar9;
  char cVar10;
  undefined4 * puVar11;
  uint * puVar12;
  char * pcVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30));
  bVar1 = *((byte *)GEN_TOP(((int)this + 9)));
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (bVar1 != 0) {
    puVar6 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x14)));
    do {
      bVar2 = *(byte *)(puVar6 - 1);
      (*(uint *)(gen_frame + 0x0)) = 0;
      if (bVar2 != 0) {
        puVar11 = ((undefined4 *)GEN_TOP(*puVar6));
        do {
          ((uint *)(gen_frame + 0x1c))[0] = 0;
          ((uint *)(gen_frame + 0x1c))[1] = 0;
          ((uint *)(gen_frame + 0x1c))[2] = 0;
          (*(uint *)(gen_frame + 0x28)) = 0;
          ((uint *)(gen_frame + 0xc))[0] = 0;
          ((uint *)(gen_frame + 0xc))[1] = 0;
          ((uint *)(gen_frame + 0xc))[2] = 0;
          ((uint *)(gen_frame + 0xc))[3] = 0;
          puVar7 = ((uint *)GEN_TOP(*puVar11));
          pcVar13 = ((char *)GEN_TOP(((int)puVar7 + 1)));
          if ((char)*puVar7 == '^') {
            uVar3 = *((undefined4 *)GEN_TOP(((int)puVar7 + 5)));
            ((uint *)(gen_frame + 0x1c))[0] = *((uint *)GEN_TOP(((int)puVar7 + 1)));
            ((uint *)(gen_frame + 0x1c))[1] = uVar3;
            ((uint *)(gen_frame + 0x1c))[2] = *((undefined4 *)GEN_TOP(((int)puVar7 + 9)));
            uVar5 = CONCAT31((int3)((uint)*((undefined4 *)GEN_TOP(((int)puVar7 + 9))) >> 8),
                             *((char *)GEN_TOP(((int)puVar7 + 0xf))));
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = *((undefined2 *)GEN_TOP(((int)puVar7 + 0xd)));
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = *((char *)GEN_TOP(((int)puVar7 + 0xf)));
            (*(uint *)(gen_frame + 0x28)) = (uint)*((uint3 *)GEN_TOP(((int)puVar7 + 0xd)));
            do {
              uVar4 = *puVar7;
              puVar7 = ((uint *)GEN_TOP(((int)puVar7 + 1)));
            } while ((char)uVar4 != '\0');
            pcVar13 = ((char *)GEN_TOP(((int)puVar7 + (-1 - (int)pcVar13))));
          }
          else {
            uVar5 = puVar7[1];
            ((uint *)(gen_frame + 0x1c))[0] = *puVar7;
            ((uint *)(gen_frame + 0x1c))[1] = uVar5;
            uVar5 = puVar7[3];
            ((uint *)(gen_frame + 0x1c))[2] = puVar7[2];
            (*(uint *)(gen_frame + 0x28)) = uVar5;
            do {
              uVar4 = *puVar7;
              puVar7 = ((uint *)GEN_TOP(((int)puVar7 + 1)));
            } while ((char)uVar4 != '\0');
            pcVar13 = ((char *)GEN_TOP(((int)puVar7 - (int)pcVar13)));
          }
          pcVar8 = ((char *)GEN_TOP(0x0));
          if (pcVar13 != ((char *)GEN_TOP(0x0))) {
            do {
              if (*((char *)GEN_TOP(((int)((uint *)(gen_frame + 0x1c)) + (int)pcVar8))) == '.') {
                cVar10 = '.';
              }
              else {
                cVar10 = pcVar8[param_1];
              }
              *((char *)GEN_TOP(((int)((uint *)(gen_frame + 0xc)) + (int)pcVar8))) = cVar10;
              pcVar8 = pcVar8 + 1;
            } while (pcVar8 < pcVar13);
          }
          puVar7 = ((uint *)(gen_frame + 0xc));
          puVar12 = ((uint *)(gen_frame + 0x1c));
          for (; ((char *)GEN_TOP(0x3)) < pcVar13; pcVar13 = pcVar13 - 4) {
            uVar5 = *puVar12;
            if (uVar5 != *puVar7) goto LAB_00b4e01c;
            puVar7 = puVar7 + 1;
            puVar12 = puVar12 + 1;
          }
          if (pcVar13 == ((char *)GEN_TOP(0x0))) {
LAB_00b4e0a5: ;
            return CONCAT22((short)(uVar5 >> 0x10),(undefined2)(*(uint *)(gen_frame + 0x8)));
          }
LAB_00b4e01c: ;
          uVar5 = (uint)(byte)*puVar7;
          iVar9 = (byte)*puVar12 - uVar5;
          if (iVar9 == 0) {
            if (pcVar13 < ((char *)GEN_TOP(0x2))) goto LAB_00b4e0a5;
            uVar5 = (uint)*((byte *)GEN_TOP(((int)puVar7 + 1)));
            iVar9 = *((byte *)GEN_TOP(((int)puVar12 + 1))) - uVar5;
            if (iVar9 == 0) {
              if (pcVar13 < ((char *)GEN_TOP(0x3))) goto LAB_00b4e0a5;
              uVar5 = (uint)*((byte *)GEN_TOP(((int)puVar7 + 2)));
              iVar9 = *((byte *)GEN_TOP(((int)puVar12 + 2))) - uVar5;
              if (iVar9 == 0) {
                if (pcVar13 < ((char *)GEN_TOP(0x4))) goto LAB_00b4e0a5;
                iVar9 = (uint)*((byte *)GEN_TOP(((int)puVar12 + 3))) - (uint)*((byte *)GEN_TOP(((int)puVar7 + 3)));
              }
            }
          }
          uVar5 = 0;
          if ((iVar9 >> 0x1f | 1U) == 0) goto LAB_00b4e0a5;
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
          puVar11 = puVar11 + 1;
        } while ((*(uint *)(gen_frame + 0x0)) < bVar2);
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      puVar6 = puVar6 + 6;
    } while ((*(uint *)(gen_frame + 0x8)) < bVar1);
  }
  return 0xffff;
}

/* ref: FUN_00b4e130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4e130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4e130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  return (*((int *)GEN_TOP((iVar1 + 0x1c + (uint)*((ushort *)GEN_TOP((iVar1 + 0x10))) * 4))) -
         *((int *)GEN_TOP((iVar1 + 0x1c + (uint)*((ushort *)GEN_TOP((iVar1 + 0x10 + param_2 * 4))) * 4)))) + param_1;
}

/* ref: FUN_00b4e160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4e160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4e160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x1c + param_1 * 4))) - 0x50 + *((int *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_00b4e180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4e180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4e180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x1c + param_1 * 4))) - 0x50 + *((int *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_00b4e1a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4e1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4e1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x1c + param_1 * 4)));
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  bVar4 = (byte)param_1;
  iVar6 = 1 << GEN_SHC(bVar4, bVar4);
  if (iVar6 < (int)(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8)))) {
    uVar5 = (uint)(*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) >> GEN_SHC(bVar4, bVar4));
  }
  else {
    uVar5 = 1;
  }
  uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 10)));
  if (iVar6 < (int)(uint)uVar1) {
    uVar7 = (uint)(uVar1 >> GEN_SHC(bVar4, bVar4));
  }
  else {
    uVar7 = 1;
  }
  iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  if (0x2250 < iVar6) {
    if (iVar6 < 0x3421) {
      if (iVar6 != 0x3420) goto LAB_00b4e230;
    }
    else if ((iVar6 < 0x3430) || (0x3431 < iVar6)) goto LAB_00b4e230;
    uVar7 = uVar7 + 3 >> 2;
  }
LAB_00b4e230: ;
  uVar5 = F_00b4cde0(iVar6,uVar5);
  return uVar5 * uVar7 * param_2 + iVar2 - 0x50 + iVar3;
}

/* ref: FUN_00b4e250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4e250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4e250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x1c + param_1 * 4)));
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  bVar4 = (byte)param_1;
  iVar6 = 1 << GEN_SHC(bVar4, bVar4);
  if (iVar6 < (int)(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8)))) {
    uVar5 = (uint)(*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) >> GEN_SHC(bVar4, bVar4));
  }
  else {
    uVar5 = 1;
  }
  uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 10)));
  if (iVar6 < (int)(uint)uVar1) {
    uVar7 = (uint)(uVar1 >> GEN_SHC(bVar4, bVar4));
  }
  else {
    uVar7 = 1;
  }
  iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  if (0x2250 < iVar6) {
    if (iVar6 < 0x3421) {
      if (iVar6 != 0x3420) goto LAB_00b4e2e0;
    }
    else if ((iVar6 < 0x3430) || (0x3431 < iVar6)) goto LAB_00b4e2e0;
    uVar7 = uVar7 + 3 >> 2;
  }
LAB_00b4e2e0: ;
  uVar5 = F_00b4cde0(iVar6,uVar5);
  return uVar5 * uVar7 * param_2 + iVar2 - 0x50 + iVar3;
}

/* ref: FUN_00b4e350 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b4e350(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4e350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  return *in_ecx != 0x6c627470;
}

/* ref: FUN_00b4e360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4e360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4e360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  uVar1 = param_1[7];
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if (uVar1 != 0) {
    uVar1 = F_00406bb0(-(uint)((int)((ulonglong)uVar1 * 0xc >> 0x20) != 0) |
                         (uint)((ulonglong)uVar1 * 0xc),0,0);
    *((uint *)GEN_TOP(((int)this + 0x20))) = uVar1;
    F_00c46aa0(uVar1,param_1[8],*((int *)GEN_TOP(((int)this + 0x1c))) * 0xc);
  }
  return (uint)this;
}

/* ref: FUN_00b4e3f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4e3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4e3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  longlong lVar1;
  uint uVar2;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x20))));
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  if (*((uint *)GEN_TOP(((int)this + 0x1c))) != 0) {
    lVar1 = (ulonglong)*((uint *)GEN_TOP(((int)this + 0x1c))) * 0xc;
    uVar2 = F_00406bb0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,0);
    *((uint *)GEN_TOP(((int)this + 0x20))) = uVar2;
    F_00c46aa0(uVar2,param_1[8],*((int *)GEN_TOP(((int)this + 0x1c))) * 0xc);
  }
  return (uint)this;
}

/* ref: FUN_00b4e490 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b4e490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4e490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  code * pcVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  pcVar1 = ((code *)GEN_TOP(*param_1));
  *(gen_code32 *)this = pcVar1;
  iVar2 = param_1[1];
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  if (pcVar1 != ((code *)REFP(0x667370))) {
    return 0;
  }
  if (iVar2 == 0x2000000) {
    *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1[3];
    *((int *)GEN_TOP(((int)this + 0x10))) = param_1[4];
    *((int *)GEN_TOP(((int)this + 0x14))) = param_1[5];
    *((int *)GEN_TOP(((int)this + 0x18))) = param_1[6];
    uVar4 = param_1[7];
    *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar4;
    lVar3 = (ulonglong)uVar4 * 0xc;
    uVar4 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
    *((uint *)GEN_TOP(((int)this + 0x20))) = uVar4;
    F_00c46aa0(uVar4,param_1 + 8,*((int *)GEN_TOP(((int)this + 0x1c))) * 0xc);
  }
  return 1;
}

/* ref: FUN_00b4e590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4e590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4e590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar2 = F_00b4d670(this GEN_EDX_FWD,param_1);
  uVar1 = *((ushort *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    uVar3 = F_00406bb0((uint)uVar1 * 0x14,0,0);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      iVar6 = uVar1 - 1;
      if (-1 < iVar6) {
        puVar4 = ((undefined4 *)GEN_TOP((uVar3 + 0x10)));
        do {
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4[-2] = 0;
          puVar4[-3] = 0;
          puVar4[-4] = 0;
          puVar4 = puVar4 + 5;
          iVar6 = iVar6 - 1;
        } while (-1 < iVar6);
      }
    }
    iVar6 = (uint)*((ushort *)GEN_TOP(((int)this + 8))) * 0x14;
    *((uint *)GEN_TOP(((int)this + 0x54))) = uVar3;
    F_00c46aa0(uVar3,uVar2 + param_1,iVar6);
    uVar2 = uVar2 + (uint)*((ushort *)GEN_TOP(((int)this + 8))) * 0x14;
  }
  uVar1 = *((ushort *)GEN_TOP(((int)this + 10)));
  if (uVar1 != 0) {
    uVar3 = F_00406bb0((uint)uVar1 * 0x14,0,0);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      iVar5 = uVar1 - 1;
      if (-1 < iVar5) {
        puVar4 = ((undefined4 *)GEN_TOP((uVar3 + 0x10)));
        do {
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4[-2] = 0;
          puVar4[-3] = 0;
          puVar4[-4] = 0;
          puVar4 = puVar4 + 5;
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
      }
    }
    iVar5 = (uint)*((ushort *)GEN_TOP(((int)this + 10))) * 0x14;
    iVar6 = iVar6 + iVar5;
    *((uint *)GEN_TOP(((int)this + 0x58))) = uVar3;
    F_00c46aa0(uVar3,uVar2 + param_1,iVar5);
    uVar2 = uVar2 + (uint)*((ushort *)GEN_TOP(((int)this + 10))) * 0x14;
  }
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0xc)));
  if (uVar1 == 0) {
    *param_2 = iVar6;
    return uVar2;
  }
  uVar3 = F_00406bb0((uint)uVar1 * 0x14,0,0);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    iVar5 = uVar1 - 1;
    if (-1 < iVar5) {
      puVar4 = ((undefined4 *)GEN_TOP((uVar3 + 0x10)));
      do {
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[-2] = 0;
        puVar4[-3] = 0;
        puVar4[-4] = 0;
        puVar4 = puVar4 + 5;
        iVar5 = iVar5 - 1;
      } while (-1 < iVar5);
    }
  }
  iVar5 = (uint)*((ushort *)GEN_TOP(((int)this + 0xc))) * 0x14;
  *((uint *)GEN_TOP(((int)this + 0x5c))) = uVar3;
  F_00c46aa0(uVar3,uVar2 + param_1,iVar5);
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0xc)));
  *param_2 = iVar6 + iVar5;
  return uVar2 + (uint)uVar1 * 0x14;
}

/* ref: FUN_00b4e7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4e7c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb4e7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)REFG(double, 0x1088108);
  *((float *)GEN_TOP(param_2)) =
       ((float)GEN_TOF((((float10)*((float *)GEN_TOP((in_ecx + 0x10))) - (float10)*((float *)GEN_TOP((in_ecx + 4)))) * fVar1 +
              (float10)*((float *)GEN_TOP((in_ecx + 4))))));
  *((float *)GEN_TOP((param_2 + 4))) =
       ((float)GEN_TOF((((float10)*((float *)GEN_TOP((in_ecx + 0x14))) - (float10)*((float *)GEN_TOP((in_ecx + 8)))) * fVar1 +
              (float10)*((float *)GEN_TOP((in_ecx + 8))))));
  *((float *)GEN_TOP((param_2 + 8))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0xc))) +
              ((float10)*((float *)GEN_TOP((in_ecx + 0x18))) - (float10)*((float *)GEN_TOP((in_ecx + 0xc)))) * fVar1)));
  return param_2;
}

/* ref: FUN_00b4e820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4e820(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4e820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP((in_ecx + 0x40))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x44))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x48))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x50))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x54))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x60))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 100))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x68))) = uVar1;
  *((undefined1 *)GEN_TOP((in_ecx + 0x70))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x74))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x78))) = uVar1;
  return in_ecx;
}

/* ref: FUN_00b4e870 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4e870(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4e870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0x6d6c74;
  in_ecx[1] = 0x1030000;
  *(undefined2 *)(in_ecx + 2) = 0;
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b4e8b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b4e8b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4e8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  if (((*in_ecx != 0x6d6c74) && ((char)in_ecx[2] == '\0')) && (*((char *)GEN_TOP(((int)in_ecx + 9))) == '\0'))
  {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b4e8e0 */
GEN_OWN GEN_FRAME uint F_00b4e8e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4e8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  ushort uVar1;
  int iVar2;
  undefined * this;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  this = param_1;
  iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
  uVar1 = *((ushort *)GEN_TOP((iVar2 + 0x10 + param_2 * 4)));
  uVar4 = (uint)(ushort)(*((short *)GEN_TOP((iVar2 + 0xe))) - uVar1);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  bVar3 = (byte)uVar1;
  iVar5 = 1 << GEN_SHC(bVar3, bVar3);
  if (iVar5 < (int)(uint)*((ushort *)GEN_TOP((iVar2 + 10)))) {
    param_1 = ((undefined *)GEN_TOP((uint)(*((ushort *)GEN_TOP((iVar2 + 10))) >> GEN_SHC(bVar3, bVar3))));
  }
  else {
    param_1 = ((undefined *)GEN_TOP(0x1));
  }
  if (iVar5 < (int)(uint)*((ushort *)GEN_TOP((iVar2 + 8)))) {
    uVar6 = (uint)(*((ushort *)GEN_TOP((iVar2 + 8))) >> GEN_SHC(bVar3, bVar3));
  }
  else {
    uVar6 = 1;
  }
  (*(uint *)(gen_frame + 0xc)) = uVar6;
  (*(uint *)(gen_frame + 0x10)) = (uint)param_1;
  this_00 = ((undefined *)GEN_TOP(F_004dca20(&(*(uint *)(gen_frame + 0xc)),uVar4,*((undefined4 *)GEN_TOP((iVar2 + 4))),0x4000004,0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    if ((param_3 != '\0') && (uVar4 = 0, (*(uint *)(gen_frame + 0x18)) != 0)) {
      param_1 = ((undefined *)GEN_TOP(((uint)uVar1 * 4 + 0x1c)));
      do {
        (*(int *)(gen_frame + 0x14)) = *((int *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 4)))))) - 0x50 + *((int *)GEN_TOP(((int)this + 8)))
        ;
        F_004d6dd0(this_00 GEN_EDX_ARG,uVar4,((byte *)(gen_frame + 0x0)),2);
        uVar6 = F_00b4d050(this GEN_EDX_ARG,uVar1 + uVar4);
        F_00c46aa0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(int *)(gen_frame + 0x14)),uVar6);
        F_004d6e60(this_00 GEN_EDX_ARG,uVar4);
        param_1 = ((undefined *)GEN_TOP(((int)param_1 + 4)));
        uVar4 = uVar4 + 1;
      } while (uVar4 < (*(uint *)(gen_frame + 0x18)));
    }
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_00b4e9f0 */
GEN_OWN GEN_FRAME uint F_00b4e9f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4e9f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined * this;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
  uVar1 = *((ushort *)GEN_TOP((iVar2 + 0x10 + param_2 * 4)));
  uVar5 = (uint)(ushort)(*((short *)GEN_TOP((iVar2 + 0xe))) - uVar1);
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  bVar4 = (byte)uVar1;
  iVar3 = 1 << GEN_SHC(bVar4, bVar4);
  (*(uint *)(gen_frame + 0x14)) = (uint)uVar1;
  if (iVar3 < (int)(uint)*((ushort *)GEN_TOP((iVar2 + 10)))) {
    uVar7 = (uint)(*((ushort *)GEN_TOP((iVar2 + 10))) >> GEN_SHC(bVar4, bVar4));
  }
  else {
    uVar7 = 1;
  }
  if (iVar3 < (int)(uint)*((ushort *)GEN_TOP((iVar2 + 8)))) {
    uVar6 = (uint)(*((ushort *)GEN_TOP((iVar2 + 8))) >> GEN_SHC(bVar4, bVar4));
  }
  else {
    uVar6 = 1;
  }
  (*(uint *)(gen_frame + 0xc)) = uVar6;
  (*(uint *)(gen_frame + 0x10)) = uVar7;
  if (iVar3 < (int)(uint)*((ushort *)GEN_TOP((iVar2 + 0xc)))) {
    param_2 = (uint)(*((ushort *)GEN_TOP((iVar2 + 0xc))) >> GEN_SHC(bVar4, bVar4));
  }
  else {
    param_2 = 1;
  }
  this = ((undefined *)GEN_TOP(F_004dca90(&(*(uint *)(gen_frame + 0xc)),param_2,uVar5,*((undefined4 *)GEN_TOP((iVar2 + 4))),0x4000004,0)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    if ((param_3 != '\0') && (uVar6 = 0, uVar7 = (*(uint *)(gen_frame + 0x14)), uVar5 != 0)) {
      do {
        uVar5 = F_00b4e1a0(param_1 GEN_EDX_ARG,uVar7,0);
        (*(uint *)(gen_frame + 0x14)) = uVar5;
        F_004d9de0(this GEN_EDX_ARG,uVar6,((byte *)(gen_frame + 0x0)),2);
        uVar5 = F_00b4d050(param_1 GEN_EDX_ARG,uVar7);
        F_00c46aa0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(uint *)(gen_frame + 0x14)),uVar5 * param_2);
        if (1 < (ushort)param_2) {
          param_2 = (uint)((ushort)param_2 >> 1);
        }
        F_004d9ed0(this GEN_EDX_ARG,uVar6);
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar6 < (*(uint *)(gen_frame + 0x18)));
    }
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00b4eb20 */
GEN_OWN GEN_FRAME uint F_00b4eb20(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4eb20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  ushort uVar1;
  int iVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
  uVar1 = *((ushort *)GEN_TOP((iVar2 + 0x10 + param_2 * 4)));
  uVar4 = (uint)uVar1;
  uVar5 = (uint)(ushort)(*((short *)GEN_TOP((iVar2 + 0xe))) - uVar1);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  if (1 << GEN_SHC((byte)uVar1, (unsigned int)(uintptr_t)uVar1) < (int)(uint)*((ushort *)GEN_TOP((iVar2 + 8)))) {
    uVar6 = (uint)(*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8))) >> GEN_SHC((byte)uVar1, (unsigned int)(uintptr_t)uVar1));
  }
  else {
    uVar6 = 1;
  }
  (*(uint *)(gen_frame + 0xc)) = uVar5;
  this = ((undefined *)GEN_TOP(F_004dcb00(uVar6,uVar5,*((undefined4 *)GEN_TOP((iVar2 + 4))),0x4000004,0)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    if ((param_3 != '\0') && (uVar6 = 0, uVar5 != 0)) {
      do {
        uVar5 = 0;
        do {
          uVar3 = F_00b4e250(param_1 GEN_EDX_ARG,uVar4 + uVar6,uVar5);
          (*(uint *)(gen_frame + 0x10)) = uVar3;
          F_004d5bb0(this GEN_EDX_ARG,uVar6,uVar5,((byte *)(gen_frame + 0x0)),2);
          uVar3 = F_00b4d050(param_1 GEN_EDX_ARG,uVar4 + uVar6);
          F_00c46aa0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(uint *)(gen_frame + 0x10)),uVar3);
          F_004d5c30(this GEN_EDX_ARG,uVar6,uVar5);
          uVar5 = uVar5 + 1;
        } while (uVar5 < 6);
        uVar6 = uVar6 + 1;
        uVar4 = (*(uint *)(gen_frame + 0x14));
      } while (uVar6 < (*(uint *)(gen_frame + 0xc)));
    }
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00b4ec10 */
GEN_OWN GEN_FRAME uint F_00b4ec10(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb4ec10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  uint uVar2;
  
  (*(int * PTR32 *)(gen_frame + 0x4)) = param_1;
  iVar1 = *param_1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x10f0504));
  (*(int * PTR32 *)(gen_frame + 0x8)) = param_1 + 0x14;
  if (iVar1 == 0x800000) {
    uVar2 = F_00b4e8e0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,1);
    return uVar2;
  }
  if (iVar1 != 0x1000000) {
    if (iVar1 != 0x2000000) {
      return 0;
    }
    uVar2 = F_00b4eb20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,1);
    return uVar2;
  }
  uVar2 = F_00b4e9f0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,1);
  return uVar2;
}

/* ref: FUN_00b4ec90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4ec90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb4ec90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f0504));
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *((int *)GEN_TOP(((int)this + 8))) =
       (*((int *)GEN_TOP((param_1 + 0x1c + (uint)*((ushort *)GEN_TOP((param_1 + 0x10))) * 4))) -
       *((int *)GEN_TOP((param_1 + 0x1c + (uint)*((ushort *)GEN_TOP((param_1 + 0x10 + param_3 * 4))) * 4)))) + param_2;
  return (uint)this;
}

/* ref: FUN_00b4ecd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4ecd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4ecd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0x20706170;
  in_ecx[1] = 0x20001;
  *(undefined2 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0x65;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b4ed00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4ed00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4ed00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x28))));
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b4ed50 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b4ed50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4ed50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x38, 8, 4);
  int iVar1;
  undefined4 * puVar2;
  byte * pbVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34));
  *(undefined4 *)this = *param_1;
  iVar1 = param_1[1];
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  if (iVar1 == 0x31333030) {
    puVar2 = param_1;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
      *(undefined4 *)this = *puVar2;
      puVar2 = puVar2 + 1;
      this = ((undefined4 *)GEN_TOP(((int)this + 4)));
    }
    return 0x28;
  }
  puVar2 = param_1;
  pbVar3 = ((byte *)(gen_frame + 0x0));
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 - 1) {
    *(undefined4 *)pbVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pbVar3 = pbVar3 + 4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  *(undefined4 *)this = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  *((uint *)GEN_TOP(((int)this + 0xc))) = (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) >> 0x10;
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0xffff;
  *((uint *)GEN_TOP(((int)this + 8))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0xffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12));
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28));
  return 0x30;
}

/* ref: FUN_00b4ee00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b4ee00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4ee00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint * puVar5;
  uint * puVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined1 * puVar10;
  int iVar11;
  undefined4 * puVar12;
  uint uVar13;
  uint local_10;
  uint local_c;
  uint local_8;
  
  *(undefined1 *)this = *(undefined1 *)param_1;
  bVar1 = *((byte *)GEN_TOP(((int)param_1 + 1)));
  *((byte *)GEN_TOP(((int)this + 1))) = bVar1;
  puVar10 = ((undefined1 *)GEN_TOP(((int)param_1 + 2)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,(uint)bVar1,0x10);
  bVar1 = *((byte *)GEN_TOP(((int)this + 1)));
  *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  F_00c46aa0(uVar4,puVar10,(uint)bVar1);
  bVar2 = *(byte *)this;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,0,(uint)bVar2 * 0x38,0x10);
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    iVar11 = bVar2 - 1;
    if (-1 < iVar11) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar4 + 0x2c)));
      do {
        puVar7[-4] = 0;
        *puVar7 = 0;
        puVar7[1] = uVar3;
        *(undefined1 *)(puVar7 + 2) = 0;
        puVar7[-8] = 0;
        puVar7[-9] = 0;
        puVar7[-10] = 0;
        puVar7[-0xb] = 0;
        puVar7[-5] = 0;
        puVar7[-6] = 0;
        puVar7[-7] = 0;
        puVar7[-1] = 0;
        puVar7[-2] = 0;
        puVar7[-3] = 0;
        *((undefined2 *)GEN_TOP(((int)puVar7 + 9))) = 0;
        *((undefined1 *)GEN_TOP(((int)puVar7 + 0xb))) = 0;
        puVar7 = puVar7 + 0xe;
        iVar11 = iVar11 - 1;
      } while (-1 < iVar11);
    }
  }
  local_8 = (uint)*(byte *)this;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar4;
  param_1 = (undefined4 *)(puVar10 + bVar1);
  if (local_8 != 0) {
    iVar11 = 0;
    do {
      puVar12 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar11)));
      puVar9 = param_1 + 0xe;
      iVar11 = iVar11 + 0x38;
      local_8 = local_8 - 1;
      puVar7 = param_1;
      for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 - 1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      param_1 = puVar9;
    } while (local_8 != 0);
  }
  uVar4 = (uint)*((byte *)GEN_TOP(((int)this + 1)));
  puVar5 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                             (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,
                              -(uint)(0xfffffffb < uVar4 * 0x28) | uVar4 * 0x28 + 4,0x10)));
  if (puVar5 == ((uint *)GEN_TOP(0x0))) {
    puVar5 = ((uint *)GEN_TOP(0x0));
  }
  else {
    *puVar5 = uVar4;
    puVar5 = puVar5 + 1;
    puVar6 = puVar5;
    while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
      *(undefined1 *)(puVar6 + 8) = 0;
      puVar6[9] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6 = puVar6 + 10;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar5;
  local_10 = (uint)*((byte *)GEN_TOP(((int)this + 1)));
  if (local_10 != 0) {
    local_8 = 0;
    do {
      puVar7 = param_1;
      puVar12 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + local_8)));
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 - 1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar7 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x21)));
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x20 + local_8))) = *(undefined1 *)(param_1 + 8);
      uVar13 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x20 + local_8)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,0,uVar13 * 0x42,0x10);
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        iVar11 = uVar13 - 1;
        if (-1 < iVar11) {
          puVar12 = ((undefined4 *)GEN_TOP((uVar4 + 2)));
          do {
            *((undefined2 *)GEN_TOP(((int)puVar12 - 2))) = 0;
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12[4] = 0;
            puVar12[5] = 0;
            puVar12[6] = 0;
            puVar12[7] = 0;
            puVar12[8] = 0;
            puVar12[9] = 0;
            puVar12[10] = 0;
            puVar12[0xb] = 0;
            puVar12[0xc] = 0;
            puVar12[0xd] = 0;
            puVar12[0xe] = 0;
            puVar12[0xf] = 0;
            puVar12 = ((undefined4 *)GEN_TOP(((int)puVar12 + 0x42)));
            iVar11 = iVar11 - 1;
          } while (-1 < iVar11);
        }
      }
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x24 + local_8))) = uVar4;
      local_c = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x20 + local_8)));
      param_1 = puVar7;
      if (local_c != 0) {
        iVar11 = 0;
        do {
          puVar7 = param_1;
          puVar12 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x24 + local_8))) + iVar11)));
          for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 - 1) {
            *puVar12 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar12 = puVar12 + 1;
          }
          param_1 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x42)));
          iVar11 = iVar11 + 0x42;
          local_c = local_c - 1;
          *(undefined2 *)puVar12 = *(undefined2 *)puVar7;
        } while (local_c != 0);
      }
      local_8 = local_8 + 0x28;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  return 1;
}

/* ref: FUN_00b4f0b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b4f0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4f0b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  int iVar10;
  uint uVar11;
  undefined4 * puVar12;
  uint local_c;
  
  *(undefined1 *)this = *param_1;
  bVar1 = param_1[1];
  *((byte *)GEN_TOP(((int)this + 1))) = bVar1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,(uint)bVar1,0x10);
  bVar1 = *((byte *)GEN_TOP(((int)this + 1)));
  *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  F_00c46aa0(uVar3,param_1 + 2,(uint)bVar1);
  puVar9 = (undefined4 *)(param_1 + 2 + bVar1);
  bVar1 = *(byte *)this;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,0,(uint)bVar1 * 0x38,0x10);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    iVar10 = bVar1 - 1;
    if (-1 < iVar10) {
      puVar7 = ((undefined4 *)GEN_TOP((uVar3 + 0x2c)));
      do {
        puVar7[-4] = 0;
        *puVar7 = 0;
        puVar7[1] = uVar2;
        *(undefined1 *)(puVar7 + 2) = 0;
        puVar7[-8] = 0;
        puVar7[-9] = 0;
        puVar7[-10] = 0;
        puVar7[-0xb] = 0;
        puVar7[-5] = 0;
        puVar7[-6] = 0;
        puVar7[-7] = 0;
        puVar7[-1] = 0;
        puVar7[-2] = 0;
        puVar7[-3] = 0;
        *((undefined2 *)GEN_TOP(((int)puVar7 + 9))) = 0;
        *((undefined1 *)GEN_TOP(((int)puVar7 + 0xb))) = 0;
        puVar7 = puVar7 + 0xe;
        iVar10 = iVar10 - 1;
      } while (-1 < iVar10);
    }
  }
  uVar11 = (uint)*(byte *)this;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
  if (uVar11 != 0) {
    iVar10 = 0;
    do {
      *((undefined1 *)GEN_TOP((iVar10 + 0x34 + *((int *)GEN_TOP(((int)this + 8)))))) = *(undefined1 *)puVar9;
      *((undefined4 *)GEN_TOP((iVar10 + 0x10 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 1)));
      *((undefined4 *)GEN_TOP((iVar10 + 0x14 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 5)));
      *((undefined4 *)GEN_TOP((iVar10 + 0x18 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 9)));
      *((undefined4 *)GEN_TOP((iVar10 + 0x20 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 0xd)));
      *((undefined4 *)GEN_TOP((iVar10 + 0x24 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 0x11)))
      ;
      *((undefined4 *)GEN_TOP((iVar10 + 0x28 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 0x15)))
      ;
      *((undefined4 *)GEN_TOP((iVar10 + 0x1c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 0x19)))
      ;
      *((undefined4 *)GEN_TOP((iVar10 + 0x2c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 0x1d)))
      ;
      *((undefined4 *)GEN_TOP((iVar10 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 0x21)));
      *((undefined4 *)GEN_TOP((iVar10 + 4 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 0x25)));
      *((undefined4 *)GEN_TOP((iVar10 + 8 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 0x29)));
      *((undefined4 *)GEN_TOP((iVar10 + 0xc + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar9 + 0x2d)));
      puVar9 = ((undefined4 *)GEN_TOP(((int)puVar9 + 0x31)));
      iVar10 = iVar10 + 0x38;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar3 = (uint)*((byte *)GEN_TOP(((int)this + 1)));
  puVar4 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                             (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,
                              -(uint)(0xfffffffb < uVar3 * 0x28) | uVar3 * 0x28 + 4,0x10)));
  if (puVar4 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
    puVar5 = puVar4;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      *(undefined1 *)(puVar5 + 8) = 0;
      puVar5[9] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5 = puVar5 + 10;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar4;
  local_c = (uint)*((byte *)GEN_TOP(((int)this + 1)));
  if (local_c != 0) {
    param_1 = ((undefined1 *)GEN_TOP(0x0));
    do {
      iVar10 = (int)param_1;
      puVar7 = puVar9;
      puVar12 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + (int)param_1)));
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      *((undefined1 *)GEN_TOP(((int)param_1 + 0x20 + *((int *)GEN_TOP(((int)this + 0xc)))))) = *(undefined1 *)(puVar9 + 8)
      ;
      uVar11 = (uint)*((byte *)GEN_TOP(((int)param_1 + 0x20 + *((int *)GEN_TOP(((int)this + 0xc))))));
      puVar9 = ((undefined4 *)GEN_TOP(((int)puVar9 + 0x21)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,0,uVar11 * 0x42,0x10);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        iVar6 = uVar11 - 1;
        if (-1 < iVar6) {
          puVar7 = ((undefined4 *)GEN_TOP((uVar3 + 2)));
          do {
            *((undefined2 *)GEN_TOP(((int)puVar7 - 2))) = 0;
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = 0;
            puVar7[10] = 0;
            puVar7[0xb] = 0;
            puVar7[0xc] = 0;
            puVar7[0xd] = 0;
            puVar7[0xe] = 0;
            puVar7[0xf] = 0;
            puVar7 = ((undefined4 *)GEN_TOP(((int)puVar7 + 0x42)));
            iVar6 = iVar6 - 1;
          } while (-1 < iVar6);
        }
      }
      *((uint *)GEN_TOP(((int)param_1 + 0x24 + *((int *)GEN_TOP(((int)this + 0xc)))))) = uVar3;
      param_1 = ((undefined1 *)GEN_TOP((uint)*((byte *)GEN_TOP(((int)param_1 + 0x20 + *((int *)GEN_TOP(((int)this + 0xc))))))));
      if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
        iVar6 = 0;
        do {
          puVar7 = puVar9;
          puVar12 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar10 + 0x24 + *((int *)GEN_TOP(((int)this + 0xc)))))) + iVar6)));
          for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 - 1) {
            *puVar12 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar12 = puVar12 + 1;
          }
          puVar9 = ((undefined4 *)GEN_TOP(((int)puVar9 + 0x42)));
          iVar6 = iVar6 + 0x42;
          param_1 = ((undefined1 *)GEN_TOP(((int)param_1 - 1)));
          *(undefined2 *)puVar12 = *(undefined2 *)puVar7;
        } while (param_1 != ((undefined1 *)GEN_TOP(0x0)));
      }
      param_1 = ((undefined1 *)GEN_TOP((iVar10 + 0x28)));
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return 1;
}

/* ref: FUN_00b4f3e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b4f3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4f3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 * puVar12;
  uint local_c;
  
  *(undefined1 *)this = *param_1;
  bVar1 = param_1[1];
  *((byte *)GEN_TOP(((int)this + 1))) = bVar1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,(uint)bVar1,0x10);
  bVar1 = *((byte *)GEN_TOP(((int)this + 1)));
  *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  F_00c46aa0(uVar3,param_1 + 2,(uint)bVar1);
  puVar8 = (undefined4 *)(param_1 + 2 + bVar1);
  bVar1 = *(byte *)this;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,0,(uint)bVar1 * 0x38,0x10);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    iVar9 = bVar1 - 1;
    if (-1 < iVar9) {
      puVar6 = ((undefined4 *)GEN_TOP((uVar3 + 0x2c)));
      do {
        puVar6[-4] = 0;
        *puVar6 = 0;
        puVar6[1] = uVar2;
        *(undefined1 *)(puVar6 + 2) = 0;
        puVar6[-8] = 0;
        puVar6[-9] = 0;
        puVar6[-10] = 0;
        puVar6[-0xb] = 0;
        puVar6[-5] = 0;
        puVar6[-6] = 0;
        puVar6[-7] = 0;
        puVar6[-1] = 0;
        puVar6[-2] = 0;
        puVar6[-3] = 0;
        *((undefined2 *)GEN_TOP(((int)puVar6 + 9))) = 0;
        *((undefined1 *)GEN_TOP(((int)puVar6 + 0xb))) = 0;
        puVar6 = puVar6 + 0xe;
        iVar9 = iVar9 - 1;
      } while (-1 < iVar9);
    }
  }
  uVar10 = (uint)*(byte *)this;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
  uVar3 = 0;
  if (3 < uVar10) {
    iVar9 = 0;
    iVar11 = (uVar10 - 4 >> 2) + 1;
    uVar3 = iVar11 * 4;
    do {
      *((undefined1 *)GEN_TOP((iVar9 + 0x34 + *((int *)GEN_TOP(((int)this + 8)))))) = *(undefined1 *)puVar8;
      iVar7 = *((int *)GEN_TOP(((int)this + 8)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x10 + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0x14 + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0x18 + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0x20 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0xd)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x24 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x11)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x28 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x15)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x1c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x25)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x2c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x29)));
      *((undefined4 *)GEN_TOP((iVar9 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x2d)));
      *((undefined4 *)GEN_TOP((iVar9 + 4 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x31)));
      *((undefined4 *)GEN_TOP((iVar9 + 8 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x35)));
      *((undefined4 *)GEN_TOP((iVar9 + 0xc + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x39)));
      *((undefined1 *)GEN_TOP((iVar9 + 0x6c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined1 *)GEN_TOP(((int)puVar8 + 0x49)));
      iVar7 = *((int *)GEN_TOP(((int)this + 8)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x48 + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0x4c + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0x50 + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0x58 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x56)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x5c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x5a)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x60 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x5e)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x54 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x6e)));
      *((undefined4 *)GEN_TOP((iVar9 + 100 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x72)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x38 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x76)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x3c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x7a)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x40 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x7e)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x44 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x82)));
      *((undefined1 *)GEN_TOP((iVar9 + 0xa4 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined1 *)GEN_TOP(((int)puVar8 + 0x92)));
      puVar6 = ((undefined4 *)GEN_TOP((iVar9 + 0x80 + *((int *)GEN_TOP(((int)this + 8))))));
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0x90 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x9f)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x94 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0xa3)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x98 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0xa7)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x8c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0xb7)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x9c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0xbb)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x70 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0xbf)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x74 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0xc3)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x78 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 199)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x7c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0xcb)));
      *((undefined1 *)GEN_TOP((iVar9 + 0xdc + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined1 *)GEN_TOP(((int)puVar8 + 0xdb)));
      iVar7 = *((int *)GEN_TOP(((int)this + 8)));
      *((undefined4 *)GEN_TOP((iVar9 + 0xb8 + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0xbc + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0xc0 + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 200 + *((int *)GEN_TOP(((int)this + 8)))))) = puVar8[0x3a];
      *((undefined4 *)GEN_TOP((iVar9 + 0xcc + *((int *)GEN_TOP(((int)this + 8)))))) = puVar8[0x3b];
      *((undefined4 *)GEN_TOP((iVar9 + 0xd0 + *((int *)GEN_TOP(((int)this + 8)))))) = puVar8[0x3c];
      *((undefined4 *)GEN_TOP((iVar9 + 0xc4 + *((int *)GEN_TOP(((int)this + 8)))))) = puVar8[0x40];
      *((undefined4 *)GEN_TOP((iVar9 + 0xd4 + *((int *)GEN_TOP(((int)this + 8)))))) = puVar8[0x41];
      *((undefined4 *)GEN_TOP((iVar9 + 0xa8 + *((int *)GEN_TOP(((int)this + 8)))))) = puVar8[0x42];
      *((undefined4 *)GEN_TOP((iVar9 + 0xac + *((int *)GEN_TOP(((int)this + 8)))))) = puVar8[0x43];
      *((undefined4 *)GEN_TOP((iVar9 + 0xb0 + *((int *)GEN_TOP(((int)this + 8)))))) = puVar8[0x44];
      *((undefined4 *)GEN_TOP((iVar9 + 0xb4 + *((int *)GEN_TOP(((int)this + 8)))))) = puVar8[0x45];
      puVar8 = puVar8 + 0x49;
      iVar9 = iVar9 + 0xe0;
      iVar11 = iVar11 - 1;
    } while (iVar11 != 0);
  }
  if (uVar3 < uVar10) {
    iVar9 = uVar3 * 0x38;
    iVar11 = uVar10 - uVar3;
    do {
      *((undefined1 *)GEN_TOP((iVar9 + 0x34 + *((int *)GEN_TOP(((int)this + 8)))))) = *(undefined1 *)puVar8;
      iVar7 = *((int *)GEN_TOP(((int)this + 8)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x10 + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0x14 + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0x18 + iVar7))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0x20 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0xd)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x24 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x11)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x28 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x15)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x1c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x25)));
      *((undefined4 *)GEN_TOP((iVar9 + 0x2c + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x29)));
      *((undefined4 *)GEN_TOP((iVar9 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x2d)));
      *((undefined4 *)GEN_TOP((iVar9 + 4 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x31)));
      *((undefined4 *)GEN_TOP((iVar9 + 8 + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x35)));
      *((undefined4 *)GEN_TOP((iVar9 + 0xc + *((int *)GEN_TOP(((int)this + 8)))))) = *((undefined4 *)GEN_TOP(((int)puVar8 + 0x39)));
      puVar8 = ((undefined4 *)GEN_TOP(((int)puVar8 + 0x49)));
      iVar9 = iVar9 + 0x38;
      iVar11 = iVar11 - 1;
    } while (iVar11 != 0);
  }
  uVar3 = (uint)*((byte *)GEN_TOP(((int)this + 1)));
  puVar4 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                             (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,
                              -(uint)(0xfffffffb < uVar3 * 0x28) | uVar3 * 0x28 + 4,0x10)));
  if (puVar4 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
    puVar5 = puVar4;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      *(undefined1 *)(puVar5 + 8) = 0;
      puVar5[9] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5 = puVar5 + 10;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar4;
  local_c = (uint)*((byte *)GEN_TOP(((int)this + 1)));
  if (local_c != 0) {
    param_1 = ((undefined1 *)GEN_TOP(0x0));
    do {
      iVar9 = (int)param_1;
      puVar6 = puVar8;
      puVar12 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + (int)param_1)));
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 - 1) {
        *puVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar12 = puVar12 + 1;
      }
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x20 + (int)param_1))) = *(undefined1 *)(puVar8 + 8)
      ;
      uVar10 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x20 + (int)param_1)));
      puVar8 = ((undefined4 *)GEN_TOP(((int)puVar8 + 0x21)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,0,uVar10 * 0x42,0x10);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        iVar11 = uVar10 - 1;
        if (-1 < iVar11) {
          puVar6 = ((undefined4 *)GEN_TOP((uVar3 + 2)));
          do {
            *((undefined2 *)GEN_TOP(((int)puVar6 - 2))) = 0;
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
            puVar6[6] = 0;
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[10] = 0;
            puVar6[0xb] = 0;
            puVar6[0xc] = 0;
            puVar6[0xd] = 0;
            puVar6[0xe] = 0;
            puVar6[0xf] = 0;
            puVar6 = ((undefined4 *)GEN_TOP(((int)puVar6 + 0x42)));
            iVar11 = iVar11 - 1;
          } while (-1 < iVar11);
        }
      }
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x24 + (int)param_1))) = uVar3;
      param_1 = ((undefined1 *)GEN_TOP((uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x20 + (int)param_1)))));
      if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
        iVar11 = 0;
        do {
          *((undefined1 *)GEN_TOP((iVar11 + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x24 + iVar9)))))) =
               *(undefined1 *)puVar8;
          *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x24 + iVar9))) + 1 + iVar11))) =
               *((undefined1 *)GEN_TOP(((int)puVar8 + 1)));
          puVar6 = ((undefined4 *)GEN_TOP(((int)puVar8 + 2)));
          puVar12 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x24 + iVar9))) + 2 + iVar11)));
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 - 1) {
            *puVar12 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar12 = puVar12 + 1;
          }
          puVar12 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x24 + iVar9))) + 0x22 + iVar11)));
          puVar6 = ((undefined4 *)GEN_TOP(((int)puVar8 + 0x22)));
          puVar8 = ((undefined4 *)GEN_TOP(((int)puVar8 + 0x42)));
          iVar11 = iVar11 + 0x42;
          param_1 = ((undefined1 *)GEN_TOP(((int)param_1 - 1)));
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 - 1) {
            *puVar12 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar12 = puVar12 + 1;
          }
        } while (param_1 != ((undefined1 *)GEN_TOP(0x0)));
      }
      param_1 = ((undefined1 *)GEN_TOP((iVar9 + 0x28)));
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return 1;
}

/* ref: FUN_00b4fa10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b4fa10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb4fa10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  byte bVar1;
  
  if (0x31323030 < param_2) {
    if (param_2 != 0x31333030) {
      return 0;
    }
    bVar1 = F_00b4ee00(this GEN_EDX_FWD,param_1,0x31333000);
    return bVar1;
  }
  if (param_2 != 0x31323030) {
    if (param_2 == 0x31303030) {
      bVar1 = F_00b4f3e0(this GEN_EDX_ARG,param_1,0x31303000);
      return bVar1;
    }
    if (param_2 != 0x31313030) {
      return 0;
    }
  }
  param_2 = param_2 & 0xffffff00;
  bVar1 = F_00b4f0b0(this GEN_EDX_ARG,param_1,param_2);
  return bVar1;
}

/* ref: FUN_00b4fa80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4fa80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4fa80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 4))));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b4fab0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4fab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb4fab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x10))));
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b4fb00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4fb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4fb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  bVar1 = *(byte *)(param_1 + 2);
  *((byte *)GEN_TOP(((int)this + 8))) = bVar1;
  *((undefined1 *)GEN_TOP(((int)this + 9))) = *((undefined1 *)GEN_TOP(((int)param_1 + 9)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,0,(uint)bVar1 * 0x60,0x10);
  iVar3 = (uint)*((byte *)GEN_TOP(((int)this + 8))) * 0x60;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  F_00c46aa0(uVar2,(int)param_1 + 10,iVar3);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 9))) * 0x40,0x10);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
  F_00c46aa0(uVar2,iVar3 + (int)param_1 + 10,(uint)*((byte *)GEN_TOP(((int)this + 9))) << 6)
  ;
  return 1;
}

/* ref: FUN_00b4fbc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b4fbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4fbc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint local_8;
  
  puVar5 = param_1;
  puVar7 = this;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  if (((*(int *)this != 0x6d6c74) && (*((char *)GEN_TOP(((int)this + 8))) == '\0')) &&
     (*((char *)GEN_TOP(((int)this + 9))) == '\0')) {
    return 0;
  }
  uVar6 = (uint)*((byte *)GEN_TOP(((int)this + 9)));
  puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                             (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,
                              -(uint)(0xfffffffb < uVar6 * 0x18) | uVar6 * 0x18 + 4,0x10)));
  if (puVar1 == ((uint *)GEN_TOP(0x0))) {
    puVar1 = ((uint *)GEN_TOP(0x0));
  }
  else {
    *puVar1 = uVar6;
    puVar1 = puVar1 + 1;
    puVar2 = puVar1;
    while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0xff000000;
      *(undefined1 *)(puVar2 + 4) = 0;
      puVar2[5] = 0;
      puVar2 = puVar2 + 6;
    }
  }
  uVar6 = 0x20;
  *((uint * PTR32 *)GEN_TOP(((int)this + 0x20))) = puVar1;
  local_8 = (uint)*((byte *)GEN_TOP(((int)this + 9)));
  if (local_8 != 0) {
    iVar4 = 0;
    do {
      uVar3 = F_00b4ddf0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + iVar4))) GEN_EDX_ARG,uVar6 + (int)param_1);
      uVar6 = uVar6 + uVar3;
      iVar4 = iVar4 + 0x18;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return uVar6;
}

/* ref: FUN_00b4fcb0 */
GEN_OWN GEN_FRAME uint F_00b4fcb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4fcb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * this;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = param_2;
  param_2 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 10)));
  if (param_2 < 2) {
    param_2 = 1;
  }
  uVar3 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)));
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  uVar5 = *((uint *)GEN_TOP((param_3 + 0x18)));
  uVar4 = *((uint *)GEN_TOP((param_3 + 0x1c)));
  uVar7 = 0;
  while ((uVar5 != *((uint *)GEN_TOP((iVar1 + 0x18))) || (uVar4 != *((uint *)GEN_TOP((iVar1 + 0x1c)))))) {
    if (1 < uVar5) {
      uVar5 = uVar5 >> 1;
    }
    if (1 < uVar4) {
      uVar4 = uVar4 >> 1;
    }
    uVar7 = uVar7 + 1;
  }
  uVar5 = param_2;
  while ((uVar3 != *((uint *)GEN_TOP((iVar1 + 0x18))) || (uVar5 != *((uint *)GEN_TOP((iVar1 + 0x1c)))))) {
    if (1 < uVar3) {
      uVar3 = uVar3 >> 1;
    }
    if (1 < uVar5) {
      uVar5 = uVar5 >> 1;
    }
  }
  this = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  *((uint *)GEN_TOP(((int)this + 8))) = *((uint *)GEN_TOP(((int)this + 8))) & 0x7ffff;
  uVar3 = (uint)*((byte *)GEN_TOP((iVar1 + 0x24)));
  if (*((byte *)GEN_TOP((iVar1 + 0x24))) != 0) {
    iVar6 = 0;
    param_2 = uVar3;
    do {
      puVar2 = ((undefined4 *)GEN_TOP(F_004d4760(this GEN_EDX_ARG,0x30)));
      uVar3 = 0;
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = 8;
        puVar2[5] = param_3;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[1] = iVar1;
        puVar2[2] = iVar6;
        puVar2[6] = (uVar7 & 0xffff) + iVar6;
        uVar3 = F_004d4810(this GEN_EDX_ARG,puVar2);
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return uVar3;
}

/* ref: FUN_00b4fdc0 */
GEN_OWN GEN_FRAME uint F_00b4fdc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4fdc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * this;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = param_2;
  param_2 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 10)));
  if (param_2 < 2) {
    param_2 = 1;
  }
  uVar3 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)));
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  uVar5 = *((uint *)GEN_TOP((param_3 + 0x18)));
  uVar4 = *((uint *)GEN_TOP((param_3 + 0x1c)));
  uVar7 = 0;
  while ((uVar5 != *((uint *)GEN_TOP((iVar1 + 0x18))) || (uVar4 != *((uint *)GEN_TOP((iVar1 + 0x1c)))))) {
    if (1 < uVar5) {
      uVar5 = uVar5 >> 1;
    }
    if (1 < uVar4) {
      uVar4 = uVar4 >> 1;
    }
    uVar7 = uVar7 + 1;
  }
  uVar5 = param_2;
  while ((uVar3 != *((uint *)GEN_TOP((iVar1 + 0x18))) || (uVar5 != *((uint *)GEN_TOP((iVar1 + 0x1c)))))) {
    if (1 < uVar3) {
      uVar3 = uVar3 >> 1;
    }
    if (1 < uVar5) {
      uVar5 = uVar5 >> 1;
    }
  }
  this = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  *((uint *)GEN_TOP(((int)this + 8))) = *((uint *)GEN_TOP(((int)this + 8))) & 0x7ffff;
  uVar3 = (uint)*((byte *)GEN_TOP((iVar1 + 0x24)));
  if (*((byte *)GEN_TOP((iVar1 + 0x24))) != 0) {
    iVar6 = 0;
    param_2 = uVar3;
    do {
      puVar2 = ((undefined4 *)GEN_TOP(F_004d4760(this GEN_EDX_ARG,0x30)));
      uVar3 = 0;
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = 8;
        puVar2[5] = param_3;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[1] = iVar1;
        puVar2[2] = iVar6;
        puVar2[6] = (uVar7 & 0xffff) + iVar6;
        uVar3 = F_004d4810(this GEN_EDX_ARG,puVar2);
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return uVar3;
}

/* ref: FUN_00b4fed0 */
GEN_OWN GEN_FRAME uint F_00b4fed0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb4fed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * this;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = param_2;
  param_2 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 10)));
  if (param_2 < 2) {
    param_2 = 1;
  }
  uVar3 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)));
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  uVar5 = *((uint *)GEN_TOP((param_3 + 0x18)));
  uVar4 = *((uint *)GEN_TOP((param_3 + 0x1c)));
  uVar7 = 0;
  while ((uVar5 != *((uint *)GEN_TOP((iVar1 + 0x18))) || (uVar4 != *((uint *)GEN_TOP((iVar1 + 0x1c)))))) {
    if (1 < uVar5) {
      uVar5 = uVar5 >> 1;
    }
    if (1 < uVar4) {
      uVar4 = uVar4 >> 1;
    }
    uVar7 = uVar7 + 1;
  }
  uVar5 = param_2;
  while ((uVar3 != *((uint *)GEN_TOP((iVar1 + 0x18))) || (uVar5 != *((uint *)GEN_TOP((iVar1 + 0x1c)))))) {
    if (1 < uVar3) {
      uVar3 = uVar3 >> 1;
    }
    if (1 < uVar5) {
      uVar5 = uVar5 >> 1;
    }
  }
  this = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  *((uint *)GEN_TOP(((int)this + 8))) = *((uint *)GEN_TOP(((int)this + 8))) & 0x7ffff;
  uVar3 = (uint)*((byte *)GEN_TOP((iVar1 + 0x24)));
  if (*((byte *)GEN_TOP((iVar1 + 0x24))) != 0) {
    iVar6 = 0;
    param_2 = uVar3;
    do {
      puVar2 = ((undefined4 *)GEN_TOP(F_004d4760(this GEN_EDX_ARG,0x30)));
      uVar3 = 0;
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = 8;
        puVar2[5] = param_3;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[1] = iVar1;
        puVar2[2] = iVar6;
        puVar2[6] = (uVar7 & 0xffff) + iVar6;
        uVar3 = F_004d4810(this GEN_EDX_ARG,puVar2);
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return uVar3;
}

/* ref: FUN_00b4ffe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b4ffe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb4ffe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float10 fVar9;
  
  fVar9 = F_00b4d990((uint)param_1[1]);
  (*(float *)(gen_frame + 0x3c)) = (float)fVar9;
  fVar9 = F_00b4d990((uint)param_1[2]);
  (*(float *)(gen_frame + 0x38)) = (float)fVar9;
  fVar9 = F_00b4d990((uint)*param_1);
  *((float *)GEN_TOP(((int)this + 0x40))) = (float)fVar9;
  *((float *)GEN_TOP(((int)this + 0x44))) = (*(float *)(gen_frame + 0x3c));
  *((float *)GEN_TOP(((int)this + 0x48))) = (*(float *)(gen_frame + 0x38));
  fVar9 = F_00b4d990((uint)param_1[4]);
  (*(float *)(gen_frame + 0x38)) = (float)fVar9;
  fVar9 = F_00b4d990((uint)param_1[5]);
  (*(float *)(gen_frame + 0x3c)) = (float)fVar9;
  fVar9 = F_00b4d990((uint)param_1[6]);
  (*(float *)(gen_frame + 0x34)) = (float)fVar9;
  fVar9 = F_00b4d990((uint)param_1[3]);
  *((float *)GEN_TOP(((int)this + 0x50))) = (float)fVar9;
  *((float *)GEN_TOP(((int)this + 0x54))) = (*(float *)(gen_frame + 0x38));
  *((float *)GEN_TOP(((int)this + 0x58))) = (*(float *)(gen_frame + 0x3c));
  *((float *)GEN_TOP(((int)this + 0x5c))) = (*(float *)(gen_frame + 0x34));
  fVar9 = F_00b4d990((uint)param_1[7]);
  (*(float *)(gen_frame + 0x34)) = (float)fVar9;
  fVar9 = F_00b4d990((uint)param_1[8]);
  fVar8 = (float)fVar9;
  (*(float *)(gen_frame + 0x3c)) = fVar8;
  *((float *)GEN_TOP(((int)this + 0x68))) = fVar8;
  *((float *)GEN_TOP(((int)this + 0x60))) = fVar8;
  *((float *)GEN_TOP(((int)this + 100))) = (*(float *)(gen_frame + 0x34));
  *((char *)GEN_TOP(((int)this + 0x70))) = (char)param_1[9];
  (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)*((byte *)GEN_TOP(((int)param_1 + 0x13))));
  (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
  fVar9 = (float10)*(double *)&REFG(undefined, 0x1088100);
  (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
  (*(undefined4 *)(gen_frame + 0x28)) = uVar1;
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar2;
  *((float *)GEN_TOP(((int)this + 0x74))) = ((float)GEN_TOF(((float10)*((byte *)GEN_TOP(((int)param_1 + 0x13))) / fVar9)));
  (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)(byte)param_1[10]);
  *((float *)GEN_TOP(((int)this + 0x78))) = (float)((float10)(byte)param_1[10] / fVar9);
  fVar8 = *((float *)GEN_TOP(((int)this + 0x40)));
  fVar3 = *((float *)GEN_TOP(((int)this + 0x44)));
  uVar4 = *((undefined4 *)GEN_TOP(((int)this + 100)));
  uVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
  fVar6 = *((float *)GEN_TOP(((int)this + 0x48)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
  (*(undefined4 *)(gen_frame + 0x10)) = uVar7;
  *(undefined4 *)this = uVar7;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x18)) = uVar5;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  F_004efe70(this GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  *((float *)GEN_TOP(((int)this + 0x30))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x30))) + (float10)fVar8)));
  *((float *)GEN_TOP(((int)this + 0x34))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x34))) + (float10)fVar3)));
  *((float *)GEN_TOP(((int)this + 0x38))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x38))) + (float10)fVar6)));
  return (uint)this;
}

/* ref: FUN_00b501d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b501d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb501d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined2 * puVar1;
  int local_c;
  
  *(undefined4 *)this = 0x67676420;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x2000400;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  puVar1 = ((undefined2 *)GEN_TOP(((int)this + 0x30)));
  local_c = 2;
  do {
    puVar1[-2] = 0;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 1;
    local_c = local_c - 1;
  } while (local_c != 0);
  return 0;
}

/* ref: FUN_00b503a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b503a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb503a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined2 * puVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  puVar1 = ((undefined2 *)GEN_TOP(F_004d4590((int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 2,(float)(float10)0)));
  *(undefined2 *)this = *puVar1;
  puVar1 = ((undefined2 *)GEN_TOP(F_004d4590((int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 2,(float)(float10)0)));
  *((undefined2 *)GEN_TOP(((int)this + 2))) = *puVar1;
  puVar1 = ((undefined2 *)GEN_TOP(F_004d4590((int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 2,(float)(float10)0)));
  *((undefined2 *)GEN_TOP(((int)this + 4))) = *puVar1;
  puVar1 = ((undefined2 *)GEN_TOP(F_004d4590((int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 2,(float)(float10)0)));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = *puVar1;
  puVar1 = ((undefined2 *)GEN_TOP(F_004d4590((int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 2,(float)(float10)0)));
  *((undefined2 *)GEN_TOP(((int)this + 8))) = *puVar1;
  puVar1 = ((undefined2 *)GEN_TOP(F_004d4590((int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 2,(float)(float10)0)));
  *((undefined2 *)GEN_TOP(((int)this + 10))) = *puVar1;
  puVar1 = ((undefined2 *)GEN_TOP(F_004d4590((int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 2,(float)(float10)1)));
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = *puVar1;
  puVar1 = ((undefined2 *)GEN_TOP(F_004d4590((int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 2,(float)(float10)1)));
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = *puVar1;
  puVar1 = ((undefined2 *)GEN_TOP(F_004d4590((int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 2,(float)(float10)1)));
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = *puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x12))) = 0xffff00;
  return (uint)this;
}

/* ref: FUN_00b50490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b50490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb50490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xbc, 4);
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  F_00b503a0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  uVar1 = param_1[1];
  (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0xc)) = param_1[3];
  (*(undefined4 *)(gen_frame + 0x10)) = param_1[4];
  (*(undefined2 *)(gen_frame + 0x14)) = *(undefined2 *)(param_1 + 5);
  F_00b4ffe0(((undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  puVar3 = ((undefined4 *)(gen_frame + 0x1c));
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
    *(undefined4 *)this = *puVar3;
    puVar3 = puVar3 + 1;
    this = ((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x40))) = (*(undefined4 *)(gen_frame + 0x5c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x44))) = (*(undefined4 *)(gen_frame + 0x60));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x48))) = (*(undefined4 *)(gen_frame + 0x64));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x50))) = (*(undefined4 *)(gen_frame + 0x6c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x54))) = (*(undefined4 *)(gen_frame + 0x70));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x58))) = (*(undefined4 *)(gen_frame + 0x74));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x5c))) = (*(undefined4 *)(gen_frame + 0x78));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x60))) = (*(undefined4 *)(gen_frame + 0x7c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 100))) = (*(undefined4 *)(gen_frame + 0x80));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x68))) = (*(undefined4 *)(gen_frame + 0x84));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x70))) = (*(undefined1 *)(gen_frame + 0x8c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x74))) = (*(undefined4 *)(gen_frame + 0x90));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x78))) = (*(undefined4 *)(gen_frame + 0x94));
  return 0x16;
}

/* ref: FUN_00b505d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b505d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb505d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  F_00b501d0(this GEN_EDX_FWD);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x48)));
  iVar2 = 7;
  do {
    *puVar1 = 0x736764;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1 = puVar1 + 0x10;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return (uint)this;
}

/* ref: FUN_00b50640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b50640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb50640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  pvVar3 = ((undefined *)GEN_TOP(0x0));
  if (iVar1 != 0) {
    iVar2 = *((int *)GEN_TOP((iVar1 - 4)));
    pvVar3 = ((undefined *)GEN_TOP((iVar1 + iVar2 * 0x18)));
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 - 0x18)));
      F_00b4dd90(pvVar3 GEN_EDX_FWD);
    }
    if (iVar1 - 4 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,iVar1 - 4);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    pvVar3 = this;
  }
  return (uint)pvVar3;
}

/* ref: FUN_00b506a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b506a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb506a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0xc0, 0);
  uint uVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  iVar5 = **((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  iVar5 = *((int *)GEN_TOP((iVar5 + 0x1c)));
  *(int *)this = iVar5;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,iVar5 << 6,0x10);
  iVar5 = *((int *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP(((int)this + 0x28))) = uVar1;
  uVar1 = *((uint *)GEN_TOP((iVar5 + 0x1c)));
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  if (uVar1 != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar4 = *((uint *)GEN_TOP(((int)pvVar2 + 0xc)));
    uVar6 = uVar1 * 0x30 + 0x7f & 0xffffff80;
    (*(uint *)(gen_frame + 0x1c)) = uVar4;
    if ((*((int *)GEN_TOP(((int)pvVar2 + 8))) < (int)uVar6) || (*((uint *)GEN_TOP(((int)pvVar2 + 0x10))) < uVar4 + uVar6))
    {
      uVar4 = F_00d94390(pvVar2 GEN_EDX_ARG,uVar6);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar2 + 0xc))) = uVar4 + uVar6;
    }
  }
  (*(uint *)(gen_frame + 0x8)) = uVar1 | 0x80000000;
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  if ((int)(uVar1 & 0x3fffffff) < (int)uVar1) {
    uVar4 = (uVar1 & 0x3fffffff) * 2;
    if ((int)uVar4 <= (int)uVar1) {
      uVar4 = uVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x0)),uVar4,0x30);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar1;
  F_00d33580(uVar1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0xc))),
               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x24))),(*(uint *)(gen_frame + 0x0)));
  if (uVar1 != 0) {
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = uVar1;
    do {
      F_00d93970(((undefined *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x14))))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
      puVar3 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x60)))));
      puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + (*(int *)(gen_frame + 0x18)))));
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0x30;
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x40;
      uVar1 = (*(uint *)(gen_frame + 0x1c)) - 1;
      (*(uint *)(gen_frame + 0x1c)) = uVar1;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
    } while (uVar1 != 0);
  }
  uVar4 = (*(uint *)(gen_frame + 0x10));
  uVar1 = (*(uint *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0xc)) == (*(uint *)(gen_frame + 0x0))) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = uVar4 * 0x30 + 0x7f & 0xffffff80;
  if (((*((int *)GEN_TOP(((int)pvVar2 + 8))) < (int)uVar4) || (uVar4 + uVar1 != *((int *)GEN_TOP(((int)pvVar2 + 0xc)))))
     || (*((uint *)GEN_TOP(((int)pvVar2 + 0x14))) == uVar1)) {
    F_00d945c0(pvVar2 GEN_EDX_ARG,uVar1,uVar4);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar2 + 0xc))) = uVar1;
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x0)),((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 0x30);
  }
  return uVar1;
}

/* ref: FUN_00b508e0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b508e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb508e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x38, 8, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34));
  F_00b51880(this GEN_EDX_FWD,param_2);
  if (param_2 != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1 + 9;
    (*(int *)(gen_frame + 0x0)) = param_2;
    puVar2 = param_1;
    do {
      puVar3 = puVar2;
      puVar4 = ((undefined4 *)(gen_frame + 0x8));
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      (*(undefined2 *)(gen_frame + 0x28)) = *(undefined2 *)(puVar2 + 8);
      (*(undefined2 *)(gen_frame + 0x2a)) = *((undefined2 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) - 2)));
      (*(undefined4 *)(gen_frame + 0x2c)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      if ((((undefined4 *)(gen_frame + 0x8)) < puVar3) && (puVar4 = *(undefined4 * PTR32 *)this, puVar4 <= ((undefined4 *)(gen_frame + 0x8)))) {
        if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
          F_00b51970(this GEN_EDX_ARG,1);
        }
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)((undefined4 *)(gen_frame + 0x8)) - (int)puVar4) / 0x28) * 0x28)));
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
LAB_00b509a4: ;
          for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
      }
      else {
        if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
          F_00b51970(this GEN_EDX_ARG,1);
        }
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          puVar4 = ((undefined4 *)(gen_frame + 0x8));
          goto LAB_00b509a4;
        }
      }
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x28;
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 10;
      puVar2 = puVar2 + 10;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  return param_2 * 0x28;
}

/* ref: FUN_00b509f0 */
GEN_OWN_GS GEN_FRAME uint F_00b509f0(GEN_P(wchar_t * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb509f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x408, 8, 4);
  wchar_t wVar1;
  char * pcVar2;
  undefined * pvVar3;
  uint uVar4;
  wchar_t * pwVar5;
  undefined1 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x400)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x404));
  F_0042b630(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  pwVar5 = param_1;
  pwVar5[10] = L'\a';
  pwVar5[0xb] = L'\0';
  pwVar5[8] = L'\0';
  pwVar5[9] = L'\0';
  *param_1 = L'\0';
  pcVar2 = ((char *)GEN_TOP(F_0042a7e0(param_2 GEN_EDX_ARG,0)));
  if (*pcVar2 == '/') {
    pvVar3 = ((undefined *)GEN_TOP(F_0042cbc0(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x150)))));
    uVar4 = F_0042e360(pvVar3 GEN_EDX_ARG,param_2);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x1a4)) GEN_EDX_ARG,uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
    F_0042eae0(((undefined1 *)(gen_frame + 0x1a4)) GEN_EDX_ARG,param_1);
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0x1a4)) GEN_EDX_ARG,&REFG(undefined, 0x10f04e0),REFG(undefined4, 0x108cc50));
    puVar6 = ((undefined1 *)(gen_frame + 0x1a4));
    pvVar3 = ((undefined *)GEN_TOP(F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x150)))));
    uVar4 = F_0042e360(pvVar3 GEN_EDX_ARG,puVar6);
    F_0042cbc0(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    pvVar3 = ((undefined *)GEN_TOP(F_0042cbc0(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)))));
    uVar4 = F_0042e360(pvVar3 GEN_EDX_ARG,param_2);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
    F_0042eae0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,param_1);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x1a4)) GEN_EDX_ARG);
  if (7 < *(uint *)(param_1 + 10)) {
    pwVar5 = *(wchar_t * PTR32 *)param_1;
  }
  F_00c4a8e0(&(*(wchar_t *)(gen_frame + 0x1f8)),0x104,pwVar5);
  F_00b4c840(&(*(wchar_t *)(gen_frame + 0x1f8)));
  pwVar5 = &(*(wchar_t *)(gen_frame + 0x1f8));
  do {
    wVar1 = *pwVar5;
    pwVar5 = pwVar5 + 1;
  } while (wVar1 != L'\0');
  F_00403530(param_1 GEN_EDX_ARG,&(*(wchar_t *)(gen_frame + 0x1f8)),(int)pwVar5 - (int)((undefined1 *)(gen_frame + 0x1fa)) >> 1);
  F_0042c880(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00b50ba0 */
GEN_OWN_GS GEN_FRAME uint F_00b50ba0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb50ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  uint uVar1;
  wchar_t * _Filename;
  gen_size32 _ElementSize;
  int * piVar2;
  undefined * _DstBuf;
  undefined4 * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  _Filename = ((wchar_t *)GEN_TOP(F_00b509f0(((uint *)(gen_frame + 0x58)),((undefined1 *)(gen_frame + 0x4)))));
  if (7 < *(uint *)(_Filename + 10)) {
    _Filename = *(wchar_t * PTR32 *)_Filename;
  }
  F_00c4bd50(&(*(undefined * PTR32 *)(gen_frame + 0x0)),_Filename,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x10f04e4)))));
  if (7 < (*(uint *)(gen_frame + 0x6c))) {
    F_00429760(((uint *)(gen_frame + 0x58))[0],(*(uint *)(gen_frame + 0x6c)) * 2 + 2,0x3d);
  }
  uVar1 = ((uint *)(gen_frame + 0x58))[0];
  (*(undefined2 *)((char *)&((uint *)(gen_frame + 0x58))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x58))[0] = uVar1 & 0xffff0000;
  (*(uint *)(gen_frame + 0x6c)) = 7;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  F_00c4bbff((*(undefined * PTR32 *)(gen_frame + 0x0)),0,2);
  _ElementSize = F_00c51bcf((*(undefined * PTR32 *)(gen_frame + 0x0)));
  F_00c5197d((*(undefined * PTR32 *)(gen_frame + 0x0)));
  piVar2 = ((int *)GEN_TOP(F_00406520()));
  _DstBuf = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,_ElementSize,0)));
  if (_DstBuf != ((undefined *)GEN_TOP(0x0))) {
    F_00c48f5e(_DstBuf,_ElementSize,1,(*(undefined * PTR32 *)(gen_frame + 0x0)));
    F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x0)));
    puVar3 = ((undefined4 *)GEN_TOP(F_00406b90(0xc,0,0)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar3[1] = _DstBuf;
      puVar3[2] = (int)_DstBuf + 0x50;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f0504));
      return (uint)puVar3;
    }
  }
  return 0;
}

/* ref: FUN_00b50ce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b50ce0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb50ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0x6c627470;
  in_ecx[1] = 0x30303031;
  in_ecx[2] = 0;
  *(undefined2 *)(in_ecx + 3) = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b50d10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b50d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb50d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00b4d440(this GEN_EDX_FWD);
  uVar1 = F_0052c750(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00b50d30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b50d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb50d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined2 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  char * pcVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined2 *)GEN_TOP(((int)this + 8))) = *(undefined2 *)(param_1 + 2);
  *((undefined2 *)GEN_TOP(((int)this + 10))) = *((undefined2 *)GEN_TOP(((int)param_1 + 10)));
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = *(undefined2 *)(param_1 + 3);
  pcVar9 = ((char *)GEN_TOP(0xe));
  if (*(int *)this == 0x6c627470) {
    uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 8)));
    F_0052c7c0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,uVar2);
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      F_00c49908(((char *)(gen_frame + 0x28)),0x40,((char *)GEN_TOP(((int)param_1 + (int)pcVar9))));
      uVar4 = ((uint *)(gen_frame + 0xc))[0];
      pcVar3 = ((char *)(gen_frame + 0x28));
      (*(uint *)(gen_frame + 0x20)) = 0xf;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0xc))[0] = uVar4 & 0xffffff00;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      F_004e5c20(((uint *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)(gen_frame + 0x28)),(int)pcVar3 - (int)(((char *)(gen_frame + 0x28)) + 1));
      F_0052cc30(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,((uint *)(gen_frame + 0xc)));
      if (0xf < (*(uint *)(gen_frame + 0x20))) {
        F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
      }
      pcVar3 = ((char *)(gen_frame + 0x28));
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcVar9 = pcVar3 + (int)(pcVar9 + (1 - (int)(((char *)(gen_frame + 0x28)) + 1)));
    }
    uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 10)));
    uVar4 = F_00406bb0(uVar2 * 8,0,0);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar4;
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar4 * 8))) =
             *((undefined4 *)GEN_TOP(((int)param_1 + (int)pcVar9)));
        *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4 + uVar4 * 8))) =
             *((undefined2 *)GEN_TOP(((int)param_1 + (int)(pcVar9 + 4))));
        *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 6 + uVar4 * 8))) =
             *((undefined2 *)GEN_TOP(((int)param_1 + (int)(pcVar9 + 6))));
        uVar4 = uVar4 + 1;
        pcVar9 = pcVar9 + 8;
      } while (uVar4 < uVar2);
    }
    (*(uint *)(gen_frame + 0x0)) = (uint)*((ushort *)GEN_TOP(((int)this + 0xc)));
    puVar5 = ((undefined4 *)GEN_TOP(F_00406bb0((*(uint *)(gen_frame + 0x0)) * 0x10,0,0)));
    puVar7 = puVar5;
    uVar2 = (*(uint *)(gen_frame + 0x0));
    if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar5 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        *puVar7 = 0xffffffff;
        puVar7[1] = 1;
        puVar7 = puVar7 + 4;
      }
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = puVar5;
    if ((*(uint *)(gen_frame + 0x0)) != 0) {
      (*(int *)(gen_frame + 0x8)) = 0;
      do {
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + *((int *)GEN_TOP(((int)this + 0x14)))))) =
             *((undefined4 *)GEN_TOP(((int)param_1 + (int)pcVar9)));
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 4 + *((int *)GEN_TOP(((int)this + 0x14)))))) =
             *((undefined4 *)GEN_TOP(((int)param_1 + (int)(pcVar9 + 4))));
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 8 + *((int *)GEN_TOP(((int)this + 0x14)))))) =
             *((undefined4 *)GEN_TOP(((int)param_1 + (int)(pcVar9 + 8))));
        (*(uint *)(gen_frame + 0x4)) = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 8 + *((int *)GEN_TOP(((int)this + 0x14))))));
        pcVar9 = pcVar9 + 0xc;
        uVar2 = F_00406bb0(-(uint)((int)((ulonglong)(*(uint *)(gen_frame + 0x4)) * 0x10 >> 0x20) != 0) |
                             (uint)((ulonglong)(*(uint *)(gen_frame + 0x4)) * 0x10),0,0);
        if (uVar2 == 0) {
          uVar2 = 0;
        }
        else {
          iVar8 = (*(uint *)(gen_frame + 0x4)) - 1;
          if (-1 < iVar8) {
            puVar7 = ((undefined4 *)GEN_TOP((uVar2 + 8)));
            do {
              puVar7[-1] = 0xffffffff;
              *puVar7 = 1;
              puVar7 = puVar7 + 4;
              iVar8 = iVar8 - 1;
            } while (-1 < iVar8);
          }
        }
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0xc + *((int *)GEN_TOP(((int)this + 0x14)))))) = uVar2;
        if ((*(uint *)(gen_frame + 0x4)) != 0) {
          iVar8 = 0;
          do {
            puVar6 = ((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0xc + *((int *)GEN_TOP(((int)this + 0x14)))))) + iVar8)));
            *puVar6 = *((undefined2 *)GEN_TOP(((int)param_1 + (int)pcVar9)));
            *(undefined4 *)(puVar6 + 2) = *((undefined4 *)GEN_TOP(((int)param_1 + (int)(pcVar9 + 2))));
            *(undefined4 *)(puVar6 + 4) = *((undefined4 *)GEN_TOP(((int)param_1 + (int)(pcVar9 + 6))));
            pcVar3 = pcVar9 + 10;
            pcVar9 = pcVar9 + 0xc;
            iVar8 = iVar8 + 0x10;
            (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
            puVar6[6] = *((undefined2 *)GEN_TOP(((int)param_1 + (int)pcVar3)));
          } while ((*(uint *)(gen_frame + 0x4)) != 0);
        }
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x10;
        (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
      } while ((*(uint *)(gen_frame + 0x0)) != 0);
    }
    return (uint)pcVar9;
  }
  return 0;
}

/* ref: FUN_00b51010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51010(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb51010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b51050 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b51050(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb51050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0xcb);
  return uVar1;
}

/* ref: FUN_00b51090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51090(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb51090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b510a0 */
GEN_OWN GEN_FRAME uint F_00b510a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb510a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b510b0 */
GEN_OWN GEN_FRAME uint F_00b510b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb510b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b510c0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b510c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb510c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00b510f0 */
GEN_OWN GEN_FRAME uint F_00b510f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb510f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b51100 */
GEN_OWN GEN_FRAME uint F_00b51100(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb51100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b51120 */
GEN_OWN GEN_FRAME uint F_00b51120(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb51120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Client::Graphics::Resource::Texture::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51280(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb51280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f0504));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b512e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b512e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb512e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = param_1[0x10];
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = param_1[0x11];
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = param_1[0x12];
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = param_1[0x14];
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_1[0x15];
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_1[0x16];
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_1[0x17];
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = param_1[0x18];
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_1[0x19];
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_1[0x1a];
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = *(undefined1 *)(param_1 + 0x1c);
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = param_1[0x1d];
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = param_1[0x1e];
  return 0;
}

/* ref: FUN_00b51360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51360(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb51360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00b51380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb51380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x28;
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

/* ref: FUN_00b513d0 */
GEN_OWN GEN_FRAME unsigned int F_00b513d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb513d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00b513f0 */
GEN_OWN GEN_FRAME unsigned int F_00b513f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb513f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00b51410 */
GEN_OWN GEN_FRAME unsigned int F_00b51410(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb51410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00b51430 */
GEN_OWN GEN_FRAME uint F_00b51430(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb51430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b51450 */
GEN_OWN GEN_FRAME uint F_00b51450(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb51450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b51470 */
GEN_OWN GEN_FRAME uint F_00b51470(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb51470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b51490 */
GEN_OWN GEN_FRAME uint F_00b51490(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb51490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b514b0 */
GEN_OWN GEN_FRAME uint F_00b514b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb514b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b514d0 */
GEN_OWN GEN_FRAME uint F_00b514d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb514d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b514f0 */
GEN_OWN GEN_FRAME uint F_00b514f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb514f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b51510 */
GEN_OWN GEN_FRAME uint F_00b51510(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb51510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b51530 */
GEN_OWN GEN_FRAME uint F_00b51530(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb51530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b51550 */
GEN_OWN GEN_FRAME uint F_00b51550(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb51550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b515a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b515a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb515a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  undefined * this;
  
  if ((param_2 & 2) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)param_1 - 4)));
    iVar2 = *piVar1;
    this = ((undefined *)GEN_TOP(((int)param_1 + iVar2 * 0x18)));
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this = ((undefined *)GEN_TOP(((int)this - 0x18)));
      F_00b4dd90(this GEN_EDX_FWD);
    }
    if (((param_2 & 1) != 0) && (piVar1 != ((int *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,piVar1);
    }
    return (uint)piVar1;
  }
  F_00b4dd90(param_1 GEN_EDX_ARG);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b51620 */
GEN_OWN GEN_FRAME uint F_00b51620(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb51620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = param_1 * 0x30 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00b51660 */
GEN_OWN GEN_FRAME uint F_00b51660(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb51660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 0x30 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + param_1 == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != param_1)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00b516b0 */
GEN_OWN GEN_FRAME unsigned int F_00b516b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb516b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 10) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 10;
  }
  return 0;
}

/* ref: FUN_00b516f0 */
GEN_OWN GEN_FRAME unsigned int F_00b516f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb516f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 10;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b51730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb51730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
    uVar2 = param_1 * 0x30 + 0x7f & 0xffffff80;
    if ((*((int *)GEN_TOP(((int)this_00 + 8))) < (int)uVar2) ||
       (*((uint *)GEN_TOP(((int)this_00 + 0x10))) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar1 + uVar2;
    }
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00b517a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b517a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb517a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 == *(int *)this) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*((int *)GEN_TOP(((int)this_00 + 8))) < (int)uVar3) || (uVar3 + iVar1 != *((int *)GEN_TOP(((int)this_00 + 0xc)))))
     || (*((int *)GEN_TOP(((int)this_00 + 0x14))) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *((int *)GEN_TOP(((int)this_00 + 0xc))) = iVar1;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar3 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00b51840 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00b51840(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb51840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 10;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b51880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb51880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  puVar3 = ((undefined4 *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x28)));
  if (puVar3 < param_1) {
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 0x28,0,0xcb)));
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar1; puVar4 = puVar4 + 10) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar7 = puVar4;
        puVar8 = puVar6;
        for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar6 = puVar6 + 10;
    }
    iVar5 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar5 != 0) {
      F_00429760(iVar5,((*((int *)GEN_TOP(((int)this + 8))) - iVar5) / 0x28) * 0x28,0xcb);
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar3 + (int)((int)(uintptr_t)param_1) * 10;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + ((iVar2 - iVar5) / 0x28) * 10;
    *(undefined4 * PTR32 *)this = puVar3;
  }
  return (uint)puVar3;
}

/* ref: FUN_00b51970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb51970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x28;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x28;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00b51880(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00b51880(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00b51a00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b51a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb51a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00b51970(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar2) / 0x28) * 0x28)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00b51970(this GEN_EDX_ARG,1);
    }
  }
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x28;
  return;
}

/* ref: FUN_00b51a70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb51a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  short sVar1;
  short * psVar2;
  uint uVar3;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  uVar3 = F_00403530(this GEN_EDX_FWD,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return uVar3;
}

/* ref: FUN_00b51aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb51aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined2 *)this = 0;
  F_00403760(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00b51ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb51ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_0050cb10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[44])REFP(0x10f0554));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::EquipmentDeformerParameterResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00b51b10(void)
{
  GEN_ENTER(0xb51b10u, 0u, 0u, 0u, 0u);
  return 0x10f0508;
}

/* ref: Client::System::Resource::Handle::EquipmentDeformerParameterResourceHandleFactory::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb51b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0xa0,0,0)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0050cb10(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0554));
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::EquipmentDeformerParameterResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_00b51b80(void)
{
  GEN_ENTER(0xb51b80u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::EquipmentDeformerParameterResourceHandle::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51b90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb51b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[44])REFP(0x10f0554));
  F_005082e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b51bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb51bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_0050cb10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0644));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::WeaponTypeDataResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00b51c00(void)
{
  GEN_ENTER(0xb51c00u, 0u, 0u, 0u, 0u);
  return 0x10f0604;
}

/* ref: FUN_00b51c10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb51c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 0x656d70;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  iVar5 = 0;
  iVar6 = *((ushort *)GEN_TOP((uVar2 + 2))) - 1;
  do {
    iVar3 = (iVar6 + iVar5) / 2;
    uVar1 = *((uint *)GEN_TOP((uVar2 + 4 + iVar3 * 8)));
    if (param_1 == uVar1) goto LAB_00b51ca0;
    if ((int)(param_1 - uVar1) < 0) {
      iVar6 = iVar3 - 1;
    }
    else if (param_1 != uVar1) {
      iVar5 = iVar3 + 1;
    }
  } while (iVar5 <= iVar6);
  uVar1 = *((uint *)GEN_TOP((uVar2 + 4 + iVar3 * 8)));
  if (param_1 < uVar1) {
    if (0 < iVar3) {
      while (param_1 < *((uint *)GEN_TOP((uVar2 + 4 + iVar3 * 8)))) {
        iVar3 = iVar3 - 1;
        if (iVar3 < 1) {
          return *((uint *)GEN_TOP((uVar2 + 8 + iVar3 * 8)));
        }
      }
    }
  }
  else if (uVar1 < param_1) {
    iVar6 = iVar3 + 1;
    if (iVar6 < (int)(uint)*((ushort *)GEN_TOP((uVar2 + 2)))) {
      puVar4 = ((uint *)GEN_TOP((uVar2 + 0xc + iVar3 * 8)));
      do {
        if (param_1 <= *puVar4) break;
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 2;
      } while (iVar6 < (int)(uint)*((ushort *)GEN_TOP((uVar2 + 2))));
    }
  }
LAB_00b51ca0: ;
  return *((uint *)GEN_TOP((uVar2 + 8 + iVar3 * 8)));
}

/* ref: Client::System::Resource::Handle::WeaponTypeDataResourceHandleFactory::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb51cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0xa0,0,0)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0050cb10(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0644));
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::WeaponTypeDataResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_00b51d10(void)
{
  GEN_ENTER(0xb51d10u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::WeaponTypeDataResourceHandle::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51d20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb51d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[44])REFP(0x10f0644));
  F_005082e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b51d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb51d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_0050cb10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[44])REFP(0x10f0744));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00b51d90(void)
{
  GEN_ENTER(0xb51d90u, 0u, 0u, 0u, 0u);
  return 0x10f06f8;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandleFactory::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb51db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0xa0,0,0)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0050cb10(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0744));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_00b51e00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b51e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb51e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  ushort uVar1;
  ushort * puVar2;
  uint uVar3;
  
  puVar2 = ((ushort *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) & 0xffff;
  uVar1 = *puVar2;
  uVar3 = F_00b51e30(puVar2 + 1,(uint)uVar1,&(*(uint *)&gen_args[0]));
  return uVar3 != 0xffffffff;
}

/* ref: FUN_00b51e30 */
GEN_OWN GEN_FRAME uint F_00b51e30(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(ushort * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb51e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a2;)
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort * puVar5;
  int iVar6;
  
  uVar3 = param_2 - 1;
  uVar1 = *param_3;
  iVar6 = 0;
  if ((*param_1 <= uVar1) && (uVar2 = uVar3, uVar4 = uVar3, uVar1 <= param_1[uVar3])) {
    while (4 < uVar2) {
      uVar3 = uVar3 >> 1;
      if (uVar1 == param_1[uVar3]) {
        return uVar3;
      }
      if (uVar1 < param_1[uVar3]) {
        uVar4 = uVar3 - 1;
      }
      else {
        iVar6 = uVar3 + 1;
      }
      uVar3 = uVar4 + iVar6;
      uVar2 = uVar4 - iVar6;
    }
    uVar3 = 0;
    puVar5 = param_1 + iVar6;
    do {
      if (uVar1 == *puVar5) {
        return uVar3 + iVar6;
      }
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar3 <= uVar2);
  }
  return 0xffffffff;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_00b51eb0(void)
{
  GEN_ENTER(0xb51eb0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandle::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51ec0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb51ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[44])REFP(0x10f0744));
  F_005082e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b51ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb51ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_0050cb10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f083c))
  ;
  F_00b89bc0((int)this + 0xa0 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00b51f30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b51f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb51f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f083c))
  ;
  F_00b89d00(((undefined *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_FWD);
  uVar1 = F_005082e0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00b51f50(void)
{
  GEN_ENTER(0xb51f50u, 0u, 0u, 0u, 0u);
  return 0x10f07f4;
}

/* ref: FUN_00b51f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb51f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b89cc0(((undefined *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandleFactory::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb51f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0xc0,0,0)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0050cb10(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f083c));
    F_00b89bc0(this_00 + 0x28 GEN_EDX_ARG);
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b51ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb51ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pAVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pAVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pAVar1)), 0);
    if (iVar2 != 3) {
      iVar2 = *(int *)(this + 0xa0);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
      ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 4))))(this + 0xa0,uVar3);
      piVar4 = *(int * PTR32 *)(this + 0x98);
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_00b52070(void)
{
  GEN_ENTER(0xb52070u, 0u, 0u, 0u, 0u);
  return 0xc0;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b52080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb52080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x9c)));
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf18 */
GEN_OWN GEN_NOFRAME uint F_00b52090(void)
{
  GEN_ENTER(0xb52090u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int F_00b520a0(void)
{
  GEN_ENTER(0xb520a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_00b520b0(void)
{
  GEN_ENTER(0xb520b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b520c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb520c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[44])REFP(0x10f083c));
  F_00b89d00(param_1 + 0x28 GEN_EDX_FWD);
  F_005082e0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00b52110(void)
{
  GEN_ENTER(0xb52110u, 0u, 0u, 0u, 0u);
  return 0x10f08ec;
}

/* ref: FUN_00b52130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb52130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_0050cb10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f092c));
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b521b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb521b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)(this + 0xb4) = 0;
  F_004ff870((undefined *)this GEN_EDX_FWD);
  return;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b521c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb521c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pBVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 1) {
    pBVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pBVar1)), 0);
    if (iVar2 != 3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
      F_00bcc710(this + 0xa0 GEN_EDX_ARG,uVar3);
      if (((byte)this[0xa4] & 1) != 0) {
        F_00bcc840(this + 0xb8 GEN_EDX_ARG,*(int *)(this + 0xa8) + uVar3,*(undefined4 *)(this + 0xa0));
      }
      if ((*(uint *)(this + 0xa4) >> 1 & 1) != 0) {
        F_00bcc740(this + 0xb0 GEN_EDX_ARG,*(int *)(this + 0xac) + uVar3,*(undefined4 *)(this + 0xa0));
      }
      return 1;
    }
  }
  *(undefined4 *)(this + 0xb8) = 0;
  this[0xbc] = (undefined1)0x0;
  *(undefined4 *)(this + 0xb0) = 0;
  return param_2;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandleFactory::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb52270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0xd4,0,0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00b52130(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_00b52350(void)
{
  GEN_ENTER(0xb52350u, 0u, 0u, 0u, 0u);
  return 0xd4;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandle::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52360(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb52360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[44])REFP(0x10f092c));
  F_005082e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b52390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb52390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_0050cb10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0a1c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ControlPointResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00b523d0(void)
{
  GEN_ENTER(0xb523d0u, 0u, 0u, 0u, 0u);
  return 0x10f09dc;
}

/* ref: Client::System::Resource::Handle::ControlPointResourceHandleFactory::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b523e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb523e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0xa0,0,0)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0050cb10(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0a1c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ControlPointResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_00b52430(void)
{
  GEN_ENTER(0xb52430u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ControlPointResourceHandle::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52440(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb52440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[44])REFP(0x10f0a1c));
  F_005082e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b52470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb52470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_0050cb10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0b0c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CameraShakeResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00b524b0(void)
{
  GEN_ENTER(0xb524b0u, 0u, 0u, 0u, 0u);
  return 0x10f0acc;
}

/* ref: Client::System::Resource::Handle::CameraShakeResourceHandleFactory::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b524c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb524c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0xa0,0,0)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0050cb10(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0b0c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::CameraShakeResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_00b52510(void)
{
  GEN_ENTER(0xb52510u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::CameraShakeResourceHandle::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52520(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb52520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[44])REFP(0x10f0b0c));
  F_005082e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b52550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb52550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_0050cb10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0bfc));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::FontdataResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00b52590(void)
{
  GEN_ENTER(0xb52590u, 0u, 0u, 0u, 0u);
  return 0x10f0bbc;
}

/* ref: Client::System::Resource::Handle::FontdataResourceHandleFactory::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b525a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb525a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0xa0,0,0)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0050cb10(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0bfc));
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::FontdataResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_00b525f0(void)
{
  GEN_ENTER(0xb525f0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::FontdataResourceHandle::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52600(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb52600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[44])REFP(0x10f0bfc));
  F_005082e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b52630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb52630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_0050cb10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0cec));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::GaijiFontdataResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00b52670(void)
{
  GEN_ENTER(0xb52670u, 0u, 0u, 0u, 0u);
  return 0x10f0cac;
}

/* ref: Client::System::Resource::Handle::GaijiFontdataResourceHandleFactory::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb52680u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined4 * this_00;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0xa0,0,0)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0050cb10(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0cec));
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::GaijiFontdataResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_00b526d0(void)
{
  GEN_ENTER(0xb526d0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::GaijiFontdataResourceHandle::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b526e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb526e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[44])REFP(0x10f0cec));
  F_005082e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b52710 */
GEN_OWN GEN_FRAME uint F_00b52710(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb52710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  char * pcVar2;
  int iVar3;
  
  pcVar2 = param_1;
  uVar1 = param_3;
  for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0e18) + (((int)*pcVar2 ^ uVar1) & 0xff) * 4);
    pcVar2 = pcVar2 + 1;
  }
  return uVar1;
}

/* ref: FUN_00b52740 */
GEN_OWN GEN_FRAME uint F_00b52740(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb52740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  return (param_3 * 3 + 0x87) * 4 - 0x10 + (param_2 + param_4) * 8;
}

/* ref: FUN_00b52760 */
GEN_OWN GEN_FRAME uint F_00b52760(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb52760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (param_2 + (param_1 + 1) * 9) * 4;
}

/* ref: FUN_00b527c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b527c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb527c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (*((uint *)GEN_TOP(((int)this + 0x54))) != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x6c)));
    while (*piVar2 != param_1) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*((uint *)GEN_TOP(((int)this + 0x54))) <= uVar1) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + uVar1 * 4))) = param_2;
  }
  return 0;
}

/* ref: FUN_00b52800 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b52800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb52800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  char cVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar7 = 0;
  iVar3 = (int)pcVar2 - (int)(param_1 + 1);
  pcVar2 = param_1;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    uVar7 = uVar7 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0e18) + (((int)*pcVar2 ^ uVar7) & 0xff) * 4);
    pcVar2 = pcVar2 + 1;
  }
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0;
  iVar3 = (int)pcVar2 - (int)(param_2 + 1);
  pcVar2 = param_2;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    uVar5 = uVar5 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0e18) + (((int)*pcVar2 ^ uVar5) & 0xff) * 4);
    pcVar2 = pcVar2 + 1;
  }
  uVar4 = 0;
  if (*((uint *)GEN_TOP(((int)this + 0x54))) != 0) {
    puVar6 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x6c)));
    while (*puVar6 != uVar7) {
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
      if (*((uint *)GEN_TOP(((int)this + 0x54))) <= uVar4) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + uVar4 * 4))) = uVar5;
  }
  return 0;
}

/* ref: FUN_00b528a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b528a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb528a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (*((uint *)GEN_TOP(((int)this + 0x4c))) != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 100)));
    do {
      if (*piVar2 == param_1) {
        return (*((int * PTR32 *)GEN_TOP(((int)this + 100))))[uVar1 * 3 + 1];
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *((uint *)GEN_TOP(((int)this + 0x4c))));
  }
  return 0xffffffff;
}

/* ref: FUN_00b528e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b528e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb528e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (*((uint *)GEN_TOP(((int)this + 0x50))) != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x68)));
    do {
      if (*piVar2 == param_1) {
        return (*((int * PTR32 *)GEN_TOP(((int)this + 0x68))))[uVar1 * 3 + 1];
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *((uint *)GEN_TOP(((int)this + 0x50))));
  }
  return 0xffffffff;
}

/* ref: FUN_00b52920 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b52920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb52920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x58)));
  iVar5 = *((int *)GEN_TOP(((int)this + 0x20)));
  iVar3 = *((int *)GEN_TOP((iVar1 + 0x54)));
  iVar1 = *((int *)GEN_TOP((iVar1 + 0x5c)));
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (iVar3 != 0) {
    uVar4 = F_00b53c90(iVar5,iVar3);
    (*(uint *)(gen_frame + 0x0)) = uVar4;
    iVar5 = iVar5 + iVar3 * 4;
  }
  if (iVar2 != 0) {
    uVar4 = F_00b53c90(iVar5,iVar2);
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    iVar5 = iVar5 + iVar2 * 4;
  }
  if (iVar1 != 0) {
    uVar4 = F_00b53c90(iVar5,iVar1);
    (*(uint *)(gen_frame + 0x8)) = uVar4;
    iVar5 = iVar5 + iVar1 * 4;
  }
  uVar4 = F_00b53c90(iVar5,2);
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  uVar4 = F_00b53c90(&(*(uint *)(gen_frame + 0x0)),4);
  return uVar4;
}

/* ref: FUN_00b52a00 */
GEN_OWN GEN_FRAME uint F_00b52a00(GEN_P(char param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb52a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 * puVar4;
  int * piVar5;
  int iVar6;
  uint local_c;
  undefined * local_8;
  
  iVar1 = REFG(int, 0x1370b90);
  iVar6 = param_2[1];
  local_8 = ((undefined *)GEN_TOP(0x0));
  if (iVar6 != 0) {
    if (param_1 == '\0') {
      local_8 = ((undefined *)GEN_TOP(F_004dcc00(*param_2 + param_4,iVar6,(uint)*(ushort *)(param_2 + 2),
                                     (uint)*((ushort *)GEN_TOP(((int)param_2 + 10))),0)));
    }
    else {
      local_8 = ((undefined *)GEN_TOP(F_004dcb70(*param_2 + param_4,iVar6,(uint)*(ushort *)(param_2 + 2),
                                     (uint)*((ushort *)GEN_TOP(((int)param_2 + 10))),0)));
    }
  }
  uVar2 = F_004d5900(local_8 GEN_EDX_ARG);
  local_c = 0;
  if ((short)param_2[2] != 0) {
    puVar4 = ((undefined2 *)GEN_TOP((uVar2 + 2)));
    piVar5 = ((int *)GEN_TOP((param_3 + 4)));
    do {
      if ((uVar2 != 0) && (piVar5[1] != 0)) {
        uVar3 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1c))) GEN_EDX_ARG,*piVar5 + param_5);
        *(uint *)(puVar4 + 1) = uVar3;
        puVar4[-1] = (short)piVar5[2];
        *puVar4 = *((undefined2 *)GEN_TOP(((int)piVar5 + 10)));
      }
      local_c = local_c + 1;
      piVar5 = piVar5 + 4;
      puVar4 = puVar4 + 4;
    } while (local_c < *(ushort *)(param_2 + 2));
  }
  F_004d6ba0(local_8 GEN_EDX_ARG);
  uVar2 = F_004d5910(local_8 GEN_EDX_ARG);
  local_c = 0;
  if (*((short *)GEN_TOP(((int)param_2 + 10))) != 0) {
    puVar4 = ((undefined2 *)GEN_TOP((uVar2 + 2)));
    do {
      if ((uVar2 != 0) &&
         (iVar6 = param_3 + (*(ushort *)(param_2 + 2) + local_c) * 0x10, *((int *)GEN_TOP((iVar6 + 8))) != 0))
      {
        uVar3 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP((iVar1 + 0x20))) GEN_EDX_ARG,*((int *)GEN_TOP((iVar6 + 4))) + param_5);
        *(uint *)(puVar4 + 1) = uVar3;
        puVar4[-1] = *((undefined2 *)GEN_TOP((iVar6 + 0xc)));
        *puVar4 = *((undefined2 *)GEN_TOP((iVar6 + 0xe)));
      }
      local_c = local_c + 1;
      puVar4 = puVar4 + 4;
    } while (local_c < *((ushort *)GEN_TOP(((int)param_2 + 10))));
  }
  F_004d5920(local_8 GEN_EDX_ARG);
  return (uint)local_8;
}

/* ref: FUN_00b52b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb52b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*((int * PTR32 *)GEN_TOP(((int)this + 4))) != param_1) {
    if (*((int * PTR32 *)GEN_TOP(((int)this + 4))) != ((int *)GEN_TOP(0x0))) {
      if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
        F_00406b30(*((int *)GEN_TOP(((int)this + 8))));
        *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      }
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    }
    if (param_1 != ((int *)GEN_TOP(0x0))) {
      if (param_1[0x16] != 0) {
        lVar2 = (ulonglong)(uint)param_1[0x16] * 4;
        uVar3 = F_00406bb0(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,0,0);
        *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
        if (*((int *)GEN_TOP(((int)this + 8))) == 0) goto LAB_00b52bc9;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
      *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
    }
  }
LAB_00b52bc9: ;
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  uVar3 = 0;
  if (iVar1 != 0) {
    F_00c46aa0(*((undefined4 *)GEN_TOP(((int)this + 8))),*((undefined4 *)GEN_TOP((iVar1 + 0x7c))),
               *((int *)GEN_TOP((iVar1 + 0x58))) * 4);
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    uVar3 = 0;
    if (iVar1 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((iVar1 + 0x80)));
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + 0x84)));
      uVar3 = *((uint *)GEN_TOP((iVar1 + 0x88)));
      *((uint *)GEN_TOP(((int)this + 0x14))) = uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00b52c10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b52c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb52c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
    if (param_1[0x16] != 0) {
      uVar2 = F_00667cd0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) +
                                     0x1a8))) GEN_EDX_ARG,param_1[0x16] * 4);
      *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
      if (uVar2 == 0) {
        return;
      }
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00c46aa0(*((undefined4 *)GEN_TOP(((int)this + 8))),*((undefined4 *)GEN_TOP((iVar1 + 0x7c))),
                 *((int *)GEN_TOP((iVar1 + 0x58))) * 4);
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((iVar1 + 0x80)));
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + 0x84)));
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((iVar1 + 0x88)));
    }
  }
  return;
}

/* ref: FUN_00b52cb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b52cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb52cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
      *((int *)GEN_TOP((iVar1 + 0x28))) = *((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP((iVar1 + 0x24)));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    return uVar2;
  }
  return in_EAX;
}

/* ref: FUN_00b52cf0 */
GEN_OWN GEN_FRAME uint F_00b52cf0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb52cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if ((param_1 == ((int *)GEN_TOP(0x0))) || (param_2 < 0x18)) {
    return 0;
  }
  *param_3 = *((char *)GEN_TOP(((int)param_1 + 7))) == '\0';
  *((undefined1 *)GEN_TOP(((int)param_1 + 7))) = 0;
  if ((*param_1 == REFG(int, 0x10f0df4)) && (param_1[1] == REFG(int, 0x10f0df8))) {
    if ((param_1[2] == *(int *)REFG(undefined * PTR32, 0x133ab88)) && (param_1[3] == param_2)) {
      uVar1 = F_00b52a00(*param_3,param_1 + 6,param_1 + 9,param_1[4] + (int)param_1,
                           param_1[5] + (int)param_1,param_4);
      return uVar1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00b52d80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b52d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb52d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == 0) {
    return 0;
  }
  F_00b52b40(this GEN_EDX_FWD,param_1);
  return 1;
}

/* ref: FUN_00b52db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b52db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb52db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  if (*((undefined * PTR32 *)GEN_TOP((param_1 + 4))) != this) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x58)));
  if ((iVar1 == 0) || (*((int *)GEN_TOP((param_1 + 8))) != 0)) {
    if (*((int *)GEN_TOP(((int)this + 0x54))) == 0) {
      ((int *)(gen_frame + 0x0))[2] = 0;
    }
    else {
      uVar2 = F_00b53c90(*((undefined4 *)GEN_TOP(((int)this + 0x78))),*((int *)GEN_TOP(((int)this + 0x54))));
      ((int *)(gen_frame + 0x0))[2] = uVar2;
    }
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00b53c90(*((undefined4 *)GEN_TOP((param_1 + 8))),iVar1);
    }
    if (*((int *)GEN_TOP(((int)this + 0x5c))) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00b53c90(*((undefined4 *)GEN_TOP((param_1 + 0xc))),*((int *)GEN_TOP(((int)this + 0x5c))));
    }
    ((int *)(gen_frame + 0x0))[1] = 0;
    uVar4 = F_00b53c90(param_1 + 0x10,2);
    ((int *)(gen_frame + 0x0))[0] = uVar4 * 0x745f + uVar3 * 0x3e0 + uVar2 * 0x1f + uVar3 * -0x1f + ((int *)(gen_frame + 0x0))[2];
    piVar5 = ((int *)GEN_TOP(F_00b54060(((undefined *)GEN_TOP(((int)this + 0x90))) GEN_EDX_ARG,((int *)(gen_frame + 0x0)))));
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      ((int *)(gen_frame + 0x0))[0] = *piVar5;
      return piVar5[1];
    }
  }
  return 0;
}

/* ref: FUN_00b52ea0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b52ea0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb52ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  byte local_5;
  
  piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  local_5 = 1;
  if (piVar4 == piVar1) {
    return 1;
  }
  piVar7 = piVar4 + 4;
  do {
    piVar6 = piVar7 + 3;
    if (piVar6 != piVar1) {
      do {
        if (*piVar4 == *piVar6) {
          if (piVar7[-3] == piVar6[1]) {
            piVar1 = ((int *)GEN_TOP(piVar7[-1]));
            piVar5 = ((int *)GEN_TOP(piVar6[3]));
            uVar2 = *piVar7 - (int)piVar1;
            if (uVar2 == piVar6[4] - (int)piVar5) {
              for (; 3 < uVar2; uVar2 = uVar2 - 4) {
                if (*piVar1 != *piVar5) goto LAB_00b52f48;
                piVar5 = piVar5 + 1;
                piVar1 = piVar1 + 1;
              }
              if ((uVar2 == 0) ||
                 (((char)*piVar5 == (char)*piVar1 &&
                  ((uVar2 < 2 ||
                   ((*((char *)GEN_TOP(((int)piVar5 + 1))) == *((char *)GEN_TOP(((int)piVar1 + 1))) &&
                    ((uVar2 < 3 || (*((char *)GEN_TOP(((int)piVar5 + 2))) == *((char *)GEN_TOP(((int)piVar1 + 2)))))))))))
                 )) goto LAB_00b5306c;
            }
          }
LAB_00b52f48: ;
          local_5 = 0;
          if (param_2 != '\0') {
            F_00c5181b(((char *)REFP(0x10f0d9c)),*piVar4);
            F_00c5181b("  %08X ",piVar7[-3]);
            iVar3 = piVar7[-1];
            uVar2 = 0;
            if (*piVar7 != iVar3) {
              do {
                F_00c5181b(" %02X",(int)*((char *)GEN_TOP((iVar3 + uVar2))));
                iVar3 = piVar7[-1];
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)(*piVar7 - iVar3));
            }
            F_00c5181b("  ");
            iVar3 = piVar7[-1];
            uVar2 = 0;
            if (*piVar7 != iVar3) {
              do {
                F_00c5181b(&REFG(undefined, 0x10f0dd0),(int)*((char *)GEN_TOP((iVar3 + uVar2))));
                iVar3 = piVar7[-1];
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)(*piVar7 - iVar3));
            }
            F_00c5181b("\n");
            F_00c5181b("  %08X ",piVar6[1]);
            iVar3 = piVar6[3];
            uVar2 = 0;
            if (piVar6[4] != iVar3) {
              do {
                F_00c5181b(" %02X",(int)*((char *)GEN_TOP((iVar3 + uVar2))));
                iVar3 = piVar6[3];
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)(piVar6[4] - iVar3));
            }
            F_00c5181b("  ");
            iVar3 = piVar6[3];
            uVar2 = 0;
            if (piVar6[4] != iVar3) {
              do {
                F_00c5181b(&REFG(undefined, 0x10f0dec),(int)*((char *)GEN_TOP((iVar3 + uVar2))));
                iVar3 = piVar6[3];
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)(piVar6[4] - iVar3));
            }
            F_00c5181b("\n");
          }
        }
LAB_00b5306c: ;
        piVar6 = piVar6 + 7;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((param_1 + 0xc))));
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
    piVar4 = piVar4 + 7;
    piVar7 = piVar7 + 7;
    if (piVar4 == piVar1) {
      return local_5;
    }
  } while( true );
}

/* ref: FUN_00b530b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b530b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb530b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10f1244));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f122c));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1234));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f123c));
  F_00b544b0(((undefined *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b53110 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b53110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb53110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10f1244));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1224));
  F_00b547b0(((undefined *)GEN_TOP(((int)this + 0x90))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x218))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f123c));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x3c))) - iVar1 >> 2) * 4,0xca);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1234));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x28))) - iVar1 >> 2) * 4,0xca);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f122c));
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x14))) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return uVar2;
}

/* ref: Client::Graphics::Kernel::ShaderPackage::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b531e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb531e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  F_00b547b0(this + 0x90 GEN_EDX_FWD);
  *(undefined4 *)(this + 0x218) = 0;
  uVar4 = 0;
  if (*(int *)(this + 0x10) - *(int *)(this + 0xc) >> 2 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0xc) + uVar4 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + uVar4 * 4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + uVar4 * 4))) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(this + 0x10) - *(int *)(this + 0xc) >> 2));
  }
  iVar2 = *(int *)(this + 0xc);
  if (iVar2 != *(int *)(this + 0x10)) {
    F_00c46e20(iVar2,*(int *)(this + 0x10),0);
    *(int *)(this + 0x10) = iVar2;
  }
  uVar4 = 0;
  if (*(int *)(this + 0x24) - *(int *)(this + 0x20) >> 2 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x20) + uVar4 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x20) + uVar4 * 4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x20) + uVar4 * 4))) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(this + 0x24) - *(int *)(this + 0x20) >> 2));
  }
  iVar2 = *(int *)(this + 0x20);
  if (iVar2 != *(int *)(this + 0x24)) {
    F_00c46e20(iVar2,*(int *)(this + 0x24),0);
    *(int *)(this + 0x24) = iVar2;
  }
  uVar4 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(0x0));
  if (*(int *)(this + 0x38) - *(int *)(this + 0x34) >> 2 != 0) {
    do {
      puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x34) + uVar4 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,0);
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x34) + uVar4 * 4)));
      if (*((int *)GEN_TOP((*(int *)(this + 0x34) + uVar4 * 4))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0xc))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0xc))) GEN_EDX_ARG,*puVar3);
        puVar3 = *(undefined4 * PTR32 *)(this + 0x34);
        puVar3[uVar4] = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(this + 0x38) - *(int *)(this + 0x34) >> 2));
  }
  iVar2 = *(int *)(this + 0x34);
  if (iVar2 != *(int *)(this + 0x38)) {
    puVar3 = ((undefined4 *)GEN_TOP(F_00c46e20(iVar2,*(int *)(this + 0x38),0)));
    *(int *)(this + 0x38) = iVar2;
  }
  return (uint)puVar3;
}

/* ref: FUN_00b53350 */
GEN_OWN GEN_FRAME uint F_00b53350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb53350u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  code * pcVar7;
  int * piVar8;
  undefined * this;
  uint uVar9;
  uint uVar10;
  undefined4 * puVar11;
  undefined2 * puVar12;
  int * piVar13;
  
  piVar8 = (*(int * PTR32 *)&gen_args[0]);
  if (((((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) && (0x43 < (*(uint *)&gen_args[1]))) && (*(*(int * PTR32 *)&gen_args[0]) == REFG(int, 0x10f0e04))) &&
     ((((*(int * PTR32 *)&gen_args[0])[1] == REFG(int, 0x10f0e08) && ((*(int * PTR32 *)&gen_args[0])[2] == *(int *)REFG(undefined * PTR32, 0x133ab8c))) &&
      ((*(int * PTR32 *)&gen_args[0])[3] == (*(uint *)&gen_args[1]))))) {
    (*(uint *)(gen_frame + 0x14)) = (*(int * PTR32 *)&gen_args[0])[4] + (int)(*(int * PTR32 *)&gen_args[0]);
    piVar13 = (*(int * PTR32 *)&gen_args[0]) + 0x11;
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = REFG(undefined4 * PTR32, 0x1370b90);
    if (REFG(undefined4 * PTR32, 0x1370b90) != ((undefined4 *)GEN_TOP(0x0))) {
      iVar3 = (*(int * PTR32 *)&gen_args[0])[9];
      iVar2 = (*(int * PTR32 *)&gen_args[0])[0xd] + (*(int * PTR32 *)&gen_args[0])[0xe] + 2 + (*(int * PTR32 *)&gen_args[0])[0xc];
      iVar4 = (*(int * PTR32 *)&gen_args[0])[0xb];
      (*(int *)(gen_frame + 0x4)) = iVar2;
      iVar5 = (*(int * PTR32 *)&gen_args[0])[10];
      piVar6 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0xc)));
      pcVar7 = *((gen_code32 *)GEN_TOP((*piVar6 + 8)));
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[5] + (int)(*(int * PTR32 *)&gen_args[0]))));
      this = ((undefined *)GEN_TOP((*pcVar7)(piVar6,(iVar5 + 0x2d + iVar4) * 0xc - 0x10 + (iVar3 + iVar2) * 8,
                               0x10)));
      if (this != ((undefined *)GEN_TOP(0x0))) {
        uVar9 = F_00b530b0(this GEN_EDX_ARG);
        F_00b55b90(((undefined *)GEN_TOP((uVar9 + 0xc))) GEN_EDX_ARG,piVar8[6]);
        F_00b55c20(((undefined *)GEN_TOP((uVar9 + 0x20))) GEN_EDX_ARG,piVar8[7]);
        F_00b55cb0(((undefined *)GEN_TOP((uVar9 + 0x34))) GEN_EDX_ARG,piVar8[0xf]);
        *((int *)GEN_TOP((uVar9 + 0x44))) = piVar8[8];
        *((int *)GEN_TOP((uVar9 + 0x48))) = piVar8[9];
        *((int *)GEN_TOP((uVar9 + 0x4c))) = piVar8[10];
        *((int *)GEN_TOP((uVar9 + 0x50))) = piVar8[0xb];
        *((int *)GEN_TOP((uVar9 + 0x54))) = piVar8[0xc];
        *((int *)GEN_TOP((uVar9 + 0x58))) = piVar8[0xd];
        *((int *)GEN_TOP((uVar9 + 0x5c))) = piVar8[0xe];
        *((uint *)GEN_TOP((uVar9 + 0x60))) = uVar9 + 0x21c;
        iVar2 = uVar9 + 0x21c + piVar8[9] * 8;
        *((int *)GEN_TOP((uVar9 + 100))) = iVar2;
        iVar2 = iVar2 + piVar8[10] * 0xc;
        *((int *)GEN_TOP((uVar9 + 0x68))) = iVar2;
        iVar2 = iVar2 + piVar8[0xb] * 0xc;
        *((int *)GEN_TOP((uVar9 + 0x6c))) = iVar2;
        iVar2 = iVar2 + piVar8[0xc] * 4;
        *((int *)GEN_TOP((uVar9 + 0x70))) = iVar2;
        iVar2 = iVar2 + piVar8[0xd] * 4;
        *((int *)GEN_TOP((uVar9 + 0x74))) = iVar2;
        iVar2 = iVar2 + piVar8[0xe] * 4;
        *((int *)GEN_TOP((uVar9 + 0x78))) = iVar2;
        iVar2 = iVar2 + piVar8[0xc] * 4;
        *((int *)GEN_TOP((uVar9 + 0x7c))) = iVar2;
        *((int *)GEN_TOP((uVar9 + 0x80))) = iVar2 + piVar8[0xd] * 4;
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar8[6] != 0) {
          do {
            uVar10 = F_00b52a00(1,piVar13,piVar13 + 3,(*(uint *)(gen_frame + 0x14)),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]));
            if (uVar10 == 0) {
              return 0;
            }
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0xc))) + (*(uint *)(gen_frame + 0x10)) * 4))) = uVar10;
            uVar10 = (*(uint *)(gen_frame + 0x10)) + 1;
            piVar13 = piVar13 + ((uint)*((ushort *)GEN_TOP(((int)piVar13 + 10))) +
                                (uint)*(ushort *)(piVar13 + 2)) * 4 + 3;
            (*(uint *)(gen_frame + 0x10)) = uVar10;
          } while (uVar10 < (uint)piVar8[6]);
        }
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar8[7] != 0) {
          do {
            uVar10 = F_00b52a00(0,piVar13,piVar13 + 3,(*(uint *)(gen_frame + 0x14)),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]));
            if (uVar10 == 0) {
              return 0;
            }
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x20))) + (*(uint *)(gen_frame + 0x10)) * 4))) = uVar10;
            uVar10 = (*(uint *)(gen_frame + 0x10)) + 1;
            piVar13 = piVar13 + ((uint)*((ushort *)GEN_TOP(((int)piVar13 + 10))) +
                                (uint)*(ushort *)(piVar13 + 2)) * 4 + 3;
            (*(uint *)(gen_frame + 0x10)) = uVar10;
          } while (uVar10 < (uint)piVar8[7]);
        }
        uVar10 = 0;
        if (piVar8[9] != 0) {
          do {
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x60))) + uVar10 * 8))) = piVar13[uVar10 * 2];
            *((short *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x60))) + 4 + uVar10 * 8))) = (short)piVar13[uVar10 * 2 + 1];
            *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x60))) + 6 + uVar10 * 8))) =
                 *((undefined2 *)GEN_TOP(((int)piVar13 + uVar10 * 8 + 6)));
            uVar10 = uVar10 + 1;
          } while (uVar10 < (uint)piVar8[9]);
        }
        piVar13 = piVar13 + piVar8[9] * 2;
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar13;
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar8[10] != 0) {
          (*(uint *)(gen_frame + 0x14)) = 0;
          puVar12 = ((undefined2 *)GEN_TOP(((int)piVar13 + 0xe)));
          do {
            *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x14)) + *((int *)GEN_TOP((uVar9 + 100)))))) = *(undefined4 *)(puVar12 - 7);
            uVar10 = F_004df8f0(((undefined *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0xc))[7])) GEN_EDX_ARG,*(int *)(puVar12 - 5) + (int)(*(int * PTR32 *)&gen_args[0]));
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 100))) + 4 + (*(uint *)(gen_frame + 0x14))))) = uVar10;
            *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 100))) + 8 + (*(uint *)(gen_frame + 0x14))))) = *puVar12;
            *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 100))) + 10 + (*(uint *)(gen_frame + 0x14))))) = puVar12[-1];
            uVar10 = (*(uint *)(gen_frame + 0x10)) + 1;
            puVar12 = puVar12 + 8;
            (*(uint *)(gen_frame + 0x10)) = uVar10;
            (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 0xc;
            piVar13 = (*(int * PTR32 *)(gen_frame + 0x18));
          } while (uVar10 < (uint)piVar8[10]);
        }
        piVar13 = piVar13 + piVar8[10] * 4;
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar13;
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar8[0xb] != 0) {
          (*(uint *)(gen_frame + 0x14)) = 0;
          puVar12 = ((undefined2 *)GEN_TOP(((int)piVar13 + 0xe)));
          do {
            *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x14)) + *((int *)GEN_TOP((uVar9 + 0x68)))))) = *(undefined4 *)(puVar12 - 7);
            uVar10 = F_004df8f0(((undefined *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0xc))[8])) GEN_EDX_ARG,*(int *)(puVar12 - 5) + (int)(*(int * PTR32 *)&gen_args[0]));
            *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x68))) + 4 + (*(uint *)(gen_frame + 0x14))))) = uVar10;
            *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x68))) + 8 + (*(uint *)(gen_frame + 0x14))))) = *puVar12;
            *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x68))) + 10 + (*(uint *)(gen_frame + 0x14))))) = puVar12[-1];
            uVar10 = (*(uint *)(gen_frame + 0x10)) + 1;
            puVar12 = puVar12 + 8;
            (*(uint *)(gen_frame + 0x10)) = uVar10;
            (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 0xc;
            piVar13 = (*(int * PTR32 *)(gen_frame + 0x18));
          } while (uVar10 < (uint)piVar8[0xb]);
        }
        iVar2 = piVar8[0xb];
        uVar10 = 0;
        if (piVar8[0xc] != 0) {
          do {
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x6c))) + uVar10 * 4))) = piVar13[iVar2 * 4 + uVar10 * 2];
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x78))) + uVar10 * 4))) = piVar13[iVar2 * 4 + uVar10 * 2 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar10 < (uint)piVar8[0xc]);
        }
        iVar3 = piVar8[0xc];
        uVar10 = 0;
        if (piVar8[0xd] != 0) {
          do {
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x70))) + uVar10 * 4))) =
                 piVar13[iVar2 * 4 + iVar3 * 2 + uVar10 * 2];
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x7c))) + uVar10 * 4))) =
                 piVar13[iVar2 * 4 + iVar3 * 2 + uVar10 * 2 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar10 < (uint)piVar8[0xd]);
        }
        iVar4 = piVar8[0xd];
        uVar10 = 0;
        if (piVar8[0xe] != 0) {
          do {
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x74))) + uVar10 * 4))) =
                 piVar13[iVar2 * 4 + iVar3 * 2 + iVar4 * 2 + uVar10 * 2];
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x80))) + uVar10 * 4))) =
                 piVar13[iVar2 * 4 + iVar3 * 2 + iVar4 * 2 + uVar10 * 2 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar10 < (uint)piVar8[0xe]);
        }
        iVar5 = piVar8[0xe];
        *((int *)GEN_TOP((uVar9 + 0x84))) = piVar13[iVar2 * 4 + iVar3 * 2 + iVar4 * 2 + iVar5 * 2];
        *((int *)GEN_TOP((uVar9 + 0x88))) = piVar13[iVar2 * 4 + iVar3 * 2 + iVar4 * 2 + iVar5 * 2 + 1];
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar13 + iVar2 * 4 + iVar3 * 2 + iVar4 * 2 + iVar5 * 2 + 2;
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar8[0xf] != 0) {
          do {
            (*(uint *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x18))[1];
            puVar11 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0xc))) + 8))))
                                (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0xc))) GEN_EDX_ARG,
                                 (*(int *)(gen_frame + 0x4)) * 4 + ((*(int * PTR32 *)(gen_frame + 0x18))[1] + 1U) * 0x24,0x10)));
            if (puVar11 != ((undefined4 *)GEN_TOP(0x0))) {
              *puVar11 = (*(undefined * PTR32 (*)[1])REFP(0x10f121c));
              puVar11[1] = 0;
              *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x34))) + (*(uint *)(gen_frame + 0x10)) * 4))) = puVar11;
              (*(int *)(gen_frame + 0x8)) = *(*(int * PTR32 *)(gen_frame + 0x18));
              (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar11;
              (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[0]) & 0xffffff)));
              F_00b548a0(((undefined *)GEN_TOP((uVar9 + 0x90))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)),(int)&(*(int * PTR32 *)&gen_args[0]) + 3);
              if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) == '\0') {
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar11)))(puVar11 GEN_EDX_ARG,0);
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0xc))) + 0x10))))
                          (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0xc))) GEN_EDX_ARG,puVar11);
              }
              else {
                *((int *)GEN_TOP((uVar9 + 0x218))) = *((int *)GEN_TOP((uVar9 + 0x218))) + 1;
                puVar11[2] = (*(uint *)(gen_frame + 0x14));
                puVar11[1] = uVar9;
                puVar11[3] = (*(int * PTR32 *)(gen_frame + 0x18))[2];
                puVar11[4] = (*(int * PTR32 *)(gen_frame + 0x18))[3];
                puVar11[5] = (*(int * PTR32 *)(gen_frame + 0x18))[4];
                puVar11[6] = (*(int * PTR32 *)(gen_frame + 0x18))[5];
                puVar1 = puVar11 + 9;
                puVar11[7] = puVar1;
                puVar11[8] = puVar1 + (*(uint *)(gen_frame + 0x14)) * 2;
                F_00c46aa0(puVar1 + (*(uint *)(gen_frame + 0x14)) * 2,(*(int * PTR32 *)(gen_frame + 0x18)) + 6,(*(int *)(gen_frame + 0x4)) * 4);
                uVar10 = 0;
                (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + piVar8[0xd] + piVar8[0xe] + piVar8[0xc] + 8;
                if ((*(uint *)(gen_frame + 0x14)) != 0) {
                  do {
                    piVar6 = ((int *)GEN_TOP((puVar11[7] + uVar10 * 8)));
                    *piVar6 = (*(int * PTR32 *)(gen_frame + 0x18))[1];
                    piVar13 = (*(int * PTR32 *)(gen_frame + 0x18)) + 2;
                    (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 3;
                    uVar10 = uVar10 + 1;
                    piVar6[1] = *piVar13;
                  } while (uVar10 < (*(uint *)(gen_frame + 0x14)));
                }
              }
            }
            uVar10 = (*(uint *)(gen_frame + 0x10)) + 1;
            (*(uint *)(gen_frame + 0x10)) = uVar10;
          } while (uVar10 < (uint)piVar8[0xf]);
        }
        piVar13 = (*(int * PTR32 *)(gen_frame + 0x18));
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar8[0x10] != 0) {
          do {
            uVar10 = piVar13[(*(uint *)(gen_frame + 0x10)) * 2 + 1];
            (*(int *)(gen_frame + 0x0)) = piVar13[(*(uint *)(gen_frame + 0x10)) * 2];
            (*(int *)(gen_frame + 0x4)) = 0;
            if (uVar10 < (uint)(*((int *)GEN_TOP((uVar9 + 0x38))) - *((int *)GEN_TOP((uVar9 + 0x34))) >> 2)) {
              (*(int *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar9 + 0x34))) + uVar10 * 4)));
            }
            else {
              (*(int *)(gen_frame + 0x4)) = 0;
            }
            (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[0]) & 0xffffff)));
            F_00b548a0(((undefined *)GEN_TOP((uVar9 + 0x90))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),(int)&(*(int * PTR32 *)&gen_args[0]) + 3);
            if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) != '\0') {
              *((int *)GEN_TOP((uVar9 + 0x218))) = *((int *)GEN_TOP((uVar9 + 0x218))) + 1;
            }
            uVar10 = (*(uint *)(gen_frame + 0x10)) + 1;
            (*(uint *)(gen_frame + 0x10)) = uVar10;
          } while (uVar10 < (uint)piVar8[0x10]);
        }
        return uVar9;
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00b538e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b538e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb538e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00b538f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b538f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb538f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b53900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b53900(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b53920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b53920(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b539d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b539d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb539d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xca);
  return uVar1;
}

/* ref: FUN_00b53a20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b53a20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xca);
  return uVar1;
}

/* ref: FUN_00b53a70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b53a70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xca);
  return uVar1;
}

/* ref: FUN_00b53ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b53ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb53ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b53ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b53ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb53ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b53af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b53af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb53af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b53b70 */
GEN_OWN GEN_FRAME uint F_00b53b70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb53b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b53ba0 */
GEN_OWN GEN_FRAME uint F_00b53ba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb53ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b53bd0 */
GEN_OWN GEN_FRAME uint F_00b53bd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb53bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b53c30 */
GEN_OWN GEN_FRAME uint F_00b53c30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb53c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b53c40 */
GEN_OWN GEN_FRAME uint F_00b53c40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb53c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b53c50 */
GEN_OWN GEN_FRAME uint F_00b53c50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb53c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00b53c60 */
GEN_OWN GEN_FRAME uint F_00b53c60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb53c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 * 0x1f;
}

/* ref: FUN_00b53c70 */
GEN_OWN GEN_FRAME uint F_00b53c70(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb53c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  *param_1 = *param_1 * 0x1f;
  return (uint)param_1;
}

/* ref: FUN_00b53c90 */
GEN_OWN GEN_FRAME uint F_00b53c90(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  uVar2 = *param_1;
  iVar5 = 1;
  iVar4 = 0;
  local_8 = 0;
  uVar3 = 1;
  if (1 < param_2) {
    if (1 < (int)(param_2 - 1)) {
      iVar4 = 0;
      do {
        iVar1 = iVar5 * 0x1f;
        iVar5 = iVar5 * 0x3c1;
        local_8 = local_8 + param_1[uVar3 + 1] * iVar5;
        iVar4 = iVar4 + param_1[uVar3] * iVar1;
        uVar3 = uVar3 + 2;
      } while (uVar3 < param_2 - 1);
    }
    if (uVar3 < param_2) {
      uVar2 = uVar2 + param_1[uVar3] * iVar5 * 0x1f;
    }
    return local_8 + iVar4 + uVar2;
  }
  return uVar2;
}

/* ref: FUN_00b53d20 */
GEN_OWN GEN_FRAME uint F_00b53d20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb53d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  return param_4 * 0x745f + param_3 * 0x3c1 + param_2 * 0x1f + param_1;
}

/* ref: FUN_00b53d50 */
GEN_OWN GEN_FRAME uint F_00b53d50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb53d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  return (param_2 + param_1 + param_3) * 4 + 0x20;
}

/* ref: FUN_00b53d70 */
GEN_OWN GEN_FRAME uint F_00b53d70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00b53d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b53d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb53d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00b53db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b53db0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*in_ecx < *param_2);
}

/* ref: FUN_00b53dd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b53dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb53dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00b53e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b53e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00b53e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b53e90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb53e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b53eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b53eb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb53eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b53ed0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b53ed0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xca);
  return (uint)uVar1;
}

/* ref: FUN_00b53f10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b53f10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xca);
  return (uint)uVar1;
}

/* ref: FUN_00b53f50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b53f50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xca);
  return (uint)uVar1;
}

/* ref: FUN_00b53f80 */
GEN_OWN GEN_FRAME byte F_00b53f80(void)
{
  GEN_ENTER(0xb53f80u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b53fa0 */
GEN_OWN GEN_FRAME byte F_00b53fa0(void)
{
  GEN_ENTER(0xb53fa0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b53fc0 */
GEN_OWN GEN_FRAME byte F_00b53fc0(void)
{
  GEN_ENTER(0xb53fc0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: Client::Graphics::Kernel::ShaderNode::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b53fe0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb53fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f121c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b54010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b54010(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb54010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b54020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b54020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb54020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00b54030 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b54030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb54030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x1f;
  puVar1 = this;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c48350(this,0,0x188);
  return (uint)this;
}

/* ref: FUN_00b54060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b54060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb54060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
LAB_00b54070: ;
  do {
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x184)));
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        uVar2 = *((uint *)GEN_TOP(((int)this + uVar3 * 8)));
        if (*param_1 < uVar2) {
          this = *((undefined * PTR32 *)GEN_TOP(((int)this + uVar3 * 4 + 0x100)));
          if (this == ((undefined *)GEN_TOP(0x0))) {
            return 0;
          }
          goto LAB_00b54070;
        }
        if (*param_1 == uVar2) {
          return (uint)((undefined *)GEN_TOP(((int)this + uVar3 * 8)));
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    if (*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x100))) == 0) {
      return 0;
    }
    this = *((undefined * PTR32 *)GEN_TOP(((int)this + uVar1 * 4 + 0x100)));
  } while( true );
}

/* ref: FUN_00b540e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b540e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb540e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b54130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b54130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb54130u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b54180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b54180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb54180u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b541c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b541c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb541c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b541e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b541e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb541e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b54200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b54200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb54200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b54220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b54220(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb54220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b54230 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b54230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb54230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00b54250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b54250(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb54250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b54260 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b54260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb54260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00b54280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b54280(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb54280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b54290 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b54290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb54290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00b542b0 */
GEN_OWN GEN_FRAME uint F_00b542b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb542b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b542e0 */
GEN_OWN GEN_FRAME uint F_00b542e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb542e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b54310 */
GEN_OWN GEN_FRAME uint F_00b54310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb54310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b54370 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b54370(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb54370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b54390 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b54390(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb54390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b543b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b543b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb543b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b54400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b54400(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb54400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b54410 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b54410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb54410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

