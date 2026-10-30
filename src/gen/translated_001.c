#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Global::BlowfishEncryptBlock */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  int local_8;
  
  uVar2 = *param_1;
  local_8 = 0x10;
  uVar3 = *param_2;
  puVar4 = this;
  do {
    uVar1 = uVar2 ^ *puVar4;
    puVar4 = puVar4 + 1;
    uVar2 = (*((int *)GEN_TOP(((int)this + (uVar1 >> 0x18) * 4 + 0x48))) +
             *((int *)GEN_TOP(((int)this + (uVar1 >> 0x10 & 0xff) * 4 + 0x448))) ^
            *((uint *)GEN_TOP(((int)this + (uVar1 >> 8 & 0xff) * 4 + 0x848)))) +
            *((int *)GEN_TOP(((int)this + (uVar1 & 0xff) * 4 + 0xc48))) ^ uVar3;
    local_8 = local_8 - 1;
    uVar3 = uVar1;
  } while (local_8 != 0);
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x40))) ^ uVar2;
  *param_1 = *((uint *)GEN_TOP(((int)this + 0x44))) ^ uVar1;
  *param_2 = uVar2;
  return uVar2;
}

/* ref: FUN_0040d2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d2d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_0040d320 */
GEN_OWN GEN_FRAME uint F_0040d320(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40d320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  byte * pbVar2;
  byte * pbVar3;
  uint uVar4;
  
  pbVar3 = param_1;
  pbVar2 = param_2;
  for (uVar4 = param_3; 3 < uVar4; uVar4 = uVar4 - 4) {
    if (*(int *)pbVar3 != *(int *)pbVar2) goto LAB_0040d34b;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
  }
  if (uVar4 == 0) {
    return 0;
  }
LAB_0040d34b: ;
  iVar1 = (uint)*pbVar3 - (uint)*pbVar2;
  if (iVar1 == 0) {
    if (uVar4 < 2) {
      return 0;
    }
    iVar1 = (uint)pbVar3[1] - (uint)pbVar2[1];
    if (iVar1 == 0) {
      if (uVar4 < 3) {
        return 0;
      }
      iVar1 = (uint)pbVar3[2] - (uint)pbVar2[2];
      if (iVar1 == 0) {
        if (uVar4 < 4) {
          return 0;
        }
        iVar1 = (uint)pbVar3[3] - (uint)pbVar2[3];
      }
    }
  }
  return iVar1 >> 0x1f | 1;
}

/* ref: FUN_0040d3a0 */
GEN_OWN GEN_FRAME uint F_0040d3a0(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  char cVar1;
  char * pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return (int)pcVar2 - (int)(param_1 + 1);
}

/* ref: FUN_0040d3c0 */
GEN_OWN GEN_FRAME uint F_0040d3c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_1,param_2,param_3);
  return (uint)uVar1;
}

/* ref: FUN_0040d3d0 */
GEN_OWN GEN_FRAME uint F_0040d3d0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(gen_size32 param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40d3d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48f80(param_1,(int)*param_3,param_2);
  return (uint)pvVar1;
}

/* ref: FUN_0040d3f0 */
GEN_OWN GEN_FRAME uint F_0040d3f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40d3f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c46e20(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_0040d400 */
GEN_OWN GEN_FRAME uint F_0040d400(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(gen_size32 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40d400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(param_1,(int)param_3,param_2);
  return (uint)pvVar1;
}

/* ref: FUN_0040d420 */
GEN_OWN GEN_FRAME uint F_0040d420(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = *param_2;
  return (uint)param_2;
}

/* ref: FUN_0040d4a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d4a0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0040d530 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040d530(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x12f);
  return uVar1;
}

/* ref: FUN_0040d550 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040d550(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x12f);
  return (uint)uVar1;
}

/* ref: FUN_0040d570 */
GEN_OWN GEN_FRAME uint F_0040d570(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x44;
}

/* ref: FUN_0040d580 */
GEN_OWN GEN_FRAME uint F_0040d580(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x45;
}

/* ref: FUN_0040d590 */
GEN_OWN GEN_FRAME uint F_0040d590(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040d5a0 */
GEN_OWN GEN_FRAME uint F_0040d5a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_0040d5b0 */
GEN_OWN GEN_FRAME uint F_0040d5b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_0040d5c0 */
GEN_OWN GEN_FRAME uint F_0040d5c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_0040d5d0 */
GEN_OWN GEN_FRAME uint F_0040d5d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d5d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0040d5f0 */
GEN_OWN GEN_FRAME uint F_0040d5f0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d5f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0040d630 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040d630(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x48,0x12f);
  return (uint)uVar1;
}

/* ref: FUN_0040d660 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0040d660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40d660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_0040d690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d690(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40d690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040d6b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d6b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40d6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040d6c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d6c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x40d6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_0040d720 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040d720(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x12f);
  return (uint)uVar1;
}

/* ref: FUN_0040d740 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040d740(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040d7a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0040d7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40d7a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0040d7f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0040d7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40d7f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0040d830 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040d830(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x48,param_2,0x12f);
  return uVar1;
}

/* ref: FUN_0040d860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d860(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40d860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040d870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d870(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *in_ecx - *param_2;
}

/* ref: FUN_0040d8a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040d8a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x12f);
  return uVar1;
}

/* ref: FUN_0040d8e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d8e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040d8f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d8f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40d8f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040d910 */
GEN_OWN GEN_FRAME uint F_0040d910(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040d920 */
GEN_OWN GEN_FRAME uint F_0040d920(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040d930 */
GEN_OWN GEN_FRAME uint F_0040d930(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040d940 */
GEN_OWN GEN_FRAME uint F_0040d940(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040d950 */
GEN_OWN GEN_FRAME uint F_0040d950(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040d980 */
GEN_OWN GEN_FRAME uint F_0040d980(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040d990 */
GEN_OWN GEN_FRAME uint F_0040d990(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040d9a0 */
GEN_OWN GEN_FRAME uint F_0040d9a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040d9b0 */
GEN_OWN GEN_FRAME uint F_0040d9b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40d9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040d9d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040d9d0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40d9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0040d9f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x40d9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_0040da70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040da70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40da70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0040dae0 */
GEN_OWN GEN_FRAME uint F_0040dae0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40dae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040daf0 */
GEN_OWN GEN_FRAME uint F_0040daf0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40daf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040db00 */
GEN_OWN GEN_FRAME uint F_0040db00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40db00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040db10 */
GEN_OWN GEN_FRAME byte F_0040db10(void)
{
  GEN_ENTER(0x40db10u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0040db30 */
GEN_OWN GEN_FRAME uint F_0040db30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40db30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  F_00c46e20(param_3,param_1,param_2 - param_1);
  return (param_2 - param_1) + param_3;
}

/* ref: FUN_0040db60 */
GEN_OWN GEN_FRAME uint F_0040db60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40db60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040db70 */
GEN_OWN GEN_FRAME uint F_0040db70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40db70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040dbc0 */
GEN_OWN GEN_FRAME uint F_0040dbc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40dbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040dbd0 */
GEN_OWN GEN_FRAME uint F_0040dbd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40dbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040dbe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040dbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40dbe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0040dc10 */
GEN_OWN GEN_FRAME ulonglong F_0040dc10(void)
{
  GEN_ENTER(0x40dc10u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  BOOL BVar1;
  
  BVar1 = gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  if (BVar1 != 0) {
    return (ulonglong)(*(ULONGLONG *)&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  }
  return 0;
}

/* ref: FUN_0040dc40 */
GEN_OWN GEN_FRAME ulonglong F_0040dc40(void)
{
  GEN_ENTER(0x40dc40u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  BOOL BVar1;
  
  BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  if (BVar1 != 0) {
    return (ulonglong)(*(ULONGLONG *)&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  }
  return 0;
}

/* ref: FUN_0040dc70 */
GEN_OWN GEN_FRAME ulonglong F_0040dc70(void)
{
  GEN_ENTER(0x40dc70u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  BOOL BVar1;
  
  BVar1 = gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  if (BVar1 != 0) {
    return (ulonglong)(*(ULONGLONG *)&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  }
  return 0;
}

/* ref: FUN_0040dca0 */
GEN_OWN GEN_FRAME uint F_0040dca0(void)
{
  GEN_ENTER(0x40dca0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  BOOL BVar1;
  
  if ((*(uint *)&REFG(undefined, 0x1370c08) & 1) != 0) {
    return REFG(undefined4, 0x1370c00);
  }
  *(uint *)&REFG(undefined, 0x1370c08) = *(uint *)&REFG(undefined, 0x1370c08) | 1;
  BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  if (BVar1 != 0) {
    REFG(undefined4, 0x1370c00) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
    REFG(undefined4, 0x1370c04) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
    return (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
  }
  REFG(undefined4, 0x1370c00) = 0;
  REFG(undefined4, 0x1370c04) = 0;
  return 0;
}

/* ref: FUN_0040dd00 */
GEN_OWN GEN_FRAME uint F_0040dd00(void)
{
  GEN_ENTER(0x40dd00u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  BVar1 = gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x20)));
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x20)).s.LowPart;
  uVar3 = (*(LARGE_INTEGER *)(gen_frame + 0x20)).s.HighPart;
  if (BVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  if ((*(uint *)&REFG(undefined, 0x1370c08) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1370c08) = *(uint *)&REFG(undefined, 0x1370c08) | 1;
    BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x18)));
    if (BVar1 == 0) {
      REFG(undefined4, 0x1370c00) = 0;
      REFG(undefined4, 0x1370c04) = 0;
    }
    else {
      REFG(undefined4, 0x1370c00) = (*(LARGE_INTEGER *)(gen_frame + 0x18)).s.LowPart;
      REFG(undefined4, 0x1370c04) = (*(LARGE_INTEGER *)(gen_frame + 0x18)).s.HighPart;
    }
  }
  (*(longlong *)(gen_frame + 0x0)) = CONCAT44(uVar3,uVar2);
  return (uint)((ulonglong)((*(longlong *)(gen_frame + 0x0)) * 1000) / CONCAT44(REFG(undefined4, 0x1370c04),REFG(undefined4, 0x1370c00)));
}

/* ref: FUN_0040dda0 */
GEN_OWN GEN_FRAME uint F_0040dda0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40dda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_0040ddb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040ddb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40ddb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0040e620((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::System::Crypt::Crc32::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040ddc0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40ddc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1084954));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Crypt::CryptKey::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040ddf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40ddf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x108495c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Crypt::ImportUtil::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040de20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40de20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1084964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0040de50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040de50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40de50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x108495c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0040de80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040de80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40de80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x108495c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0040deb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040deb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40deb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0040ded0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040ded0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40ded0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0040def0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040def0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40def0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if (0xf < (uint)in_ecx[5]) {
    *param_2 = in_ecx[4] + *in_ecx;
    return (uint)param_2;
  }
  *param_2 = in_ecx[4] + (int)in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0040df20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040df20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40df20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if (0xf < (uint)in_ecx[5]) {
    *param_2 = in_ecx[4] + *in_ecx;
    return (uint)param_2;
  }
  *param_2 = in_ecx[4] + (int)in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0040df60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0040df60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40df60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0040df80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0040df80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40df80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_0040dfa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0040dfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40dfa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0040dfc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040dfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x40dfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_0040e070 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040e070(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40e070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_0040e080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e080(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40e080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  *((undefined1 *)GEN_TOP(((int)in_ecx + param_2))) = 0;
  return param_2;
}

/* ref: FUN_0040e0a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0040e0a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40e0a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 uVar1;
  
  if ((param_2 != '\0') && (0xf < (uint)param_1[5])) {
    uVar1 = *param_1;
    if (param_3 != 0) {
      F_00c46aa0(param_1,uVar1,param_3);
    }
    F_00429760(uVar1,param_1[5] + 1,0x12f);
  }
  param_1[4] = param_3;
  param_1[5] = 0xf;
  *((undefined1 *)GEN_TOP((param_3 + (int)param_1))) = 0;
  return;
}

/* ref: FUN_0040e170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40e170u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0040e1d0 */
GEN_OWN GEN_FRAME uint F_0040e1d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40e1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_0040e200 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040e200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40e200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0040d7a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0040e220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40e220u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0040e2b0 */
GEN_OWN GEN_FRAME uint F_0040e2b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40e2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 == 0) {
    return 0;
  }
  return param_1 - param_2;
}

/* ref: FUN_0040e2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40e2d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0040e300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e300(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40e300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040e340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40e340u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar4 = F_004296a0(uVar5 + 1,0,0x12f);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    F_00429760(*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 0x14))) + 1,0x12f);
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

/* ref: FUN_0040e410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40e410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_0040d7a0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0040e430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e430(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40e430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040e440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e440(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40e440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040e450 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0040e450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40e450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_0040e470 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040e470(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40e470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0040e480 */
GEN_OWN GEN_FRAME uint F_0040e480(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40e480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0040e4a0 */
GEN_OWN GEN_FRAME uint F_0040e4a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40e4a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0040e4d0 */
GEN_OWN GEN_FRAME uint F_0040e4d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40e4d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0040e4f0 */
GEN_OWN GEN_FRAME uint F_0040e4f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40e4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  F_00c46e20(param_3,param_1,param_2 - param_1);
  return (param_2 - param_1) + param_3;
}

/* ref: FUN_0040e520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40e520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = F_0040d9f0(this GEN_EDX_FWD,0,*((undefined4 *)GEN_TOP(((int)this + 0x10))),puVar1,param_1[4]);
  return uVar2;
}

/* ref: FUN_0040e550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040e550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40e550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0040da70(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0040e570 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040e570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40e570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0040da70(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0040e580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40e580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0040e5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0040e5d0 */
GEN_OWN GEN_FRAME uint F_0040e5d0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40e5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0040e5f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e5f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40e5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1084964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0040e620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e620(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40e620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x1084964));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x108495c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0040e670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040e670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40e670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x12f);
    uVar1 = (uint)uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_0040e6c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40e6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_0040dfc0(this GEN_EDX_FWD,param_1,param_2,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_0040e720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040e720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40e720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0040d7a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0040e730 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040e730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40e730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x30)))) {
    F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x1c))),*((uint *)GEN_TOP(((int)this + 0x30))) + 1,0x12f);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x12f);
    uVar1 = (uint)uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_0040e7a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040e7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40e7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x12f);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_0040e7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40e7e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0040e860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e860(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40e860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040e870 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0040e870(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40e870u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_0040e340(param_1 GEN_EDX_ARG,param_2,param_1[4]);
    return param_2 != 0;
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
      F_00429760(uVar2,param_1[5] + 1,0x12f);
    }
    param_1[4] = uVar3;
    param_1[5] = 0xf;
    *((undefined1 *)GEN_TOP((uVar3 + (int)param_1))) = 0;
    return param_2 != 0;
  }
  if (param_2 == 0) {
    param_1[4] = 0;
    if (0xf < uVar1) {
      param_1 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *(undefined1 *)param_1 = 0;
  }
  return param_2 != 0;
}

/* ref: FUN_0040e930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e930(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40e930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0040e940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40e940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0040e990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e990(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40e990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_0040e9b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0040e9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40e9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0040e9d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040e9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x40e9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4))) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0040ea20 */
GEN_OWN GEN_FRAME byte F_0040ea20(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40ea20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_2));
  }
  uVar2 = F_0040d9f0(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),puVar1,param_2[4]);
  return (int)uVar2 < 0;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0040ea50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40ea50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  byte bVar2;
  
  uVar1 = *(uint *)(this + 0x10);
  if ((uVar1 <= param_1) && (*(uint *)(this + 0x14) != param_1)) {
    bVar2 = F_0040e870(this GEN_EDX_FWD,param_1,1);
    if (bVar2 != 0) {
      *(uint *)(this + 0x10) = uVar1;
      if (0xf < *(uint *)(this + 0x14)) {
        this = *(undefined * PTR32 *)this;
      }
      this[uVar1] = (undefined1)0x0;
    }
  }
  return 0;
}

/* ref: FUN_0040ea90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040ea90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40ea90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0040eab0 */
GEN_OWN GEN_FRAME unsigned int F_0040eab0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40eab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_0040eae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040eae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40eae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x12f);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_0040eb20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040eb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40eb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0040eb40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040eb40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40eb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0040eb60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040eb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40eb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (-iVar2 - 1U <= param_1) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (param_1 != 0) {
    uVar1 = iVar2 + param_1;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a(((char *)REFP(0x10802b0)));
    }
    if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar1) {
      F_0040e340(this GEN_EDX_ARG,uVar1,iVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    F_0040d6c0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x10))),param_1,(undefined1)param_2);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + uVar1))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + uVar1))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0040ec10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040ec10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x40ec10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_0040e220(this GEN_EDX_ARG,uVar3 + param_2,0xffffffff);
    F_0040e220(this GEN_EDX_ARG,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar3) {
    F_0040e340(this GEN_EDX_ARG,uVar3,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
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

/* ref: FUN_0040ed40 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0040ed40(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40ed40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_2));
  }
  uVar2 = F_0040d9f0(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),puVar1,param_2[4]);
  return (int)uVar2 < 0;
}

/* ref: FUN_0040ed70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040ed70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x40ed70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar2 = param_1[4] - param_2;
  uVar5 = param_3;
  if (uVar2 < param_3) {
    uVar5 = uVar2;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (-iVar1 - 1U <= uVar5) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (uVar5 != 0) {
    uVar2 = iVar1 + uVar5;
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a(((char *)REFP(0x10802b0)));
    }
    if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar2) {
      F_0040e340(this GEN_EDX_ARG,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = ((undefined4 *)GEN_TOP(*param_1));
    }
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3,(int)puVar4 + param_2,uVar5);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + uVar2))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + uVar2))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0040ee60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040ee60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40ee60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
    pvVar3 = this;
    if (0xf < uVar2) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    if (pvVar3 <= param_1) {
      pvVar3 = this;
      if (0xf < uVar2) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3)))) {
        if (0xf < uVar2) {
          uVar2 = F_0040ed70(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar2;
        }
        uVar2 = F_0040ed70(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
        return uVar2;
      }
    }
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (-iVar1 - 1U <= param_2) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (param_2 != 0) {
    uVar2 = iVar1 + param_2;
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a(((char *)REFP(0x10802b0)));
    }
    if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar2) {
      F_0040e340(this GEN_EDX_ARG,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3,param_1,param_2);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + uVar2))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + uVar2))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0040ef80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040ef80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40ef80u, gen_a0, gen_a1, gen_a2, 0u);
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
          uVar1 = F_0040ec10(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_0040ec10(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < param_2) {
    F_0040e340(this GEN_EDX_ARG,param_2,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
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

/* ref: FUN_0040f080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x40f080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (uVar2 < param_1) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (-uVar2 - 1 <= param_2) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (param_2 != 0) {
    uVar1 = uVar2 + param_2;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a(((char *)REFP(0x10802b0)));
    }
    if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar1) {
      F_0040e340(this GEN_EDX_ARG,uVar1,uVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      if (*((uint *)GEN_TOP(((int)this + 0x14))) < 0x10) {
        *(undefined1 *)this = 0;
        return (uint)this;
      }
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    pvVar4 = this;
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_2 + param_1,(int)pvVar3 + param_1,
               *((int *)GEN_TOP(((int)this + 0x10))) - param_1);
    F_0040d6c0(this GEN_EDX_ARG,param_1,param_2,(undefined1)param_3);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + uVar1))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + uVar1))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0040f180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040f180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40f180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar1 = *(uint *)this;
  if (uVar1 != uVar2) {
    uVar2 = F_00c46e20(uVar1,uVar2,0);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_0040f1b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f1b0u, gen_a0, gen_a1, 0u, 0u);
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
  if (*((char *)GEN_TOP(((int)local_8[1] + 0x45))) == '\0') {
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
          goto LAB_0040f218;
        }
LAB_0040f21a: ;
        puVar6 = ((undefined4 *)GEN_TOP(puVar7[2]));
      }
      else {
LAB_0040f218: ;
        if ((int)uVar5 < 0) goto LAB_0040f21a;
        puVar6 = ((undefined4 *)GEN_TOP(*puVar7));
        local_8 = puVar7;
      }
      puVar7 = puVar6;
    } while (*((char *)GEN_TOP(((int)puVar6 + 0x45))) == '\0');
  }
  return (uint)local_8;
}

/* ref: FUN_0040f240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f240(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40f240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0040e730(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0040f270 */
GEN_OWN GEN_FRAME unsigned int F_0040f270(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40f270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_0040f2a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_0040f2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0040eb60(this GEN_EDX_FWD,1,param_1);
  return uVar1;
}

/* ref: FUN_0040f2f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x40f2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this GEN_EDX_FWD,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_0040f330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0040ed70(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_0040f350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f350u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_0040ee60(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_0040f380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0040ec10(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_0040f3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f3a0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_0040ef80(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_0040f3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x40f3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 - (int)pvVar1;
  }
  F_0040f080(this GEN_EDX_FWD,iVar2,1,param_3);
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    this = *(undefined * PTR32 *)this;
  }
  *param_1 = (int)this + iVar2;
  return (uint)param_1;
}

/* ref: FUN_0040f420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40f420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0040f1b0(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0040f440 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040f440(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40f440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0040e730(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0040f450 */
GEN_OWN GEN_FRAME unsigned int F_0040f450(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40f450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_0040f480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this GEN_EDX_FWD,param_1,0,0xffffffff);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
  F_0040ec10(((undefined1 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,param_1 + 0x1c,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_0040f4d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f4d0u, gen_a0, gen_a1, 0u, 0u);
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
  F_0040ef80(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (uint)this;
}

/* ref: FUN_0040f510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0040ec10(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_0040f530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f530u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_0040ef80(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_0040f560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0040ed70(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_0040f580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f580u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_0040ee60(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_0040f5b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  pvVar3 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3;
  pvVar3 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  if (iVar1 != 0) {
    uVar2 = F_0040f080(this GEN_EDX_FWD,iVar1 - (int)pvVar3,1,param_1);
    return uVar2;
  }
  uVar2 = F_0040f080(this GEN_EDX_ARG,0,1,param_1);
  return uVar2;
}

/* ref: FUN_0040f600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x40f600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_0040ec10(param_1 GEN_EDX_FWD,this,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_0040f630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40f630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = F_0040f1b0(this GEN_EDX_FWD,param_2);
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 4)))) {
    puVar2 = ((undefined4 *)GEN_TOP((uVar1 + 0xc)));
    if (0xf < *((uint *)GEN_TOP((uVar1 + 0x20)))) {
      puVar2 = ((undefined4 *)GEN_TOP(*puVar2));
    }
    uVar3 = F_0040d9f0(param_2 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_2 + 0x10))),puVar2,
                         *((undefined4 *)GEN_TOP((uVar1 + 0x1c))));
    if (-1 < (int)uVar3) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *((uint *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_0040f6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      F_00429760(*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 0x14))) + 1,0x12f);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *(undefined1 *)this = 0;
    if ((uint)param_1[5] < 0x10) {
      F_00c46e20(this,param_1,param_1[4] + 1);
    }
    else {
      *(undefined4 *)this = *param_1;
      *param_1 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
  }
  return (uint)this;
}

/* ref: FUN_0040f730 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0040f730(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40f730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_0040f760 */
GEN_OWN GEN_FRAME uint F_0040f760(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40f760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0040e730(param_2 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0040f770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f770(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x40f770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_0040e730(param_5 + 3 GEN_EDX_FWD);
    F_00429760(param_5,0x48,0x12f);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_5;
      if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
        **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
      }
      goto LAB_0040f7e6;
    }
    param_4[2] = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
    if (param_4 != *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)))) goto LAB_0040f7e6;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = param_5;
LAB_0040f7e6: ;
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x44)));
  piVar3 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar4 + 0x44))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar3[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar4 = piVar6[2];
      if (*((char *)GEN_TOP((iVar4 + 0x44))) == '\0') {
        *(undefined1 *)(piVar5 + 0x11) = 1;
        *((undefined1 *)GEN_TOP((iVar4 + 0x44))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x44))) = 0;
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
      }
      else {
        if (piVar3 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar3 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar3;
          if (*((char *)GEN_TOP((*piVar3 + 0x45))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar3 + 4))) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar3;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
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
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x44))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x44))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x45))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar2[2]))) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_0040f971: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*((char *)GEN_TOP((iVar4 + 0x44))) != '\0') {
        if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
          iVar4 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar4 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 0x45))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar4 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar4;
          }
          else {
            piVar3 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar3[1] + 0x44))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x44))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x45))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar2))) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_0040f971;
      }
      *(undefined1 *)(piVar5 + 0x11) = 1;
      *((undefined1 *)GEN_TOP((iVar4 + 0x44))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 0x44))) = 0;
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x44)));
  } while( true );
}

/* ref: FUN_0040f9a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this GEN_EDX_FWD,param_1,0,0xffffffff);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
  F_0040ec10(((undefined1 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,param_1 + 0x1c,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_0040f9f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040f9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40f9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_0040f6a0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_0040fa20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040fa20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40fa20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0040f6a0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0040fa30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040fa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40fa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this))) < param_1) {
    puVar3 = ((undefined1 *)GEN_TOP(F_004296a0(param_1,0,0x12f)));
    puVar5 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x12f);
    }
    puVar5 = puVar3 + (int)param_1;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_0040fac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040fac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40fac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  bool bVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x45))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_0040d7a0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar7 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x45))) == '\0') {
    piVar6 = piVar7;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x45))) == '\0') && (piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar7[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar7 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar6 + 0x45))) == '\0') {
          piVar6[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar6;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar1)) == piVar3) {
          *puVar1 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar1[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar2 = (*(int * PTR32 *)&gen_args[1])[0x11];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x11))) = (char)piVar3[0x11];
      *(char *)(piVar3 + 0x11) = (char)iVar2;
      goto LAB_0040fbdf;
    }
  }
  else {
    piVar6 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar7 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x45))) == '\0') {
    piVar6[1] = (int)piVar7;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar6;
  }
  else if (((int *)GEN_TOP(*piVar7)) == piVar3) {
    *piVar7 = (int)piVar6;
  }
  else {
    piVar7[2] = (int)piVar6;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar7;
    if (*((char *)GEN_TOP(((int)piVar6 + 0x45))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_0040d5f0(piVar6)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar6 + 0x45))) == '\0') {
      uVar5 = F_0040d5d0(piVar6);
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = piVar7;
    }
  }
LAB_0040fbdf: ;
  if ((char)piVar3[0x11] == '\x01') {
    if (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        if ((char)piVar6[0x11] != '\x01') break;
        piVar4 = ((int *)GEN_TOP(*piVar7));
        if (piVar6 == piVar4) {
          piVar4 = ((int *)GEN_TOP(piVar7[2]));
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar7 + 0x11) = 0;
            F_0040e7e0(this GEN_EDX_ARG,piVar7);
            piVar4 = ((int *)GEN_TOP(piVar7[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar4 + 0x45))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar4 + 0x44))) != '\x01') || (*((char *)GEN_TOP((piVar4[2] + 0x44))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar4[2] + 0x44))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar4 + 0x44))) = 1;
                *(undefined1 *)(piVar4 + 0x11) = 0;
                F_0040e170(this GEN_EDX_ARG,piVar4);
                piVar4 = ((int *)GEN_TOP(piVar7[2]));
              }
              *(char *)(piVar4 + 0x11) = (char)piVar7[0x11];
              *(undefined1 *)(piVar7 + 0x11) = 1;
              *((undefined1 *)GEN_TOP((piVar4[2] + 0x44))) = 1;
              F_0040e7e0(this GEN_EDX_ARG,piVar7);
              break;
            }
LAB_0040fca5: ;
            *(undefined1 *)(piVar4 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar7 + 0x11) = 0;
            F_0040e170(this GEN_EDX_ARG,piVar7);
            piVar4 = ((int *)GEN_TOP(*piVar7));
          }
          if (*((char *)GEN_TOP(((int)piVar4 + 0x45))) == '\0') {
            if ((*((char *)GEN_TOP((piVar4[2] + 0x44))) == '\x01') && (*((char *)GEN_TOP((*piVar4 + 0x44))) == '\x01'))
            goto LAB_0040fca5;
            if (*((char *)GEN_TOP((*piVar4 + 0x44))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar4[2] + 0x44))) = 1;
              *(undefined1 *)(piVar4 + 0x11) = 0;
              F_0040e7e0(this GEN_EDX_ARG,piVar4);
              piVar4 = ((int *)GEN_TOP(*piVar7));
            }
            *(char *)(piVar4 + 0x11) = (char)piVar7[0x11];
            *(undefined1 *)(piVar7 + 0x11) = 1;
            *((undefined1 *)GEN_TOP((*piVar4 + 0x44))) = 1;
            F_0040e170(this GEN_EDX_ARG,piVar7);
            break;
          }
        }
        bVar8 = piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
        piVar6 = piVar7;
        piVar7 = ((int *)GEN_TOP(piVar7[1]));
      } while (bVar8);
    }
    *(undefined1 *)(piVar6 + 0x11) = 1;
  }
  if (0xf < (uint)piVar3[0xf]) {
    F_00429760(piVar3[10],piVar3[0xf] + 1,0x12f);
  }
  piVar3[0xf] = 0xf;
  piVar3[0xe] = 0;
  *(undefined1 *)(piVar3 + 10) = 0;
  if (0xf < (uint)piVar3[8]) {
    F_00429760(piVar3[3],piVar3[8] + 1,0x12f);
  }
  piVar3[8] = 0xf;
  piVar3[7] = 0;
  *(undefined1 *)(piVar3 + 3) = 0;
  F_00429760(piVar3,0x48,0x12f);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_0040fd80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040fd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40fd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_0040fa30(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0040fa30(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0040fde0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0040fde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40fde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x45)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0040fde0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    if (0xf < (uint)piVar3[0xf]) {
      F_00429760(piVar3[10],piVar3[0xf] + 1,0x12f);
    }
    piVar3[0xf] = 0xf;
    piVar3[0xe] = 0;
    *(undefined1 *)(piVar3 + 10) = 0;
    if (0xf < (uint)piVar3[8]) {
      F_00429760(piVar3[3],piVar3[8] + 1,0x12f);
    }
    piVar3[8] = 0xf;
    piVar3[7] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
    F_00429760(piVar3,0x48,0x12f);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x45)));
  }
  return;
}

/* ref: FUN_0040fe80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040fe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40fe80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0040fd80(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined1 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0040fd80(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar3;
}

/* ref: FUN_0040fee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040fee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40fee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this GEN_EDX_FWD,param_1,0,0xffffffff);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
  F_0040f6a0(((undefined1 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,param_2);
  return (uint)this;
}

/* ref: FUN_0040ff30 */
GEN_OWN GEN_FRAME uint F_0040ff30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40ff30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar1 = param_1[4];
  uVar3 = *((int *)GEN_TOP((param_2 + 0x10))) + *((int *)GEN_TOP((param_3 + 0x10)));
  if (((uVar1 <= uVar3) && (param_1[5] != uVar3)) &&
     (bVar2 = F_0040e870(param_1 GEN_EDX_ARG,uVar3,1), bVar2 != 0)) {
    param_1[4] = uVar1;
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((undefined1 *)GEN_TOP(((int)puVar4 + uVar1))) = 0;
  }
  F_0040ed70(param_1 GEN_EDX_ARG,param_2,0,0xffffffff);
  F_0040ed70(param_1 GEN_EDX_ARG,param_3,0,0xffffffff);
  return (uint)param_1;
}

/* ref: FUN_0040ffb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040ffb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x40ffb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  bool bVar12;
  bool local_8;
  
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar7[1] + 0x45))) == '\0') {
    uVar9 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x1c)));
    uVar1 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x20)));
    puVar11 = ((undefined4 *)GEN_TOP(puVar7[1]));
    do {
      puVar7 = puVar11;
      piVar4 = puVar7 + 3;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        uVar2 = puVar7[7];
        if (0xf < (uint)puVar7[8]) {
          piVar4 = ((int *)GEN_TOP(*piVar4));
        }
        uVar5 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x1c)));
        if (uVar9 < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x1c)))) {
          uVar5 = uVar9;
        }
        uVar6 = uVar5;
        if (uVar2 <= uVar5) {
          uVar6 = uVar2;
        }
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[1]) + 0xc;
        }
        else {
          iVar10 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)));
        }
        uVar6 = F_0040d320(iVar10,piVar4,uVar6);
        if (uVar6 == 0) {
          if (uVar5 < uVar2) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar5 != uVar2);
          }
        }
        local_8 = (int)uVar6 < 0;
      }
      else {
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[1]) + 0xc;
        }
        else {
          iVar10 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)));
        }
        uVar2 = puVar7[7];
        uVar5 = uVar2;
        if (uVar9 <= uVar2) {
          uVar5 = uVar9;
        }
        if (0xf < (uint)puVar7[8]) {
          piVar4 = ((int *)GEN_TOP(*piVar4));
        }
        uVar5 = F_0040d320(piVar4,iVar10,uVar5);
        if (uVar5 == 0) {
          if (uVar2 < uVar9) {
            local_8 = false;
            goto LAB_0041009c;
          }
          uVar5 = (uint)(uVar2 != uVar9);
        }
        local_8 = -1 < (int)uVar5;
      }
LAB_0041009c: ;
      if (local_8 == false) {
        puVar11 = ((undefined4 *)GEN_TOP(puVar7[2]));
      }
      else {
        puVar11 = ((undefined4 *)GEN_TOP(*puVar7));
      }
    } while (*((char *)GEN_TOP(((int)puVar11 + 0x45))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar7;
  if (local_8 != false) {
    if (puVar7 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      bVar12 = true;
      goto LAB_004100d1;
    }
    F_0040da70(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[2]);
  puVar11 = ((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)));
  puVar8 = puVar11;
  if (0xf < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x20)))) {
    puVar8 = ((undefined *)GEN_TOP(*puVar11));
  }
  uVar9 = F_0040d9f0((*(undefined4 * PTR32 *)&gen_args[2]) + 3 GEN_EDX_ARG,0,(*(undefined4 * PTR32 *)&gen_args[2])[7],puVar8,*((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x1c))));
  bVar12 = local_8;
  if (-1 < (int)uVar9) {
    F_0040e730(puVar11 GEN_EDX_ARG);
    F_00429760((*(int *)&gen_args[1]),0x48,0x12f);
    *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
LAB_004100d1: ;
  puVar7 = ((undefined4 *)GEN_TOP(F_0040f770(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar12,puVar7,(*(int *)&gen_args[1]))));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar7;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00410160 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00410160(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x410160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_0040ec10(param_1 GEN_EDX_ARG,param_2,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x30) = 0xf;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    param_1[0x1c] = 0;
    F_0040ec10(param_1 + 0x1c GEN_EDX_ARG,param_2 + 0x1c,0,0xffffffff);
  }
  return;
}

/* ref: FUN_004101c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004101c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4101c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0040fd80(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined1 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0040fd80(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00410220 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00410220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0040fde0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00410250 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00410250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x410250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x12f);
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: FUN_004102b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004102b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4102b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this GEN_EDX_FWD,param_1,0,0xffffffff);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
  F_0040f6a0(((undefined1 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,param_2);
  return (uint)this;
}

/* ref: FUN_00410300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x410300u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_0040fde0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x45))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x45))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x45)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x45)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x45)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x45)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_0040fac0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_004103c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004103c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4103c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * this_00;
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  this_00 = (*(int * PTR32 *)&gen_args[2]) + 3;
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    F_0040f770(this GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[0]),1,piVar3,(*(int * PTR32 *)&gen_args[2]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(*piVar3))) {
    piVar3 = (*(int * PTR32 *)&gen_args[1]) + 3;
    if (0xf < (uint)(*(int * PTR32 *)&gen_args[1])[8]) {
      piVar3 = ((int *)GEN_TOP(*piVar3));
    }
    uVar4 = F_0040d9f0(this_00 GEN_EDX_ARG,0,(*(int * PTR32 *)&gen_args[2])[7],piVar3,(*(int * PTR32 *)&gen_args[1])[7]);
    if ((int)uVar4 < 0) {
      F_0040f770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar1);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[1]) == piVar3) {
    bVar2 = F_0040ed40(piVar3[2] + 0xc,this_00);
    if (bVar2 != 0) {
      F_0040f770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))),piVar1);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else {
    bVar2 = F_0040ed40(this_00,(*(int * PTR32 *)&gen_args[1]) + 3);
    if (bVar2 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_0040da70(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      bVar2 = F_0040ed40((*(int * PTR32 *)&gen_args[2]) + 3,this_00);
      if (bVar2 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x45))) == '\0') {
          F_0040f770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar1);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_0040f770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]),piVar1);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
    bVar2 = F_0040ed40((*(int * PTR32 *)&gen_args[1]) + 3,this_00);
    if (bVar2 != 0) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_0040d7a0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[2]) == *((int * PTR32 *)GEN_TOP(((int)this + 4)))) ||
         (bVar2 = F_0040ed40(this_00,(*(int * PTR32 *)&gen_args[2]) + 3), bVar2 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[2] + 0x45))) == '\0') {
          F_0040f770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[2]),piVar1);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_0040f770(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[1]),piVar1);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
  }
  puVar5 = ((undefined4 *)GEN_TOP(F_0040ffb0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar1,0)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00410580 */
GEN_OWN GEN_FRAME unsigned int F_00410580(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x410580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_0040ec10(param_2 GEN_EDX_ARG,param_3,0,0xffffffff);
    *(undefined4 *)(param_2 + 0x30) = 0xf;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    param_2[0x1c] = 0;
    F_0040ec10(param_2 + 0x1c GEN_EDX_ARG,param_3 + 0x1c,0,0xffffffff);
  }
  return;
}

/* ref: FUN_004105e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004105e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4105e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (this != param_1) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00410620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00410300(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00410640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x410640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * this_00;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x48,0,0x12f)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  this_00 = puVar1 + 3;
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[8] = 0xf;
    puVar1[7] = 0;
    *(undefined1 *)this_00 = 0;
    F_0040ec10(this_00 GEN_EDX_ARG,param_1,0,0xffffffff);
    puVar1[0xf] = 0xf;
    puVar1[0xe] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    F_0040ec10(puVar1 + 10 GEN_EDX_ARG,param_1 + 0x1c,0,0xffffffff);
  }
  return (uint)puVar1;
}

/* ref: FUN_004106d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004106d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4106d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00410300(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x48,0x12f);
  return (uint)uVar1;
}

/* ref: FUN_00410710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x410710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00410640(this GEN_EDX_FWD,param_3);
  F_004103c0(this GEN_EDX_ARG,param_1,param_2,uVar1);
  return param_1;
}

/* ref: FUN_00410740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00410300(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x48,0x12f);
  return (uint)uVar1;
}

/* ref: FUN_004107c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004107c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4107c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  uVar1 = F_0040f1b0(this GEN_EDX_FWD,param_1);
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 4)))) {
    piVar2 = ((int *)GEN_TOP((uVar1 + 0xc)));
    if (0xf < *((uint *)GEN_TOP((uVar1 + 0x20)))) {
      piVar2 = ((int *)GEN_TOP(*piVar2));
    }
    uVar3 = F_0040d9f0(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),piVar2,
                         *((undefined4 *)GEN_TOP((uVar1 + 0x1c))));
    if (-1 < (int)uVar3) {
      return uVar1 + 0x28;
    }
  }
  uVar3 = ((uint *)(gen_frame + 0x3c))[0];
  (*(uint *)(gen_frame + 0x50)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x3c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x3c))[0] = uVar3 & 0xffffff00;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  ((undefined1 *)(gen_frame + 0x4))[0] = 0;
  F_0040ec10(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1,0,0xffffffff);
  (*(undefined4 *)(gen_frame + 0x34)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  ((undefined1 *)(gen_frame + 0x20))[0] = 0;
  F_0040f6a0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,((uint *)(gen_frame + 0x3c)));
  uVar3 = F_00410640(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_004103c0(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),uVar1,uVar3);
  F_0040e730(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if (0xf < (*(uint *)(gen_frame + 0x50))) {
    F_00429760(((uint *)(gen_frame + 0x3c))[0],(*(uint *)(gen_frame + 0x50)) + 1,0x12f);
  }
  return (*(int *)(gen_frame + 0x0)) + 0x28;
}

/* ref: FUN_00410900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00410300(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x48,0x12f);
  return (uint)uVar1;
}

/* ref: Client::System::Streaming::IStreamingCtrl::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410950(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x410950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[26])REFP(0x1087e5c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00410980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00410980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1087ec8));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  REFG(undefined4, 0x1370c0c) = 0;
  uVar2 = F_004a05c0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004109b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004109b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4109b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x28))) + 4))))
                    (*((int * PTR32 *)GEN_TOP((param_1 + 0x28))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_004109f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004109f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4109f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00410a20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00410a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD));
}

/* ref: FUN_00410a40 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00410a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x38))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
  return (byte)uVar1;
}

/* ref: FUN_00410a50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00410a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00410a60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00410a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x40))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
  return (byte)uVar1;
}

/* ref: FUN_00410a70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00410a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00410aa0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00410aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x410aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x58))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD,param_1,param_2));
}

/* ref: FUN_00410ab0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00410ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x410ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x5c))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,param_1,param_2);
  return (byte)uVar1;
}

/* ref: FUN_00410ac0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00410ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x410ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x60))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return (byte)uVar1;
}

/* ref: FUN_00410ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x410ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 100))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410ae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x410ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x14)));
  *((undefined1 *)GEN_TOP((uVar1 + 0x40))) = param_2;
  return uVar1;
}

/* ref: FUN_00410af0 */
GEN_OWN GEN_FRAME float10 F_00410af0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x410af0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00410b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x410b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_004cefe0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1087ed8));
  *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  return (uint)this;
}

/* ref: FUN_00410b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410b90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double param_2, double gen_a1))
{
  GEN_ENTER(0x410b90u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x3c)));
  *((longlong *)GEN_TOP((iVar1 + 0x28))) = (longlong)((double)*((longlong *)GEN_TOP((iVar1 + 0x30))) * param_2);
  *((undefined2 *)GEN_TOP((iVar1 + 10))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x18))) = 0;
  uVar2 = *((uint *)GEN_TOP((iVar1 + 0x2c)));
  if ((*((int *)GEN_TOP((iVar1 + 0x3c))) <= (int)uVar2) &&
     ((*((int *)GEN_TOP((iVar1 + 0x3c))) < (int)uVar2 || (*((uint *)GEN_TOP((iVar1 + 0x38))) <= *((uint *)GEN_TOP((iVar1 + 0x28))))))
     ) {
    *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 1;
    return uVar2;
  }
  *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 2;
  return uVar2;
}

/* ref: FUN_00410be0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00410be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((longlong *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x3c))) + 0x38))) /
                         (float10)*(double *)&REFG(double, 0x1087ef0)))));
}

/* ref: FUN_00410c00 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00410c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((longlong *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x3c))) + 0x30))) /
                         (float10)*(double *)&REFG(double, 0x1087ef0)))));
}

/* ref: FUN_00410c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00410c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x410c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x3c)));
  if ((iVar1 == 0) || (iVar1 == -0x250)) {
    return 0;
  }
  *param_1 = *((int *)GEN_TOP((iVar1 + 0x254)));
  iVar1 = *((int *)GEN_TOP((iVar1 + 600)));
  *param_2 = iVar1;
  if ((*param_1 != 0) && (iVar1 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00410cd0 */
GEN_OWN GEN_FRAME uint F_00410cd0(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x410cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = ((undefined4 *)GEN_TOP(*in_eax));
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x0));
  (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(0x0));
  gen_imp_VariantInit((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x0)))));
  (*(ushort *)((char *)((undefined *)(gen_frame + 0x0)))) = 0xb;
  (*(undefined2 *)((char *)((undefined *)(gen_frame + 0x0)) + 8)) = 1;
  uVar1 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1087e34),(GEN_LPANY)0x0,3,(undefined *)&REFG(undefined, 0x1095a04),&(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))))((*(undefined4 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&REFG(undefined, 0x112814c),&(*(int * PTR32 *)(gen_frame + 0x14)));
    if (-1 < (int)uVar1) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x112839c),&REFG(undefined, 0x112839c));
      if (-1 < (int)uVar1) {
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))))((*(undefined4 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&REFG(undefined, 0x11555b0),&(*(int * PTR32 *)(gen_frame + 0x10)));
        if (-1 < (int)uVar1) {
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x10))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[6])REFP(0x1084b60)),((undefined *)(gen_frame + 0x0)));
          if (-1 < (int)uVar1) {
            uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xc))))(param_2 GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x18)),(*(undefined * PTR32 (*)[1])REFP(0x1084b7c)));
          }
        }
      }
    }
  }
  if ((*(int * PTR32 *)(gen_frame + 0x14)) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x0));
  }
  if ((*(int * PTR32 *)(gen_frame + 0x10)) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 8))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00410e20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00410e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x410e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  int iVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    iVar2 = (*(int *)&gen_args[1]);
    if ((char)(*(int *)&gen_args[1]) != '\0') {
      while (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + 0x28))))
                               (*((int * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,0,&(*(int *)&gen_args[1])), iVar2 = (*(int *)&gen_args[1]), uVar1 != 0
            ) {
        F_004cee10();
      }
    }
    do {
      if ((*(int *)&gen_args[0]) == 1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG);
        iVar2 = 2;
LAB_00410e9c: ;
        *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x1087ef8));
      }
      else {
        if ((*(int *)&gen_args[0]) == 2) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + 0x24))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG);
          iVar2 = 0;
          goto LAB_00410e9c;
        }
        if ((*(int *)&gen_args[0]) == 3) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG);
          iVar2 = 1;
          goto LAB_00410e9c;
        }
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,0,&(*(int *)&gen_args[1]));
    } while (iVar2 != (*(int *)&gen_args[1]));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x3c)));
    *((int *)GEN_TOP((iVar2 + 0x20))) = (*(int *)&gen_args[0]);
    *((int *)GEN_TOP((iVar2 + 0x1c))) = (*(int *)&gen_args[0]);
  }
  return;
}

/* ref: FUN_00410ed0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00410ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x30)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG,0,0,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x24)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00410f70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00410f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1087f00));
  piVar2 = ((int *)GEN_TOP(((int)this + 0x264)));
  iVar3 = 3;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar2));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  gen_imp_CloseHandle(*((undefined4 *)GEN_TOP(((int)this + 0x278))));
  return (uint)(gen_imp_CloseHandle(*((undefined4 *)GEN_TOP(((int)this + 0x274)))));
}

/* ref: FUN_00410fe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00410fe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x410fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x34))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x38))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x40))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x250))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x254))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 600))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x25c))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x264))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x268))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x26c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x260))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x270))) = 0;
  return 0;
}

/* ref: FUN_00411050 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00411050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined1 *)GEN_TOP(((int)this + 0x27c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x27d))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x27e))) = 0;
  gen_imp_ResetEvent(*((undefined4 *)GEN_TOP(((int)this + 0x274))));
  gen_imp_ResetEvent(*((undefined4 *)GEN_TOP(((int)this + 0x278))));
  *((undefined4 *)GEN_TOP(((int)this + 0x260))) = 0;
  return 0;
}

/* ref: FUN_00411090 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00411090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined1 *)GEN_TOP(((int)this + 0x27e))) = 1;
  gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this + 0x274))));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 0;
}

/* ref: FUN_00411120 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00411120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 1;
  piVar3 = ((int *)GEN_TOP(((int)this + 0x264)));
  iVar2 = 3;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar3));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *((undefined1 *)GEN_TOP(((int)this + 0x27e))) = 1;
  gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this + 0x274))));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x27c))) = 0;
  return 0;
}

/* ref: FUN_00411180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00411180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x411180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c83710(this GEN_EDX_FWD,&REFG(undefined, 0x10849fc),0,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1087fa4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[15])REFP(0x1087f64));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[5])REFP(0x1087f4c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[9])REFP(0x1087f24));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined * PTR32 (*)[5])REFP(0x1087f0c));
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x178))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x17c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1b0));
  *((undefined4 *)GEN_TOP(((int)this + 0x1e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 500))) = 0;
  *((int *)GEN_TOP(((int)this + 0x1cc))) = (int)this + 0x180;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c8))) = ((undefined4 *)GEN_TOP(((int)this + 0x174)));
  *((int *)GEN_TOP(((int)this + 0x1d4))) = (int)this + 0x198;
  *((int *)GEN_TOP(((int)this + 0x1d0))) = (int)this + 0x18c;
  *((int *)GEN_TOP(((int)this + 0x1d8))) = (int)this + 0x1a4;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e4))) = 0;
  return (uint)this;
}

/* ref: FUN_00411280 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00411280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1087fa4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[15])REFP(0x1087f64));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[5])REFP(0x1087f4c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[9])REFP(0x1087f24));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined * PTR32 (*)[5])REFP(0x1087f0c));
  piVar2 = ((int *)GEN_TOP(((int)this + 0x178)));
  local_8 = 5;
  do {
    piVar1 = ((int *)GEN_TOP(piVar2[-1]));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
      piVar2[-1] = 0;
    }
    piVar1 = ((int *)GEN_TOP(*piVar2));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 3;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  if (*((int *)GEN_TOP(((int)this + 0x1ec))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x1ec))));
    *((undefined4 *)GEN_TOP(((int)this + 0x1ec))) = 0;
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1b0));
  F_00c83780(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00411330 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00411330(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x411330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar10 = param_3 >> 5;
  puVar8 = param_1;
  puVar9 = param_2;
  if (((uint)param_2 & 0xf) == 0) {
    if (((uint)param_1 & 0xf) == 0) {
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar1 = puVar9[4];
        uVar2 = puVar9[5];
        uVar3 = puVar9[6];
        uVar4 = puVar9[7];
        uVar5 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        *puVar8 = *puVar9;
        puVar8[1] = uVar5;
        puVar8[2] = uVar6;
        puVar8[3] = uVar7;
        puVar8[4] = uVar1;
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        puVar9 = puVar9 + 8;
        puVar8 = puVar8 + 8;
      }
    }
    else {
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar1 = puVar9[4];
        uVar2 = puVar9[5];
        uVar3 = puVar9[6];
        uVar4 = puVar9[7];
        uVar5 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        *puVar8 = *puVar9;
        puVar8[1] = uVar5;
        puVar8[2] = uVar6;
        puVar8[3] = uVar7;
        puVar8[4] = uVar1;
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        puVar9 = puVar9 + 8;
        puVar8 = puVar8 + 8;
      }
    }
  }
  else if (((uint)param_1 & 0xf) == 0) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar1 = puVar9[4];
      uVar2 = puVar9[5];
      uVar3 = puVar9[6];
      uVar4 = puVar9[7];
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      puVar8[4] = uVar1;
      puVar8[5] = uVar2;
      puVar8[6] = uVar3;
      puVar8[7] = uVar4;
      puVar9 = puVar9 + 8;
      puVar8 = puVar8 + 8;
    }
  }
  else {
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar1 = puVar9[4];
      uVar2 = puVar9[5];
      uVar3 = puVar9[6];
      uVar4 = puVar9[7];
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      puVar8[4] = uVar1;
      puVar8[5] = uVar2;
      puVar8[6] = uVar3;
      puVar8[7] = uVar4;
      puVar9 = puVar9 + 8;
      puVar8 = puVar8 + 8;
    }
  }
  if ((param_3 & 0x1f) != 0) {
    uVar11 = F_00c46aa0(puVar8,puVar9,param_3 & 0x1f);
    puVar8 = ((undefined4 *)GEN_TOP((uint)uVar11));
  }
  return (uint)puVar8;
}

/* ref: FUN_00411450 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00411450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x411450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar1 = 0;
    piVar2 = ((int *)GEN_TOP(((int)this + 0x1dc)));
    uVar3 = 3;
    do {
      if (*piVar2 == param_1) {
        piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x1dc))) + 8)));
        *piVar2 = *piVar2 + 1;
        return;
      }
      if (*piVar2 == 0) {
        uVar3 = uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < 3);
    if (uVar3 != 3) {
      *((int *)GEN_TOP(((int)this + uVar3 * 4 + 0x1dc))) = param_1;
      *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + 1;
    }
  }
  return;
}

/* ref: FUN_004114e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004114e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4114e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  if ((param_1 != 0) && (*((int *)GEN_TOP((param_1 + 8))) == 0)) {
    uVar1 = 0;
    piVar2 = ((int *)GEN_TOP(((int)this + 0x1c8)));
    while (*piVar2 != 0) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (4 < uVar1) {
        return;
      }
    }
    *((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x1c8))) = param_1;
  }
  return;
}

/* ref: FUN_00411520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00411520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x411520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD,0,&(*(int * PTR32 *)(gen_frame + 0xc)));
    if (uVar1 == 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),0,0x2800);
      if (uVar1 == 0) {
        iVar2 = *((int *)GEN_TOP(((int)this + 0x1ec)));
        param_1 = (*(int *)(gen_frame + 0x4));
        (*(uint *)(gen_frame + 0x8)) = uVar1;
        if (*((int *)GEN_TOP(((int)this + 0x168))) != 0) {
          do {
            F_00411330(param_1,iVar2,(*(int *)(gen_frame + 0x0)));
            param_1 = param_1 + (*(int *)(gen_frame + 0x0));
            uVar1 = (*(uint *)(gen_frame + 0x8)) + 1;
            iVar2 = iVar2 + (*(int *)(gen_frame + 0x0));
            (*(uint *)(gen_frame + 0x8)) = uVar1;
          } while (uVar1 < *((uint *)GEN_TOP(((int)this + 0x168))));
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x38))))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + 8))))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    }
  }
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf44 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004115f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4115f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  uVar1 = F_004011f0(param_1,&REFG(undefined, 0x1084df8));
  if (uVar1 == 0) {
    return 0x80040200;
  }
  uVar1 = F_004011f0(param_1 + 0x10,&REFG(undefined, 0x1085108));
  if (uVar1 == 0) {
    return 0x80040201;
  }
  *(undefined4 *)(this + 0x170) = 0x16;
  uVar1 = F_004011f0(param_1 + 0x2c,&REFG(undefined, 0x1085d08));
  return (-(uint)(uVar1 != 0) & 0x7ffbfdfa) + 0x80040206;
}

/* ref: Client::System::Streaming::TextureRenderer::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00411680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x411680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pTVar4;
  int iVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  (*(int *)(gen_frame + 0x14)) = *(int *)(this + 0x168);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[0]));
  iVar2 = *(int *)(this + 0x16c);
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x1b0);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar3 = 0;
  pTVar4 = this + 0x1c8;
  do {
    if (*(int *)pTVar4 != 0) {
      (*(int *)(gen_frame + 0xc)) = *(int *)(this + uVar3 * 4 + 0x1c8);
      if (*(int *)(this + uVar3 * 4 + 0x1c8) != 0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 4))) GEN_EDX_ARG,0,&(*(int * PTR32 *)(gen_frame + 0x18)));
        if (uVar3 == 0) {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),0,0x2000);
          if (uVar3 == 0) {
            (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x0));
            if ((*(int *)(gen_frame + 0x14)) < 0) {
              if (0 < -(*(int *)(gen_frame + 0x14))) {
                (*(int *)(gen_frame + 0x14)) = -(*(int *)(gen_frame + 0x14));
                iVar5 = (*(int *)(gen_frame + 0x4));
                do {
                  F_00411330(iVar5,(*(int * PTR32 *)&gen_args[0]),iVar2);
                  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + iVar2)));
                  iVar5 = iVar5 + (*(int *)(gen_frame + 0x10));
                  iVar1 = (*(int *)(gen_frame + 0x14)) - 1;
                  (*(int *)(gen_frame + 0x14)) = iVar1;
                } while (iVar1 != 0);
              }
            }
            else {
              (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + ((*(int *)(gen_frame + 0x14)) - 1) * iVar2)));
              if (0 < (*(int *)(gen_frame + 0x14))) {
                iVar5 = (*(int *)(gen_frame + 0x4));
                do {
                  F_00411330(iVar5,(*(int * PTR32 *)&gen_args[0]),iVar2);
                  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) - iVar2)));
                  iVar5 = iVar5 + (*(int *)(gen_frame + 0x10));
                  iVar1 = (*(int *)(gen_frame + 0x14)) - 1;
                  (*(int *)(gen_frame + 0x14)) = iVar1;
                } while (iVar1 != 0);
              }
            }
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x38))))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
            lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8));
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
        }
        gen_imp_EnterCriticalSection(lpCriticalSection);
        F_004114e0(this GEN_EDX_ARG,*(undefined4 *)(this + 0x1e8));
        *(int *)(this + 0x1e8) = (*(int *)(gen_frame + 0xc));
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0x80004003;
    }
    uVar3 = uVar3 + 1;
    pTVar4 = pTVar4 + 4;
  } while (uVar3 < 5);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80004003;
}

/* ref: Client::System::Streaming::TextureRenderer::vf13 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00411800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x411800u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingPlayer::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00411830(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x411830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x28))) + 0x4c))))
            (*((int * PTR32 *)GEN_TOP((param_1 + 0x28))) GEN_EDX_ARG,
             (undefined4)
             gen_fl2bits((float)((float10)*((float *)GEN_TOP(param_2)) * (float10)*(double *)&REFG(undefined, 0x1088070))));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x28))) + 0x50))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x28))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00411870 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00411870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x411870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x264, 12, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x25c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x260));
  uVar1 = F_00430830(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD);
  F_0042e170(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,uVar1);
  F_0042a3a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x208)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG);
  F_0042a020(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  F_0042a2a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10849f0));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_4);
  F_00429fa0();
  return uVar1;
}

/* ref: FUN_00411930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00411930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x411930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x38))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00411960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00411960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00411980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00411980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_004119a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004119a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double param_2, double gen_a1))
{
  GEN_ENTER(0x4119a0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x28))) + 0x3c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x28))) GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x28))) + 0x24))))
                      (*((int * PTR32 *)GEN_TOP((param_1 + 0x28))) GEN_EDX_ARG,(int)(ulonglong)gen_d2bits(param_2),
                       (int)((ulonglong)gen_d2bits(param_2) >> 0x20));
  }
  return uVar1;
}

/* ref: FUN_004119d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004119d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4119d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1087e5c));
  F_004d6630(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1088094));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x108807c));
  return (uint)this;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00411a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  if (*(int *)(this + 0x14) != 0) {
    piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x14) + 0x3c))) + 0x264)));
    iVar3 = 3;
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00411a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x14);
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)(this + 0x14) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0x10);
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x10) = 0;
  }
  return;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00411a80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x14)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x3c))) + 0x20))) = 2;
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00411a90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x14)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x3c))) + 0x20))) = 3;
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00411aa0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double param_2, double gen_a1))
{
  GEN_ENTER(0x411aa0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0x3c)));
  *((longlong *)GEN_TOP((iVar1 + 0x28))) = (longlong)((double)*((longlong *)GEN_TOP((iVar1 + 0x30))) * param_2);
  *((undefined2 *)GEN_TOP((iVar1 + 10))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x18))) = 0;
  if ((*((int *)GEN_TOP((iVar1 + 0x3c))) <= *((int *)GEN_TOP((iVar1 + 0x2c)))) &&
     ((*((int *)GEN_TOP((iVar1 + 0x3c))) < *((int *)GEN_TOP((iVar1 + 0x2c))) ||
      (*((uint *)GEN_TOP((iVar1 + 0x38))) <= *((uint *)GEN_TOP((iVar1 + 0x28))))))) {
    *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 1;
    return 0;
  }
  *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 2;
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf12 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00411af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((longlong *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x3c))) + 0x38))) /
                         (float10)*(double *)&REFG(double, 0x1087ef0)))));
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf13 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00411b10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((longlong *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x3c))) + 0x30))) /
                         (float10)*(double *)&REFG(double, 0x1087ef0)))));
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf14 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00411b30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x3c))) + 8))) != '\0';
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf15 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00411b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x14) + 0x3c)));
  if (((*((int *)GEN_TOP((iVar1 + 0x1c))) == 1) && (*((char *)GEN_TOP((iVar1 + 9))) != '\0')) &&
     ((*((int *)GEN_TOP((iVar1 + 0x28))) != *((int *)GEN_TOP((iVar1 + 0x38))) ||
      (*((int *)GEN_TOP((iVar1 + 0x2c))) != *((int *)GEN_TOP((iVar1 + 0x3c))))))) {
    return 1;
  }
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf16 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00411b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x3c))) + 0x1c))) == 3;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf17 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00411b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x3c))) + 10))) != '\0';
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf18 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00411b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x3c))) + 0x14))) != 0;
}

/* ref: FUN_00411ba0 */
GEN_OWN GEN_NOFRAME unsigned int F_00411ba0(void)
{
  GEN_ENTER(0x411ba0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00411bb0 */
GEN_OWN GEN_NOFRAME byte F_00411bb0(void)
{
  GEN_ENTER(0x411bb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf21 */
GEN_OWN GEN_NOFRAME unsigned int F_00411bc0(void)
{
  GEN_ENTER(0x411bc0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf23 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00411bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x411bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x14) + 0x3c)));
  if ((iVar1 != 0) && (iVar1 != -0x250)) {
    *param_1 = *((int *)GEN_TOP((iVar1 + 0x254)));
    iVar1 = *((int *)GEN_TOP((iVar1 + 600)));
    *param_2 = iVar1;
    if ((*param_1 != 0) && (iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00411c10 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00411c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((longlong *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x3c))) + 0x38))) /
                                          (float10)*(double *)&REFG(double, 0x1087ef0)))) *
                         (float10)*(double *)&REFG(undefined, 0x1088070)))));
}

/* ref: FUN_00411c40 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00411c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((longlong *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x3c))) + 0x30))) /
                                          (float10)*(double *)&REFG(double, 0x1087ef0)))) *
                         (float10)*(double *)&REFG(undefined, 0x1088070)))));
}

/* ref: FUN_00411c70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00411c70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x411c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa8))))(piVar1 GEN_EDX_ARG,0,param_1,1);
  return uVar2;
}

/* ref: FUN_00411ca0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00411ca0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x411ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa4))))(piVar1 GEN_EDX_ARG,0,param_1,1);
  return uVar2;
}

/* ref: FUN_00411cd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00411cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x3c)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)))
  ;
  if (-1 < (int)uVar2) {
    *((undefined4 *)GEN_TOP((iVar1 + 0x30))) = (*(undefined4 *)(gen_frame + 0x0));
    *((undefined4 *)GEN_TOP((iVar1 + 0x34))) = (*(undefined4 *)(gen_frame + 0x4));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))))))
                      (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&REFG(undefined, 0x1084d48),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar2) {
      *((undefined4 *)GEN_TOP((iVar1 + 0x254))) = 0x780;
      *((undefined4 *)GEN_TOP((iVar1 + 600))) = 0x438;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP((iVar1 + 8))) = 1;
      *((undefined4 *)GEN_TOP((iVar1 + 0x18))) = 0;
      *((undefined4 *)GEN_TOP((iVar1 + 0x14))) = 0;
      *((undefined1 *)GEN_TOP((iVar1 + 0x27c))) = 0;
      *((undefined1 *)GEN_TOP((iVar1 + 0x27d))) = 0;
      *((undefined4 *)GEN_TOP((iVar1 + 0x18))) = 0;
      *((undefined1 *)GEN_TOP((iVar1 + 0x27e))) = 0;
      gen_imp_ResetEvent(*((undefined4 *)GEN_TOP((iVar1 + 0x274))));
      gen_imp_ResetEvent(*((undefined4 *)GEN_TOP((iVar1 + 0x278))));
      *((undefined4 *)GEN_TOP((iVar1 + 0x260))) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00411dc0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00411dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x411dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x3c)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x20))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),0);
    while (-1 < (int)uVar2) {
      switch((unsigned int)(uintptr_t)((*(undefined4 *)(gen_frame + 0xc)))) {
      case 1: ;
        *((undefined1 *)GEN_TOP((iVar1 + 10))) = 1;
        uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 0x274)));
        break;
      case 2: ;
        *((undefined1 *)GEN_TOP((iVar1 + 10))) = 1;
        uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 0x274)));
        break;
      case 3: ;
        *((undefined1 *)GEN_TOP((iVar1 + 10))) = 1;
        uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 0x274)));
        break;
      default: ;
        goto switchD_00411e12_caseD_4;
      case 0xe: ;
        *((undefined1 *)GEN_TOP((iVar1 + 0xb))) = 1;
        goto switchD_00411e12_caseD_4;
      }
      *((undefined1 *)GEN_TOP((iVar1 + 0x27e))) = 1;
      gen_imp_SetEvent(uVar3);
      *((undefined4 *)GEN_TOP((iVar1 + 0x18))) = 0;
switchD_00411e12_caseD_4: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x28))) + 0x30))))
                (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x28))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x28))) + 0x20))))
                        (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x28))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),0);
    }
  }
  return;
}

/* ref: FUN_00411ec0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00411ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  HANDLE pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1087f00));
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *((HANDLE *)GEN_TOP(((int)this + 0x274))) = pvVar1;
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *((HANDLE *)GEN_TOP(((int)this + 0x278))) = pvVar1;
  *((undefined1 *)GEN_TOP(((int)this + 0x27c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x27d))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x27e))) = 0;
  F_00410fe0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00411f20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00411f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  F_004a0050(this GEN_EDX_FWD,((char *)REFP(0x10849e0)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1087ec8));
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(0x18,0,0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = (*(undefined * PTR32 (*)[26])REFP(0x1087e5c));
    F_004d6630(puVar1 + 1 GEN_EDX_ARG);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[26])REFP(0x1088094));
    puVar1[1] = (*(undefined * PTR32 (*)[5])REFP(0x108807c));
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))) = puVar1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  return (uint)this;
}

/* ref: FUN_00411f80 */
GEN_OWN GEN_NOFRAME uint F_00411f80(void)
{
  GEN_ENTER(0x411f80u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (REFG(undefined4, 0x1370c0c) == 0) {
    this = ((undefined *)GEN_TOP(F_00406b90(0x30,0,0)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      REFG(undefined4, 0x1370c0c) = 0;
    }
    else {
      REFG(undefined4, 0x1370c0c) = F_00411f20(this GEN_EDX_ARG);
    }
    F_004a0100(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x11b0))) GEN_EDX_ARG,2,REFG(undefined4, 0x1370c0c));
  }
  return REFG(undefined4, 0x1370c0c);
}

/* ref: FUN_00411fd0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00411fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x411fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1088094));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x108807c));
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x3c))) + 0x264)));
    iVar3 = 3;
    do {
      piVar1 = ((int *)GEN_TOP(*piVar4));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  F_004d6680(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1087e5c));
  return;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00412050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x412050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * this_01;
  
  if (*(int *)(this + 0x10) == 0) {
    this_00 = ((undefined *)GEN_TOP(F_00406b90(0x280,0,0)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00411ec0(this_00 GEN_EDX_ARG);
    }
    *(uint *)(this + 0x10) = uVar2;
  }
  if (*(int *)(this + 0x14) == 0) {
    this_01 = ((undefined4 *)GEN_TOP(F_00406b90(0x48,0,0)));
    if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar1 = *(undefined4 *)(this + 0x10);
      F_004cefe0(this_01 GEN_EDX_ARG);
      this_01[0xf] = uVar1;
      this_01[6] = 0;
      this_01[7] = 0;
      this_01[8] = 0;
      this_01[9] = 0;
      this_01[10] = 0;
      this_01[0xb] = 0;
      this_01[0xc] = 0;
      this_01[0xd] = 0;
      this_01[0xe] = 0;
      *this_01 = (*(undefined * PTR32 (*)[6])REFP(0x1087ed8));
      *(undefined1 *)(this_01 + 0x10) = 1;
      this_01[0x11] = 0;
      *(undefined4 * PTR32 *)(this + 0x14) = this_01;
      return;
    }
    *(undefined4 *)(this + 0x14) = 0;
  }
  return;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf10 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00412100(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x412100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((longlong *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x3c))) +
                                                     0x38))) / (float10)*(double *)&REFG(double, 0x1087ef0)))) *
                         (float10)*(double *)&REFG(undefined, 0x1088070)))));
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf11 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00412130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x412130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((longlong *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x3c))) +
                                                     0x30))) / (float10)*(double *)&REFG(double, 0x1087ef0)))) *
                         (float10)*(double *)&REFG(undefined, 0x1088070)))));
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf22 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00412160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x412160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00411dc0(*(undefined * PTR32 *)(this + 0x14) GEN_EDX_FWD,param_1,param_2);
  return;
}

/* ref: FUN_00412190 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00412190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x412190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int local_20;
  ushort uStack_1c;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x3c)));
  if ((iVar1 != 0) && (iVar1 != -0x250)) {
    iVar2 = *((int *)GEN_TOP((iVar1 + 0x254)));
    iVar1 = *((int *)GEN_TOP((iVar1 + 600)));
    if ((iVar2 != 0) && (iVar1 != 0)) {
      fVar3 = (float10)*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x90)));
      if (*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x90))) < 0) {
        fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      local_c = (float)fVar3;
      fVar3 = (float10)*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x94)));
      if (*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x94))) < 0) {
        fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      local_10 = (float)fVar3;
      fVar3 = (float10)iVar2;
      if (iVar2 < 0) {
        fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      fVar4 = (float10)iVar1;
      if (iVar1 < 0) {
        fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      local_8 = 0.0;
      local_14 = 0.0;
      fVar5 = (float10)local_c;
      fVar6 = (float10)local_10;
      fVar3 = GEN_X87((float10)(float)(fVar3 / fVar4));
      if (fVar3 < fVar5 / fVar6) {
        local_c = (float)(fVar3 * fVar6);
        local_8 = ((float)GEN_TOF(((fVar5 - (float10)local_c) * (float10)REFG(double, 0x1088108))));
      }
      else {
        local_10 = (float)(fVar5 / fVar3);
        local_14 = ((float)GEN_TOF(((fVar6 - (float10)local_10) * (float10)REFG(double, 0x1088108))));
      }
      uStack_1c = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)uStack_1c);
      local_20 = (int)(longlong)TRUNC((float10)local_8);
      *param_1 = local_20;
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      uStack_1c = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)uStack_1c);
      local_20 = (int)(longlong)TRUNC((float10)local_14);
      *param_2 = local_20;
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
      local_20 = (int)(longlong)TRUNC((float10)local_c + (float10)local_8);
      *param_3 = local_20 - 1;
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
      local_20 = (int)(longlong)TRUNC((float10)local_14 + (float10)local_10);
      *param_4 = local_20 - 1;
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00412320 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00412320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x412320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  LPVOID * ppv;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  int * piVar5;
  int iVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x3c)));
  ppv = ((LPVOID *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP((iVar2 + 0x14))) = 0;
  uVar4 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085698),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095b94),ppv);
  (*(uint *)(gen_frame + 0x4)) = uVar4;
  if ((int)uVar4 < 0) {
    return 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x20)));
  uVar4 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*ppv)))(*ppv,&REFG(undefined, 0x1095ac4),puVar1);
  (*(uint *)(gen_frame + 0x4)) = uVar4;
  if (-1 < (int)uVar4) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x3c))) + 0x3c))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x3c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x58))));
    this_00 = ((undefined *)GEN_TOP(F_00406b90(0x1f8,0,0)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar5 = ((int *)GEN_TOP(F_00411180(this_00 GEN_EDX_ARG,0,&(*(uint *)(gen_frame + 0x4)),*puVar1)));
    }
    *((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = piVar5;
    if ((int)(*(uint *)(gen_frame + 0x4)) < 0) {
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG,1);
      }
    }
    else {
      ((code *)*((gen_code32 *)GEN_TOP((piVar5[3] + 4))))(piVar5 + 3);
      if (*((int *)GEN_TOP(((int)this + 0x38))) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *((int *)GEN_TOP(((int)this + 0x38))) + 0xc;
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)*ppv + 0xc))))(*ppv GEN_EDX_ARG,iVar6,(*(undefined * PTR32 (*)[7])REFP(0x1084b94)));
      (*(uint *)(gen_frame + 0x4)) = uVar4;
      if (-1 < (int)uVar4) {
        piVar5 = ((int *)GEN_TOP(((int)this + 0x24)));
        uVar4 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*ppv)))(*ppv,&REFG(undefined, 0x1084ce8),piVar5);
        (*(uint *)(gen_frame + 0x4)) = uVar4;
        if (-1 < (int)uVar4) {
          uVar4 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*ppv)))(*ppv,&REFG(undefined, 0x1084d08),(int)this + 0x28);
          (*(uint *)(gen_frame + 0x4)) = uVar4;
          if (-1 < (int)uVar4) {
            uVar4 = F_00410cd0((int)this + 0x38,*ppv);
            (*(uint *)(gen_frame + 0x4)) = uVar4;
            if (-1 < (int)uVar4) {
              uVar4 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*ppv)))(*ppv,&REFG(undefined, 0x1084d28),(int)this + 0x30);
              piVar3 = *ppv;
              (*(uint *)(gen_frame + 0x4)) = uVar4;
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x34))))(piVar3 GEN_EDX_ARG,iVar2 + 0x44,0);
              (*(uint *)(gen_frame + 0x4)) = uVar4;
              if (-1 < (int)uVar4) {
                uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x34))))
                                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,
                                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x434))) + 8))),0x8001,0);
                (*(uint *)(gen_frame + 0x4)) = uVar4;
                if (-1 < (int)uVar4) {
                  if (*piVar5 != 0) {
                    while (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar5)) + 0x28))))(((int *)GEN_TOP(*piVar5)) GEN_EDX_ARG,0,&(*(int *)(gen_frame + 0x0)))
                          , uVar4 != 0) {
                      F_004cee10();
                    }
                    do {
                      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar5)) + 0x20))))(((int *)GEN_TOP(*piVar5)) GEN_EDX_ARG);
                      *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x1087ef8));
                      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar5)) + 0x28))))(((int *)GEN_TOP(*piVar5)) GEN_EDX_ARG,0,&(*(int *)(gen_frame + 0x0)));
                    } while ((*(int *)(gen_frame + 0x0)) != 1);
                    iVar2 = *((int *)GEN_TOP(((int)this + 0x3c)));
                    *((undefined4 *)GEN_TOP((iVar2 + 0x20))) = 3;
                    *((undefined4 *)GEN_TOP((iVar2 + 0x1c))) = 3;
                  }
                  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)((char *)&REFG(undefined8, 0x1086498) + 4));
                  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)REFG(undefined8, 0x10864a0);
                  piVar5 = ((int *)GEN_TOP(*puVar1));
                  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)REFG(undefined8, 0x1086498);
                  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)((char *)&REFG(undefined8, 0x10864a0) + 4));
                  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x24))))(piVar5 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
                  return -1 < (int)uVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf36 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00412590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x412590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined * pTVar6;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x44)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x34)));
  *(int *)(this + 0x164) = iVar2;
  iVar3 = *((int *)GEN_TOP((iVar1 + 0x38)));
  *(int *)(this + 0x168) = iVar3;
  uVar5 = ((uint)*((ushort *)GEN_TOP((iVar1 + 0x3e))) * iVar2 >> 3) + 3 & 0xfffffffc;
  *(uint *)(this + 0x16c) = uVar5;
  uVar5 = F_00406bb0(iVar3 * uVar5,0,0);
  *(uint *)(this + 0x1ec) = uVar5;
  piVar4 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40)));
  pTVar6 = this + 0x178;
  param_1 = 5;
  do {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x5c))))
                      (piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 0x164),*(undefined4 *)(this + 0x168),1,0,
                       *(undefined4 *)(this + 0x170),1,pTVar6,0);
    if (-1 < (int)uVar5) {
      uVar5 = F_004dac40(*(undefined4 *)pTVar6,
                           (-(uint)(*(int *)(this + 0x170) != 0x16) & 0xfffffff0) + 0x1451,0x800004,
                           0);
      *(uint *)(pTVar6 - 4) = uVar5;
    }
    pTVar6 = pTVar6 + 0xc;
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00412670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x412670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x14);
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x3c))) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((REFG(int, 0x1370c1c) + 6))) = 0;
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf24 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00412690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x412690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  
  bVar1 = F_00412190(*(undefined * PTR32 *)(this + 0x14) GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return bVar1;
}

/* ref: FUN_004126a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004126a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x4126a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  float fVar5;
  int * piVar6;
  uint uVar7;
  code * pcVar8;
  bool bVar9;
  
  iVar1 = *((int *)GEN_TOP(((int)param_1 + 0x3c)));
  if (*((char *)GEN_TOP((iVar1 + 8))) == '\0') {
    return;
  }
  fVar5 = *((float *)GEN_TOP(((int)param_1 + 0x44)));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  if (GEN_ISNAN(fVar5) == (GEN_ISNAN(fVar5) || fVar5 == 0.0)) {
    (*(float *)&gen_args[0]) = (float)((float10)fVar5 - (float10)(*(float *)&gen_args[0]));
    *((float *)GEN_TOP(((int)param_1 + 0x44))) = (*(float *)&gen_args[0]);
    if ((float10)(*(float *)&gen_args[0]) <= (float10)0) {
      *((undefined4 *)GEN_TOP(((int)param_1 + 0x44))) = 0;
    }
  }
  if (*((int *)GEN_TOP((iVar1 + 0x14))) != 0) {
    if (*((int *)GEN_TOP((iVar1 + 0x14))) == 1) {
      return;
    }
    bVar4 = F_00412320(param_1 GEN_EDX_FWD);
    if (bVar4 == 0) {
      F_00410ed0(param_1 GEN_EDX_ARG);
      return;
    }
    F_00411cd0(param_1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP((iVar1 + 0x20))) = 1;
    *((undefined4 *)GEN_TOP((iVar1 + 0x1c))) = 2;
    *((undefined1 *)GEN_TOP((iVar1 + 0xc))) = 1;
    if (*((int *)GEN_TOP((iVar1 + 0x38))) != 0 || *((int *)GEN_TOP((iVar1 + 0x3c))) != 0) {
      *((int *)GEN_TOP((iVar1 + 0x28))) = *((int *)GEN_TOP((iVar1 + 0x38)));
      *((int *)GEN_TOP((iVar1 + 0x2c))) = *((int *)GEN_TOP((iVar1 + 0x3c)));
      *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 1;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) + 0x3c))))
            (*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  if (*((char *)GEN_TOP((iVar1 + 10))) != '\0') {
    *((undefined4 *)GEN_TOP((iVar1 + 0x20))) = 3;
  }
  bVar9 = GEN_ISNAN(*((float *)GEN_TOP(((int)param_1 + 0x44)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar9 == (bVar9 || *((float *)GEN_TOP(((int)param_1 + 0x44))) == *(float *)&REFG(undefined, 0x1088114))) {
    return;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0x24)));
  if (piVar6 == ((int *)GEN_TOP(0x0))) {
    return;
  }
  fVar5 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x28))))(piVar6 GEN_EDX_ARG,0,&(*(float *)&gen_args[0])));
  if (fVar5 != 0.0) {
    return;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0x20)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    (*(float *)(gen_frame + 0x18)) = fVar5;
    (*(float *)(gen_frame + 0x1c)) = fVar5;
    (*(float *)(gen_frame + 0x10)) = fVar5;
    (*(float *)(gen_frame + 0x14)) = fVar5;
    switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((iVar1 + 0x10))))) {
    case 0: ;
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x3c))))(piVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x10)));
      if (uVar7 == 0) {
        *((float *)GEN_TOP((iVar1 + 0x38))) = (*(float *)(gen_frame + 0x18));
        *((float *)GEN_TOP((iVar1 + 0x3c))) = (*(float *)(gen_frame + 0x1c));
      }
      break;
    case 2: ;
      F_00410ed0(param_1 GEN_EDX_ARG);
      bVar4 = F_00412320(param_1 GEN_EDX_ARG);
      if (bVar4 == 0) {
        return;
      }
      F_00411cd0(param_1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 1;
    case 1: ;
      if (*((char *)GEN_TOP((iVar1 + 0xc))) != '\0') {
        F_00411c70(0);
      }
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) + 0x38))))
                        (*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,iVar1 + 0x28,1,0,0);
      uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087ef8)));
      if (uVar7 == 0) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 3;
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x44))) = uVar3;
      }
      break;
    case 3: ;
      bVar9 = GEN_ISNAN(*((float *)GEN_TOP(((int)param_1 + 0x44)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
      if (bVar9 != (bVar9 || *((float *)GEN_TOP(((int)param_1 + 0x44))) == *(float *)&REFG(undefined, 0x1088114))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x24))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x24))) GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)param_1 + 0x44))), REFG(float, 0x1087ef8));
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 4;
        goto switchD_004127bd_caseD_4;
      }
      break;
    case 4: ;
switchD_004127bd_caseD_4: ;
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) + 0x3c))))
                        (*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x10)));
      if (((uVar7 == 0) && (*((int *)GEN_TOP((iVar1 + 0x2c))) <= (int)gen_fl2bits((*(float *)(gen_frame + 0x1c))))) &&
         ((*((int *)GEN_TOP((iVar1 + 0x2c))) < (int)gen_fl2bits((*(float *)(gen_frame + 0x1c))) ||
          ((uint)gen_fl2bits(*((float *)GEN_TOP((iVar1 + 0x28)))) <= (uint)gen_fl2bits((*(float *)(gen_frame + 0x18))))))) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
      }
    }
  }
  bVar9 = GEN_ISNAN(*((float *)GEN_TOP(((int)param_1 + 0x44)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar9 == (bVar9 || *((float *)GEN_TOP(((int)param_1 + 0x44))) == *(float *)&REFG(undefined, 0x1088114))) {
    return;
  }
  if (*((int *)GEN_TOP((iVar1 + 0x20))) == *((int *)GEN_TOP((iVar1 + 0x1c)))) {
    return;
  }
  if (*((int *)GEN_TOP((iVar1 + 0x10))) != 0) {
    return;
  }
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x20)));
  if (iVar2 == 1) {
    piVar6 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0x24)));
    pcVar8 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x1c)));
LAB_00412907: ;
    (*pcVar8)(piVar6);
  }
  else {
    if (iVar2 == 2) {
      piVar6 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0x24)));
      pcVar8 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x24)));
      goto LAB_00412907;
    }
    if (iVar2 != 3) goto LAB_00412917;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x24))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x24))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)param_1 + 0x44))), REFG(float, 0x1087ef8));
LAB_00412917: ;
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x24))) + 0x28))))
                    (*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x24))) GEN_EDX_ARG,0,&(*(float *)&gen_args[0]));
  if (uVar7 == 0) {
    if ((*(float *)&gen_args[0]) == 0.0) {
      *((undefined4 *)GEN_TOP((iVar1 + 0x1c))) = 2;
    }
    else {
      if ((*(float *)&gen_args[0]) == 1.4013e-45) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x1c))) = 3;
        return;
      }
      if ((*(float *)&gen_args[0]) == 2.8026e-45) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x1c))) = 1;
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00412980 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00412980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x412980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xf4, 12);
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  LPCRITICAL_SECTION p_Var6;
  int * piVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float * pfVar11;
  LPCRITICAL_SECTION p_Stack_e4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x3c)));
  (*(int *)(gen_frame + 0xd0)) = iVar3;
  if (*((char *)GEN_TOP((iVar3 + 8))) != '\0') {
    fVar9 = (float10)*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x90)));
    if (*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x90))) < 0) {
      fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(float *)(gen_frame + 0xc8)) = (float)fVar9;
    fVar10 = (float10)*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x94)));
    if (*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x94))) < 0) {
      fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(float *)(gen_frame + 0xbc)) = (float)fVar10;
    (*(float *)(gen_frame + 0x84)) = (float)fVar9;
    p_Stack_e4 = (LPCRITICAL_SECTION)&(*(undefined4 *)(gen_frame + 0x6c));
    (*(float *)(gen_frame + 0x88)) = (float)fVar10;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(float *)(gen_frame + 0x78)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x7c)) = 0;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x412a28));
    F_00413ab0(&(*(float *)(gen_frame + 0xe0)) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x6c)));
    p_Stack_e4 = (LPCRITICAL_SECTION)&REFG(undefined4, 0x1301dd0);
    (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x2));
    (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0xe0));
    (*(float * PTR32 *)(gen_frame + 0x4)) = &(*(float *)(gen_frame + 0xe0));
    (*(float * PTR32 *)(gen_frame + 0x0)) = &(*(float *)(gen_frame + 0xe0));
    F_004134a0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a4))),
                 &(*(undefined4 *)(gen_frame + 0x7c)),5,&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0xe0)),2,&REFG(undefined4, 0x1301dd0));
    if (*((int *)GEN_TOP((iVar3 + 0x14))) == 0) {
      (*(int *)(gen_frame + 0xb0)) = REFG(int, 0x1301dd4);
      (*(undefined4 *)(gen_frame + 0xb8)) = REFG(undefined4, 0x1301ddc);
      p_Var6 = (LPCRITICAL_SECTION)(*((int *)GEN_TOP(((int)this + 0x38))) + 0x1b0);
      p_Stack_e4 = p_Var6;
      (*(uint *)(gen_frame + 0xb4)) = (-(uint)(*((char *)GEN_TOP(((int)this + 0x40))) != '\0') & 9) << 6 | REFG(undefined4, 0x1301dd8) & 0xfffffc3a
                 | 10;
      (*(float *)(gen_frame + 0xac)) = gen_bits2f(REFG(undefined4, 0x1301dd0) & 0xfffffffe);
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x412ab6));
      gen_imp_EnterCriticalSection(p_Var6);
      iVar3 = *((int *)GEN_TOP(((int)this + 0x38)));
      iVar4 = *((int *)GEN_TOP((iVar3 + 0x1dc)));
      if (iVar4 != 0) {
        piVar7 = ((int *)GEN_TOP((iVar4 + 8)));
        *piVar7 = *piVar7 - 1;
        if (*piVar7 == 0) {
          *((undefined4 *)GEN_TOP((iVar3 + 0x1dc))) = *((undefined4 *)GEN_TOP((iVar3 + 0x1e0)));
          *((undefined4 *)GEN_TOP((iVar3 + 0x1e0))) = *((undefined4 *)GEN_TOP((iVar3 + 0x1e4)));
          *((undefined4 *)GEN_TOP((iVar3 + 0x1e4))) = 0;
        }
      }
      p_Stack_e4 = (LPCRITICAL_SECTION)iVar4;
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x412af3));
      F_004114e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,iVar4);
      piVar7 = *((int * PTR32 *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)this + 0x38))) + 0x1e8)));
      p_Stack_e4 = (LPCRITICAL_SECTION)piVar7;
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x412b02));
      F_00411450(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,piVar7);
      p_Var6 = (LPCRITICAL_SECTION)(*((int *)GEN_TOP(((int)this + 0x38))) + 0x1b0);
      p_Stack_e4 = p_Var6;
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x412b11));
      gen_imp_LeaveCriticalSection(p_Var6);
      iVar3 = (*(int *)(gen_frame + 0xd0));
      if ((piVar7 == ((int *)GEN_TOP(0x0))) || (*piVar7 == 0)) {
        if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0xd0)) + 0xc))) != '\0') {
          p_Stack_e4 = (LPCRITICAL_SECTION)0x412d0c;
          piVar7 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
          p_Stack_e4 = (LPCRITICAL_SECTION)0x1;
          (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x0));
          (*(float * PTR32 *)(gen_frame + 0x8)) = ((float *)GEN_TOP(0x0));
          (*(float * PTR32 *)(gen_frame + 0x4)) = ((float *)GEN_TOP(0x412d1e));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xa8))))(piVar7 GEN_EDX_ARG,0,0,1);
        }
      }
      else {
        (*(int *)(gen_frame + 0xb0)) = *piVar7;
        bVar8 = GEN_ISNAN(*((float *)GEN_TOP(((*(int *)(gen_frame + 0xd0)) + 0x25c)))) || GEN_ISNAN(REFG(float, 0x1087f04));
        if (bVar8 == (bVar8 || *((float *)GEN_TOP(((*(int *)(gen_frame + 0xd0)) + 0x25c))) == REFG(float, 0x1087f04))) {
          fVar1 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0xd0)) + 0x25c)));
          (*(float *)((char *)&(*(double *)(gen_frame + 0xd4)) + 4)) = fVar1;
          fVar9 = (float10)fVar1;
          p_Stack_e4 = (LPCRITICAL_SECTION)&(*(float *)(gen_frame + 0xac));
          (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x2));
          (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0x44));
          (*(float *)((char *)&(*(double *)(gen_frame + 0xd4)) + 4)) = gen_bits2f(REFG(undefined4, 0x1370c18));
          (*(double *)(gen_frame + 0xd4)) = gen_bits2d(CONCAT44(REFG(undefined4, 0x1370c18),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xd4)) + 0))));
          (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1302c04);
          (*(float * PTR32 *)(gen_frame + 0x4)) = &(*(float *)(gen_frame + 0x24));
          (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c08)));
          (*(float * PTR32 *)(gen_frame + 0x0)) = &(*(float *)(gen_frame + 0x44));
          (*(float *)(gen_frame + 0x9c)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xc8)) * ((float10)1 - fVar9)) * (float10)REFG(double, 0x1088108))));
          (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1375a80);
          (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375a84)));
          (*(float *)(gen_frame + 0xa0)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xbc)) * ((float10)1 - fVar9)) * (float10)REFG(double, 0x1088108))));
          (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0xc8)) * fVar9);
          (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0xbc)) * fVar9);
          F_00413ab0((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined4, 0x1302e54));
          pfVar11 = &(*(float *)(gen_frame + 0x9c));
        }
        else {
          p_Stack_e4 = (LPCRITICAL_SECTION)((int)&(*(double *)(gen_frame + 0xd4)) + 4);
          (*(int * PTR32 *)(gen_frame + 0xc)) = &(*(int *)(gen_frame + 0xc4));
          (*(float * PTR32 *)(gen_frame + 0x8)) = (float *)&(*(int *)(gen_frame + 0xcc));
          (*(float * PTR32 *)(gen_frame + 0x4)) = (float *)&(*(int *)(gen_frame + 0xc0));
          (*(float * PTR32 *)(gen_frame + 0x0)) = ((float *)GEN_TOP(0x412b59));
          F_00412190(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc0)),&(*(int *)(gen_frame + 0xcc)),&(*(int *)(gen_frame + 0xc4)),(int)&(*(double *)(gen_frame + 0xd4)) + 4);
          fVar9 = (float10)(*(int *)(gen_frame + 0xc0));
          (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1302c04);
          (*(undefined4 *)(gen_frame + 0x58)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c08)));
          (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1375a80);
          (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375a84)));
          if ((*(int *)(gen_frame + 0xc0)) < 0) {
            fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
          }
          (*(float *)(gen_frame + 0x8c)) = (float)fVar9;
          fVar9 = (float10)(*(int *)(gen_frame + 0xcc));
          if ((*(int *)(gen_frame + 0xcc)) < 0) {
            fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
          }
          (*(float *)(gen_frame + 0x90)) = (float)fVar9;
          fVar9 = (float10)(*(int *)(gen_frame + 0xc4));
          if ((*(int *)(gen_frame + 0xc4)) < 0) {
            fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
          }
          (*(float *)(gen_frame + 0x94)) = (float)fVar9;
          fVar9 = (float10)(int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0xd4)) + 4)));
          if ((longlong)gen_d2bits((*(double *)(gen_frame + 0xd4))) < 0) {
            fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
          }
          (*(float *)(gen_frame + 0x98)) = (float)fVar9;
          p_Stack_e4 = (LPCRITICAL_SECTION)&(*(float *)(gen_frame + 0xac));
          (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x2));
          (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0x54));
          (*(float *)((char *)&(*(double *)(gen_frame + 0xd4)) + 4)) = gen_bits2f(REFG(undefined4, 0x1370c18));
          (*(double *)(gen_frame + 0xd4)) = gen_bits2d(CONCAT44(REFG(undefined4, 0x1370c18),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xd4)) + 0))));
          (*(float * PTR32 *)(gen_frame + 0x4)) = &(*(float *)(gen_frame + 0x34));
          (*(float * PTR32 *)(gen_frame + 0x0)) = &(*(float *)(gen_frame + 0xac));
          F_00413ab0((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined4, 0x1302e54));
          pfVar11 = &(*(float *)(gen_frame + 0x8c));
        }
        F_00413c70(pfVar11,(*(float * PTR32 *)(gen_frame + 0x0)),(*(float * PTR32 *)(gen_frame + 0x4)),(*(float * PTR32 *)(gen_frame + 0x8)),(*(int * PTR32 *)(gen_frame + 0xc)),p_Stack_e4);
        cVar2 = *((char *)GEN_TOP((iVar3 + 0xc)));
        *((undefined1 *)GEN_TOP((iVar3 + 9))) = 1;
        if (cVar2 != '\0') {
          p_Stack_e4 = (LPCRITICAL_SECTION)0x412ce0;
          piVar7 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
          p_Stack_e4 = (LPCRITICAL_SECTION)0x1;
          (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x1e));
          (*(float * PTR32 *)(gen_frame + 0x8)) = ((float *)GEN_TOP(0x0));
          (*(float * PTR32 *)(gen_frame + 0x4)) = ((float *)GEN_TOP(0x412cf2));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xa4))))(piVar7 GEN_EDX_ARG,0,0x1e,1);
          *((undefined1 *)GEN_TOP((iVar3 + 0xc))) = 0;
        }
      }
    }
    if (*((int *)GEN_TOP(((int)this + 0x30))) != 0) {
      iVar3 = *((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
      p_Stack_e4 = (LPCRITICAL_SECTION)0x412d37;
      fVar9 = F_004e7750(iVar3 GEN_EDX_ARG);
      (*(double *)(gen_frame + 0xd4)) = (double)fVar9;
      p_Stack_e4 = (LPCRITICAL_SECTION)0x412d41;
      fVar9 = F_004e77a0(iVar3 GEN_EDX_ARG);
      cVar2 = *((char *)GEN_TOP((iVar3 + 0xdb)));
      fVar1 = (float)(fVar9 * (float10)(*(double *)(gen_frame + 0xd4)));
      (*(float *)(gen_frame + 0xe0)) = fVar1;
      if ((cVar2 != '\0') ||
         ((!GEN_ISNAN(REFG(float, 0x1088128)) && !GEN_ISNAN(fVar1)) && (!(REFG(float, 0x1088128) < fVar1) && REFG(uint, 0x1088128) != fVar1))
         ) {
        (*(float *)(gen_frame + 0xe0)) = REFG(float, 0x1088128);
      }
      piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x30)));
      iVar3 = *piVar7;
      p_Stack_e4 = (LPCRITICAL_SECTION)0x412d70;
      fVar9 = ((float10)GEN_TOD(GEN_X87MATH((float10)(*(float *)(gen_frame + 0xe0)),3)));
      fVar1 = (float)fVar9;
      (*(float *)((char *)&(*(double *)(gen_frame + 0xd4)) + 4)) = fVar1;
      (*(double *)(gen_frame + 0xd4)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xd4)) + 0))));
      p_Stack_e4 = (LPCRITICAL_SECTION)0x412d87;
      iVar4 = (int)(((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x1088120)) *
                   (float10)*(double *)&REFG(undefined, 0x1088118));
      p_Stack_e4 = (LPCRITICAL_SECTION)iVar4;
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar7;
      (*(float * PTR32 *)(gen_frame + 0x8)) = ((float *)GEN_TOP(0x412d8e));
      ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x1c))))(piVar7,iVar4);
    }
  }
  return;
}

/* ref: FUN_00412da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00412da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x412da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  int iVar5;
  
  if (param_1 == 1) {
    bVar2 = F_00412320(this GEN_EDX_FWD);
    if (bVar2 == 0) {
      iVar5 = *((int *)GEN_TOP(((int)this + 0x3c)));
      *((undefined1 *)GEN_TOP((iVar5 + 0x27e))) = 1;
      gen_imp_SetEvent(*((HANDLE *)GEN_TOP((iVar5 + 0x274))));
      *((undefined4 *)GEN_TOP((iVar5 + 0x18))) = 0;
      *((undefined1 *)GEN_TOP((iVar5 + 8))) = 0;
      uVar3 = F_00410ed0(this GEN_EDX_ARG);
      return uVar3;
    }
    bVar2 = F_00411cd0(this GEN_EDX_ARG);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  else {
    uVar3 = param_1 - 2;
    if (uVar3 == 0) {
      iVar5 = *((int *)GEN_TOP(((int)this + 0x3c)));
      *((undefined1 *)GEN_TOP((iVar5 + 0x27e))) = 1;
      gen_imp_SetEvent(*((HANDLE *)GEN_TOP((iVar5 + 0x274))));
      *((undefined4 *)GEN_TOP((iVar5 + 0x18))) = 0;
      *((undefined1 *)GEN_TOP((iVar5 + 8))) = 0;
      uVar3 = F_00410ed0(this GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 0x264)));
      iVar5 = 3;
      do {
        piVar1 = ((int *)GEN_TOP(*piVar4));
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
          *piVar4 = 0;
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf19 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00412e60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x412e60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  F_004126a0(*((undefined4 *)GEN_TOP((param_1 + 0x14))) GEN_EDX_FWD,param_2);
  return;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00412e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x412e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00412980(*(undefined * PTR32 *)(this + 0x14) GEN_EDX_FWD);
  return;
}

/* ref: FUN_00412e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00412e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x412e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00412da0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00412ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00412ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x412ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x3c)));
  *((undefined4 *)GEN_TOP((iVar1 + 0x38))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x28))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x40))) = param_3;
  *((int *)GEN_TOP((iVar1 + 0x250))) = param_4;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088138)));
  if ((param_4 != 1) && (uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068))), param_4 != 2)) {
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  }
  *((undefined4 *)GEN_TOP((iVar1 + 0x25c))) = uVar3;
  *((undefined4 *)GEN_TOP((iVar1 + 0x270))) = param_2;
  F_00c4983b(iVar1 + 0x44,0x104,param_1,0x104);
  uVar2 = F_00412da0(this GEN_EDX_ARG,1);
  return uVar2;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00412f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x412f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00412ea0(*(undefined * PTR32 *)(this + 0x14) GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00412f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x412f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00412da0(*(undefined * PTR32 *)(this + 0x14) GEN_EDX_FWD,2);
  uVar1 = REFG(undefined4, 0x1370c1c);
  *((undefined1 *)GEN_TOP((REFG(undefined4, 0x1370c1c) + 6))) = 1;
  return uVar1;
}

/* ref: FUN_00412f80 */
GEN_OWN GEN_FRAME float10 F_00412f80(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x412f80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,3)));
  return (float10)(float)fVar2;
}

/* ref: FUN_00412fa0 */
GEN_OWN GEN_FRAME float10 F_00412fa0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x412fa0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,3)));
  return (float10)(float)fVar2;
}

/* ref: FUN_00413060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1e8))) = param_2;
  return param_2;
}

/* ref: FUN_00413080 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00413080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x40))) = param_2;
  return param_2;
}

/* ref: FUN_004130b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004130b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4130b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,(uint)(param_2 == '\0'),(uint)(param_3 != '\0'),
                        (LPCSTR)0x0);
  *param_1 = pvVar1;
  return (uint)param_1;
}

/* ref: FUN_00413100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(DWORD param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x413100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(DWORD param_1 = (DWORD)gen_a1;)
  DWORD DVar1;
  
  DVar1 = gen_imp_WaitForSingleObject(*(HANDLE *)this,param_1);
  return (uint)(DVar1 == 0);
}

/* ref: FUN_00413140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPCRITICAL_SECTION param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x413140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;)
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00413190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413190(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x413190u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_004131c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004131c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4131c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)in_ecx;
}

/* ref: FUN_004131de */
GEN_OWN GEN_NOFRAME unsigned int F_004131de(void)
{
  GEN_ENTER(0x4131deu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_004131e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004131e0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x4131e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00413200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413200(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)in_ecx;
}

/* ref: FUN_00413220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413220(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x413220u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return (uint)in_ecx;
}

/* ref: Client::System::Threading::Thread::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00413250(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x413250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x14))) = 1;
  return;
}

/* ref: Client::System::Threading::Thread::vf2 */
GEN_OWN GEN_NOFRAME byte F_00413260(void)
{
  GEN_ENTER(0x413260u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Threading::Thread::vf3 */
GEN_OWN GEN_NOFRAME uint F_00413270(void)
{
  GEN_ENTER(0x413270u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Threading::Thread::vf4 */
GEN_OWN GEN_NOFRAME unsigned int F_00413280(void)
{
  GEN_ENTER(0x413280u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Streaming::TextureRenderer::vf8 */
GEN_OWN GEN_NOFRAME uint F_004132a0(void)
{
  GEN_ENTER(0x4132a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf20 */
GEN_OWN GEN_NOFRAME unsigned int F_004132b0(void)
{
  GEN_ENTER(0x4132b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_004132c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004132c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4132c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 - 8))))))
                    (*((undefined4 * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_004132e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004132e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4132e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 - 8))) + 4))))(*((int * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00413300 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00413300(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x413300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 - 8))) + 8))))(*((int * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00413320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413320(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x413320u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_00413350 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00413350(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x413350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004132c0(param_1 - 0xd4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00413360 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00413360(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x413360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_004132e0(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00413370 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00413370(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x413370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004132c0(param_1 - 0xd8,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00413380 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00413380(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x413380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004132c0(param_1 - 4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00413390 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00413390(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x413390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00413300(param_1 - 0xd4);
  return uVar1;
}

/* ref: FUN_004133a0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_004133a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4133a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00413300(param_1 - 0xd8);
  return uVar1;
}

/* ref: FUN_004133b0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_004133b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4133b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_004132e0(param_1 - 0xd4);
  return uVar1;
}

/* ref: FUN_004133c0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_004133c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4133c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00413300(param_1 - 4);
  return uVar1;
}

/* ref: FUN_004133d0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_004133d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4133d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_004132e0(param_1 - 0xd8);
  return uVar1;
}

/* ref: FUN_00413410 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00413410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 6))) = param_2;
  return param_2;
}

/* ref: FUN_00413480 */
GEN_OWN GEN_FRAME uint F_00413480(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x413480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  
  piVar1 = param_1;
  if (*param_3 <= *param_1) {
    piVar1 = param_3;
  }
  if (*piVar1 <= *param_2) {
    piVar1 = param_2;
  }
  return (uint)piVar1;
}

/* ref: FUN_004134a0 */
GEN_OWN GEN_FRAME uint F_004134a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(byte param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0x4134a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(byte param_8 = (byte)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_EAX = 0;
  
  if ((param_8 & 2) != 0) {
    in_EAX = ((undefined4 *)GEN_TOP(F_004d23f0(param_1 GEN_EDX_ARG,4,param_3,param_9)));
    if (in_EAX == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = param_2[1];
    *in_EAX = *param_2;
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
    in_EAX[1] = uVar1;
    in_EAX[2] = uVar2;
    in_EAX[3] = *param_4;
    uVar1 = param_2[3];
    in_EAX[6] = *param_2;
    in_EAX[7] = uVar1;
    in_EAX[8] = uVar2;
    in_EAX[9] = *param_6;
    uVar1 = param_2[1];
    in_EAX[0xc] = param_2[2];
    in_EAX[0xd] = uVar1;
    in_EAX[0xe] = uVar2;
    in_EAX[0xf] = *param_5;
    uVar1 = param_2[3];
    in_EAX[0x12] = param_2[2];
    in_EAX[0x13] = uVar1;
    in_EAX[0x14] = uVar2;
    in_EAX[0x15] = *param_7;
  }
  if (((param_8 & 1) != 0) &&
     (in_EAX = ((undefined4 *)GEN_TOP(F_004d2330(param_1 GEN_EDX_ARG,5,param_3,param_9))), in_EAX != ((undefined4 *)GEN_TOP(0x0))))
  {
    uVar1 = param_2[1];
    *in_EAX = *param_2;
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
    in_EAX[1] = uVar1;
    in_EAX[2] = uVar2;
    in_EAX[3] = *param_4;
    uVar1 = param_2[1];
    in_EAX[6] = param_2[2];
    in_EAX[7] = uVar1;
    in_EAX[8] = uVar2;
    in_EAX[9] = *param_5;
    uVar1 = param_2[3];
    in_EAX[0xc] = param_2[2];
    in_EAX[0xd] = uVar1;
    in_EAX[0xe] = uVar2;
    in_EAX[0xf] = *param_7;
    uVar1 = param_2[3];
    in_EAX[0x12] = *param_2;
    in_EAX[0x13] = uVar1;
    in_EAX[0x14] = uVar2;
    in_EAX[0x15] = *param_6;
    uVar1 = param_2[1];
    in_EAX[0x18] = *param_2;
    in_EAX[0x19] = uVar1;
    in_EAX[0x1a] = uVar2;
    in_EAX[0x1b] = *param_4;
  }
  return (uint)in_EAX;
}

/* ref: FUN_004136d0 */
GEN_OWN GEN_FRAME uint F_004136d0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8), GEN_P(byte param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x4136d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  GEN_PIN(byte param_10 = (byte)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_EAX = 0;
  
  if ((param_10 & 2) != 0) {
    in_EAX = ((undefined4 *)GEN_TOP(F_004d23f0(param_1 GEN_EDX_ARG,4,param_3,param_11)));
    if (in_EAX == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = param_2[1];
    *in_EAX = *param_2;
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
    in_EAX[1] = uVar1;
    in_EAX[2] = uVar2;
    in_EAX[3] = *param_4;
    uVar1 = param_8[1];
    in_EAX[4] = *param_8;
    in_EAX[5] = uVar1;
    uVar1 = param_2[3];
    in_EAX[6] = *param_2;
    in_EAX[7] = uVar1;
    in_EAX[8] = uVar2;
    in_EAX[9] = *param_6;
    uVar1 = param_9[1];
    in_EAX[10] = *param_8;
    in_EAX[0xb] = uVar1;
    uVar1 = param_2[1];
    in_EAX[0xc] = param_2[2];
    in_EAX[0xd] = uVar1;
    in_EAX[0xe] = uVar2;
    in_EAX[0xf] = *param_5;
    uVar1 = param_8[1];
    in_EAX[0x10] = *param_9;
    in_EAX[0x11] = uVar1;
    uVar1 = param_2[3];
    in_EAX[0x12] = param_2[2];
    in_EAX[0x13] = uVar1;
    in_EAX[0x14] = uVar2;
    in_EAX[0x15] = *param_7;
    uVar1 = param_9[1];
    in_EAX[0x16] = *param_9;
    in_EAX[0x17] = uVar1;
  }
  if (((param_10 & 1) != 0) &&
     (in_EAX = ((undefined4 *)GEN_TOP(F_004d2330(param_1 GEN_EDX_ARG,5,param_3,param_11))), in_EAX != ((undefined4 *)GEN_TOP(0x0))))
  {
    uVar1 = param_2[1];
    *in_EAX = *param_2;
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
    in_EAX[1] = uVar1;
    in_EAX[2] = uVar2;
    in_EAX[3] = *param_4;
    uVar1 = param_2[1];
    in_EAX[6] = param_2[2];
    in_EAX[7] = uVar1;
    in_EAX[8] = uVar2;
    in_EAX[9] = *param_5;
    uVar1 = param_2[3];
    in_EAX[0xc] = param_2[2];
    in_EAX[0xd] = uVar1;
    in_EAX[0xe] = uVar2;
    in_EAX[0xf] = *param_7;
    uVar1 = param_2[3];
    in_EAX[0x12] = *param_2;
    in_EAX[0x13] = uVar1;
    in_EAX[0x14] = uVar2;
    in_EAX[0x15] = *param_6;
    uVar1 = param_2[1];
    in_EAX[0x18] = *param_2;
    in_EAX[0x19] = uVar1;
    in_EAX[0x1a] = uVar2;
    in_EAX[0x1b] = *param_4;
  }
  return (uint)in_EAX;
}

/* ref: Client::System::Streaming::StreamingPlayer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413980(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[10]));
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1087ec8));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  REFG(undefined4, 0x1370c0c) = 0;
  F_004a05c0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004139f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004139f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4139f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00413cc0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Notifier::vf3 */
GEN_OWN GEN_NOFRAME unsigned int F_00413a00(void)
{
  GEN_ENTER(0x413a00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Kernel::Notifier::vf4 */
GEN_OWN GEN_NOFRAME byte F_00413a10(void)
{
  GEN_ENTER(0x413a10u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Streaming::StreamingThreadWin::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413a20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x1087ed8));
  F_004cf880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Streaming::StreamingWorkWin::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413a50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00410f70(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413a80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00411280(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00413ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x413ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float * pfVar6;
  int * piVar7;
  
  pfVar6 = (*(float * PTR32 *)&gen_args[0]);
  iVar2 = (int)(((double)GEN_TOD(*(*(float * PTR32 *)&gen_args[0]))) * *(double *)&REFG(undefined, 0x1088100));
  ((int *)(gen_frame + 0x0))[2] = iVar2;
  iVar3 = (int)(((double)GEN_TOD((*(float * PTR32 *)&gen_args[0])[1])) * *(double *)&REFG(undefined, 0x1088100));
  fVar1 = (*(float * PTR32 *)&gen_args[0])[2];
  (*(float * PTR32 *)&gen_args[0]) = ((float *)GEN_TOP(iVar3));
  iVar4 = (int)((double)fVar1 * *(double *)&REFG(undefined, 0x1088100));
  fVar1 = pfVar6[3];
  (*(int *)(gen_frame + 0x10)) = iVar4;
  iVar5 = (int)(*(double *)&REFG(undefined, 0x1088100) * (double)fVar1);
  (*(int *)(gen_frame + 0xc)) = iVar5;
  ((int *)(gen_frame + 0x0))[1] = 0xff;
  ((int *)(gen_frame + 0x0))[0] = 0;
  if (iVar2 < 0xff) {
    piVar7 = ((int *)(gen_frame + 0x0)) + 2;
    if (iVar2 < 1) {
      piVar7 = ((int *)(gen_frame + 0x0));
    }
  }
  else {
    piVar7 = ((int *)(gen_frame + 0x0)) + 1;
  }
  *(char *)this = (char)*piVar7;
  ((int *)(gen_frame + 0x0))[0] = 0xff;
  ((int *)(gen_frame + 0x0))[1] = 0;
  if (iVar3 < 0xff) {
    piVar7 = (int *)&(*(float * PTR32 *)&gen_args[0]);
    if (iVar3 < 1) {
      piVar7 = ((int *)(gen_frame + 0x0)) + 1;
    }
  }
  else {
    piVar7 = ((int *)(gen_frame + 0x0));
  }
  *((char *)GEN_TOP(((int)this + 1))) = (char)*piVar7;
  (*(float * PTR32 *)&gen_args[0]) = ((float *)GEN_TOP(0xff));
  ((int *)(gen_frame + 0x0))[0] = 0;
  if (iVar4 < 0xff) {
    piVar7 = &(*(int *)(gen_frame + 0x10));
    if (iVar4 < 1) {
      piVar7 = ((int *)(gen_frame + 0x0));
    }
  }
  else {
    piVar7 = (int *)&(*(float * PTR32 *)&gen_args[0]);
  }
  *((char *)GEN_TOP(((int)this + 2))) = (char)*piVar7;
  ((int *)(gen_frame + 0x0))[0] = 0;
  if (iVar5 < 0xff) {
    if (0 < iVar5) {
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0xc)) + 0)) = (undefined1)iVar5;
      *((undefined1 *)GEN_TOP(((int)this + 3))) = (undefined1)(*(int *)(gen_frame + 0xc));
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + 3))) = 0;
    return (uint)this;
  }
  *((undefined1 *)GEN_TOP(((int)this + 3))) = 0xff;
  return (uint)this;
}

/* ref: FUN_00413bd0 */
GEN_OWN GEN_FRAME uint F_00413bd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x413bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_004134a0(param_1,param_2,param_3,param_4,param_4,param_4,param_4,(undefined1)param_5,
                       param_6);
  return uVar1;
}

/* ref: FUN_00413c00 */
GEN_OWN GEN_FRAME uint F_00413c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x413c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_004136d0(param_1,param_2,param_3,param_4,param_4,param_4,param_4,param_5,param_6,
                       (undefined1)param_7,param_8);
  return uVar1;
}

/* ref: FUN_00413c30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00413c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x413c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  uVar1 = F_004134a0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a4))),(*(undefined4 *)&gen_args[0]),
                       5,&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),(char)(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00413c70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00413c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x413c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  
  uVar1 = F_004136d0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a4))),(*(undefined4 *)&gen_args[0]),
                       5,&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(char)(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413cc0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00411fd0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00413d10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00413d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x413d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_00413d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00413d20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_00413d30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00413d30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x413d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x7c;
}

/* ref: Common::Configuration::ConfigBase::vf1 */
GEN_OWN GEN_NOFRAME unsigned int F_00413d40(void)
{
  GEN_ENTER(0x413d40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00413d50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00413d50(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  F_0042ce40(param_1,((char *)REFP(0x10881f4)),*param_2,
               (uint)*(ushort *)(param_2 + 1),(uint)*((ushort *)GEN_TOP(((int)param_2 + 6))),
               (uint)*(byte *)(param_2 + 2),(uint)*((byte *)GEN_TOP(((int)param_2 + 9))),
               (uint)*((byte *)GEN_TOP(((int)param_2 + 10))),(uint)*((byte *)GEN_TOP(((int)param_2 + 0xb))),
               (uint)*(byte *)(param_2 + 3),(uint)*((byte *)GEN_TOP(((int)param_2 + 0xd))),
               (uint)*((byte *)GEN_TOP(((int)param_2 + 0xe))),(uint)*((byte *)GEN_TOP(((int)param_2 + 0xf))));
  return param_1;
}

/* ref: FUN_00413db0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00413db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x413db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x88))) = param_2;
  *((undefined * PTR32 *)GEN_TOP((param_2 + 0x98))) = this;
  return 1;
}

/* ref: FUN_00413dd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00413dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x413dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x88)));
  if (iVar1 == 0) {
    return 1;
  }
  if (iVar1 == param_2) {
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x88))) = 0;
    *((undefined4 *)GEN_TOP((param_2 + 0x98))) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_00413e50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00413e50(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x413e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    F_00406b30(*param_1);
    *param_1 = 0;
  }
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00406bb0(pcVar2 + (1 - (int)(param_2 + 1)),0,0);
  *param_1 = uVar3;
  uVar3 = F_00c49908(uVar3,pcVar2 + (1 - (int)(param_2 + 1)),param_2);
  return uVar3;
}

/* ref: Client::System::Configuration::ConfigFileOperation::vf2 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00413ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x413ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x268, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x260)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x264));
  F_0042e170(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_FWD,param_1);
  F_0042a3a0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20c)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
  F_004fd5e0(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x4)),param_2,*param_3,0,5);
  do {
    uVar1 = F_004f9c50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  } while (uVar1 == 0);
  F_004f9c50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_004fad40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429fa0();
  return 3;
}

/* ref: Client::System::Configuration::ConfigFileOperation::vf4 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00413f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x413f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x4a4, 12, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x49c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4a0));
  F_0042e170(((undefined1 *)(gen_frame + 0x448)) GEN_EDX_FWD,param_1);
  F_0042a3a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x448)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x448)) GEN_EDX_ARG);
  F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x208)) GEN_EDX_ARG);
  F_004f84e0(&(*(undefined4 *)(gen_frame + 0x208)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x220)) = param_2;
  (*(undefined4 *)(gen_frame + 0x208)) = *param_3;
  (*(undefined4 *)(gen_frame + 0x20c)) = 0;
  (*(undefined1 *)(gen_frame + 0x224)) = 1;
  F_004fc510(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x208)));
  F_00429fa0();
  return 7;
}

/* ref: FUN_00414000 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00414000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x414000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD));
}

/* ref: FUN_00414010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00414010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x414010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 == 2) {
    iVar1 = *((int *)GEN_TOP((in_ecx + 0x2b4)));
  }
  return iVar1 * 0xac + 0x15c + in_ecx;
}

/* ref: FUN_00414040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00414040(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x414040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  *((int *)GEN_TOP((in_ecx + 0x2b4))) = param_2;
  uVar1 = param_2 * 0xac + 0x15c + in_ecx;
  *((uint *)GEN_TOP((in_ecx + 0x90))) = uVar1;
  *((int *)GEN_TOP((uVar1 + 0x98))) = in_ecx;
  return uVar1;
}

/* ref: Common::Configuration::DevConfig::vf2 */
GEN_OWN GEN_NOFRAME byte F_00414080(void)
{
  GEN_ENTER(0x414080u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00414220 */
GEN_OWN GEN_FRAME uint F_00414220(GEN_P(char param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x414220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = (*(undefined * PTR32 (*)[2])REFP(0x108b0c8));
  if (param_1 == '\0') {
    ppuVar1 = (*(undefined * PTR32 (*)[2])REFP(0x108b108));
  }
  return (uint)ppuVar1;
}

/* ref: FUN_00414240 */
GEN_OWN GEN_FRAME uint F_00414240(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x414240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  
  pcVar1 = param_2;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0x0: ;
    pcVar1 = F_00c4a76c(param_1,((char *)REFP(0x108b14c)));
    return (uint)pcVar1;
  case 0x1: ;
    pcVar1 = F_00c4a76c(param_1,((char *)REFP(0x108b158)));
    return (uint)pcVar1;
  case 0x2: ;
    pcVar1 = F_00c4a76c(param_1,((char *)REFP(0x108b160)));
    return (uint)pcVar1;
  case 0x3: ;
    pcVar1 = F_00c4a76c(param_1,((char *)REFP(0x108b168)));
    return (uint)pcVar1;
  case 0x4: ;
  case 0x5: ;
    pcVar1 = F_00c4a76c(param_1,((char *)REFP(0x108b170)));
  }
  return (uint)pcVar1;
}

/* ref: FUN_004142d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004142d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4142d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004142e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004142e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4142e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  switch((unsigned int)(uintptr_t)(*in_ecx)) {
  case 0: ;
    return 0x1370c80;
  case 1: ;
    return 0x1370cd8;
  case 2: ;
    return 0x1370d30;
  case 3: ;
    return 0x1370d88;
  case 4: ;
    return 0x1370de0;
  case 5: ;
    return 0x1370e38;
  default: ;
    return 0x1370c28;
  }
}

/* ref: FUN_00414330 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00414330(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x414330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_0042b660(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1370c80));
  if (bVar1 != 0) {
    return 0;
  }
  bVar1 = F_0042b660(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1370cd8));
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_0042b660(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1370d30));
  if (bVar1 != 0) {
    return 2;
  }
  bVar1 = F_0042b660(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1370d88));
  if (bVar1 != 0) {
    return 3;
  }
  bVar1 = F_0042b660(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1370de0));
  if (bVar1 != 0) {
    return 4;
  }
  bVar1 = F_0042b660(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1370e38));
  return (-(uint)(bVar1 != 0) & 6) - 1;
}

/* ref: FUN_004143e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004143e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4143e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *in_ecx;
  if (0 < iVar1) {
    if (iVar1 < 3) {
      return (uint)REFG(undefined * PTR32, 0x12fcb78);
    }
    if (iVar1 == 3) {
      return (uint)REFG(undefined * PTR32, 0x12fcb74);
    }
  }
  return (uint)REFG(undefined * PTR32, 0x12fcb7c);
}

/* ref: FUN_00414410 */
GEN_OWN GEN_FRAME byte F_00414410(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x414410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  byte bVar1;
  
  if ((param_1 < 2) || (bVar1 = 0x2c, 3 < param_1)) {
    bVar1 = 0x2e;
  }
  return bVar1;
}

/* ref: FUN_00414430 */
GEN_OWN GEN_FRAME byte F_00414430(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x414430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 == 2) {
    return 0x2e;
  }
  if (param_1 != 3) {
    return 0x2c;
  }
  return 0x20;
}

/* ref: FUN_00414450 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00414450(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x414450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  return *in_ecx - 4U < 2;
}

/* ref: FUN_00414460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00414460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x414460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  if (((iVar1 == 1) || (iVar1 == 2)) || (uVar2 = iVar1 - 3, uVar2 == 0)) {
    uVar2 = F_0042a9a0(param_1 GEN_EDX_FWD,1,0,0,0);
  }
  return uVar2;
}

/* ref: FUN_00414490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00414490(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x414490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004144c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004144c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4144c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_004144e0 */
GEN_OWN GEN_FRAME float10 F_004144e0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x4144e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00414500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00414500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x414500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = ((int *)GEN_TOP((in_ecx + 0x88)));
  while ((*piVar2 == 0 || (uVar1 = F_00414500(*piVar2 GEN_EDX_FWD,param_2), *((int *)GEN_TOP((uVar1 + 0x10))) == 0))) {
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
    if (3 < uVar3) {
      return param_2 * 0x20 + *((int *)GEN_TOP((in_ecx + 0x10)));
    }
  }
  return uVar1;
}

/* ref: FUN_00414550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00414550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x414550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  undefined4 * puVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_1 != ((byte *)GEN_TOP(0x0))) {
    uVar7 = 0;
    puVar6 = ((undefined4 *)GEN_TOP(((int)this + 0x88)));
    do {
      if (((((undefined *)GEN_TOP(*puVar6)) != ((undefined *)GEN_TOP(0x0))) &&
          (uVar2 = F_00414550(((undefined *)GEN_TOP(*puVar6)) GEN_EDX_FWD,param_1,param_2,param_3), uVar2 != 0)) &&
         (*((int *)GEN_TOP((uVar2 + 0x10))) != 0)) {
        return uVar2;
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 < 4);
    uVar7 = *((uint *)GEN_TOP(((int)this + 0xc)));
    if (param_2 < uVar7) {
      uVar2 = param_3;
      if (uVar7 <= param_3) {
        uVar2 = uVar7;
      }
      if (param_2 < uVar2) {
        puVar6 = ((undefined4 *)GEN_TOP((param_2 * 0x20 + 0xc + *((int *)GEN_TOP(((int)this + 0x10))))));
        uVar7 = param_2;
        do {
          pbVar5 = ((byte *)GEN_TOP(*puVar6));
          pbVar3 = param_1;
          if (pbVar5 != ((byte *)GEN_TOP(0x0))) {
            do {
              bVar1 = *pbVar3;
              bVar8 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_004145f0: ;
                iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_004145f5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar8 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_004145f0;
              pbVar3 = pbVar3 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_004145f5: ;
            if (iVar4 == 0) {
              return uVar7 * 0x20 + *((int *)GEN_TOP(((int)this + 0x10)));
            }
          }
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 8;
        } while (uVar7 < uVar2);
      }
    }
  }
  return 0;
}

/* ref: FUN_00414620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00414620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x414620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == param_1) {
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    return uVar2;
  }
  if (uVar2 != 0) {
    while (uVar1 = *((uint *)GEN_TOP((uVar2 + 4))), uVar1 != param_1) {
      uVar2 = uVar1;
      if (uVar1 == 0) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((uVar2 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00414670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00414670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x414670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  uint uVar4;
  
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x98)));
  while (pvVar2 = pvVar3, pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    this = pvVar2;
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x98)));
  }
  uVar4 = 0;
  for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4))); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[1]))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0x1c))),param_1);
  }
  return uVar4;
}

/* ref: FUN_004146c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004146c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4146c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x58, 8, 4);
  char cVar1;
  char * pcVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  undefined * pvVar6;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  pcVar2 = ((char *)GEN_TOP(param_1[3]));
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = F_00406bb0(pcVar4 + (1 - (int)(pcVar2 + 1)),0,0);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar5;
  F_00c49908(uVar5,pcVar4 + (1 - (int)(pcVar2 + 1)),pcVar2);
  iVar3 = param_1[4];
  *((int *)GEN_TOP(((int)this + 0x10))) = iVar3;
  if (iVar3 == 2) {
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  }
  else if (iVar3 == 3) {
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  }
  else if (iVar3 == 4) {
    pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x54,0,0)));
    if (pvVar6 == ((undefined *)GEN_TOP(0x0))) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_0042cbc0(pvVar6 GEN_EDX_ARG,param_1[5]);
    }
    *((uint *)GEN_TOP(((int)this + 0x14))) = uVar5;
    pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x54,0,0)));
    if (pvVar6 == ((undefined *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      F_0042b630(pvVar6 GEN_EDX_ARG);
    }
    F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*param_1);
    F_0042ccf0(pvVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    *(undefined * PTR32 *)this = pvVar6;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  return (uint)this;
}

/* ref: FUN_004147e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004147e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4147e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00406bb0(pcVar2 + (1 - (int)(param_1 + 1)),0,0);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  F_00c49908(uVar3,pcVar2 + (1 - (int)(param_1 + 1)),param_1);
  return (uint)this;
}

/* ref: FUN_00414850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00414850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x414850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00406bb0(pcVar2 + (1 - (int)(param_1 + 1)),0,0);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  F_00c49908(uVar3,pcVar2 + (1 - (int)(param_1 + 1)),param_1);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_4;
  *(undefined4 *)this = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_3;
  return (uint)this;
}

/* ref: FUN_004148d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004148d0(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x4148d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  char cVar1;
  char * pcVar2;
  float fVar3;
  
  param_1[3] = 0.0;
  param_1[4] = 4.2039e-45;
  param_1[5] = param_3;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  fVar3 = gen_bits2f(F_00406bb0(pcVar2 + (1 - (int)(param_2 + 1)),0,0));
  param_1[3] = fVar3;
  F_00c49908((undefined4)gen_fl2bits(fVar3),pcVar2 + (1 - (int)(param_2 + 1)),param_2);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  return (uint)param_1;
}

/* ref: FUN_00414960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00414960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22)
{
  GEN_ENTER(0x414960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[22];
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
  gen_args[10] = gen_a11;
  gen_args[11] = gen_a12;
  gen_args[12] = gen_a13;
  gen_args[13] = gen_a14;
  gen_args[14] = gen_a15;
  gen_args[15] = gen_a16;
  gen_args[16] = gen_a17;
  gen_args[17] = gen_a18;
  gen_args[18] = gen_a19;
  gen_args[19] = gen_a20;
  gen_args[20] = gen_a21;
  gen_args[21] = gen_a22;
  GEN_FRAME_DECL_TOP(0x58, 8, 4);
  char cVar1;
  undefined * pvVar2;
  uint uVar3;
  char * pcVar4;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 4;
  pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x54,0,0)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_0042cbc0(pvVar2 GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]));
  }
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  pcVar4 = (*(char * PTR32 *)&gen_args[0]);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00406bb0(pcVar4 + (1 - (int)((*(char * PTR32 *)&gen_args[0]) + 1)),0,0);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  F_00c49908(uVar3,pcVar4 + (1 - (int)((*(char * PTR32 *)&gen_args[0]) + 1)),(*(char * PTR32 *)&gen_args[0]));
  pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x54,0,0)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    pvVar2 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    F_0042b630(pvVar2 GEN_EDX_ARG);
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]));
  F_0042ccf0(pvVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *(undefined * PTR32 *)this = pvVar2;
  F_0042c880(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00414a40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00414a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x414a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if ((uVar3 <= param_1) && (param_1 <= *((uint *)GEN_TOP(((int)this + 8))))) {
    *((uint *)GEN_TOP(((int)this + 0x14))) = param_1;
    if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) != ((undefined *)GEN_TOP(0x0))) && (uVar2 != param_1)) {
      F_00414670(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,this);
    }
    return 1;
  }
  if (param_2 == 0) goto LAB_00414aa7;
  if (param_2 == 2) {
    if (param_1 < uVar3) {
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
      goto LAB_00414aa7;
    }
    uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
LAB_00414aa2: ;
    if (param_1 <= uVar1) goto LAB_00414aa7;
  }
  else if (param_2 == 3) {
    if (uVar3 <= param_1) {
      uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
      uVar1 = uVar3;
      goto LAB_00414aa2;
    }
  }
  else {
    uVar3 = *(uint *)this;
  }
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar3;
LAB_00414aa7: ;
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) != ((undefined *)GEN_TOP(0x0))) && (uVar2 != *((uint *)GEN_TOP(((int)this + 0x14))))) {
    F_00414670(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,this);
  }
  return 0;
}

/* ref: FUN_00414ad0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00414ad0(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x414ad0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = param_1[5];
  fVar3 = (float10)param_2;
  if ((!((float10)param_1[1] <= fVar3)) || (!(fVar3 <= (float10)param_1[2]))) {
    param_1[5] = *param_1;
    if ((((undefined *)(uintptr_t)gen_fl2bits((float)(param_1[6]))) != ((undefined *)GEN_TOP(0x0))) &&
       (fVar3 = (float10)*param_1, fVar4 = (float10)fVar1, bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3),
       bVar2 == (bVar2 || fVar4 == fVar3))) {
      F_00414670(((undefined *)(uintptr_t)gen_fl2bits((float)(param_1[6]))) GEN_EDX_FWD,param_1);
    }
    return 0;
  }
  param_1[5] = param_2;
  if ((((undefined *)(uintptr_t)gen_fl2bits((float)(param_1[6]))) != ((undefined *)GEN_TOP(0x0))) &&
     (fVar4 = (float10)fVar1, bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3), bVar2 == (bVar2 || fVar4 == fVar3)))
  {
    F_00414670(((undefined *)(uintptr_t)gen_fl2bits((float)(param_1[6]))) GEN_EDX_ARG,param_1);
    return 1;
  }
  return 1;
}

/* ref: FUN_00414b60 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00414b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21)
{
  GEN_ENTER(0x414b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[21];
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
  gen_args[10] = gen_a11;
  gen_args[11] = gen_a12;
  gen_args[12] = gen_a13;
  gen_args[13] = gen_a14;
  gen_args[14] = gen_a15;
  gen_args[15] = gen_a16;
  gen_args[16] = gen_a17;
  gen_args[17] = gen_a18;
  gen_args[18] = gen_a19;
  gen_args[19] = gen_a20;
  gen_args[20] = gen_a21;
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  bool bVar1;
  bool bVar2;
  byte bVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  bVar1 = false;
  bVar3 = F_0042b740(&(*(undefined4 *)&gen_args[0]) GEN_EDX_FWD,&REFG(undefined, 0x1088147));
  if (bVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
      F_0042e170(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1088244));
      bVar1 = true;
      bVar3 = F_0042b6f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      if (bVar3 != 0) {
        bVar2 = true;
        goto LAB_00414c0d;
      }
    }
    bVar2 = false;
LAB_00414c0d: ;
    if (bVar1) {
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    F_0042e3f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined, 0x1088248));
    if (bVar2) {
      F_00414670(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,this);
    }
    F_0042c880(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG);
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    bVar3 = F_0042b6f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]));
    if (bVar3 != 0) {
      bVar1 = true;
      goto LAB_00414ba8;
    }
  }
  bVar1 = false;
LAB_00414ba8: ;
  F_0042ccf0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]));
  if (bVar1) {
    F_00414670(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,this);
  }
  F_0042c880(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00414c60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00414c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x414c60u, gen_a0, 0u, 0u, 0u);
  GEN_SUSPECT(0x414c60u, "uStack_50, uStack_4c, uStack_48, uStack_44, uStack_40, uStack_3c, uStack_38, uStack_34, uStack_30, uStack_2c, uStack_28, uStack_24, uStack_20, uStack_1c, uStack_18, uStack_14, uStack_10");
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 gen_out[0x8];
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined * local_8;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar1 == 2) {
    uVar4 = *(uint *)this;
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
    *((uint *)GEN_TOP(((int)this + 0x14))) = uVar4;
    if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) != ((undefined *)GEN_TOP(0x0))) && (uVar2 != uVar4)) {
      local_8 = this;
      uStack_c = 0x414cad;
      uVar4 = F_00414670(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,this);
    }
  }
  else {
    if (iVar1 == 3) {
      local_8 = this;
      local_8 = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)this)));
      uStack_c = 0x414c92;
      bVar3 = F_00414ad0(this GEN_EDX_ARG,*(float *)this);
      return CONCAT31(extraout_var_00,bVar3);
    }
    uVar4 = iVar1 - 4;
    if (uVar4 == 0) {
      F_0042cbc0((gen_out + 0x0) GEN_EDX_ARG,*(undefined4 *)this);
      bVar3 = F_00414b60(this GEN_EDX_ARG,(*(undefined4 *)(gen_out + 0x0)),(*(undefined4 *)(gen_out + 0x4)),uStack_50,uStack_4c,uStack_48,uStack_44,
                           uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,
                           uStack_24,uStack_20,uStack_1c,uStack_18,uStack_14,uStack_10,uStack_c,
                           local_8);
      return CONCAT31(extraout_var,bVar3);
    }
  }
  return uVar4;
}

/* ref: Client::System::Configuration::ConfigFileOperation::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00414d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x414d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x26c, 4, 4);
  undefined * this_00;
  uint uVar1;
  undefined * _Dst;
  uint uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x264)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x268));
  F_0042e170(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_FWD,param_1);
  F_0042a3a0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x210)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG);
  this_00 = REFG(void * PTR32, 0x1375ae8);
  uVar1 = F_004fa430(((undefined1 *)(gen_frame + 0x8)));
  _Dst = ((undefined *)GEN_TOP(F_00406bb0(uVar1 + 1,0,0)));
  F_00c48350(_Dst,0,uVar1 + 1);
  F_004fd640(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)),_Dst,uVar1,0,0,0);
  uVar3 = 0;
  uVar2 = F_004f9c50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar2 == 0xffffffff) {
    (*(char *)(gen_frame + 0x7)) = '\x01';
    uVar3 = 1;
  }
  else if (uVar2 == 1) {
    (*(char *)(gen_frame + 0x7)) = '\0';
  }
  else {
    (*(char *)(gen_frame + 0x7)) = '\x01';
    if (uVar2 == 5) {
      uVar3 = 5;
    }
    else {
      uVar3 = 6;
    }
  }
  F_004fad40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((*(char *)(gen_frame + 0x7)) != '\0') {
    if (_Dst != ((undefined *)GEN_TOP(0x0))) {
      F_00406b30(_Dst);
    }
    F_00429fa0();
    return uVar3;
  }
  *param_3 = uVar1;
  *param_2 = _Dst;
  F_00429fa0();
  return 3;
}

/* ref: FUN_00414e60 */
GEN_OWN GEN_FRAME uint F_00414e60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x414e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(0x18,0,0)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[7])REFP(0x108b224));
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
  }
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  *(undefined1 *)(puVar1 + 4) = param_7;
  *((undefined1 *)GEN_TOP(((int)puVar1 + 0x11))) = param_8;
  puVar1[5] = param_1;
  uVar2 = ((code *)REFG(gen_code32, 0x1370c20))(puVar1);
  return uVar2;
}

/* ref: Common::Configuration::SystemConfig::vf2 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00414ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x414ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  uint uVar3;
  
  uVar3 = 0;
  pSVar2 = this + 0x88;
  do {
    if (*(int *)pSVar2 != 0) {
      uVar1 = F_00414500(*(int *)pSVar2 GEN_EDX_FWD,3);
      if (*((int *)GEN_TOP((uVar1 + 0x10))) != 0) goto LAB_00414f02;
    }
    uVar3 = uVar3 + 1;
    pSVar2 = pSVar2 + 4;
  } while (uVar3 < 4);
  uVar1 = *(int *)(this + 0x10) + 0x60;
LAB_00414f02: ;
  return 1 < *((uint *)GEN_TOP((uVar1 + 0x14)));
}

/* ref: FUN_00414f10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00414f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x414f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x88)));
  do {
    if (*piVar2 != 0) {
      uVar1 = F_00414500(*piVar2 GEN_EDX_FWD,0x1a0);
      if (*((int *)GEN_TOP((uVar1 + 0x10))) != 0) goto LAB_00414f47;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar3 < 4);
  uVar1 = *((int *)GEN_TOP(((int)this + 0x10))) + 0x3400;
LAB_00414f47: ;
  return *((int *)GEN_TOP((uVar1 + 0x14))) == 1;
}

/* ref: FUN_00414f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00414f60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x414f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar2 = ((int *)GEN_TOP((param_1 + 0x88)));
  do {
    if (*piVar2 != 0) {
      puVar1 = ((uint *)GEN_TOP(F_00414500(*piVar2 GEN_EDX_FWD,0x1a0)));
      if (puVar1[4] != 0) goto LAB_00414f97;
    }
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar4 < 4);
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x3400)));
LAB_00414f97: ;
  uVar4 = puVar1[5];
  uVar3 = (uint)(param_2 != '\0');
  if ((uVar3 < puVar1[1]) || (puVar1[2] < uVar3)) {
    uVar3 = *puVar1;
  }
  puVar1[5] = uVar3;
  if ((((undefined *)GEN_TOP(puVar1[6])) != ((undefined *)GEN_TOP(0x0))) && (uVar4 != uVar3)) {
    puVar1 = ((uint *)GEN_TOP(F_00414670(((undefined *)GEN_TOP(puVar1[6])) GEN_EDX_ARG,puVar1)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00414fd0 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_00414fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x414fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  
  piVar3 = ((int *)GEN_TOP(((int)this + 0x88)));
  uVar5 = 0;
  piVar4 = piVar3;
  do {
    if (*piVar4 != 0) {
      uVar2 = F_00414500(*piVar4 GEN_EDX_FWD,9);
      if (*((int *)GEN_TOP((uVar2 + 0x10))) != 0) goto LAB_00415004;
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar5 < 4);
  uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) + 0x120;
LAB_00415004: ;
  uVar1 = *((undefined4 *)GEN_TOP((uVar2 + 0x14)));
  uVar5 = 0;
  do {
    if (*piVar3 != 0) {
      uVar2 = F_00414500(*piVar3 GEN_EDX_ARG,10);
      if (*((int *)GEN_TOP((uVar2 + 0x10))) != 0) {
        return CONCAT44(*((undefined4 *)GEN_TOP((uVar2 + 0x14))),uVar1);
      }
    }
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar5 < 4);
  return CONCAT44(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x154))),uVar1);
}

/* ref: FUN_00415060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00415060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x415060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x88)));
  do {
    if (*piVar2 != 0) {
      puVar1 = ((uint *)GEN_TOP(F_00414500(*piVar2 GEN_EDX_FWD,9)));
      if (puVar1[4] != 0) goto LAB_00415094;
    }
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar4 < 4);
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x120)));
LAB_00415094: ;
  uVar4 = puVar1[5];
  if ((param_1 < puVar1[1]) || (uVar3 = param_1, puVar1[2] < param_1)) {
    uVar3 = *puVar1;
  }
  puVar1[5] = uVar3;
  if ((((undefined *)GEN_TOP(puVar1[6])) != ((undefined *)GEN_TOP(0x0))) && (uVar4 != uVar3)) {
    F_00414670(((undefined *)GEN_TOP(puVar1[6])) GEN_EDX_ARG,puVar1);
  }
  uVar4 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x88)));
  do {
    if (*piVar2 != 0) {
      puVar1 = ((uint *)GEN_TOP(F_00414500(*piVar2 GEN_EDX_ARG,10)));
      if (puVar1[4] != 0) goto LAB_004150e6;
    }
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar4 < 4);
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x140)));
LAB_004150e6: ;
  uVar4 = puVar1[5];
  if ((param_2 < puVar1[1]) || (uVar3 = param_2, puVar1[2] < param_2)) {
    uVar3 = *puVar1;
  }
  puVar1[5] = uVar3;
  if ((((undefined *)GEN_TOP(puVar1[6])) != ((undefined *)GEN_TOP(0x0))) && (uVar4 != uVar3)) {
    puVar1 = ((uint *)GEN_TOP(F_00414670(((undefined *)GEN_TOP(puVar1[6])) GEN_EDX_ARG,puVar1)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00415120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00415120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x415120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00414330(param_1);
  *(uint *)this = uVar1;
  return (uint)this;
}

/* ref: FUN_00415150 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00415150(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x415150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  if (*in_ecx == 2) {
    return 0x2e;
  }
  if (*in_ecx != 3) {
    return 0x2c;
  }
  return 0x20;
}

/* ref: FUN_00415170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00415170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x415170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00422310(param_1);
  *(uint *)this = uVar1;
  return (uint)this;
}

/* ref: FUN_00415190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00415190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x415190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  undefined1 gen_out[0x8];
  float fVar1;
  float * pfVar2;
  byte bVar3;
  int iVar4;
  float * this_00;
  float * pfVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 extraout_ECX = 0;
  undefined4 uVar6;
  int * piVar7;
  uint uVar8;
  float * pfVar9;
  undefined4 uStack_60 = 0;
  undefined4 uStack_5c = 0;
  undefined4 uStack_58 = 0;
  undefined4 uStack_54 = 0;
  undefined4 uStack_50 = 0;
  undefined4 uStack_4c = 0;
  undefined4 uStack_48 = 0;
  undefined4 uStack_44 = 0;
  undefined4 uStack_40 = 0;
  undefined4 uStack_3c = 0;
  undefined4 uStack_38 = 0;
  undefined4 uStack_34 = 0;
  undefined4 uStack_30 = 0;
  undefined4 uStack_2c = 0;
  undefined4 uStack_28 = 0;
  undefined4 uStack_24 = 0;
  undefined4 uStack_20 = 0;
  undefined4 uStack_1c;
  float * local_18;
  undefined * local_8;
  
  local_8 = this;
  pfVar5 = param_1;
  if (param_1 <= param_2) {
    iVar4 = (int)((int)(uintptr_t)param_1) << 5;
    pfVar9 = param_1;
    do {
      uVar8 = 0;
      piVar7 = ((int *)GEN_TOP(((int)local_8 + 0x88)));
      do {
        uVar6 = 0;
        if (*piVar7 != 0) {
          local_18 = pfVar9;
          uStack_1c = 0x4151cc;
          this_00 = ((float *)GEN_TOP(F_00414500(*piVar7 GEN_EDX_FWD,pfVar9)));
          uVar6 = extraout_ECX;
          if (this_00[4] != 0.0) goto LAB_004151e3;
        }
        uVar8 = uVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar8 < 4);
      this_00 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)local_8 + 0x10))) + iVar4)));
LAB_004151e3: ;
      fVar1 = this_00[4];
      if (fVar1 == 2.8026e-45) {
        pfVar5 = ((float *)(uintptr_t)gen_fl2bits((float)(*this_00)));
        pfVar2 = ((float *)(uintptr_t)gen_fl2bits((float)(this_00[5])));
        this_00[5] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar5)));
        if ((((undefined *)(uintptr_t)gen_fl2bits((float)(this_00[6]))) != ((undefined *)GEN_TOP(0x0))) && (pfVar2 != pfVar5)) {
          local_18 = this_00;
          uStack_1c = 0x415233;
          pfVar5 = ((float *)GEN_TOP(F_00414670(((undefined *)(uintptr_t)gen_fl2bits((float)(this_00[6]))) GEN_EDX_ARG,this_00)));
        }
      }
      else if (fVar1 == 4.2039e-45) {
        local_18 = ((float *)GEN_TOP(uVar6));
        local_18 = ((float *)(uintptr_t)gen_fl2bits((float)(*this_00)));
        uStack_1c = 0x415218;
        bVar3 = F_00414ad0(this_00 GEN_EDX_ARG,*this_00);
        pfVar5 = ((float *)GEN_TOP(CONCAT31(extraout_var_00,bVar3)));
      }
      else {
        pfVar5 = ((float *)GEN_TOP(((int)gen_fl2bits(fVar1) - 4)));
        if (pfVar5 == ((float *)GEN_TOP(0x0))) {
          F_0042cbc0((gen_out + 0x0) GEN_EDX_ARG,(undefined4)gen_fl2bits(*this_00));
          bVar3 = F_00414b60(this_00 GEN_EDX_ARG,(*(undefined4 *)(gen_out + 0x0)),(*(undefined4 *)(gen_out + 0x4)),uStack_60,uStack_5c,uStack_58,uStack_54, uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38 ,uStack_34,uStack_30,uStack_2c,uStack_28,uStack_24,uStack_20, uStack_1c,local_18);
          pfVar5 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
        }
      }
      pfVar9 = ((float *)GEN_TOP(((int)pfVar9 + 1)));
      iVar4 = iVar4 + 0x20;
    } while (pfVar9 <= param_2);
  }
  return (uint)pfVar5;
}

/* ref: FUN_00415250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00415250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x415250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar3 == param_1) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
    *((uint *)GEN_TOP((param_1 + 4))) = uVar1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *((undefined * PTR32 *)GEN_TOP((param_1 + 8))) = this;
    return uVar1;
  }
  if (iVar3 != 0) {
    while (iVar2 = *((int *)GEN_TOP((iVar3 + 4))), iVar2 != param_1) {
      iVar3 = iVar2;
      if (iVar2 == 0) {
        uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
        *((uint *)GEN_TOP((param_1 + 4))) = uVar1;
        *((int *)GEN_TOP(((int)this + 4))) = param_1;
        *((undefined * PTR32 *)GEN_TOP((param_1 + 8))) = this;
        return uVar1;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((param_1 + 4))) = uVar1;
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined * PTR32 *)GEN_TOP((param_1 + 8))) = this;
  return uVar1;
}

/* ref: FUN_004152c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004152c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4152c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x124, 12, 4);
  byte bVar1;
  int iVar2;
  int * piVar3;
  byte * pbVar4;
  char * pcVar5;
  undefined4 extraout_ECX = 0;
  uint * puVar6;
  undefined * this_00;
  byte * pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  ulonglong uVar12;
  float fVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120));
  (*(int * PTR32 *)(gen_frame + 0x70)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = param_1;
  (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x4152ef));
  F_0042b630(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_FWD);
  (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x4152fa));
  F_0042b630(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x415302));
  F_0042aca0((int)this + 0x28 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x6c)) = 0;
  this_00 = param_1;
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x70));
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    do {
      uVar8 = (*(uint *)(gen_frame + 0x6c));
      uVar10 = *((uint *)GEN_TOP(((int)this_00 + 4)));
      if (uVar10 < *((uint *)GEN_TOP(((int)this_00 + 8)))) {
        iVar2 = uVar10 * 0x54 + *((int *)GEN_TOP(((int)this_00 + 0x60)));
        *((uint *)GEN_TOP(((int)this_00 + 4))) = uVar10 + 1;
        (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(iVar2));
        (*(undefined4 *)(gen_frame + 0x4c)) = 0x415334;
        F_0042ccf0(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG,iVar2);
        iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
        piVar3 = ((int *)GEN_TOP((uVar8 * 0x20 + 0xc + iVar2)));
        if (*((int *)GEN_TOP((uVar8 * 0x20 + 0xc + iVar2))) == 0) {
          do {
            uVar8 = uVar8 + 1;
            piVar3 = piVar3 + 8;
            (*(uint *)(gen_frame + 0x6c)) = uVar8;
            if (*((uint *)GEN_TOP(((int)this + 0xc))) <= uVar8) goto LAB_00415655;
          } while (*piVar3 == 0);
        }
        iVar9 = uVar8 * 0x20;
        pbVar7 = *((byte * PTR32 *)GEN_TOP((iVar9 + 0xc + iVar2)));
        pcVar5 = ((char *)REFP(0x1088228));
        pbVar4 = pbVar7;
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_00415395: ;
            iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_0041539a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_00415395;
          pbVar4 = pbVar4 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        iVar2 = 0;
LAB_0041539a: ;
        piVar3 = (*(int * PTR32 *)(gen_frame + 0x70));
        if (iVar2 == 0) break;
        (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x4153aa));
        pbVar4 = ((byte *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG)));
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_004153d0: ;
            iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_004153d5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_004153d0;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar2 = 0;
LAB_004153d5: ;
        if (iVar2 == 0) {
          switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x70))[4] + 0x10 + iVar9))))) {
          case 2: ;
            (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x415401));
            uVar8 = F_00422ae0(this_00 GEN_EDX_ARG);
            uVar10 = *((uint *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x70))[4] + 0x14 + iVar9)));
            puVar6 = ((uint *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x70))[4] + iVar9)));
            if ((uVar8 < puVar6[1]) || (puVar6[2] < uVar8)) {
              uVar8 = *puVar6;
            }
            puVar6[5] = uVar8;
            if ((((undefined *)GEN_TOP(puVar6[6])) != ((undefined *)GEN_TOP(0x0))) && (uVar10 != uVar8)) {
              (*(uint * PTR32 *)(gen_frame + 0x50)) = puVar6;
              (*(undefined4 *)(gen_frame + 0x4c)) = 0x415438;
              F_00414670(((undefined *)GEN_TOP(puVar6[6])) GEN_EDX_ARG,puVar6);
            }
            break;
          case 3: ;
            (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x415444));
            fVar13 = F_00422b10(this_00 GEN_EDX_ARG);
            (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(extraout_ECX));
            (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)(uintptr_t)gen_fl2bits((float)(fVar13)));
            (*(undefined4 *)(gen_frame + 0x4c)) = 0x415458;
            F_00414ad0((*(int * PTR32 *)(gen_frame + 0x70))[4] + iVar9 GEN_EDX_ARG,fVar13);
            break;
          case 4: ;
            uVar10 = *((uint *)GEN_TOP(((int)this_00 + 4)));
            if (uVar10 < *((uint *)GEN_TOP(((int)this_00 + 8)))) {
              iVar2 = uVar10 * 0x54 + *((int *)GEN_TOP(((int)this_00 + 0x60)));
              *((uint *)GEN_TOP(((int)this_00 + 4))) = uVar10 + 1;
              (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(iVar2));
              (*(undefined4 *)(gen_frame + 0x4c)) = 0x415481;
              F_0042ccf0(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,iVar2);
              if ((*(uint *)(gen_frame + 0x6c)) == (*(int * PTR32 *)(gen_frame + 0x70))[3] - 1U) {
                iVar2 = (*(uint *)(gen_frame + 0x6c)) - 1;
              }
              else {
                iVar2 = (*(uint *)(gen_frame + 0x6c)) + 1;
              }
              pbVar7 = *((byte * PTR32 *)GEN_TOP((iVar2 * 0x20 + 0xc + (*(int * PTR32 *)(gen_frame + 0x70))[4])));
              (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x4154ae));
              pbVar4 = ((byte *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG)));
              do {
                bVar1 = *pbVar4;
                bVar11 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_004154d0: ;
                  iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_004154d5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar11 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_004154d0;
                pbVar4 = pbVar4 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar2 = 0;
LAB_004154d5: ;
              if (iVar2 == 0) {
                if (*((int *)GEN_TOP(((int)this_00 + 4))) != 0) {
                  *((int *)GEN_TOP(((int)this_00 + 4))) = *((int *)GEN_TOP(((int)this_00 + 4))) - 1;
                }
              }
              else {
                F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x74)));
                F_00414b60(((undefined *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x70))[4] + iVar9))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)), (*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)), (*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)), (*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(uint * PTR32 *)(gen_frame + 0x50)));
              }
            }
          }
        }
        else {
          iVar2 = *((int *)GEN_TOP(((int)this_00 + 4)));
          (*(int *)(gen_frame + 0x60)) = iVar2;
          (*(int *)(gen_frame + 0x64)) = 0;
          if (iVar2 != 0) {
            iVar2 = iVar2 - 1;
          }
          *((int *)GEN_TOP(((int)this_00 + 4))) = iVar2;
          while (uVar10 = *((uint *)GEN_TOP(((int)this_00 + 4))), uVar10 < *((uint *)GEN_TOP(((int)this_00 + 8)))) {
            iVar2 = uVar10 * 0x54 + *((int *)GEN_TOP(((int)this_00 + 0x60)));
            *((uint *)GEN_TOP(((int)this_00 + 4))) = uVar10 + 1;
            (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(iVar2));
            (*(undefined4 *)(gen_frame + 0x4c)) = 0x415551;
            F_0042ccf0(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG,iVar2);
            uVar10 = 0;
            if ((*(int * PTR32 *)(gen_frame + 0x70))[3] != 0) {
              iVar2 = 0;
              do {
                pbVar7 = *((byte * PTR32 *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x70))[4] + 0xc + iVar2)));
                if (pbVar7 != ((byte *)GEN_TOP(0x0))) {
                  (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x415579));
                  pbVar4 = ((byte *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG)));
                  do {
                    bVar1 = *pbVar4;
                    bVar11 = bVar1 < *pbVar7;
                    if (bVar1 != *pbVar7) {
LAB_004155a0: ;
                      iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_004155a5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar4[1];
                    bVar11 = bVar1 < pbVar7[1];
                    if (bVar1 != pbVar7[1]) goto LAB_004155a0;
                    pbVar4 = pbVar4 + 2;
                    pbVar7 = pbVar7 + 2;
                  } while (bVar1 != 0);
                  iVar9 = 0;
LAB_004155a5: ;
                  if (iVar9 == 0) {
                    (*(uint *)(gen_frame + 0x6c)) = uVar10 - 1;
                    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 4))) = (*(int *)(gen_frame + 0x64)) - 1 + (*(int *)(gen_frame + 0x60));
                    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x68));
                    goto switchD_004153f3_caseD_0;
                  }
                }
                uVar10 = uVar10 + 1;
                iVar2 = iVar2 + 0x20;
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x68));
              } while (uVar10 < (uint)(*(int * PTR32 *)(gen_frame + 0x70))[3]);
            }
            (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) + 1;
          }
        }
      }
switchD_004153f3_caseD_0: ;
      uVar10 = (*(uint *)(gen_frame + 0x6c)) + 1;
      (*(uint *)(gen_frame + 0x6c)) = uVar10;
      this = (*(int * PTR32 *)(gen_frame + 0x70));
      piVar3 = (*(int * PTR32 *)(gen_frame + 0x70));
    } while (uVar10 < (uint)(*(int * PTR32 *)(gen_frame + 0x70))[3]);
  }
  while (uVar10 = *((uint *)GEN_TOP(((int)this_00 + 4))), uVar10 < *((uint *)GEN_TOP(((int)this_00 + 8)))) {
    iVar2 = uVar10 * 0x54 + *((int *)GEN_TOP(((int)this_00 + 0x60)));
    *((uint *)GEN_TOP(((int)this_00 + 4))) = uVar10 + 1;
    (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(iVar2));
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x41562d;
    F_0042e360(piVar3 + 10 GEN_EDX_ARG,iVar2);
    (*(uint * PTR32 *)(gen_frame + 0x50)) = (uint *)&REFG(undefined, 0x1088240);
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x41563a;
    F_0042e370(piVar3 + 10 GEN_EDX_ARG,&REFG(undefined, 0x1088240));
  }
  if (*((char *)GEN_TOP(piVar3[10])) != '\0') {
    (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x41564d));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
    (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x415655));
    F_0042aca0(piVar3 + 10 GEN_EDX_ARG);
  }
LAB_00415655: ;
  (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x415660));
  F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x415668));
  uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x5c)) = 0x415675;
  return (uint)uVar12;
}

/* ref: FUN_00415690 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00415690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x415690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 4) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14)));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      F_0042c880(pvVar1 GEN_EDX_FWD);
      F_00406ad0(pvVar1);
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    }
    pvVar1 = *(undefined * PTR32 *)this;
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
      *(undefined4 *)this = 0;
    }
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar2 = F_00406ad0(*((int *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return uVar2;
}

/* ref: FUN_004156f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004156f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4156f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x58, 8, 4);
  char cVar1;
  char * pcVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  undefined * this_00;
  
  F_00415690(this GEN_EDX_FWD);
  pcVar2 = ((char *)GEN_TOP(param_1[3]));
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = F_00406bb0(pcVar4 + (1 - (int)(pcVar2 + 1)),0,0);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar5;
  F_00c49908(uVar5,pcVar4 + (1 - (int)(pcVar2 + 1)),pcVar2);
  iVar3 = param_1[4];
  *((int *)GEN_TOP(((int)this + 0x10))) = iVar3;
  if (iVar3 == 2) {
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  }
  else if (iVar3 == 3) {
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  }
  else if (iVar3 == 4) {
    this_00 = ((undefined *)GEN_TOP(F_00406b90(0x54,0,0)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_0042cbc0(this_00 GEN_EDX_ARG,param_1[5]);
    }
    *((uint *)GEN_TOP(((int)this + 0x14))) = uVar5;
    uVar5 = F_00406b90(0x54,0,0);
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      F_0042b630(uVar5 GEN_EDX_ARG);
    }
    *(uint *)this = uVar5;
    F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*param_1);
    F_0042ccf0(*(undefined * PTR32 *)this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00415810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00415810(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x415810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x108b270));
  return (uint)in_ecx;
}

/* ref: Client::System::Configuration::ConfigFileOperation::vf3 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00415820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x415820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x4a4, 12, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x49c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4a0));
  F_0042e170(((undefined1 *)(gen_frame + 0x448)) GEN_EDX_FWD,param_1);
  F_0042a3a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x448)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x448)) GEN_EDX_ARG);
  F_004f9bb0(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG);
  F_004f84e0(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  (*(char * PTR32 *)(gen_frame + 0x228)) = ((char *)REFP(0x108824c));
  (*(undefined4 *)(gen_frame + 0x22c)) = 0;
  (*(undefined4 *)(gen_frame + 0x230)) = 0;
  (*(gen_code32 *)(gen_frame + 0x23c)) = ((code *)REFP(0x414e60));
  (*(undefined * PTR32 *)(gen_frame + 0x218)) = this;
  (*(undefined4 *)(gen_frame + 0x21c)) = 0;
  F_004fc400(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x208)));
  REFG(undefined4, 0x1370c20) = param_2;
  F_00429fa0();
  return 7;
}

/* ref: FUN_004158f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004158f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4158f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x20;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar2))) GEN_EDX_FWD,param_2);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((uVar1 + 0x18 + iVar2))) = this;
  *((int *)GEN_TOP((uVar1 + 0x1c + iVar2))) = param_1;
  return uVar1;
}

/* ref: FUN_00415920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00415920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x415920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00415190(this GEN_EDX_FWD,param_1,param_1);
  return uVar1;
}

/* ref: FUN_00415940 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00415940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x415940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
    iVar4 = 0;
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x10 + iVar4)));
      iVar2 = *((int *)GEN_TOP((param_1 + 0x10))) + iVar4;
      if (((iVar1 != 0) && (iVar1 != 1)) && (*((int *)GEN_TOP((iVar2 + 0x10))) != 0)) {
        F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar4))) GEN_EDX_FWD,iVar2);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (uVar3 < *((uint *)GEN_TOP((param_1 + 0xc))));
  }
  return;
}

/* ref: FUN_00415990 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00415990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x415990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xc4, 12, 4);
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  uint * puVar6;
  byte * pbVar7;
  uint uVar8;
  bool bVar9;
  ulonglong uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0));
  (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x4159ad));
  F_0042b630(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_FWD);
  (*(int *)(gen_frame + 0x64)) = *((int *)GEN_TOP(((int)this + 0x9c)));
  if ((*(int *)(gen_frame + 0x64)) != *((int *)GEN_TOP(((int)this + 0xa0)))) {
    do {
      (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x64)) + 0xc)))));
      (*(undefined4 *)(gen_frame + 0x4c)) = 0x4159ce;
      F_0042e430(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x64)) + 0xc))));
      uVar8 = 0;
      if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
        (*(int *)(gen_frame + 0x60)) = 0;
        do {
          pbVar7 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc + (*(int *)(gen_frame + 0x60)))));
          if (pbVar7 != ((byte *)GEN_TOP(0x0))) {
            (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x4159f6));
            pbVar4 = ((byte *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG)));
            do {
              bVar1 = *pbVar4;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_00415a16: ;
                iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_00415a1b;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_00415a16;
              pbVar4 = pbVar4 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_00415a1b: ;
            if (iVar5 == 0) {
              iVar5 = uVar8 * 0x20;
              uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x10 + iVar5)));
              puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar5)));
              switch((unsigned int)(uintptr_t)(uVar2)) {
              case 2: ;
                uVar8 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x64)) + 0x14)));
                uVar3 = puVar6[5];
                if ((uVar8 < puVar6[1]) || (puVar6[2] < uVar8)) {
                  uVar8 = *puVar6;
                }
                puVar6[5] = uVar8;
                if ((((undefined *)GEN_TOP(puVar6[6])) != ((undefined *)GEN_TOP(0x0))) && (uVar3 != uVar8)) {
                  (*(uint * PTR32 *)(gen_frame + 0x50)) = puVar6;
                  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415a6c;
                  F_00414670(((undefined *)GEN_TOP(puVar6[6])) GEN_EDX_ARG,puVar6);
                }
                break;
              case 3: ;
                (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(uVar2));
                (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP(((*(int *)(gen_frame + 0x64)) + 0x14))))));
                (*(undefined4 *)(gen_frame + 0x4c)) = 0x415a83;
                F_00414ad0(puVar6 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((*(int *)(gen_frame + 0x64)) + 0x14)))));
                break;
              case 4: ;
                F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x64)) + 0x14))));
                F_00414b60(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar5))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),
                             (*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),
                             (*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),
                             (*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(uint * PTR32 *)(gen_frame + 0x50)));
              }
              break;
            }
          }
          (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 0x20;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *((uint *)GEN_TOP(((int)this + 0xc))));
      }
      (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) + 0x20;
    } while ((*(int *)(gen_frame + 0x64)) != *((int *)GEN_TOP(((int)this + 0xa0))));
  }
  (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)GEN_TOP(0x415abd));
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x5c)) = 0x415aca;
  return (uint)uVar10;
}

/* ref: FUN_00415b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00415b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x415b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x1004, 12, 4);
  int iVar1;
  uint uVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x13;
  (*(undefined4 *)(gen_frame + 0xff0)) = 1;
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x415b27));
  uVar2 = F_00406bb0(0x13,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10882a8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x13;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x415b37;
  F_00c49908(uVar2,0x13,((char *)REFP(0x10882a8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415b4c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x860))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x878))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x87c))) = 0x43;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415b67));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10882bc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415b77;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10882bc)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415b86;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x960))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x978))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x97c))) = 0x4b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415ba1));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x14;
  (*(undefined4 *)(gen_frame + 0xff0)) = 1;
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x415bb3));
  uVar2 = F_00406bb0(0x14,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10882c4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x14;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x415bc3;
  F_00c49908(uVar2,0x14,((char *)REFP(0x10882c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415bd8;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa40))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa5c))) = 0x52;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415bf3));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10882d8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415c03;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10882d8)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415c12;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1680))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1698))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x169c))) = 0xb4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415c2d));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10882e4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415c3d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10882e4)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415c4c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa7c))) = 0x53;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415c67));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x5));
  (*(undefined4 *)(gen_frame + 0x4c)) = 1;
  (*(undefined4 *)(gen_frame + 0x48)) = 3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10882f8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415c7d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10882f8)),3,1,5);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415c8c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa9c))) = 0x54;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415ca7));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088310));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415cb9;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088310)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415cc8;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xaa0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xab8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xabc))) = 0x55;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415ce3));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088320));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415cf5;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088320)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415d04;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2fa0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2fb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2fbc))) = 0x17d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415d1f));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108832c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415d31;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x108832c)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415d40;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2fc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2fd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2fdc))) = 0x17e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415d5b));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088340));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415d6d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088340)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415d7c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2fe0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2ff8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2ffc))) = 0x17f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415d97));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088354));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415da9;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088354)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415db8;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3000))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3018))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x301c))) = 0x180;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415dd3));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088370));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415de4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088370)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415df3;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x18c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x18d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x18dc))) = 0xc6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415e0e));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088380));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415e1f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088380)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415e2e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x18e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x18f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x18fc))) = 199;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415e49));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088390));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415e5a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088390)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415e69;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1900))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1918))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x191c))) = 200;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415e84));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10883a0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415e96;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10883a0)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415ea5;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1920))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1938))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x193c))) = 0xc9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415ec0));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10883b0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415ed2;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10883b0)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415ee1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1940))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1958))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x195c))) = 0xca;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415efc));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10883c0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415f0e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10883c0)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415f1d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1960))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1978))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x197c))) = 0xcb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415f38));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10883d0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415f4a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10883d0)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415f59;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1980))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1998))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x199c))) = 0xcc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415f74));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10883e0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415f86;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10883e0)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415f95;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x19a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x19b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x19bc))) = 0xcd;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415fb0));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10883f0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415fc2;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10883f0)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415fd1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x19c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x19d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x19dc))) = 0xce;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x415fec));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088400));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x415ffe;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088400)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41600d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x19e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x19f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x19fc))) = 0xcf;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416028));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088410));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416039;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088410)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416048;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1a00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1a18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1a1c))) = 0xd0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416063));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088424));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416074;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088424)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416083;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1a20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1a38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1a3c))) = 0xd1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41609e));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088438));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4160af;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088438)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4160be;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1a40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1a58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1a5c))) = 0xd2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4160d9));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108844c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4160eb;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x108844c)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4160fa;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1a60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1a78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1a7c))) = 0xd3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416115));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088460));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416127;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088460)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416136;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1a80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1a98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1a9c))) = 0xd4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416151));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088474));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416163;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088474)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416172;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1aa0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1ab8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1abc))) = 0xd5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41618d));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088488));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41619f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088488)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4161ae;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1ac0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1ad8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1adc))) = 0xd6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4161c9));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108849c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4161db;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x108849c)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4161ea;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1ae0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1af8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1afc))) = 0xd7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416205));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10884b0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416217;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10884b0)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416226;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1b00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1b18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1b1c))) = 0xd8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416241));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10884c4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416252;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10884c4)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416261;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1b20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1b38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1b3c))) = 0xd9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41627c));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10884dc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41628d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10884dc)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41629c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1b40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 7000))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1b5c))) = 0xda;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4162b7));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10884ec));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4162c8;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10884ec)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4162d7;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1b60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1b78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1b7c))) = 0xdb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4162f2));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10884fc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416304;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10884fc)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416313;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1b80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1b98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1b9c))) = 0xdc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41632e));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088510));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41633f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088510)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41634e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1ba0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1bb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1bbc))) = 0xdd;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416369));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108852c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41637a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x108852c)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416389;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1bc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1bd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1bdc))) = 0xde;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4163a4));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108854c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4163b5;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x108854c)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4163c4;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1be0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1bf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1bfc))) = 0xdf;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4163df));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108856c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4163f0;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x108856c)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4163ff;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1c00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1c18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1c1c))) = 0xe0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41641a));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108858c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41642b;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x108858c)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41643a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1c20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1c38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1c3c))) = 0xe1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416455));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10885ac));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416466;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10885ac)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416475;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1c40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1c58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1c5c))) = 0xe2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416490));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10885cc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4164a1;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,"HotbarCrossSetChangeCustomSet6",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4164b0;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1c60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1c78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1c7c))) = 0xe3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4164cb));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10885ec));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4164dc;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10885ec)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4164eb;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1c80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1c98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1c9c))) = 0xe4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416506));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108860c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416517;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,"HotbarCrossSetChangeCustomSet6",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416526;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1ca0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1cb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1cbc))) = 0xe5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416541));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108862c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416552;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x108862c)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416561;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1cc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1cd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1cdc))) = 0xe6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41657c));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088650));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41658d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088650)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41659c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1ce0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1cf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1cfc))) = 0xe7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4165b7));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088678));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4165c8;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088678)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4165d7;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1d00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1d18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1d1c))) = 0xe8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4165f2));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10886a0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416603;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10886a0)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416612;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1d20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1d38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1d3c))) = 0xe9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41662d));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10886c8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41663e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10886c8)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41664d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1d40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1d58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1d5c))) = 0xea;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416668));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10886f0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416679;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10886f0)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416688;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1d60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1d78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1d7c))) = 0xeb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4166a3));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088718));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4166b4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,"HotbarCrossSetChangeCustomIsSwordSet6",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4166c3;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1d80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1d98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1d9c))) = 0xec;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4166de));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088740));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4166ef;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088740)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4166fe;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1da0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1db8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1dbc))) = 0xed;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416719));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088768));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41672a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,"HotbarCrossSetChangeCustomIsSwordSet6",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416739;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1dc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1dd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1ddc))) = 0xee;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416754));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088790));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416766;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088790)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416775;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3300))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3318))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x331c))) = 0x198;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416790));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10887a0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4167a2;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10887a0)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4167b1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3320))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3338))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x333c))) = 0x199;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4167cc));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10887b4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4167dd;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10887b4)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4167ec;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3340))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3358))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x335c))) = 0x19a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416807));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10887cc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416819;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10887cc)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416828;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1de0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1df8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1dfc))) = 0xef;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416843));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10887d8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416855;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10887d8)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416864;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1e00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1e18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1e1c))) = 0xf0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41687f));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10887e8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416891;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x10887e8)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4168a0;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1e20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1e38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1e3c))) = 0xf1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4168bb));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xfffeffe8;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088800));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4168d0;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088800)),0xfffeffe8,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4168df;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1e60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1e78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1e7c))) = 0xf3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4168fa));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff985008;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088814));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41690f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088814)),0xff985008,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41691e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1e80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1e98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1e9c))) = 0xf4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416939));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088828));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416949;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088828)),3,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416958;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1ea0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1eb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1ebc))) = 0xf5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416973));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088840));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416983;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088840)),0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416992;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1ec0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1ed8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1edc))) = 0xf6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4169ad));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088858));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4169be;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x1088858)),2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4169cd;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1ee0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1ef8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1efc))) = 0xf7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4169e8));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffe2ffe9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108886c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4169fd;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG,((char *)REFP(0x108886c)),0xffe2ffe9,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416a0c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1f00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1f18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1f1c))) = 0xf8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416a27));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff005d2a;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088884));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416a3f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x800)) GEN_EDX_ARG,((char *)REFP(0x1088884)),0xff005d2a,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416a4e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1f20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1f38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1f3c))) = 0xf9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416a6c));
  F_00415690(((undefined1 *)(gen_frame + 0x800)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108889c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416a7f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xf60)) GEN_EDX_ARG,((char *)REFP(0x108889c)),0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416a8e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8000))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1f58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1f5c))) = 0xfa;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416aac));
  F_00415690(((undefined1 *)(gen_frame + 0xf60)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10888b8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416ac0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x240)) GEN_EDX_ARG,((char *)REFP(0x10888b8)),2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416acf;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1f60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1f78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1f7c))) = 0xfb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416aed));
  F_00415690(((undefined1 *)(gen_frame + 0x240)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffe2ffe9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10888d4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416b05;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xf40)) GEN_EDX_ARG,((char *)REFP(0x10888d4)),0xffe2ffe9,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416b14;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1f80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1f98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1f9c))) = 0xfc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416b32));
  F_00415690(((undefined1 *)(gen_frame + 0xf40)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff005d2a;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10888ec));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416b4a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7c0)) GEN_EDX_ARG,((char *)REFP(0x10888ec)),0xff005d2a,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416b59;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1fa0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1fb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1fbc))) = 0xfd;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416b77));
  F_00415690(((undefined1 *)(gen_frame + 0x7c0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088904));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416b8a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xf00)) GEN_EDX_ARG,((char *)REFP(0x1088904)),0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416b99;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1fc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1fd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1fdc))) = 0xfe;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416bb7));
  F_00415690(((undefined1 *)(gen_frame + 0xf00)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088920));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416bcb;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x400)) GEN_EDX_ARG,((char *)REFP(0x1088920)),2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416bda;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1fe0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1ff8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1ffc))) = 0xff;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416bf8));
  F_00415690(((undefined1 *)(gen_frame + 0x400)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xfffeffe8;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088938));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416c10;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xec0)) GEN_EDX_ARG,((char *)REFP(0x1088938)),0xfffeffe8,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416c1f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2000))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2018))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x201c))) = 0x100;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416c3d));
  F_00415690(((undefined1 *)(gen_frame + 0xec0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff985008;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108894c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416c55;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x780)) GEN_EDX_ARG,((char *)REFP(0x108894c)),0xff985008,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416c64;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2020))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2038))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x203c))) = 0x101;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416c82));
  F_00415690(((undefined1 *)(gen_frame + 0x780)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088960));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416c95;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe80)) GEN_EDX_ARG,((char *)REFP(0x1088960)),0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416ca4;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2040))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2058))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x205c))) = 0x102;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416cc2));
  F_00415690(((undefined1 *)(gen_frame + 0xe80)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088978));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416cd5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x140)) GEN_EDX_ARG,((char *)REFP(0x1088978)),0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416ce4;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2060))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2078))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x207c))) = 0x103;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416d02));
  F_00415690(((undefined1 *)(gen_frame + 0x140)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088990));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416d16;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe40)) GEN_EDX_ARG,((char *)REFP(0x1088990)),2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416d25;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2080))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2098))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x209c))) = 0x104;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416d43));
  F_00415690(((undefined1 *)(gen_frame + 0xe40)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10889a8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416d56;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x740)) GEN_EDX_ARG,((char *)REFP(0x10889a8)),0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416d65;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x20a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x20b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x20bc))) = 0x105;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416d83));
  F_00415690(((undefined1 *)(gen_frame + 0x740)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10889c4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416d97;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe00)) GEN_EDX_ARG,((char *)REFP(0x10889c4)),2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416da6;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x20c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x20d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x20dc))) = 0x106;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416dc4));
  F_00415690(((undefined1 *)(gen_frame + 0xe00)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xfff4d09c;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10889dc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416ddc;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3c0)) GEN_EDX_ARG,((char *)REFP(0x10889dc)),0xfff4d09c,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416deb;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x21c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x21d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x21dc))) = 0x10e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416e09));
  F_00415690(((undefined1 *)(gen_frame + 0x3c0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff4d3a15;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10889f0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416e21;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xdc0)) GEN_EDX_ARG,((char *)REFP(0x10889f0)),0xff4d3a15,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416e30;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x21e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x21f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x21fc))) = 0x10f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416e4e));
  F_00415690(((undefined1 *)(gen_frame + 0xdc0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088a04));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416e61;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x700)) GEN_EDX_ARG,((char *)REFP(0x1088a04)),0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416e70;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2200))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2218))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x221c))) = 0x110;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416e8e));
  F_00415690(((undefined1 *)(gen_frame + 0x700)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088a1c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416ea1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xd80)) GEN_EDX_ARG,((char *)REFP(0x1088a1c)),0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416eb0;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2220))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2238))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x223c))) = 0x111;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416ece));
  F_00415690(((undefined1 *)(gen_frame + 0xd80)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088a34));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416ee2;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x1088a34)),2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416ef1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2240))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2258))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x225c))) = 0x112;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416f0f));
  F_00415690(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088a4c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416f23;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xd40)) GEN_EDX_ARG,((char *)REFP(0x1088a4c)),2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416f32;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2260))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2278))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x227c))) = 0x113;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416f50));
  F_00415690(((undefined1 *)(gen_frame + 0xd40)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088a68));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416f64;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6c0)) GEN_EDX_ARG,((char *)REFP(0x1088a68)),2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416f73;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2280))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2298))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x229c))) = 0x114;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416f91));
  F_00415690(((undefined1 *)(gen_frame + 0x6c0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffb0f8ff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088a80));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416fa9;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xd00)) GEN_EDX_ARG,((char *)REFP(0x1088a80)),0xffb0f8ff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416fb8;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x22a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x22b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x22bc))) = 0x115;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x416fd6));
  F_00415690(((undefined1 *)(gen_frame + 0xd00)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff004f63;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088aa0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x416fee;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x380)) GEN_EDX_ARG,((char *)REFP(0x1088aa0)),0xff004f63,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416ffd;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x22c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x22d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x22dc))) = 0x116;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41701b));
  F_00415690(((undefined1 *)(gen_frame + 0x380)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088abc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41702f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xcc0)) GEN_EDX_ARG,((char *)REFP(0x1088abc)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41703e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x22e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x22f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x22fc))) = 0x117;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41705c));
  F_00415690(((undefined1 *)(gen_frame + 0xcc0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088adc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417071;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x680)) GEN_EDX_ARG,((char *)REFP(0x1088adc)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417080;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2300))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2318))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x231c))) = 0x118;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41709e));
  F_00415690(((undefined1 *)(gen_frame + 0x680)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffbfbdff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088afc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4170b6;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc80)) GEN_EDX_ARG,((char *)REFP(0x1088afc)),0xffbfbdff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4170c5;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2320))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2338))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x233c))) = 0x119;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4170e3));
  F_00415690(((undefined1 *)(gen_frame + 0xc80)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff0000a4;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088b18));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4170fb;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,((char *)REFP(0x1088b18)),0xff0000a4,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41710a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2340))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2358))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x235c))) = 0x11a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417128));
  F_00415690(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088b34));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41713c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc40)) GEN_EDX_ARG,((char *)REFP(0x1088b34)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41714b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2360))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2378))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x237c))) = 0x11b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417169));
  F_00415690(((undefined1 *)(gen_frame + 0xc40)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088b54));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41717e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x640)) GEN_EDX_ARG,((char *)REFP(0x1088b54)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41718d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2380))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2398))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x239c))) = 0x11c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4171ab));
  F_00415690(((undefined1 *)(gen_frame + 0x640)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffdcff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088b70));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4171c3;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc00)) GEN_EDX_ARG,((char *)REFP(0x1088b70)),0xffffdcff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4171d2;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x23a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x23b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x23bc))) = 0x11d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4171f0));
  F_00415690(((undefined1 *)(gen_frame + 0xc00)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff92298e;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088b8c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417208;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x340)) GEN_EDX_ARG,((char *)REFP(0x1088b8c)),0xff92298e,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417217;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x23c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x23d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x23dc))) = 0x11e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417235));
  F_00415690(((undefined1 *)(gen_frame + 0x340)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088ba8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417249;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xbc0)) GEN_EDX_ARG,((char *)REFP(0x1088ba8)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417258;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x23e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x23f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x23fc))) = 0x11f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417276));
  F_00415690(((undefined1 *)(gen_frame + 0xbc0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088bc8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41728b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x600)) GEN_EDX_ARG,((char *)REFP(0x1088bc8)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41729a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2400))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2418))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x241c))) = 0x120;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4172b8));
  F_00415690(((undefined1 *)(gen_frame + 0x600)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffc8e0ff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088be4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4172d0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xb80)) GEN_EDX_ARG,((char *)REFP(0x1088be4)),0xffc8e0ff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4172df;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2420))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2438))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x243c))) = 0x121;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4172fd));
  F_00415690(((undefined1 *)(gen_frame + 0xb80)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff004080;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088c04));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417315;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x1088c04)),0xff004080,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417324;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2440))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2458))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x245c))) = 0x122;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417342));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088c20));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417356;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xb40)) GEN_EDX_ARG,((char *)REFP(0x1088c20)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417365;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2460))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2478))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x247c))) = 0x123;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417383));
  F_00415690(((undefined1 *)(gen_frame + 0xb40)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088c40));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417398;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5c0)) GEN_EDX_ARG,((char *)REFP(0x1088c40)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4173a7;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2480))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2498))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x249c))) = 0x124;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4173c5));
  F_00415690(((undefined1 *)(gen_frame + 0x5c0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffe2ffe9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088c60));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4173dd;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xb00)) GEN_EDX_ARG,((char *)REFP(0x1088c60)),0xffe2ffe9,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4173ec;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x24a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x24b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x24bc))) = 0x125;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41740a));
  F_00415690(((undefined1 *)(gen_frame + 0xb00)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff005d2a;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088c74));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417422;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1088c74)),0xff005d2a,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417431;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x24c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x24d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x24dc))) = 0x126;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41744f));
  F_00415690(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088c88));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417463;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xac0)) GEN_EDX_ARG,((char *)REFP(0x1088c88)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417472;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x24e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x24f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x24fc))) = 0x127;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417490));
  F_00415690(((undefined1 *)(gen_frame + 0xac0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088ca0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4174a5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG,((char *)REFP(0x1088ca0)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4174b4;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2500))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2518))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x251c))) = 0x128;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4174d2));
  F_00415690(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffffff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088cb4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4174e7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa80)) GEN_EDX_ARG,((char *)REFP(0x1088cb4)),0xffffffff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4174f6;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2520))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2538))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x253c))) = 0x129;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417514));
  F_00415690(((undefined1 *)(gen_frame + 0xa80)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff000000;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088ccc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41752c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG,((char *)REFP(0x1088ccc)),0xff000000,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41753b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2540))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2558))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x255c))) = 0x12a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417559));
  F_00415690(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088ce0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41756d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa40)) GEN_EDX_ARG,((char *)REFP(0x1088ce0)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41757c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2560))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2578))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x257c))) = 299;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41759a));
  F_00415690(((undefined1 *)(gen_frame + 0xa40)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088cf8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4175af;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x540)) GEN_EDX_ARG,((char *)REFP(0x1088cf8)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4175be;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2580))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2598))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x259c))) = 300;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4175dc));
  F_00415690(((undefined1 *)(gen_frame + 0x540)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffffff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088d10));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4175f1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa00)) GEN_EDX_ARG,((char *)REFP(0x1088d10)),0xffffffff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417600;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x25a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x25b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x25bc))) = 0x12d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41761e));
  F_00415690(((undefined1 *)(gen_frame + 0xa00)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff000000;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088d28));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417636;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1088d28)),0xff000000,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417645;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x25c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x25d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x25dc))) = 0x12e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417663));
  F_00415690(((undefined1 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088d3c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417677;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x9c0)) GEN_EDX_ARG,((char *)REFP(0x1088d3c)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417686;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x25e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x25f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x25fc))) = 0x12f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4176a4));
  F_00415690(((undefined1 *)(gen_frame + 0x9c0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffe2ffe9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088d54));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4176bc;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x500)) GEN_EDX_ARG,((char *)REFP(0x1088d54)),0xffe2ffe9,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4176cb;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2600))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2618))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x261c))) = 0x130;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4176e9));
  F_00415690(((undefined1 *)(gen_frame + 0x500)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff005d2a;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088d70));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417701;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x980)) GEN_EDX_ARG,((char *)REFP(0x1088d70)),0xff005d2a,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417710;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2620))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2638))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x263c))) = 0x131;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41772e));
  F_00415690(((undefined1 *)(gen_frame + 0x980)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffe2ffe9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088d88));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417746;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x180)) GEN_EDX_ARG,((char *)REFP(0x1088d88)),0xffe2ffe9,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417755;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2640))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2658))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x265c))) = 0x132;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417773));
  F_00415690(((undefined1 *)(gen_frame + 0x180)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff005d2a;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088da0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41778b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x940)) GEN_EDX_ARG,((char *)REFP(0x1088da0)),0xff005d2a,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41779a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2660))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2678))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x267c))) = 0x133;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4177b8));
  F_00415690(((undefined1 *)(gen_frame + 0x940)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088db8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4177cd;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4c0)) GEN_EDX_ARG,((char *)REFP(0x1088db8)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4177dc;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1e40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1e58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1e5c))) = 0xf2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4177fa));
  F_00415690(((undefined1 *)(gen_frame + 0x4c0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088dcc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41780e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x900)) GEN_EDX_ARG,((char *)REFP(0x1088dcc)),0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41781d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2680))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2698))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x269c))) = 0x134;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41783b));
  F_00415690(((undefined1 *)(gen_frame + 0x900)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xfffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088dd8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417852;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG,((char *)REFP(0x1088dd8)),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417861;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x26a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x26b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x26bc))) = 0x135;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41787f));
  F_00415690(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x5));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 5;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088de4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417894;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x8c0)) GEN_EDX_ARG,((char *)REFP(0x1088de4)),5,0,5);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4178a3;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x26c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x26d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x26dc))) = 0x136;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4178c1));
  F_00415690(((undefined1 *)(gen_frame + 0x8c0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xfffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088df4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4178d8;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x480)) GEN_EDX_ARG,((char *)REFP(0x1088df4)),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4178e7;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2700))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2718))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x271c))) = 0x138;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417905));
  F_00415690(((undefined1 *)(gen_frame + 0x480)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xfffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088e00));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41791c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x880)) GEN_EDX_ARG,((char *)REFP(0x1088e00)),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41792b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2720))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2738))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x273c))) = 0x139;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417949));
  F_00415690(((undefined1 *)(gen_frame + 0x880)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xfffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 (*)[1])REFP(0x1088e0c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417960;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x1088e0c)),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41796f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2740))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2758))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x275c))) = 0x13a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41798d));
  F_00415690(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xfffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 (*)[1])REFP(0x1088e10));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4179a4;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x840)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x1088e10)),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4179b3;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2760))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2778))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x277c))) = 0x13b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4179d1));
  F_00415690(((undefined1 *)(gen_frame + 0x840)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xfffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088e14));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4179e8;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x440)) GEN_EDX_ARG,((char *)REFP(0x1088e14)),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4179f7;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x27a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x27b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x27bc))) = 0x13d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417a15));
  F_00415690(((undefined1 *)(gen_frame + 0x440)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xfffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088e20));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417a29;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xfa0)) GEN_EDX_ARG,((char *)REFP(0x1088e20)),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417a38;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x27c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x27d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x27dc))) = 0x13e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417a53));
  F_00415690(((undefined1 *)(gen_frame + 0xfa0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xfffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = (undefined * PTR32 *)&REFG(undefined, 0x1088e28);
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417a67;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xf80)) GEN_EDX_ARG,&REFG(undefined, 0x1088e28),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417a76;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x27e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x27f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x27fc))) = 0x13f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417a91));
  F_00415690(((undefined1 *)(gen_frame + 0xf80)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xfffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 (*)[1])REFP(0x1088e30));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417aa5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xfc0)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x1088e30)),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417ab4;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2820))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2838))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x283c))) = 0x141;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417acf));
  F_00415690(((undefined1 *)(gen_frame + 0xfc0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108814e),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0xfc0)) GEN_EDX_ARG,((char *)REFP(0x1088e34)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417b01;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x28a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x28b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x28bc))) = 0x145;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417b1c));
  F_00415690(((undefined1 *)(gen_frame + 0xfc0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108814f),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0xfc0)) GEN_EDX_ARG,((char *)REFP(0x1088e40)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417b4d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x28c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x28d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x28dc))) = 0x146;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417b68));
  F_00415690(((undefined1 *)(gen_frame + 0xfc0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x13));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088e4c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417b7c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xf20)) GEN_EDX_ARG,((char *)REFP(0x1088e4c)),0,0,0x13);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417b8b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x28e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x28f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x28fc))) = 0x147;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417ba9));
  F_00415690(((undefined1 *)(gen_frame + 0xf20)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x13));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088e5c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417bbe;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xee0)) GEN_EDX_ARG,((char *)REFP(0x1088e5c)),1,0,0x13);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417bcd;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2900))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2918))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x291c))) = 0x148;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417beb));
  F_00415690(((undefined1 *)(gen_frame + 0xee0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x13));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088e6c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417c00;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xea0)) GEN_EDX_ARG,((char *)REFP(0x1088e6c)),2,0,0x13);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417c0f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2920))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2938))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x293c))) = 0x149;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417c2d));
  F_00415690(((undefined1 *)(gen_frame + 0xea0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x13));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088e7c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417c41;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe60)) GEN_EDX_ARG,((char *)REFP(0x1088e7c)),3,0,0x13);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417c50;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2940))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2958))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x295c))) = 0x14a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417c6e));
  F_00415690(((undefined1 *)(gen_frame + 0xe60)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088e8c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417c82;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe20)) GEN_EDX_ARG,((char *)REFP(0x1088e8c)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417c91;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2a40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2a58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a5c))) = 0x152;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417caf));
  F_00415690(((undefined1 *)(gen_frame + 0xe20)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xfff8f8f8;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088e98));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417cc7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xde0)) GEN_EDX_ARG,((char *)REFP(0x1088e98)),0xfff8f8f8,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417cd6;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2a60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2a78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a7c))) = 0x153;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417cf4));
  F_00415690(((undefined1 *)(gen_frame + 0xde0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffa666;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088ea4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417d0c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xda0)) GEN_EDX_ARG,((char *)REFP(0x1088ea4)),0xffffa666,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417d1b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2a80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2a98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a9c))) = 0x154;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417d39));
  F_00415690(((undefined1 *)(gen_frame + 0xda0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffb8e0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088eb0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417d51;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xd60)) GEN_EDX_ARG,((char *)REFP(0x1088eb0)),0xffffb8e0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417d60;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2aa0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2ab8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2abc))) = 0x155;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417d7e));
  F_00415690(((undefined1 *)(gen_frame + 0xd60)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff66e6ff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088ebc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417d96;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xd20)) GEN_EDX_ARG,((char *)REFP(0x1088ebc)),0xff66e6ff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417da5;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2ac0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2ad8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2adc))) = 0x156;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417dc3));
  F_00415690(((undefined1 *)(gen_frame + 0xd20)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088ec8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417ddb;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xce0)) GEN_EDX_ARG,((char *)REFP(0x1088ec8)),0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417dea;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2b00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2b18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2b1c))) = 0x158;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417e08));
  F_00415690(((undefined1 *)(gen_frame + 0xce0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088ed4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417e20;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xca0)) GEN_EDX_ARG,((char *)REFP(0x1088ed4)),0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417e2f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2b20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2b38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2b3c))) = 0x159;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417e4d));
  F_00415690(((undefined1 *)(gen_frame + 0xca0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088ee0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417e65;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc60)) GEN_EDX_ARG,((char *)REFP(0x1088ee0)),0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417e74;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2b40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2b58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2b5c))) = 0x15a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417e92));
  F_00415690(((undefined1 *)(gen_frame + 0xc60)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088eec));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417eaa;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc20)) GEN_EDX_ARG,((char *)REFP(0x1088eec)),0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417eb9;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2b60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2b78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2b7c))) = 0x15b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417ed7));
  F_00415690(((undefined1 *)(gen_frame + 0xc20)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088ef8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417eef;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xbe0)) GEN_EDX_ARG,((char *)REFP(0x1088ef8)),0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417efe;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2b80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2b98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2b9c))) = 0x15c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417f1c));
  F_00415690(((undefined1 *)(gen_frame + 0xbe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088f04));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417f34;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xba0)) GEN_EDX_ARG,((char *)REFP(0x1088f04)),0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417f43;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2ba0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2bb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2bbc))) = 0x15d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417f61));
  F_00415690(((undefined1 *)(gen_frame + 0xba0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088f10));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417f79;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xb60)) GEN_EDX_ARG,((char *)REFP(0x1088f10)),0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417f88;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2bc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2bd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2bdc))) = 0x15e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417fa6));
  F_00415690(((undefined1 *)(gen_frame + 0xb60)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088f1c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x417fbe;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xb20)) GEN_EDX_ARG,((char *)REFP(0x1088f1c)),0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417fcd;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2be0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2bf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2bfc))) = 0x15f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x417feb));
  F_00415690(((undefined1 *)(gen_frame + 0xb20)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffacdce6;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088f28));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418003;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xae0)) GEN_EDX_ARG,((char *)REFP(0x1088f28)),0xffacdce6,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418012;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2c00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2c18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2c1c))) = 0x160;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418030));
  F_00415690(((undefined1 *)(gen_frame + 0xae0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffbcfff0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088f38));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418048;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xaa0)) GEN_EDX_ARG,((char *)REFP(0x1088f38)),0xffbcfff0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418057;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2c80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2c98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2c9c))) = 0x164;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418075));
  F_00415690(((undefined1 *)(gen_frame + 0xaa0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffbcfff0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088f48));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41808d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa60)) GEN_EDX_ARG,((char *)REFP(0x1088f48)),0xffbcfff0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41809c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2ca0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2cb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2cbc))) = 0x165;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4180ba));
  F_00415690(((undefined1 *)(gen_frame + 0xa60)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffff00;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088f54));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4180d2;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa20)) GEN_EDX_ARG,((char *)REFP(0x1088f54)),0xffffff00,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4180e1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2cc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2cd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2cdc))) = 0x166;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4180ff));
  F_00415690(((undefined1 *)(gen_frame + 0xa20)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffff7f7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088f60));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418117;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x9e0)) GEN_EDX_ARG,((char *)REFP(0x1088f60)),0xffff7f7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418126;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2d40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2d58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2d5c))) = 0x16a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418144));
  F_00415690(((undefined1 *)(gen_frame + 0x9e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffcccccc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088f74));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41815c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x9a0)) GEN_EDX_ARG,((char *)REFP(0x1088f74)),0xffcccccc,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41816b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2d60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2d78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2d7c))) = 0x16b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418189));
  F_00415690(((undefined1 *)(gen_frame + 0x9a0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffffb2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088f88));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41819e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x960)) GEN_EDX_ARG,((char *)REFP(0x1088f88)),0xffffffb2,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4181ad;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2d80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2d98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2d9c))) = 0x16c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4181cb));
  F_00415690(((undefined1 *)(gen_frame + 0x960)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffffb2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088f94));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4181e0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x920)) GEN_EDX_ARG,((char *)REFP(0x1088f94)),0xffffffb2,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4181ef;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2da0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2db8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2dbc))) = 0x16d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41820d));
  F_00415690(((undefined1 *)(gen_frame + 0x920)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088fa0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418225;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x8e0)) GEN_EDX_ARG,((char *)REFP(0x1088fa0)),0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418234;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2dc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2dd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2ddc))) = 0x16e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418252));
  F_00415690(((undefined1 *)(gen_frame + 0x8e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xff94c0ff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088fb0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41826a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x8a0)) GEN_EDX_ARG,((char *)REFP(0x1088fb0)),0xff94c0ff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418279;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2de0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2df8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2dfc))) = 0x16f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418297));
  F_00415690(((undefined1 *)(gen_frame + 0x8a0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffff8cc6;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088fc0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4182af;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x860)) GEN_EDX_ARG,((char *)REFP(0x1088fc0)),0xffff8cc6,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4182be;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2e00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2e18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2e1c))) = 0x170;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4182dc));
  F_00415690(((undefined1 *)(gen_frame + 0x860)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffcccccc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088fd0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4182f4;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x820)) GEN_EDX_ARG,((char *)REFP(0x1088fd0)),0xffcccccc,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418303;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2e20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2e38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2e3c))) = 0x171;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418321));
  F_00415690(((undefined1 *)(gen_frame + 0x820)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffcccccc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088fdc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418339;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1088fdc)),0xffcccccc,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418348;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2e40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2e58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2e5c))) = 0x172;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418366));
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffacdce6;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088fe8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41837e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7a0)) GEN_EDX_ARG,((char *)REFP(0x1088fe8)),0xffacdce6,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41838d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2e60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2e78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2e7c))) = 0x173;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4183ab));
  F_00415690(((undefined1 *)(gen_frame + 0x7a0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffcccccc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1088ff8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4183c3;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x760)) GEN_EDX_ARG,((char *)REFP(0x1088ff8)),0xffcccccc,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4183d2;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2e80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2e98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2e9c))) = 0x174;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4183f0));
  F_00415690(((undefined1 *)(gen_frame + 0x760)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffcccccc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089008));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418408;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x720)) GEN_EDX_ARG,((char *)REFP(0x1089008)),0xffcccccc,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418417;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2ea0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2eb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2ebc))) = 0x175;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418435));
  F_00415690(((undefined1 *)(gen_frame + 0x720)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffff4c4c;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108901c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41844d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6e0)) GEN_EDX_ARG,((char *)REFP(0x108901c)),0xffff4c4c,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41845c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2ec0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2ed8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2edc))) = 0x176;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41847a));
  F_00415690(((undefined1 *)(gen_frame + 0x6e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffacd848;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089028));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418492;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6a0)) GEN_EDX_ARG,((char *)REFP(0x1089028)),0xffacd848,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4184a1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 12000))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2ef8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2efc))) = 0x177;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4184bf));
  F_00415690(((undefined1 *)(gen_frame + 0x6a0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffffb2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089034));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4184d4;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x660)) GEN_EDX_ARG,((char *)REFP(0x1089034)),0xffffffb2,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4184e3;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2f00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2f18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2f1c))) = 0x178;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418501));
  F_00415690(((undefined1 *)(gen_frame + 0x660)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffde73;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089044));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418519;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x620)) GEN_EDX_ARG,((char *)REFP(0x1089044)),0xffffde73,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418528;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2f20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2f38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2f3c))) = 0x179;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418546));
  F_00415690(((undefined1 *)(gen_frame + 0x620)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffc8c0a0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089050));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41855e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5e0)) GEN_EDX_ARG,((char *)REFP(0x1089050)),0xffc8c0a0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41856d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2f40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2f58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2f5c))) = 0x17a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41858b));
  F_00415690(((undefined1 *)(gen_frame + 0x5e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffe0c0f8;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108905c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4185a3;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5a0)) GEN_EDX_ARG,((char *)REFP(0x108905c)),0xffe0c0f8,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4185b2;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2f60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2f78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2f7c))) = 0x17b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4185d0));
  F_00415690(((undefined1 *)(gen_frame + 0x5a0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffe0c0f8;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089068));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4185e8;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x560)) GEN_EDX_ARG,((char *)REFP(0x1089068)),0xffe0c0f8,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4185f7;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2f80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2f98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2f9c))) = 0x17c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418615));
  F_00415690(((undefined1 *)(gen_frame + 0x560)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xe;
  (*(undefined4 *)(gen_frame + 0xff0)) = 1;
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41862b));
  uVar2 = F_00406bb0(0xe,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089078));
  (*(undefined4 *)(gen_frame + 0x40)) = 0xe;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41863b;
  F_00c49908(uVar2,0xe,((char *)REFP(0x1089078)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418650;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa20))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa3c))) = 0x51;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41866b));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 1;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089088));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418680;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x1089088)),2,1,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41868f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x16a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x16b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x16bc))) = 0xb5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4186ad));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089094));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4186c1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4e0)) GEN_EDX_ARG,((char *)REFP(0x1089094)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4186d0;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x16c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x16d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x16dc))) = 0xb6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4186ee));
  F_00415690(((undefined1 *)(gen_frame + 0x4e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108909c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418702;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4a0)) GEN_EDX_ARG,((char *)REFP(0x108909c)),0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418711;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x16e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x16f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x16fc))) = 0xb7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41872f));
  F_00415690(((undefined1 *)(gen_frame + 0x4a0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10890a8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418743;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x460)) GEN_EDX_ARG,((char *)REFP(0x10890a8)),0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418752;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1700))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1718))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x171c))) = 0xb8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418770));
  F_00415690(((undefined1 *)(gen_frame + 0x460)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3ff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10890b4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418787;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x420)) GEN_EDX_ARG,((char *)REFP(0x10890b4)),0,0,0x3ff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418796;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1740))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1758))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x175c))) = 0xba;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4187b4));
  F_00415690(((undefined1 *)(gen_frame + 0x420)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x17;
  (*(undefined4 *)(gen_frame + 0xff0)) = 1;
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x4187ca));
  uVar2 = F_00406bb0(0x17,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10890c0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x17;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x4187da;
  F_00c49908(uVar2,0x17,((char *)REFP(0x10890c0)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4187ef;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xac0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xad8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xadc))) = 0x56;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41880a));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x19;
  (*(undefined4 *)(gen_frame + 0xff0)) = 3;
  (*(undefined4 *)(gen_frame + 0xff4)) = 0;
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x418824));
  uVar2 = F_00406bb0(0x19,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10890d8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x19;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x418834;
  F_00c49908(uVar2,0x19,((char *)REFP(0x10890d8)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  (*(undefined4 *)(gen_frame + 0xfe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xfe4)) = 0;
  (*(undefined4 *)(gen_frame + 0xfe8)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41885b;
  F_004156f0(((undefined *)GEN_TOP((iVar1 + 0xae0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xaf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xafc))) = 0x57;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418876));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x17;
  (*(undefined4 *)(gen_frame + 0xff0)) = 3;
  (*(undefined4 *)(gen_frame + 0xff4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088294)));
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x418895));
  uVar2 = F_00406bb0(0x17,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10890f4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x17;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x4188a5;
  F_00c49908(uVar2,0x17,((char *)REFP(0x10890f4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 *)(gen_frame + 0xfe0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088294)));
  (*(undefined4 *)(gen_frame + 0xfe4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088290)));
  (*(undefined4 *)(gen_frame + 0xfe8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088294)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4188d9;
  F_004156f0(((undefined *)GEN_TOP((iVar1 + 0xb00))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xb1c))) = 0x58;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4188f4));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x1b;
  (*(undefined4 *)(gen_frame + 0xff0)) = 3;
  (*(undefined4 *)(gen_frame + 0xff4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088284)));
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x418913));
  uVar2 = F_00406bb0(0x1b,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108910c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x1b;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x418923;
  F_00c49908(uVar2,0x1b,((char *)REFP(0x108910c)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  (*(undefined4 *)(gen_frame + 0xfe0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088284)));
  (*(undefined4 *)(gen_frame + 0xfe4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088284)));
  (*(undefined4 *)(gen_frame + 0xfe8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088284)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41894f;
  F_004156f0(((undefined *)GEN_TOP((iVar1 + 0xb20))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xb3c))) = 0x59;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41896a));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x19;
  (*(undefined4 *)(gen_frame + 0xff0)) = 3;
  (*(undefined4 *)(gen_frame + 0xff4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x108b28c)));
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x418989));
  uVar2 = F_00406bb0(0x19,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089128));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x19;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x418999;
  F_00c49908(uVar2,0x19,((char *)REFP(0x1089128)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 *)(gen_frame + 0xfe0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x108b28c)));
  (*(undefined4 *)(gen_frame + 0xfe4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x108b288)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  (*(undefined4 *)(gen_frame + 0xfe8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x108b284)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4189d5;
  F_004156f0(((undefined *)GEN_TOP((iVar1 + 0xb40))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xb5c))) = 0x5a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4189f0));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x17;
  (*(undefined4 *)(gen_frame + 0xff0)) = 3;
  (*(undefined4 *)(gen_frame + 0xff4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088294)));
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x418a0f));
  uVar2 = F_00406bb0(0x17,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089144));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x17;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x418a1f;
  F_00c49908(uVar2,0x17,((char *)REFP(0x1089144)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 *)(gen_frame + 0xfe0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088294)));
  (*(undefined4 *)(gen_frame + 0xfe4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088290)));
  (*(undefined4 *)(gen_frame + 0xfe8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088294)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418a53;
  F_004156f0(((undefined *)GEN_TOP((iVar1 + 0xb60))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xb7c))) = 0x5b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418a6e));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x1b;
  (*(undefined4 *)(gen_frame + 0xff0)) = 3;
  (*(undefined4 *)(gen_frame + 0xff4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088280)));
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x418a8d));
  uVar2 = F_00406bb0(0x1b,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108915c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x1b;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x418a9d;
  F_00c49908(uVar2,0x1b,((char *)REFP(0x108915c)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 *)(gen_frame + 0xfe0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088280)));
  (*(undefined4 *)(gen_frame + 0xfe4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088284)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  (*(undefined4 *)(gen_frame + 0xfe8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088288)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418ad9;
  F_004156f0(((undefined *)GEN_TOP((iVar1 + 0xb80))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xb9c))) = 0x5c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418af4));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x14;
  (*(undefined4 *)(gen_frame + 0xff0)) = 3;
  (*(undefined4 *)(gen_frame + 0xff4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x108b28c)));
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x418b13));
  uVar2 = F_00406bb0(0x14,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089178));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x14;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x418b23;
  F_00c49908(uVar2,0x14,((char *)REFP(0x1089178)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 *)(gen_frame + 0xfe0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x108b28c)));
  (*(undefined4 *)(gen_frame + 0xfe4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x108b288)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  (*(undefined4 *)(gen_frame + 0xfe8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x108b284)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418b5f;
  F_004156f0(((undefined *)GEN_TOP((iVar1 + 0xba0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 3000))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xbbc))) = 0x5d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418b7a));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0xff0)) = 3;
  (*(undefined4 *)(gen_frame + 0xff4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088298)));
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x12;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x418b99));
  uVar2 = F_00406bb0(0x12,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108918c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x12;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x418ba9;
  F_00c49908(uVar2,0x12,((char *)REFP(0x108918c)));
  (*(undefined4 *)(gen_frame + 0xfe0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088298)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  (*(undefined4 *)(gen_frame + 0xfe4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088290)));
  (*(undefined4 *)(gen_frame + 0xfe8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088294)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418be5;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xbc0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xbd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xbdc))) = 0x5e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418c00));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x16;
  (*(undefined4 *)(gen_frame + 0xff0)) = 3;
  (*(undefined4 *)(gen_frame + 0xff4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088280)));
  (*(undefined4 *)(gen_frame + 0xff8)) = 0;
  (*(undefined4 *)(gen_frame + 0xffc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x418c1f));
  uVar2 = F_00406bb0(0x16,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10891a0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x16;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0xfec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x418c2f;
  F_00c49908(uVar2,0x16,((char *)REFP(0x10891a0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 *)(gen_frame + 0xfe0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088280)));
  (*(undefined4 *)(gen_frame + 0xfe4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088284)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xfe0));
  (*(undefined4 *)(gen_frame + 0xfe8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088288)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418c6b;
  F_004156f0(((undefined *)GEN_TOP((iVar1 + 0xbe0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xfe0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xbf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xbfc))) = 0x5f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418c86));
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10891b8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418c9b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3e0)) GEN_EDX_ARG,((char *)REFP(0x10891b8)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418caa;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xde0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xdf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xdfc))) = 0x6f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418cc8));
  F_00415690(((undefined1 *)(gen_frame + 0x3e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10891d4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418cdd;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3a0)) GEN_EDX_ARG,((char *)REFP(0x10891d4)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418cec;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe1c))) = 0x70;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418d0a));
  F_00415690(((undefined1 *)(gen_frame + 0x3a0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10891f0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418d1e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x360)) GEN_EDX_ARG,((char *)REFP(0x10891f0)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418d2d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe3c))) = 0x71;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418d4b));
  F_00415690(((undefined1 *)(gen_frame + 0x360)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089210));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418d5f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x320)) GEN_EDX_ARG,((char *)REFP(0x1089210)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418d6e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1620))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1638))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x163c))) = 0xb1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418d8c));
  F_00415690(((undefined1 *)(gen_frame + 0x320)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108921c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418da0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2e0)) GEN_EDX_ARG,((char *)REFP(0x108921c)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418daf;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x600))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x618))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x61c))) = 0x30;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418dcd));
  F_00415690(((undefined1 *)(gen_frame + 0x2e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089230));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418de1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,((char *)REFP(0x1089230)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418df0;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x620))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x638))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x63c))) = 0x31;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418e0e));
  F_00415690(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089244));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418e22;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x260)) GEN_EDX_ARG,((char *)REFP(0x1089244)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418e31;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x640))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x658))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x65c))) = 0x32;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418e4f));
  F_00415690(((undefined1 *)(gen_frame + 0x260)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089258));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418e62;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x220)) GEN_EDX_ARG,((char *)REFP(0x1089258)),0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418e71;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x29a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x29b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x29bc))) = 0x14d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418e8f));
  F_00415690(((undefined1 *)(gen_frame + 0x220)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x14));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xc;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089264));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418ea5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089264)),0xc,0xc,0x14);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418eb4;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2880))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2898))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x289c))) = 0x144;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418ed2));
  F_00415690(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089270));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418ee6;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG,((char *)REFP(0x1089270)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418ef5;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x29c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x29d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x29dc))) = 0x14e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418f13));
  F_00415690(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108927c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418f27;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG,((char *)REFP(0x108927c)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418f36;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x29e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x29f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x29fc))) = 0x14f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418f54));
  F_00415690(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089290));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418f68;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG,((char *)REFP(0x1089290)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418f77;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2a00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2a18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a1c))) = 0x150;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418f95));
  F_00415690(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10892a0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418faa;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe0)) GEN_EDX_ARG,((char *)REFP(0x10892a0)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418fb9;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2a20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2a38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a3c))) = 0x151;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x418fd7));
  F_00415690(((undefined1 *)(gen_frame + 0xe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10892ac));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x418feb;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG,((char *)REFP(0x10892ac)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418ffa;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2840))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2858))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x285c))) = 0x142;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x419018));
  F_00415690(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x10892b4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41902d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((char *)REFP(0x10892b4)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41903c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2960))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2978))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x297c))) = 0x14b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41905a));
  uVar2 = F_00415690(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00419070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00419070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x419070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x804, 12, 4);
  int iVar1;
  uint uVar2;
  undefined1 * this_00;
  
  (*(undefined4 *)(gen_frame + 0x7d0)) = 1;
  (*(undefined4 *)(gen_frame + 0x7d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x7dc)) = 0;
  uVar2 = F_00406bb0(0x14,0,0);
  (*(uint *)(gen_frame + 0x7cc)) = uVar2;
  F_00c49908(uVar2,0x14,((char *)REFP(0x10892c4)));
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa40))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x7c0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa5c))) = 0x52;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x7c0)) GEN_EDX_ARG);
  if (param_1 == 0) {
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3a0)) GEN_EDX_ARG,"MoveMode",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x15e0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x15f8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x15fc))) = 0xaf;
    F_00415690(((undefined1 *)(gen_frame + 0x3a0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x560)) GEN_EDX_ARG,"DirectChat",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2980))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2998))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x299c))) = 0x14c;
    F_00415690(((undefined1 *)(gen_frame + 0x560)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x460)) GEN_EDX_ARG,"AutoLockOn",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xee0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xef8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0xefc))) = 0x77;
    F_00415690(((undefined1 *)(gen_frame + 0x460)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,"CircleBattleModeAutoChange",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xf00))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xf18))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0xf1c))) = 0x78;
    F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6c0)) GEN_EDX_ARG,"DetailTrackingType",0,0,2);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3220))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3238))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x323c))) = 0x191;
    F_00415690(((undefined1 *)(gen_frame + 0x6c0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x680)) GEN_EDX_ARG,"HotbarDisp",3,0,0x3ff);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1720))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1738))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x173c))) = 0xb9;
    F_00415690(((undefined1 *)(gen_frame + 0x680)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x640)) GEN_EDX_ARG,"HotbarNoneSlotDisp01",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1780))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1798))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x179c))) = 0xbc;
    F_00415690(((undefined1 *)(gen_frame + 0x640)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x600)) GEN_EDX_ARG,"HotbarNoneSlotDisp02",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x17a0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x17b8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x17bc))) = 0xbd;
    F_00415690(((undefined1 *)(gen_frame + 0x600)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5c0)) GEN_EDX_ARG,"HotbarNoneSlotDisp03",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x17c0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x17d8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x17dc))) = 0xbe;
    F_00415690(((undefined1 *)(gen_frame + 0x5c0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG,"HotbarNoneSlotDisp04",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x17e0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x17f8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x17fc))) = 0xbf;
    F_00415690(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x540)) GEN_EDX_ARG,"HotbarNoneSlotDisp05",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1800))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1818))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x181c))) = 0xc0;
    F_00415690(((undefined1 *)(gen_frame + 0x540)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x500)) GEN_EDX_ARG,"HotbarNoneSlotDisp06",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1820))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1838))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x183c))) = 0xc1;
    F_00415690(((undefined1 *)(gen_frame + 0x500)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4c0)) GEN_EDX_ARG,"HotbarNoneSlotDisp07",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1840))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1858))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x185c))) = 0xc2;
    F_00415690(((undefined1 *)(gen_frame + 0x4c0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7a0)) GEN_EDX_ARG,"HotbarNoneSlotDisp08",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1860))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1878))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x187c))) = 0xc3;
    F_00415690(((undefined1 *)(gen_frame + 0x7a0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x440)) GEN_EDX_ARG,"HotbarNoneSlotDisp09",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1880))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1898))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x189c))) = 0xc4;
    F_00415690(((undefined1 *)(gen_frame + 0x440)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x780)) GEN_EDX_ARG,"HotbarNoneSlotDisp10",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x18a0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x18b8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x18bc))) = 0xc5;
    F_00415690(((undefined1 *)(gen_frame + 0x780)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x740)) GEN_EDX_ARG,"MainCommandType",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3360))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3378))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x337c))) = 0x19b;
    F_00415690(((undefined1 *)(gen_frame + 0x740)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,"MainCommandDisp",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3380))) GEN_EDX_ARG,uVar2);
    this_00 = ((undefined1 *)(gen_frame + 0x7e0));
  }
  else {
    if (param_1 != 1) goto LAB_004199f9;
    uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x7c0)) GEN_EDX_ARG,"MoveMode",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x15e0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x15f8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x15fc))) = 0xaf;
    F_00415690(&(*(undefined4 *)(gen_frame + 0x7c0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x480)) GEN_EDX_ARG,"DirectChat",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2980))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2998))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x299c))) = 0x14c;
    F_00415690(((undefined1 *)(gen_frame + 0x480)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x700)) GEN_EDX_ARG,"AutoLockOn",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xee0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xef8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0xefc))) = 0x77;
    F_00415690(((undefined1 *)(gen_frame + 0x700)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x760)) GEN_EDX_ARG,"CircleBattleModeAutoChange",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xf00))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xf18))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0xf1c))) = 0x78;
    F_00415690(((undefined1 *)(gen_frame + 0x760)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x400)) GEN_EDX_ARG,"DetailTrackingType",1,0,2);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3220))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3238))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x323c))) = 0x191;
    F_00415690(((undefined1 *)(gen_frame + 0x400)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x720)) GEN_EDX_ARG,"HotbarDisp",0,0,0x3ff);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1720))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1738))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x173c))) = 0xb9;
    F_00415690(((undefined1 *)(gen_frame + 0x720)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3c0)) GEN_EDX_ARG,"HotbarNoneSlotDisp01",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1780))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1798))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x179c))) = 0xbc;
    F_00415690(((undefined1 *)(gen_frame + 0x3c0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6e0)) GEN_EDX_ARG,"HotbarNoneSlotDisp02",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x17a0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x17b8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x17bc))) = 0xbd;
    F_00415690(((undefined1 *)(gen_frame + 0x6e0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x380)) GEN_EDX_ARG,"HotbarNoneSlotDisp03",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x17c0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x17d8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x17dc))) = 0xbe;
    F_00415690(((undefined1 *)(gen_frame + 0x380)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6a0)) GEN_EDX_ARG,"HotbarNoneSlotDisp04",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x17e0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x17f8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x17fc))) = 0xbf;
    F_00415690(((undefined1 *)(gen_frame + 0x6a0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3e0)) GEN_EDX_ARG,"HotbarNoneSlotDisp05",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1800))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1818))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x181c))) = 0xc0;
    F_00415690(((undefined1 *)(gen_frame + 0x3e0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x660)) GEN_EDX_ARG,"HotbarNoneSlotDisp06",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1820))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1838))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x183c))) = 0xc1;
    F_00415690(((undefined1 *)(gen_frame + 0x660)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4e0)) GEN_EDX_ARG,"HotbarNoneSlotDisp07",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1840))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1858))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x185c))) = 0xc2;
    F_00415690(((undefined1 *)(gen_frame + 0x4e0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x620)) GEN_EDX_ARG,"HotbarNoneSlotDisp08",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1860))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1878))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x187c))) = 0xc3;
    F_00415690(((undefined1 *)(gen_frame + 0x620)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x420)) GEN_EDX_ARG,"HotbarNoneSlotDisp09",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1880))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1898))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x189c))) = 0xc4;
    F_00415690(((undefined1 *)(gen_frame + 0x420)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5e0)) GEN_EDX_ARG,"HotbarNoneSlotDisp10",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x18a0))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x18b8))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x18bc))) = 0xc5;
    F_00415690(((undefined1 *)(gen_frame + 0x5e0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4a0)) GEN_EDX_ARG,"MainCommandType",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3360))) GEN_EDX_ARG,uVar2);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3378))) = this;
    *((undefined4 *)GEN_TOP((iVar1 + 0x337c))) = 0x19b;
    F_00415690(((undefined1 *)(gen_frame + 0x4a0)) GEN_EDX_ARG);
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5a0)) GEN_EDX_ARG,"MainCommandDisp",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3380))) GEN_EDX_ARG,uVar2);
    this_00 = ((undefined1 *)(gen_frame + 0x5a0));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3398))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x339c))) = 0x19c;
  F_00415690(this_00 GEN_EDX_ARG);
LAB_004199f9: ;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10895b8)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xce0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xcf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xcfc))) = 0x67;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10895c8)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xd00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xd1c))) = 0x68;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10895d8)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xd20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xd3c))) = 0x69;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10895e8)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xd40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xd5c))) = 0x6a;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10895f8)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xd60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xd7c))) = 0x6b;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x108960c)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xd80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xd9c))) = 0x6c;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089620)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xda0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xdb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xdbc))) = 0x6d;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089634)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xdc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xdd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xddc))) = 0x6e;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089648)),0,0,2);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc3c))) = 0x61;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089668)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc5c))) = 0x62;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x108968c)),0,0,2);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe1c))) = 0x70;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10896a8)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe3c))) = 0x71;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10896c8)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc1c))) = 0x60;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x7d0)) = 3;
  (*(undefined4 *)(gen_frame + 0x7d4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x7d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x7dc)) = 0;
  uVar2 = F_00406bb0(0xe,0,0);
  (*(uint *)(gen_frame + 0x7cc)) = uVar2;
  F_00c49908(uVar2,0xe,((char *)REFP(0x10896e0)));
  (*(undefined4 *)(gen_frame + 0x7c0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x7c4)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc80))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x7c0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc9c))) = 100;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x7c0)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x7d0)) = 3;
  (*(undefined4 *)(gen_frame + 0x7d4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x7d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x7dc)) = 0;
  uVar2 = F_00406bb0(9,0,0);
  (*(uint *)(gen_frame + 0x7cc)) = uVar2;
  F_00c49908(uVar2,9,((char *)REFP(0x10896f0)));
  (*(undefined4 *)(gen_frame + 0x7c0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x7c4)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xca0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x7c0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xcb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xcbc))) = 0x65;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x7c0)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x7d0)) = 3;
  (*(undefined4 *)(gen_frame + 0x7d4)) = 0;
  (*(undefined4 *)(gen_frame + 0x7d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x7dc)) = 0;
  uVar2 = F_00406bb0(0xb,0,0);
  (*(uint *)(gen_frame + 0x7cc)) = uVar2;
  F_00c49908(uVar2,0xb,((char *)REFP(0x10896fc)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 *)(gen_frame + 0x7c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10882a4)));
  (*(undefined4 *)(gen_frame + 0x7c8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10882a0)));
  F_004156f0(((undefined *)GEN_TOP((iVar1 + 0xc60))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x7c0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc7c))) = 99;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x7c0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089708)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe7c))) = 0x73;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089720)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1560))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1578))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x157c))) = 0xab;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089734)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1580))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1598))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x159c))) = 0xac;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089744)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x15a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x15b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x15bc))) = 0xad;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089754)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1100))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1118))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x111c))) = 0x88;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089768)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1120))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1138))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x113c))) = 0x89;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089780)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1140))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1158))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x115c))) = 0x8a;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089794)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1160))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1178))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x117c))) = 0x8b;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10897a8)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1180))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1198))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x119c))) = 0x8c;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10897bc)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x11a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x11b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x11bc))) = 0x8d;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10897d4)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x11c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x11d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x11dc))) = 0x8e;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10897e8)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xf20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xf38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xf3c))) = 0x79;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10897f8)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xf40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xf58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xf5c))) = 0x7a;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089814)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xf60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xf78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xf7c))) = 0x7b;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089830)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xf80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xf98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xf9c))) = 0x7c;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089848)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4000))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xfb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xfbc))) = 0x7d;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089860)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xfc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xfd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xfdc))) = 0x7e;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089878)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xfe0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xff8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xffc))) = 0x7f;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x1089894)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1000))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1018))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x101c))) = 0x80;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG,((char *)REFP(0x10898ac)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1020))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1038))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x103c))) = 0x81;
  F_00415690(((undefined1 *)(gen_frame + 0x7e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x740)) GEN_EDX_ARG,((char *)REFP(0x10898c4)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1040))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1058))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x105c))) = 0x82;
  F_00415690(((undefined1 *)(gen_frame + 0x740)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x780)) GEN_EDX_ARG,((char *)REFP(0x10898e0)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1060))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1078))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x107c))) = 0x83;
  F_00415690(((undefined1 *)(gen_frame + 0x780)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x440)) GEN_EDX_ARG,((char *)REFP(0x10898f4)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1080))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1098))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x109c))) = 0x84;
  F_00415690(((undefined1 *)(gen_frame + 0x440)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7a0)) GEN_EDX_ARG,((char *)REFP(0x1089908)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x10a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x10b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x10bc))) = 0x85;
  F_00415690(((undefined1 *)(gen_frame + 0x7a0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4c0)) GEN_EDX_ARG,((char *)REFP(0x108991c)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x10c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x10d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x10dc))) = 0x86;
  F_00415690(((undefined1 *)(gen_frame + 0x4c0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x500)) GEN_EDX_ARG,((char *)REFP(0x1089938)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x10e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x10f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x10fc))) = 0x87;
  F_00415690(((undefined1 *)(gen_frame + 0x500)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x540)) GEN_EDX_ARG,((char *)REFP(0x1089950)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x11e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x11f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x11fc))) = 0x8f;
  F_00415690(((undefined1 *)(gen_frame + 0x540)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG,((char *)REFP(0x1089968)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1200))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1218))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x121c))) = 0x90;
  F_00415690(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5c0)) GEN_EDX_ARG,((char *)REFP(0x1089980)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1220))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1238))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x123c))) = 0x91;
  F_00415690(((undefined1 *)(gen_frame + 0x5c0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x600)) GEN_EDX_ARG,((char *)REFP(0x1089994)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1240))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1258))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x125c))) = 0x92;
  F_00415690(((undefined1 *)(gen_frame + 0x600)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x640)) GEN_EDX_ARG,((char *)REFP(0x10899a8)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1260))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1278))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x127c))) = 0x93;
  F_00415690(((undefined1 *)(gen_frame + 0x640)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x680)) GEN_EDX_ARG,((char *)REFP(0x10899bc)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1280))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1298))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x129c))) = 0x94;
  F_00415690(((undefined1 *)(gen_frame + 0x680)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6c0)) GEN_EDX_ARG,((char *)REFP(0x10899d8)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x12a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x12b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x12bc))) = 0x95;
  F_00415690(((undefined1 *)(gen_frame + 0x6c0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x10899ec)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x12c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x12d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x12dc))) = 0x96;
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x460)) GEN_EDX_ARG,((char *)REFP(0x1089a04)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x12e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x12f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x12fc))) = 0x97;
  F_00415690(((undefined1 *)(gen_frame + 0x460)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x560)) GEN_EDX_ARG,((char *)REFP(0x1089a1c)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1300))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1318))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x131c))) = 0x98;
  F_00415690(((undefined1 *)(gen_frame + 0x560)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3a0)) GEN_EDX_ARG,((char *)REFP(0x1089a30)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1320))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1338))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x133c))) = 0x99;
  F_00415690(((undefined1 *)(gen_frame + 0x3a0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5a0)) GEN_EDX_ARG,((char *)REFP(0x1089a44)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1340))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1358))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x135c))) = 0x9a;
  F_00415690(((undefined1 *)(gen_frame + 0x5a0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4a0)) GEN_EDX_ARG,((char *)REFP(0x1089a58)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1360))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1378))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x137c))) = 0x9b;
  F_00415690(((undefined1 *)(gen_frame + 0x4a0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5e0)) GEN_EDX_ARG,((char *)REFP(0x1089a74)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1380))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1398))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x139c))) = 0x9c;
  F_00415690(((undefined1 *)(gen_frame + 0x5e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x420)) GEN_EDX_ARG,((char *)REFP(0x1089a88)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x13a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x13b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x13bc))) = 0x9d;
  F_00415690(((undefined1 *)(gen_frame + 0x420)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x620)) GEN_EDX_ARG,((char *)REFP(0x1089aa0)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x13c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x13d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x13dc))) = 0x9e;
  F_00415690(((undefined1 *)(gen_frame + 0x620)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4e0)) GEN_EDX_ARG,((char *)REFP(0x1089ab8)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x13e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x13f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x13fc))) = 0x9f;
  F_00415690(((undefined1 *)(gen_frame + 0x4e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x660)) GEN_EDX_ARG,((char *)REFP(0x1089acc)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1400))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1418))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x141c))) = 0xa0;
  F_00415690(((undefined1 *)(gen_frame + 0x660)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3e0)) GEN_EDX_ARG,((char *)REFP(0x1089ae0)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1420))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1438))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x143c))) = 0xa1;
  F_00415690(((undefined1 *)(gen_frame + 0x3e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6a0)) GEN_EDX_ARG,((char *)REFP(0x1089af4)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1440))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1458))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x145c))) = 0xa2;
  F_00415690(((undefined1 *)(gen_frame + 0x6a0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x380)) GEN_EDX_ARG,((char *)REFP(0x1089b10)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1460))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1478))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x147c))) = 0xa3;
  F_00415690(((undefined1 *)(gen_frame + 0x380)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6e0)) GEN_EDX_ARG,((char *)REFP(0x1089b24)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1480))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1498))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x149c))) = 0xa4;
  F_00415690(((undefined1 *)(gen_frame + 0x6e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3c0)) GEN_EDX_ARG,((char *)REFP(0x1089b3c)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x14a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x14b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x14bc))) = 0xa5;
  F_00415690(((undefined1 *)(gen_frame + 0x3c0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x720)) GEN_EDX_ARG,((char *)REFP(0x1089b54)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x14c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x14d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x14dc))) = 0xa6;
  F_00415690(((undefined1 *)(gen_frame + 0x720)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x400)) GEN_EDX_ARG,((char *)REFP(0x1089b68)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x14e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x14f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x14fc))) = 0xa7;
  F_00415690(((undefined1 *)(gen_frame + 0x400)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x760)) GEN_EDX_ARG,((char *)REFP(0x1089b7c)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1500))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1518))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x151c))) = 0xa8;
  F_00415690(((undefined1 *)(gen_frame + 0x760)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x700)) GEN_EDX_ARG,((char *)REFP(0x1089b90)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1520))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1538))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x153c))) = 0xa9;
  F_00415690(((undefined1 *)(gen_frame + 0x700)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x480)) GEN_EDX_ARG,((char *)REFP(0x1089bac)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1540))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1558))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x155c))) = 0xaa;
  F_00415690(((undefined1 *)(gen_frame + 0x480)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x360)) GEN_EDX_ARG,((char *)REFP(0x1089bc0)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe9c))) = 0x74;
  F_00415690(((undefined1 *)(gen_frame + 0x360)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x320)) GEN_EDX_ARG,((char *)REFP(0x1089bcc)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xea0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xeb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xebc))) = 0x75;
  F_00415690(((undefined1 *)(gen_frame + 0x320)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((char *)REFP(0x1089be0)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3020))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3038))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x303c))) = 0x181;
  F_00415690(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2e0)) GEN_EDX_ARG,((char *)REFP(0x1089bf0)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3080))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3098))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x309c))) = 0x184;
  F_00415690(((undefined1 *)(gen_frame + 0x2e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG,((char *)REFP(0x1089bf8)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x30a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x30b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x30bc))) = 0x185;
  F_00415690(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,((char *)REFP(0x1089c04)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x30c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x30d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x30dc))) = 0x186;
  F_00415690(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG,((char *)REFP(0x1089c18)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x30e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x30f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x30fc))) = 0x187;
  F_00415690(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x260)) GEN_EDX_ARG,((char *)REFP(0x1089c28)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3100))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3118))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x311c))) = 0x188;
  F_00415690(((undefined1 *)(gen_frame + 0x260)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG,((char *)REFP(0x1089c34)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3120))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3138))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x313c))) = 0x189;
  F_00415690(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x220)) GEN_EDX_ARG,((char *)REFP(0x1089c44)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3140))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3158))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x315c))) = 0x18a;
  F_00415690(((undefined1 *)(gen_frame + 0x220)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,((char *)REFP(0x1089c54)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3160))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3178))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x317c))) = 0x18b;
  F_00415690(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089c64)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3180))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3198))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x319c))) = 0x18c;
  F_00415690(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe0)) GEN_EDX_ARG,((char *)REFP(0x1089c74)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x31a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x31b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x31bc))) = 0x18d;
  F_00415690(((undefined1 *)(gen_frame + 0xe0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG,((char *)REFP(0x1089c84)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x31c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x31d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x31dc))) = 0x18e;
  F_00415690(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x340)) GEN_EDX_ARG,((char *)REFP(0x1089c94)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x31e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x31f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x31fc))) = 399;
  F_00415690(((undefined1 *)(gen_frame + 0x340)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x1089ca8)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3200))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3218))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x321c))) = 400;
  F_00415690(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x1089cbc)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3240))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3258))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x325c))) = 0x192;
  F_00415690(((undefined1 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG,((char *)REFP(0x1089cc8)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2800))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2818))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x281c))) = 0x140;
  F_00415690(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x240)) GEN_EDX_ARG,((char *)REFP(0x1089cd0)),0x19,0,100);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3260))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3278))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x327c))) = 0x193;
  F_00415690(((undefined1 *)(gen_frame + 0x240)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x1089ce4)),0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x32e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x32f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x32fc))) = 0x197;
  F_00415690(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x1089cf8)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x32c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x32d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x32dc))) = 0x196;
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x180)) GEN_EDX_ARG,((char *)REFP(0x1089d04)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3040))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3058))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x305c))) = 0x182;
  F_00415690(((undefined1 *)(gen_frame + 0x180)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x140)) GEN_EDX_ARG,((char *)REFP(0x1089d18)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3060))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3078))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x307c))) = 0x183;
  F_00415690(((undefined1 *)(gen_frame + 0x140)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG,((char *)REFP(0x1089d30)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3280))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3298))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x329c))) = 0x194;
  F_00415690(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,((char *)REFP(0x1089d40)),0,0,3);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x32a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x32b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x32bc))) = 0x195;
  F_00415690(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,((char *)REFP(0x1089d54)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x26e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x26f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x26fc))) = 0x137;
  F_00415690(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,((char *)REFP(0x1089d68)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1760))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1778))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x177c))) = 0xbb;
  F_00415690(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x7d0)) = 1;
  (*(undefined4 *)(gen_frame + 0x7d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x7dc)) = 0;
  uVar2 = F_00406bb0(0x12,0,0);
  (*(uint *)(gen_frame + 0x7cc)) = uVar2;
  F_00c49908(uVar2,0x12,((char *)REFP(0x1089d7c)));
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe40))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x7c0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe5c))) = 0x72;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x7c0)) GEN_EDX_ARG);
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1089d90)),1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xec0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xed8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xedc))) = 0x76;
  uVar2 = F_00415690(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0041b370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0041b370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x41b370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x204, 12, 4);
  int iVar1;
  uint uVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41b397));
  uVar2 = F_00406bb0(0x20,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089d9c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x20;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41b3a7;
  F_00c49908(uVar2,0x20,((char *)REFP(0x1089d9c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b3b6;
  F_004156f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1c))) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b3c7));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 10;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41b3d9));
  uVar2 = F_00406bb0(10,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089dbc));
  (*(undefined4 *)(gen_frame + 0x40)) = 10;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41b3e9;
  F_00c49908(uVar2,10,((char *)REFP(0x1089dbc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b3fb;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x20))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x3c))) = 1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b40c));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x2011ff14;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089dc8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b420;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089dc8)),0x2011ff14,0,0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b42c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x5c))) = 2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b441));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089dd4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b453;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089dd4)),2,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b45f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x7c))) = 3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b474));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x4));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089de4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b485;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089de4)),0,0,4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b491;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x9c))) = 4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b4ac));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089df0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b4bd;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089df0)),0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b4cc;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xbc))) = 5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b4e7));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41b4f9));
  uVar2 = F_00406bb0(0x13,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089df8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x13;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41b509;
  F_00c49908(uVar2,0x13,((char *)REFP(0x1089df8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b51e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xdc))) = 6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b539));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = (undefined * PTR32 *)&REFG(undefined, 0x1089e0c);
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b549;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,&REFG(undefined, 0x1089e0c),1,0,0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b558;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xfc))) = 7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b573));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xd8ff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xd800;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xd800;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = (undefined * PTR32 *)&REFG(undefined, 0x1089e14);
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b58f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,&REFG(undefined, 0x1089e14),0xd800,0xd800,0xd8ff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b59e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x100))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x118))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x11c))) = 8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b5b9));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089e1c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b5ca;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089e1c)),0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b5d9;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x120))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x138))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x13c))) = 9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b5f4));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089e28));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b605;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089e28)),0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b614;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x140))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x158))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x15c))) = 10;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b62f));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x10;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41b641));
  uVar2 = F_00406bb0(0x10,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089e34));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x10;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41b651;
  F_00c49908(uVar2,0x10,((char *)REFP(0x1089e34)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b666;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x840))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x858))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x85c))) = 0x42;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b681));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41b693));
  uVar2 = F_00406bb0(0x13,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089e44));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x13;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41b6a3;
  F_00c49908(uVar2,0x13,((char *)REFP(0x1089e44)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b6b8;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x160))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x178))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x17c))) = 0xb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b6d3));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x1089e58));
  uVar2 = F_00414960(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089e5c)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b6fe;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x180))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x198))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x19c))) = 0xc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b719));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x80000000;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089e68));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b72e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089e68)),0x80000000,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b73d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1bc))) = 0xd;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b758));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x80000000;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089e74));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b76d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089e74)),0x80000000,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b77c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1dc))) = 0xe;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b797));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x8000));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x500;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089e80));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b7af;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089e80)),0x500,0,0x8000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b7be;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1fc))) = 0xf;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b7d9));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x8000));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x2d0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089e8c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b7f1;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089e8c)),0x2d0,0,0x8000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b800;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x200))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x218))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x21c))) = 0x10;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b81b));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089e9c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b82c;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089e9c)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b83b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x220))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x238))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x23c))) = 0x11;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b856));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x8000));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x500;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089ea8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b86e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089ea8)),0x500,0,0x8000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b87d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x240))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 600))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x25c))) = 0x12;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b898));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x8000));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x2d0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089eb8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b8b0;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089eb8)),0x2d0,0,0x8000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b8bf;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x260))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x278))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x27c))) = 0x13;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b8da));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x8000));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x3c;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089ecc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b8ef;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089ecc)),0x3c,0,0x8000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b8fe;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x280))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x298))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x29c))) = 0x14;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b919));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 (*)[1])REFP(0x1089ed8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b92a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x1089ed8)),1,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b939;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 700))) = 0x15;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b954));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089edc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b964;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089edc)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b973;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2fc))) = 0x17;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b98e));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2710));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089ee8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b9a2;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089ee8)),0,0,10000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b9b1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x340))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x358))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x35c))) = 0x1a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41b9cc));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x64));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x32;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089ef8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41b9de;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089ef8)),0x32,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b9ed;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x360))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x378))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x37c))) = 0x1b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41ba08));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41ba1a));
  uVar2 = F_00406bb0(0x11,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f00));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x11;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41ba2a;
  F_00c49908(uVar2,0x11,((char *)REFP(0x1089f00)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ba3f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x7e0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x7f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x7fc))) = 0x3f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41ba5a));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f14));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ba6a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089f14)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ba79;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x800))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x818))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x81c))) = 0x40;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41ba94));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f24));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41baa4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089f24)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bab3;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x820))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x838))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x83c))) = 0x41;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bace));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x15;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41bae0));
  uVar2 = F_00406bb0(0x15,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f34));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x15;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41baf0;
  F_00c49908(uVar2,0x15,((char *)REFP(0x1089f34)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bb05;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3420))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3438))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x343c))) = 0x1a1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bb20));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x64));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f4c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bb32;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089f4c)),100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bb41;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3440))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3458))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x345c))) = 0x1a2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bb5c));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x64));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f58));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bb6e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089f58)),100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bb7d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3460))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3478))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x347c))) = 0x1a3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bb98));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x64));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f64));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bbaa;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089f64)),100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bbb9;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3480))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3498))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x349c))) = 0x1a4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bbd4));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x64));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f6c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bbe6;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089f6c)),100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bbf5;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x34a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x34b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x34bc))) = 0x1a5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bc10));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x64));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f78));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bc22;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089f78)),100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bc31;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x34c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x34d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x34dc))) = 0x1a6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bc4c));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x64));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f84));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bc5e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089f84)),100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bc6d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x34e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x34f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x34fc))) = 0x1a7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bc88));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f90));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bc98;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089f90)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bca7;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3500))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3518))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x351c))) = 0x1a8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bcc2));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089f9c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bcd2;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089f9c)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bce1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3520))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3538))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x353c))) = 0x1a9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bcfc));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089fa8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bd0c;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089fa8)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bd1b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3540))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3558))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x355c))) = 0x1aa;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bd36));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089fb0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bd46;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089fb0)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bd55;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3560))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3578))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x357c))) = 0x1ab;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bd70));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089fbc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bd80;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089fbc)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bd8f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3580))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3598))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x359c))) = 0x1ac;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bdaa));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089fc8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bdba;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089fc8)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bdc9;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x35a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x35b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x35bc))) = 0x1ad;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bde4));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089fd4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bdf4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089fd4)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41be03;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x35c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x35d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x35dc))) = 0x1ae;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41be1e));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x64));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 10;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089fe0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41be30;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089fe0)),10,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41be3f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x35e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x35f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x35fc))) = 0x1af;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41be5a));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089fec));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41be6a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x1089fec)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41be79;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3600))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3618))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x361c))) = 0x1b0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41be94));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41bea6));
  uVar2 = F_00406bb0(0x14,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x1089ffc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x14;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41beb6;
  F_00c49908(uVar2,0x14,((char *)REFP(0x1089ffc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41becb;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x380))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x398))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x39c))) = 0x1c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bee6));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a010));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bef6;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a010)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bf05;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x5a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x5b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x5bc))) = 0x2d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bf20));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a020));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bf30;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a020)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bf3f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x5c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x5d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x5dc))) = 0x2e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bf5a));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a034));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bf6b;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a034)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bf7a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x7a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x7b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x7bc))) = 0x3d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bf95));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a044));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bfa5;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a044)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bfb4;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x560))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x578))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x57c))) = 0x2b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41bfcf));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a04c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41bfdf;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a04c)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bfee;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x580))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x598))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x59c))) = 0x2c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c009));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a05c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c019;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a05c)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c028;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2dc))) = 0x16;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c043));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a06c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c053;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a06c)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c062;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x4c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x4d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x4dc))) = 0x26;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c07d));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a080));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c08f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a080)),2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c09e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x4a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x4b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x4bc))) = 0x25;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c0b9));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a090));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c0ca;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a090)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c0d9;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x680))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x698))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x69c))) = 0x34;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c0f4));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a0a0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c106;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a0a0)),2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c115;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x4e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x4f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x4fc))) = 0x27;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c130));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a0b8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c140;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a0b8)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c14f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x6a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x6b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x6bc))) = 0x35;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c16a));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a0d4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c17a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a0d4)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c189;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x6c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x6d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x6dc))) = 0x36;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c1a4));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a0f0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c1b4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a0f0)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c1c3;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x6e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x6f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x6fc))) = 0x37;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c1de));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a10c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c1ee;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a10c)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c1fd;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x700))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x718))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x71c))) = 0x38;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c218));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a128));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c228;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a128)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c237;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x5e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x5f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x5fc))) = 0x2f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c252));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a134));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c263;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a134)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c272;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x520))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x538))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x53c))) = 0x29;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c28d));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a14c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c29f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a14c)),2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c2ae;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x540))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x558))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x55c))) = 0x2a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c2c9));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a164));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c2d9;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a164)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c2e8;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x500))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x518))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x51c))) = 0x28;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c303));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a17c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c315;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a17c)),2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c324;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x3bc))) = 0x1d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c33f));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a194));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c350;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a194)),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c35f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x3dc))) = 0x1e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c37a));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a1b0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c38a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a1b0)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c399;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x660))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x678))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x67c))) = 0x33;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c3b4));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a1bc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c3c6;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a1bc)),2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c3d5;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x720))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x738))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x73c))) = 0x39;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c3f0));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a1cc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c402;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a1cc)),2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c411;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x740))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x758))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x75c))) = 0x3a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c42c));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a1e0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c43e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a1e0)),2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c44d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x760))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x778))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x77c))) = 0x3b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c468));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a1f4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c47a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a1f4)),2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c489;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x780))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x798))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x79c))) = 0x3c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c4a4));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a208));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c4b4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a208)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c4c3;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x480))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x498))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x49c))) = 0x24;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c4de));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a214));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c4ee;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a214)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c4fd;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x460))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x478))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x47c))) = 0x23;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c518));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = (undefined * PTR32 *)&REFG(undefined, 0x108a220);
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c529;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,&REFG(undefined, 0x108a220),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c538;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x3fc))) = 0x1f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c553));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a228));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c565;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a228)),2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c574;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x400))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x418))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x41c))) = 0x20;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c58f));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a230));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c59f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a230)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c5ae;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x420))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x438))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x43c))) = 0x21;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c5c9));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a240));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c5d9;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a240)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c5e8;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1640))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1658))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x165c))) = 0xb2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c603));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a250));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c613;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a250)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c622;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1660))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1678))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x167c))) = 0xb3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c63d));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a25c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c64d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a25c)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c65c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x7c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x7d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x7dc))) = 0x3e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c677));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41c689));
  uVar2 = F_00406bb0(0x13,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a270));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x13;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41c699;
  F_00c49908(uVar2,0x13,((char *)REFP(0x108a270)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c6ae;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x860))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x878))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x87c))) = 0x43;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c6c9));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a284));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c6da;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a284)),0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c6e9;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x880))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x898))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x89c))) = 0x44;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c704));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,L"{00000000-0000-0000-0000000000000000}");
  uVar2 = F_00414960(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a2e4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c72f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x8a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x8b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x8bc))) = 0x45;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c74a));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,L"{00000000-0000-0000-0000000000000000}");
  uVar2 = F_00414960(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a28c)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c775;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x8c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x8d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x8dc))) = 0x46;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c790));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a2f4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c7a0;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a2f4)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c7af;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x920))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x938))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x93c))) = 0x49;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c7ca));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 9;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 3;
  (*(undefined4 *)(gen_frame + 0x1f4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x108b290)));
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41c7ed));
  uVar2 = F_00406bb0(9,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a34c));
  (*(undefined4 *)(gen_frame + 0x40)) = 9;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41c7fd;
  F_00c49908(uVar2,9,((char *)REFP(0x108a34c)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 *)(gen_frame + 0x1e0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x108b290)));
  (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x1e8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c834;
  F_004156f0(((undefined *)GEN_TOP((iVar1 + 0x8e0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x8f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x8fc))) = 0x47;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c84f));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a358)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108a38c)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                       (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                       (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),
                       (*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c881;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x900))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x918))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x91c))) = 0x48;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c89c));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a394));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c8af;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG,((char *)REFP(0x108a394)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c8be;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x940))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x958))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x95c))) = 0x4a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c8dc));
  F_00415690(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a3a4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c8ef;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((char *)REFP(0x108a3a4)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c8fe;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x960))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x978))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x97c))) = 0x4b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c91c));
  F_00415690(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a3ac));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c92f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,((char *)REFP(0x108a3ac)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c93e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x980))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x998))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x99c))) = 0x4c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c95c));
  F_00415690(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a3bc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c970;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x140)) GEN_EDX_ARG,((char *)REFP(0x108a3bc)),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c97f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x9a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x9b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x9bc))) = 0x4d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c99d));
  F_00415690(((undefined1 *)(gen_frame + 0x140)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a3d4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41c9b0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,((char *)REFP(0x108a3d4)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c9bf;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x9c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x9d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x9dc))) = 0x4e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41c9dd));
  F_00415690(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41c9ef));
  uVar2 = F_00406bb0(0x11,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a3e8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x11;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41c9ff;
  F_00c49908(uVar2,0x11,((char *)REFP(0x108a3e8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ca14;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x9e0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x9f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x9fc))) = 0x4f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41ca2f));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a3fc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ca3f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG,((char *)REFP(0x108a3fc)),1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ca4e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x300))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x318))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x31c))) = 0x18;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41ca69));
  F_00415690(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a40c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ca79;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x180)) GEN_EDX_ARG,((char *)REFP(0x108a40c)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ca88;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 800))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x338))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x33c))) = 0x19;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41caa3));
  F_00415690(((undefined1 *)(gen_frame + 0x180)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xb;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 3;
  (*(undefined4 *)(gen_frame + 0x1f4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41cac6));
  uVar2 = F_00406bb0(0xb,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a41c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0xb;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41cad6;
  F_00c49908(uVar2,0xb,((char *)REFP(0x108a41c)));
  (*(undefined4 *)(gen_frame + 0x1e0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cb0d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xcc0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xcd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xcdc))) = 0x66;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cb28));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a428));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41cb3b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG,((char *)REFP(0x108a428)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cb4a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa1c))) = 0x50;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cb68));
  F_00415690(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xe;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41cb7a));
  uVar2 = F_00406bb0(0xe,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a438));
  (*(undefined4 *)(gen_frame + 0x40)) = 0xe;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41cb8a;
  F_00c49908(uVar2,0xe,((char *)REFP(0x108a438)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cb9f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa20))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa3c))) = 0x51;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cbba));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41cbcc));
  uVar2 = F_00406bb0(0x11,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a448));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x11;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41cbdc;
  F_00c49908(uVar2,0x11,((char *)REFP(0x108a448)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cbf1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x15c0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x15d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x15dc))) = 0xae;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cc0c));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x64));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x32;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a45c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41cc21;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG,((char *)REFP(0x108a45c)),0x32,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cc30;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1600))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1618))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x161c))) = 0xb0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cc4e));
  F_00415690(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41cc60));
  uVar2 = F_00406bb0(0x14,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a468));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x14;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41cc70;
  F_00c49908(uVar2,0x14,((char *)REFP(0x108a468)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cc85;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x33a0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x33b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x33bc))) = 0x19d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cca0));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffffff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a47c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ccb5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe0)) GEN_EDX_ARG,((char *)REFP(0x108a47c)),0xffffffff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ccc4;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x33c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x33d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x33dc))) = 0x19e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cce2));
  F_00415690(((undefined1 *)(gen_frame + 0xe0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffffff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a490));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ccf7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG,((char *)REFP(0x108a490)),0xffffffff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cd06;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x33e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x33f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x33fc))) = 0x19f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cd24));
  F_00415690(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a4a8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41cd34;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a4a8)),0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cd43;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3400))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3418))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x341c))) = 0x1a0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cd5e));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x1a;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41cd70));
  uVar2 = F_00406bb0(0x1a,0,0);
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a4c0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x1a;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41cd80;
  F_00c49908(uVar2,0x1a,((char *)REFP(0x108a4c0)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cd95;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3620))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3638))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x363c))) = 0x1b1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cdb0));
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a4dc)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a4ec)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cde1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3640))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3658))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x365c))) = 0x1b2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cdfc));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a4fc)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a50c)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ce2e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3660))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3678))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x367c))) = 0x1b3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41ce49));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a51c)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a52c)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ce7a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3680))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3698))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x369c))) = 0x1b4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41ce95));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a53c)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a550)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cec7;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x36a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x36b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x36bc))) = 0x1b5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cee2));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108a560),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a568)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cf13;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x36c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x36d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x36dc))) = 0x1b6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cf2e));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a57c)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a584)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cf60;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x36e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x36f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x36fc))) = 0x1b7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cf7b));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a598)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a5a0)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cfac;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3700))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3718))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x371c))) = 0x1b8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41cfc7));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a5b0)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a5b8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cff9;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3720))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3738))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x373c))) = 0x1b9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41d014));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a5cc)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a5d8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d045;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3740))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3758))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x375c))) = 0x1ba;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41d060));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a5ec)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a5f8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d092;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3760))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3778))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x377c))) = 0x1bb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41d0ad));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a608)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a618)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d0de;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3780))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3798))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x379c))) = 0x1bc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41d0f9));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a628)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a63c)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d12b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x37a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x37b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x37bc))) = 0x1bd;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41d146));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a64c)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a660)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d177;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x37c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x37d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x37dc))) = 0x1be;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41d192));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a670)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108a684)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d1c4;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x37e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x37f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x37fc))) = 0x1bf;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41d1df));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x17;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 1;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x41d1f1));
  uVar2 = F_00406bb0(0x17,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = ((undefined * PTR32 *)GEN_TOP(0x108a694));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x17;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x1ec)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41d201;
  F_00c49908(uVar2,0x17,((char *)REFP(0x108a694)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x1e0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d216;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3800))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1e0)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3818))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x381c))) = 0x1c0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = ((undefined4 *)GEN_TOP(0x41d231));
  uVar2 = F_00415690(&(*(undefined4 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0041d240 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0041d240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x41d240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00415940(this GEN_EDX_FWD,(int)this + 0xb0);
  F_00415940(this GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x2b4))) * 0xac + 0x15c + (int)this);
  return;
}

/* ref: FUN_0041d270 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0041d270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x41d270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00415940(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_FWD,this);
  F_00415940(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2b4))) * 0xac + 0x15c + (int)this))) GEN_EDX_ARG,this);
  return;
}

/* ref: FUN_0041d2a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0041d2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x41d2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x544, 12, 4);
  int iVar1;
  uint uVar2;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x24));
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41d2c7));
  uVar2 = F_00406bb0(0x24,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a7e0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x24;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41d2d7;
  F_00c49908(uVar2,0x24,((char *)REFP(0x108a7e0)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d2e6;
  F_004156f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1c))) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d2f7));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x9));
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41d309));
  uVar2 = F_00406bb0(9,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a804));
  (*(undefined4 *)(gen_frame + 0x40)) = 9;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41d319;
  F_00c49908(uVar2,9,((char *)REFP(0x108a804)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d32b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x20))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x3c))) = 1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d33c));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x2));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a810));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d34e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a810)),2,1,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d35a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x5c))) = 2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d36f));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a820));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d37f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a820)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d38b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x7c))) = 3;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d3a0));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a82c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d3b1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a82c)),0,0,3);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d3bd;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x9c))) = 4;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d3d8));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108a838));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a83c)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d403;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xdc))) = 6;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d41e));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a850));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d432;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a850)),0,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d441;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xbc))) = 5;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d45c));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a864));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d46c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a864)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d47b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xfc))) = 7;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d496));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a878));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d4a6;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a878)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d4b5;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x100))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x118))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x11c))) = 8;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d4d0));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a898));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d4e0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a898)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d4ef;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x120))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x138))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x13c))) = 9;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d50a));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a8b0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d51a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a8b0)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d529;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x300))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x318))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x31c))) = 0x18;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d544));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x1));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a8c0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d555;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a8c0)),1,0,2);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d564;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x140))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x158))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x15c))) = 10;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d57f));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a8cc)),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a8f8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc))
                       ,(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28))
                       ,(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(char * PTR32 *)(gen_frame + 0x44)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d5b1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x160))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x178))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x17c))) = 0xb;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d5cc));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x10));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a910));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d5dd;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a910)),0,0,0x10);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d5ec;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x180))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x198))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x19c))) = 0xc;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d607));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x1));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a928));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d61b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a928)),1,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d62a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1bc))) = 0xd;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d645));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108a93c));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a940)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d670;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1dc))) = 0xe;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d68b));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a950));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d69f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a950)),0,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d6ae;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1fc))) = 0xf;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d6c9));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xffffffff));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a960));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d6db;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a960)),0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d6ea;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x200))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x218))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x21c))) = 0x10;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d705));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a974));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d716;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a974)),0,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d725;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x220))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x238))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x23c))) = 0x11;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d740));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a984));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d754;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a984)),0,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d763;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x240))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 600))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x25c))) = 0x12;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d77e));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a994));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d78f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a994)),0,0,2);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d79e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x260))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x278))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x27c))) = 0x13;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d7b9));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x1));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a9a4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d7c9;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a9a4)),1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d7d8;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x280))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x298))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x29c))) = 0x14;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d7f3));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x10));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a9b0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d804;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a9b0)),0,0,0x10);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d813;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 700))) = 0x15;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d82e));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108a9c4));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a9c8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                       (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                       (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d859;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2dc))) = 0x16;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d874));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x1));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a9d0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d884;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a9d0)),1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d893;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2fc))) = 0x17;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d8ae));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108a9dc),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a9e4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d8df;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 800))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x338))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x33c))) = 0x19;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d8fa));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x1));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a9f4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d90a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a9f4)),1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d919;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x340))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x358))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x35c))) = 0x1a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d934));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x1));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a9fc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d944;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108a9fc)),1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d953;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x360))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x378))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x37c))) = 0x1b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d96e));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aa08));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41d97e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108aa08)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d98d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x380))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x398))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x39c))) = 0x1c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d9a8));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x11));
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41d9ba));
  uVar2 = F_00406bb0(0x11,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aa14));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x11;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41d9ca;
  F_00c49908(uVar2,0x11,((char *)REFP(0x108aa14)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d9df;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3a0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x3bc))) = 0x1d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41d9fa));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aa28));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41da0a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108aa28)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41da19;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x3dc))) = 0x1e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41da34));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aa34));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41da45;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108aa34)),0,0,2);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41da54;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x3e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x3fc))) = 0x1f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41da6f));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x1));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aa44));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41da7f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108aa44)),1,0,0);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41da8e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x400))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x418))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x41c))) = 0x20;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41daa9));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x13));
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41dabb));
  uVar2 = F_00406bb0(0x13,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aa58));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x13;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41dacb;
  F_00c49908(uVar2,0x13,((char *)REFP(0x108aa58)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dae0;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x420))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x438))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x43c))) = 0x21;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41dafb));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,(*(undefined * PTR32 (*)[4])REFP(0x108aa6c)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108aa98)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10))
                       ,(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c))
                       ,(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41db26;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x440))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x458))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x45c))) = 0x22;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41db41));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xd6d3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xd6d2));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aaa4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41db59;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108aaa4)),0xd6d2,0,0xd6d3);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41db68;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x460))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x478))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x47c))) = 0x23;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41db83));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,(*(undefined * PTR32 (*)[4])REFP(0x108aab0)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108aadc)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10))
                       ,(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c))
                       ,(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dbae;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x480))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x498))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x49c))) = 0x24;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41dbc9));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xd6d3));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xd6d2));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aae8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41dbe1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108aae8)),0xd6d2,0,0xd6d3);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dbf0;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x4a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x4b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x4bc))) = 0x25;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41dc0b));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x258));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x1e;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x1e));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aaf4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41dc21;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108aaf4)),0x1e,0x1e,600);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dc30;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x4c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x4d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x4dc))) = 0x26;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41dc4b));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xa));
  (*(undefined4 *)(gen_frame + 0x4c)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x5));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ab04));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41dc5d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ab04)),5,1,10);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dc6c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x4e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x4f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x4fc))) = 0x27;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41dc87));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x5));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x1));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ab18));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41dc98;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ab18)),1,0,5);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dca7;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x500))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x518))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x51c))) = 0x28;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41dcc2));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xd6d0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xd6d0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ab24));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41dcda;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ab24)),0xd6d0,0,0xd6d0);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dce9;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x520))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x538))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x53c))) = 0x29;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41dd04));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x108ab30)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ab44)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                       (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                       (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dd2f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x540))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x558))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x55c))) = 0x2a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41dd4a));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x108ab50)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ab58)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dd75;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x560))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x578))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x57c))) = 0x2b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41dd90));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ab68));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41dda0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ab68)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ddaf;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x580))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x598))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x59c))) = 0x2c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ddca));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ab78));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ddda;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ab78)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dde9;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x5a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x5b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x5bc))) = 0x2d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41de04));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,L"00000");
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ab90)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                       (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                       (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41de2f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x5c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x5d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x5dc))) = 0x2e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41de4a));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108ab98));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ab9c)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                       (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                       (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41de75;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x5e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x5f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x5fc))) = 0x2f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41de90));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108aba4));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108aba8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                       (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                       (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41debb;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x600))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x618))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x61c))) = 0x30;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ded6));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108abb4));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108abb8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                       (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                       (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41df01;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x620))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x638))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x63c))) = 0x31;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41df1c));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108abc0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41df2c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108abc0)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41df3b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x640))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x658))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x65c))) = 0x32;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41df56));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x258));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x258));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108abd0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41df6e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108abd0)),600,0,600);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41df7d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x660))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x678))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x67c))) = 0x33;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41df98));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x258));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x14));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108abe0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41dfad;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108abe0)),0x14,0,600);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dfbc;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x680))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x698))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x69c))) = 0x34;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41dfd7));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x258));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x2d));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108abf8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41dfec;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108abf8)),0x2d,0,600);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dffb;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x6a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x6b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x6bc))) = 0x35;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e016));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x258));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x14));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ac08));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e02b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ac08)),0x14,0,600);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e03a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x6c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x6d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x6dc))) = 0x36;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e055));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x10));
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41e067));
  uVar2 = F_00406bb0(0x10,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ac20));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x10;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41e077;
  F_00c49908(uVar2,0x10,((char *)REFP(0x108ac20)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e08c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x6e0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x6f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x6fc))) = 0x37;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e0a7));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x14));
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41e0b9));
  uVar2 = F_00406bb0(0x14,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ac30));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x14;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41e0c9;
  F_00c49908(uVar2,0x14,((char *)REFP(0x108ac30)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e0de;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x700))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x718))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x71c))) = 0x38;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e0f9));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x14));
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41e10b));
  uVar2 = F_00406bb0(0x14,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ac44));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x14;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41e11b;
  F_00c49908(uVar2,0x14,((char *)REFP(0x108ac44)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e130;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x720))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x738))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x73c))) = 0x39;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e14b));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x12));
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41e15d));
  uVar2 = F_00406bb0(0x12,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ac58));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x12;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41e16d;
  F_00c49908(uVar2,0x12,((char *)REFP(0x108ac58)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e182;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x740))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x758))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x75c))) = 0x3a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e19d));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x11));
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41e1af));
  uVar2 = F_00406bb0(0x11,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ac6c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x11;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41e1bf;
  F_00c49908(uVar2,0x11,((char *)REFP(0x108ac6c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e1d4;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x760))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x778))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x77c))) = 0x3b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e1ef));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ac80));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e1ff;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ac80)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e20e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x780))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x798))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x79c))) = 0x3c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e229));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ac94));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e239;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ac94)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e248;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x7a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x7b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x7bc))) = 0x3d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e263));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108acac));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e273;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108acac)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e282;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x7c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x7d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x7dc))) = 0x3e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e29d));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108acc4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e2ad;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108acc4)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e2bc;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x7e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x7f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x7fc))) = 0x3f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e2d7));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x108acd8)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ace0)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e302;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x800))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x818))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x81c))) = 0x40;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e31d));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108acf8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e32d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108acf8)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e33c;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x820))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x838))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x83c))) = 0x41;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e357));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x108ad0c)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ad14)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),
                       (*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),
                       (*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(char * PTR32 *)(gen_frame + 0x44)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e382;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x840))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x858))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x85c))) = 0x42;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e39d));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ad2c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e3ad;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ad2c)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e3bc;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x860))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x878))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x87c))) = 0x43;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e3d7));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x108ad38)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ad40)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e402;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x880))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x898))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x89c))) = 0x44;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e41d));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x15));
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41e42f));
  uVar2 = F_00406bb0(0x15,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ad50));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x15;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41e43f;
  F_00c49908(uVar2,0x15,((char *)REFP(0x108ad50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e454;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x8a0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x8b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x8bc))) = 0x45;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e46f));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ad68));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e480;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ad68)),0,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e48f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x8c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x8d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x8dc))) = 0x46;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e4aa));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x108ad7c)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ad84)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e4d5;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x8e0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x8f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x8fc))) = 0x47;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e4f0));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x14));
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41e502));
  uVar2 = F_00406bb0(0x14,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ad94));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x14;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41e512;
  F_00c49908(uVar2,0x14,((char *)REFP(0x108ad94)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e527;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x900))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x918))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x91c))) = 0x48;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e542));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x1));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ada8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e552;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ada8)),1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e561;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x920))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x938))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x93c))) = 0x49;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e57c));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x1));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108adb8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e58c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108adb8)),1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e59b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x940))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x958))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x95c))) = 0x4a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e5b6));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108adcc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e5ca;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108adcc)),0,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e5d9;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x960))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x978))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x97c))) = 0x4b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e5f4));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108ade0));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ade4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc))
                       ,(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28))
                       ,(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),
                       (*(char * PTR32 *)(gen_frame + 0x44)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e61f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x980))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x998))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x99c))) = 0x4c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e63a));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,&REFG(undefined, 0x108adfc));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ae00)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e665;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x9a0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x9b8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x9bc))) = 0x4d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e680));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ae18));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e694;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG,((char *)REFP(0x108ae18)),0,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e6a3;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x9c0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x9d8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x9dc))) = 0x4e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e6be));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xe));
  (*(undefined4 *)(gen_frame + 0x530)) = 1;
  (*(undefined4 *)(gen_frame + 0x538)) = 0;
  (*(undefined4 *)(gen_frame + 0x53c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x41e6d0));
  uVar2 = F_00406bb0(0xe,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ae30));
  (*(undefined4 *)(gen_frame + 0x40)) = 0xe;
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(uint *)(gen_frame + 0x52c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x41e6e0;
  F_00c49908(uVar2,0xe,((char *)REFP(0x108ae30)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x520));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e6f5;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x9e0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x520)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x9f8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0x9fc))) = 0x4f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e710));
  F_00415690(((undefined1 *)(gen_frame + 0x520)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ae40));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e723;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x180)) GEN_EDX_ARG,((char *)REFP(0x108ae40)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e732;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa1c))) = 0x50;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e750));
  F_00415690(((undefined1 *)(gen_frame + 0x180)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = &REFG(undefined * PTR32, 0x8a0000);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ae54));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e765;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4c0)) GEN_EDX_ARG,((char *)REFP(0x108ae54)),&REFG(undefined * PTR32, 0x8a0000),0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e774;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa3c))) = 0x51;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e78f));
  F_00415690(((undefined1 *)(gen_frame + 0x4c0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = &REFG(undefined * PTR32, 0x8a0000);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ae5c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e7a7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG,((char *)REFP(0x108ae5c)),&REFG(undefined * PTR32, 0x8a0000),0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e7b6;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa5c))) = 0x52;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e7d4));
  F_00415690(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = &REFG(undefined * PTR32, 0x8a0000);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ae68));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e7ec;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x480)) GEN_EDX_ARG,((char *)REFP(0x108ae68)),&REFG(undefined * PTR32, 0x8a0000),0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e7fb;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa7c))) = 0x53;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e819));
  F_00415690(((undefined1 *)(gen_frame + 0x480)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = (undefined * PTR32 *)
                 ((code *)REFP(0xe36100));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ae74));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e831;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,((char *)REFP(0x108ae74)),
                       ((code *)REFP(0xe36100)),0
                       ,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e840;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xa80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xa98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa9c))) = 0x54;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e85e));
  F_00415690(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xffffffff));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ae80));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e873;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x440)) GEN_EDX_ARG,((char *)REFP(0x108ae80)),0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e882;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xaa0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xab8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xabc))) = 0x55;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e8a0));
  F_00415690(((undefined1 *)(gen_frame + 0x440)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xffffffff));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ae8c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e8b5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x240)) GEN_EDX_ARG,((char *)REFP(0x108ae8c)),0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e8c4;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xac0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xad8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xadc))) = 0x56;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e8e2));
  F_00415690(((undefined1 *)(gen_frame + 0x240)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xffffffff));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108ae9c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e8f7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x400)) GEN_EDX_ARG,((char *)REFP(0x108ae9c)),0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e906;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xae0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xaf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xafc))) = 0x57;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e924));
  F_00415690(((undefined1 *)(gen_frame + 0x400)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aeac));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e93c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x140)) GEN_EDX_ARG,((char *)REFP(0x108aeac)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e94b;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xb00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xb1c))) = 0x58;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e969));
  F_00415690(((undefined1 *)(gen_frame + 0x140)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aeb4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e981;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3c0)) GEN_EDX_ARG,((char *)REFP(0x108aeb4)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e990;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xb20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xb3c))) = 0x59;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e9ae));
  F_00415690(((undefined1 *)(gen_frame + 0x3c0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aec4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41e9c6;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x108aec4)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e9d5;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xb40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xb5c))) = 0x5a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41e9f3));
  F_00415690(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aed0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ea0b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x380)) GEN_EDX_ARG,((char *)REFP(0x108aed0)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ea1a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xb60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xb7c))) = 0x5b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ea38));
  F_00415690(((undefined1 *)(gen_frame + 0x380)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x2a5d00));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aee0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ea50;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,((char *)REFP(0x108aee0)),0x2a5d00,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ea5f;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xb80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xb9c))) = 0x5c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ea7d));
  F_00415690(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xffffffff));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aee8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ea92;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x340)) GEN_EDX_ARG,((char *)REFP(0x108aee8)),0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41eaa1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xba0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 3000))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xbbc))) = 0x5d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41eabf));
  F_00415690(((undefined1 *)(gen_frame + 0x340)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aef4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ead7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,((char *)REFP(0x108aef4)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41eae6;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xbc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xbd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xbdc))) = 0x5e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41eb04));
  F_00415690(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xffffffff));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aefc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41eb19;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)REFP(0x108aefc)),0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41eb28;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xbe0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xbf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xbfc))) = 0x5f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41eb46));
  F_00415690(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xffffffff));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108af08));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41eb5b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG,((char *)REFP(0x108af08)),0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41eb6a;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc1c))) = 0x60;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41eb88));
  F_00415690(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x2a5d00));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108af14));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41eba0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((char *)REFP(0x108af14)),0x2a5d00,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ebaf;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc3c))) = 0x61;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ebcd));
  F_00415690(((undefined1 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xd14e78));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108af20));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ebe2;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x500)) GEN_EDX_ARG,((char *)REFP(0x108af20)),0xd14e78,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ebf1;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc5c))) = 0x62;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ec0c));
  F_00415690(((undefined1 *)(gen_frame + 0x500)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xb58106));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108af2c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ec21;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4e0)) GEN_EDX_ARG,((char *)REFP(0x108af2c)),0xb58106,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ec30;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc7c))) = 99;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ec4b));
  F_00415690(((undefined1 *)(gen_frame + 0x4e0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108af38));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ec63;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4a0)) GEN_EDX_ARG,((char *)REFP(0x108af38)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ec72;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xc9c))) = 100;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ec90));
  F_00415690(((undefined1 *)(gen_frame + 0x4a0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108af44));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41eca8;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x460)) GEN_EDX_ARG,((char *)REFP(0x108af44)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ecb7;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xca0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xcb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xcbc))) = 0x65;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ecd5));
  F_00415690(((undefined1 *)(gen_frame + 0x460)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x97cb5));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108af54));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41eced;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x420)) GEN_EDX_ARG,((char *)REFP(0x108af54)),0x97cb5,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ecfc;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xcc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xcd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xcdc))) = 0x66;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ed1a));
  F_00415690(((undefined1 *)(gen_frame + 0x420)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xffffffff));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108af60));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ed2f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3e0)) GEN_EDX_ARG,((char *)REFP(0x108af60)),0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ed3e;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xce0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xcf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xcfc))) = 0x67;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ed5c));
  F_00415690(((undefined1 *)(gen_frame + 0x3e0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x2a5d00));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108af74));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ed74;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3a0)) GEN_EDX_ARG,((char *)REFP(0x108af74)),0x2a5d00,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ed83;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xd00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xd1c))) = 0x68;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41eda1));
  F_00415690(((undefined1 *)(gen_frame + 0x3a0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x87b9));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108af88));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41edb9;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x360)) GEN_EDX_ARG,((char *)REFP(0x108af88)),0x87b9,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41edc8;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xd20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xd3c))) = 0x69;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ede6));
  F_00415690(((undefined1 *)(gen_frame + 0x360)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xb58106));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108af98));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41edfe;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x320)) GEN_EDX_ARG,((char *)REFP(0x108af98)),0xb58106,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ee0d;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xd40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xd5c))) = 0x6a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ee2b));
  F_00415690(((undefined1 *)(gen_frame + 0x320)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x2a5d00));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108afac));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ee43;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2e0)) GEN_EDX_ARG,((char *)REFP(0x108afac)),0x2a5d00,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ee52;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xd60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xd7c))) = 0x6b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ee70));
  F_00415690(((undefined1 *)(gen_frame + 0x2e0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xd14e78));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108afc0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ee88;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,((char *)REFP(0x108afc0)),0xd14e78,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ee97;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xd80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xd98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xd9c))) = 0x6c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41eeb5));
  F_00415690(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xb58106));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108afd4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41eecd;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x260)) GEN_EDX_ARG,((char *)REFP(0x108afd4)),0xb58106,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41eedc;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xda0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xdb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xdbc))) = 0x6d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41eefa));
  F_00415690(((undefined1 *)(gen_frame + 0x260)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108afe8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ef12;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x220)) GEN_EDX_ARG,((char *)REFP(0x108afe8)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ef21;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xdc0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xdd8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xddc))) = 0x6e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ef3f));
  F_00415690(((undefined1 *)(gen_frame + 0x220)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108aff8));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ef57;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,((char *)REFP(0x108aff8)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ef66;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xde0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xdf8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xdfc))) = 0x6f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41ef84));
  F_00415690(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108b004));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41ef9c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG,((char *)REFP(0x108b004)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41efab;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe00))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe18))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe1c))) = 0x70;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41efc9));
  F_00415690(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0xffffffff));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108b014));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41efde;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG,((char *)REFP(0x108b014)),0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41efed;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe20))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe38))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe3c))) = 0x71;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41f00b));
  F_00415690(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108b020));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41f023;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG,((char *)REFP(0x108b020)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41f032;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe40))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe58))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe5c))) = 0x72;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41f050));
  F_00415690(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = (undefined * PTR32 *)
                 ((code *)REFP(0xe36100));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108b030));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41f068;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe0)) GEN_EDX_ARG,((char *)REFP(0x108b030)),
                       ((code *)REFP(0xe36100)),0
                       ,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41f077;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe60))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe78))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe7c))) = 0x73;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41f095));
  F_00415690(((undefined1 *)(gen_frame + 0xe0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0xffffffff));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x454545));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108b040));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41f0ad;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG,((char *)REFP(0x108b040)),0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41f0bc;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe80))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xe98))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xe9c))) = 0x74;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41f0da));
  F_00415690(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x1));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x48)) = ((undefined * PTR32 *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108b050));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x41f0ed;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((char *)REFP(0x108b050)),0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(uVar2));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41f0fc;
  F_004156f0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xea0))) GEN_EDX_ARG,uVar2);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xeb8))) = this;
  *((undefined4 *)GEN_TOP((iVar1 + 0xebc))) = 0x75;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)GEN_TOP(0x41f11a));
  uVar2 = F_00415690(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0041f130 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0041f130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x41f130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x2fc, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 * puVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  int iVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2f4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2f8));
  if ((*((int *)GEN_TOP(((int)this + 8))) == 7) || (*((int *)GEN_TOP(((int)this + 8))) == 7)) {
    return *((uint *)GEN_TOP(((int)this + 8)));
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_FWD);
  if (*((int *)GEN_TOP(((int)this + 8))) == 2) {
    F_0042c880(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG);
    return 2;
  }
  if (*((int *)GEN_TOP(((int)this + 0x9c))) != *((int *)GEN_TOP(((int)this + 0xa0)))) {
    F_00415990(this GEN_EDX_ARG);
  }
  F_0042d4b0(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,0x1000);
  uVar5 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    iVar8 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((iVar8 + 0xc + *((int *)GEN_TOP(((int)this + 0x10))))));
      iVar1 = iVar8 + *((int *)GEN_TOP(((int)this + 0x10)));
      if (iVar2 != 0) {
        switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((iVar1 + 0x10))))) {
        case 1: ;
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x150)),"\r\n%s\r\n",iVar2);
          F_0042e360(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,uVar3);
          puVar4 = ((undefined1 *)(gen_frame + 0x150));
          break;
        case 2: ;
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x24c)),"%s\t%u\r\n",iVar2,*((undefined4 *)GEN_TOP((iVar1 + 0x14))));
          F_0042e360(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,uVar3);
          puVar4 = ((undefined1 *)(gen_frame + 0x24c));
          break;
        case 3: ;
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x1f8)),"%s\t%f\r\n",iVar2,
                               (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar1 + 0x14)))),
                               (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar1 + 0x14)))) >> 0x20
                                    ));
          F_0042e360(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,uVar3);
          puVar4 = ((undefined1 *)(gen_frame + 0x1f8));
          break;
        case 4: ;
          uVar3 = F_0042a990(*((undefined4 *)GEN_TOP((iVar1 + 0x14))) GEN_EDX_ARG);
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x1a4)),"%s\t%s\r\n",iVar2,uVar3);
          F_0042e360(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,uVar3);
          puVar4 = ((undefined1 *)(gen_frame + 0x1a4));
          break;
        default: ;
          goto switchD_0041f1ef_default;
        }
        F_0042c880(puVar4 GEN_EDX_ARG);
      }
switchD_0041f1ef_default: ;
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 0x20;
    } while (uVar5 < *((uint *)GEN_TOP(((int)this + 0xc))));
  }
  if ((*((int *)GEN_TOP(((int)this + 0x80))) != 0) &&
     (piVar6 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x7c))))), piVar6 != *((int * PTR32 *)GEN_TOP(((int)this + 0x7c))))) {
    do {
      piVar7 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(piVar6[2]))));
      if (piVar7 != *((int * PTR32 *)GEN_TOP(piVar6[2]))) {
        do {
          switch((unsigned int)(uintptr_t)(piVar7[6])) {
          case 1: ;
            uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0xfc)),"\r\n%s\r\n",piVar7[5]);
            F_0042e360(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,uVar5);
            puVar4 = ((undefined1 *)(gen_frame + 0xfc));
            break;
          case 2: ;
            uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x0)),"%s\t%u\r\n",piVar7[5],piVar7[7]);
            F_0042e360(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,uVar5);
            puVar4 = ((undefined1 *)(gen_frame + 0x0));
            break;
          case 3: ;
            uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x54)),"%s\t%f\r\n",piVar7[5],
                                 (int)(ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f(piVar7[7])))),
                                 (int)((ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f(piVar7[7])))) >> 0x20)
                                );
            F_0042e360(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,uVar5);
            puVar4 = ((undefined1 *)(gen_frame + 0x54));
            break;
          case 4: ;
            iVar8 = piVar7[5];
            uVar5 = F_0042a990(piVar7[7] GEN_EDX_ARG);
            uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0xa8)),"%s\t%s\r\n",iVar8,uVar5);
            F_0042e360(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG,uVar5);
            puVar4 = ((undefined1 *)(gen_frame + 0xa8));
            break;
          default: ;
            goto switchD_0041f301_default;
          }
          F_0042c880(puVar4 GEN_EDX_ARG);
switchD_0041f301_default: ;
          piVar7 = ((int *)GEN_TOP(*piVar7));
        } while (piVar7 != ((int *)GEN_TOP(*((int *)GEN_TOP(piVar6[2])))));
      }
      piVar6 = ((int *)GEN_TOP(*piVar6));
    } while (piVar6 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 0x7c))))));
  }
  F_0042ccf0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2a0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x2a0)) GEN_EDX_ARG);
  return 3;
}

/* ref: FUN_0041f460 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0041f460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x41f460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  uVar3 = F_0041f130(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  if (uVar3 != 3) {
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    return uVar3;
  }
  uVar3 = F_0042a970(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  (*(uint *)(gen_frame + 0x0)) = uVar3;
  iVar2 = *piVar1;
  puVar4 = &(*(uint *)(gen_frame + 0x0));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 8))))(*((undefined4 *)GEN_TOP(((int)this + 0x14))),param_1,uVar3,puVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0041f500 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0041f500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x41f500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x308, 8, 4);
  int iVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 * this_00;
  int * piVar7;
  int iVar8;
  int * piVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x300)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x304));
  if ((*((int *)GEN_TOP(((int)this + 8))) == 7) || (*((int *)GEN_TOP(((int)this + 8))) == 7)) {
    return *((uint *)GEN_TOP(((int)this + 8)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_2;
  F_0042b630(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_FWD);
  if (*((int *)GEN_TOP(((int)this + 0x9c))) != *((int *)GEN_TOP(((int)this + 0xa0)))) {
    F_00415990(this GEN_EDX_ARG);
  }
  F_0042d4b0(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,0x1000);
  iVar8 = 0;
  (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x0));
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc + iVar8)));
      iVar3 = *((int *)GEN_TOP(((int)this + 0x10))) + iVar8;
      if (iVar1 != 0) {
        switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((iVar3 + 0x10))))) {
        case 1: ;
          uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0xb4)),"\r\n%s\r\n",iVar1);
          F_0042e360(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,uVar4);
          this_00 = ((undefined1 *)(gen_frame + 0xb4));
          break;
        case 2: ;
          uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x258)),"%s\t%u\r\n",iVar1,*((undefined4 *)GEN_TOP((iVar3 + 0x14))));
          F_0042e360(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,uVar4);
          this_00 = ((undefined1 *)(gen_frame + 0x258));
          break;
        case 3: ;
          (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((iVar3 + 0x14)));
          dVar2 = (double)*((float *)GEN_TOP((iVar3 + 0x14)));
          uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x204)),"%s\t%f\r\n",iVar1,(int)(ulonglong)gen_d2bits(dVar2),
                               (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
          F_0042e360(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,uVar4);
          this_00 = ((undefined1 *)(gen_frame + 0x204));
          break;
        case 4: ;
          uVar4 = F_0042a990(*((undefined4 *)GEN_TOP((iVar3 + 0x14))) GEN_EDX_ARG);
          uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x1b0)),"%s\t%s\r\n",iVar1,uVar4);
          F_0042e360(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,uVar4);
          this_00 = ((undefined1 *)(gen_frame + 0x1b0));
          break;
        default: ;
          goto switchD_0041f59e_default;
        }
        F_0042c880(this_00 GEN_EDX_ARG);
      }
switchD_0041f59e_default: ;
      uVar4 = (int)(*(int * PTR32 *)(gen_frame + 0x8)) + 1;
      iVar8 = iVar8 + 0x20;
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(uVar4));
    } while (uVar4 < *((uint *)GEN_TOP(((int)this + 0xc))));
  }
  if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
    piVar9 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x7c)))));
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar9;
    if (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x7c)))) {
      do {
        piVar7 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(piVar9[2]))));
        (*(int * PTR32 *)(gen_frame + 0x8)) = piVar9;
        if (piVar7 != *((int * PTR32 *)GEN_TOP(piVar9[2]))) {
          do {
            switch((unsigned int)(uintptr_t)(piVar7[6])) {
            case 1: ;
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x108)),"\r\n%s\r\n",piVar7[5]);
              F_0042e360(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
              break;
            case 2: ;
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0xc)),"%s\t%u\r\n",piVar7[5],piVar7[7]);
              F_0042e360(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
              break;
            case 3: ;
              (*(float *)(gen_frame + 0x4)) = gen_bits2f(piVar7[7]);
              dVar2 = ((double)GEN_TOD(gen_bits2f(piVar7[7])));
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x60)),"%s\t%f\r\n",piVar7[5],
                                   (int)(ulonglong)gen_d2bits(dVar2),
                                   (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
              F_0042e360(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
              break;
            case 4: ;
              iVar8 = piVar7[5];
              uVar4 = F_0042a990(piVar7[7] GEN_EDX_ARG);
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x15c)),"%s\t%s\r\n",iVar8,uVar4);
              F_0042e360(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG,uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x15c)) GEN_EDX_ARG);
              piVar9 = (*(int * PTR32 *)(gen_frame + 0x8));
            }
            piVar7 = ((int *)GEN_TOP(*piVar7));
          } while (piVar7 != ((int *)GEN_TOP(*((int *)GEN_TOP(piVar9[2])))));
        }
        piVar9 = ((int *)GEN_TOP(*piVar9));
        (*(int * PTR32 *)(gen_frame + 0x8)) = piVar9;
      } while (piVar9 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 0x7c))))));
    }
  }
  uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  uVar5 = F_00406bb0(uVar4,0,0);
  uVar4 = (*(uint *)(gen_frame + 0x0));
  uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG);
  F_00c46aa0(uVar5,uVar6,uVar4);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x14))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1,uVar5,&(*(uint *)(gen_frame + 0x0)));
  *((uint *)GEN_TOP(((int)this + 8))) = uVar4;
  uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x2ac)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_0041f880 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_0041f880(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x41f880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0xc8, 8, 4);
  float fVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte * pbVar5;
  int iVar6;
  char * pcVar7;
  ulong uVar8;
  byte * pbVar9;
  ulong * puVar10;
  int * piVar11;
  int * piVar12;
  bool bVar13;
  ulonglong uVar14;
  double dVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc4));
  (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(param_3));
  (*(int * PTR32 *)(gen_frame + 0x64)) = param_1;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x41f8a8));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,param_3);
  piVar12 = *((int * PTR32 *)GEN_TOP(*param_1));
  (*(int * PTR32 *)(gen_frame + 0x68)) = piVar12;
  piVar11 = param_1;
  if (piVar12 != ((int *)GEN_TOP(*param_1))) {
    do {
      if ((*(int * PTR32 *)(gen_frame + 0x68))[6] == param_2) {
        pbVar9 = ((byte *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x68))[5]));
        (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x41f8d1));
        pbVar5 = ((byte *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG)));
        do {
          bVar2 = *pbVar9;
          bVar13 = bVar2 < *pbVar5;
          if (bVar2 != *pbVar5) {
LAB_0041f8f3: ;
            iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_0041f8f8;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar9[1];
          bVar13 = bVar2 < pbVar5[1];
          if (bVar2 != pbVar5[1]) goto LAB_0041f8f3;
          pbVar9 = pbVar9 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar2 != 0);
        iVar6 = 0;
LAB_0041f8f8: ;
        if ((iVar6 == 0) && (uVar3 = *((uint *)GEN_TOP((param_4 + 4))), uVar3 < *((uint *)GEN_TOP((param_4 + 8))))) {
          iVar6 = uVar3 * 0x54 + *((int *)GEN_TOP((param_4 + 0x60)));
          (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(iVar6));
          *((uint *)GEN_TOP((param_4 + 4))) = uVar3 + 1;
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x41f921));
          F_0042ccf0(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,iVar6);
          piVar12 = *((int * PTR32 *)GEN_TOP(*piVar11));
          if (piVar12 != ((int *)GEN_TOP(*piVar11))) {
            do {
              pbVar9 = ((byte *)GEN_TOP(piVar12[5]));
              (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x41f93b));
              pbVar5 = ((byte *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG)));
              do {
                bVar2 = *pbVar9;
                bVar13 = bVar2 < *pbVar5;
                if (bVar2 != *pbVar5) {
LAB_0041f960: ;
                  iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_0041f965;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar9[1];
                bVar13 = bVar2 < pbVar5[1];
                if (bVar2 != pbVar5[1]) goto LAB_0041f960;
                pbVar9 = pbVar9 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar2 != 0);
              iVar6 = 0;
LAB_0041f965: ;
              if (iVar6 == 0) goto LAB_0041fa38;
              piVar12 = ((int *)GEN_TOP(*piVar12));
            } while (piVar12 != ((int *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x64)))));
          }
          piVar12 = (*(int * PTR32 *)(gen_frame + 0x68));
          if (*((int *)GEN_TOP((param_4 + 4))) != 0) {
            *((int *)GEN_TOP((param_4 + 4))) = *((int *)GEN_TOP((param_4 + 4))) - 1;
          }
          if (param_2 == 2) {
            iVar6 = *((int *)GEN_TOP((param_4 + 4)));
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x0));
            *((int *)GEN_TOP((param_4 + 4))) = iVar6 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x0));
            (*(char * PTR32 *)(gen_frame + 0x48)) = ((char *)GEN_TOP(0x41fa06));
            pcVar7 = ((char *)GEN_TOP(F_0042a990(iVar6 * 0x54 + *((int *)GEN_TOP((param_4 + 0x60))) GEN_EDX_ARG)));
            (*(char * PTR32 *)(gen_frame + 0x48)) = pcVar7;
            (*(undefined4 *)(gen_frame + 0x44)) = 0x41fa0c;
            uVar8 = F_00c4abb6(pcVar7,(*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)),(int)(*(ulong * PTR32 *)(gen_frame + 0x50)));
            uVar4 = (*(int * PTR32 *)(gen_frame + 0x68))[7];
            puVar10 = (ulong *)((*(int * PTR32 *)(gen_frame + 0x68)) + 2);
            if ((uVar8 < (uint)(*(int * PTR32 *)(gen_frame + 0x68))[3]) || ((uint)(*(int * PTR32 *)(gen_frame + 0x68))[4] < uVar8)) {
              uVar8 = *puVar10;
            }
            (*(int * PTR32 *)(gen_frame + 0x68))[7] = uVar8;
            if ((((undefined *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x68))[8])) != ((undefined *)GEN_TOP(0x0))) && (uVar4 != uVar8)) {
              (*(ulong * PTR32 *)(gen_frame + 0x50)) = puVar10;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x41fa38));
              F_00414670(((undefined *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x68))[8])) GEN_EDX_ARG,puVar10);
            }
          }
          else if (param_2 == 3) {
            iVar6 = *((int *)GEN_TOP((param_4 + 4)));
            *((int *)GEN_TOP((param_4 + 4))) = iVar6 + 1;
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x41f9d0));
            pcVar7 = ((char *)GEN_TOP(F_0042a990(iVar6 * 0x54 + *((int *)GEN_TOP((param_4 + 0x60))) GEN_EDX_ARG)));
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = (ulong *)pcVar7;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x41f9d6));
            dVar15 = F_00c4acaa(pcVar7);
            fVar1 = (float)dVar15;
            (*(float *)(gen_frame + 0x60)) = fVar1;
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)(uintptr_t)gen_fl2bits((float)(fVar1)));
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x41f9ea));
            F_00414ad0((*(int * PTR32 *)(gen_frame + 0x68)) + 2 GEN_EDX_ARG,fVar1);
          }
          else if (param_2 == 4) {
            iVar6 = *((int *)GEN_TOP((param_4 + 4)));
            *((int *)GEN_TOP((param_4 + 4))) = iVar6 + 1;
            F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,iVar6 * 0x54 + *((int *)GEN_TOP((param_4 + 0x60))));
            F_00414b60(piVar12 + 2 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                         (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(char * PTR32 *)(gen_frame + 0x48)),(*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)),
                         (*(ulong * PTR32 *)(gen_frame + 0x50)));
          }
        }
      }
LAB_0041fa38: ;
      piVar12 = ((int *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x68))));
      (*(int * PTR32 *)(gen_frame + 0x68)) = piVar12;
      piVar11 = (*(int * PTR32 *)(gen_frame + 0x64));
    } while (piVar12 != ((int *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x64)))));
  }
  (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x41fa53));
  uVar14 = F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x5c)) = 0x41fa60;
  return (uint)uVar14;
}

/* ref: FUN_0041fa70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0041fa70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x41fa70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x7c)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x131)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x80))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 0x80))) = *((int *)GEN_TOP(((int)this + 0x80))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_0041fae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0041fae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x41fae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0041fb00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0041fb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x41fb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: Common::Configuration::ArrayParser::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0041fb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x41fb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_01;
  uint uVar4;
  bool bVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  this_00 = this + 0xc;
  uVar4 = 1;
  uVar2 = F_0042bb20(this_00 GEN_EDX_FWD,0);
  if (uVar2 == 0x7b) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG," ,-\t\n}",REFG(undefined4, 0x108cc50));
    uVar2 = F_0042e520(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),1);
    bVar5 = uVar2 != REFG(undefined4, 0x108cc50);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (bVar5) {
      do {
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1088148)),REFG(undefined4, 0x108cc50));
        uVar2 = F_0042e520(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG," ,-\t\n}",REFG(undefined4, 0x108cc50));
        uVar4 = F_0042c8b0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2 + 1);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        uVar3 = F_0042d2f0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2,uVar4 - uVar2);
        uVar2 = *(uint *)(this + 100);
        if ((uVar3 < uVar2) && (uVar1 = *(uint *)(this + 0x60), uVar1 <= uVar3)) {
          if (uVar2 == *(uint *)(this + 0x68)) {
            F_00423880(this + 0x60 GEN_EDX_ARG,1);
          }
          this_01 = *(undefined * PTR32 *)(this + 100);
          if (this_01 != ((undefined *)GEN_TOP(0x0))) {
            uVar3 = ((int)(uVar3 - uVar1) / 0x54) * 0x54 + *(int *)(this + 0x60);
LAB_0041fc54: ;
            F_0042cbc0(this_01 GEN_EDX_ARG,uVar3);
          }
        }
        else {
          if (uVar2 == *(uint *)(this + 0x68)) {
            F_00423880(this + 0x60 GEN_EDX_ARG,1);
          }
          this_01 = *(undefined * PTR32 *)(this + 100);
          if (this_01 != ((undefined *)GEN_TOP(0x0))) goto LAB_0041fc54;
        }
        *(int *)(this + 100) = *(int *)(this + 100) + 0x54;
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG," ,-\t\n}",REFG(undefined4, 0x108cc50));
        uVar2 = F_0042e520(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar4);
        bVar5 = uVar2 != REFG(undefined4, 0x108cc50);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      } while (bVar5);
    }
    uVar2 = (*(int *)(this + 100) - *(int *)(this + 0x60)) / 0x54;
    *(uint *)(this + 8) = uVar2;
    if (**(char * PTR32 *)this_00 != '\0') {
      uVar2 = F_0042aca0(this_00 GEN_EDX_ARG);
    }
  }
  return uVar2;
}

/* ref: FUN_0041fce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0041fce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x41fce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  return (uint)uVar1;
}

