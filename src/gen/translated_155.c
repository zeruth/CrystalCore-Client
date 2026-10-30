#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00c88950 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c88950(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc88950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c887e0(param_1 - 0x94);
  return uVar1;
}

/* ref: FUN_00c88960 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c88960(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc88960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c88800(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00c88970 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c88970(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc88970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c887c0(param_1 - 0x94,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c88980 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c88980(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc88980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c887e0(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00c88990 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c88990(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc88990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  short sVar1;
  short * psVar2;
  uint uVar3;
  short * psVar4;
  uint uVar5;
  
  uVar3 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar3 = 0x80070057;
  }
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  uVar3 = 0;
  psVar4 = param_1;
  if (param_2 != 0) {
    psVar2 = param_1;
    uVar5 = param_2;
    while ((psVar4 = psVar2, (0x7ffffffe - param_2) + uVar5 != 0 &&
           (sVar1 = *((short *)GEN_TOP(((param_3 - (int)param_1) + (int)psVar4))), sVar1 != 0))) {
      *psVar4 = sVar1;
      uVar5 = uVar5 - 1;
      psVar2 = psVar4 + 1;
      if (uVar5 == 0) {
        *psVar4 = 0;
        return 0x8007007a;
      }
    }
    if (uVar5 != 0) goto LAB_00c88a00;
  }
  psVar4 = psVar4 - 1;
  uVar3 = 0x8007007a;
LAB_00c88a00: ;
  *psVar4 = 0;
  return uVar3;
}

/* ref: FUN_00c88a10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c88a10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc88a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  if ((param_1 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = F_00c83e00(param_2,param_1,param_3);
    if (-1 < (int)uVar1) {
      return uVar1;
    }
  }
  if (param_3 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_3 = 0;
  }
  return uVar1;
}

/* ref: FUN_00c88a70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88a70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc88a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x1128a54));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1[3] + 0xc))) + 8))))(((int *)GEN_TOP((param_1[3] + 0xc))) GEN_EDX_FWD);
  F_00c8df10(param_1 + 6 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c88ab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88ab0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc88ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x1128a74));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1[2] + 0xc))) + 8))))(((int *)GEN_TOP((param_1[2] + 0xc))) GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c88ae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88ae0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc88ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[22])REFP(0x1128a98));
  if (param_1[0xf] != 0) {
    F_00c8e650(param_1[0xf]);
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c88b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88b20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc88b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c86550(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c88b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88b60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc88b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x1128bf4));
  param_1[3] = (*(undefined * PTR32 (*)[11])REFP(0x1128bc8));
  F_00c86f50(param_1 + 3);
  F_00c87190(param_1 GEN_EDX_ARG);
  if ((HANDLE)param_1[0xc] != (HANDLE)0x0) {
    gen_imp_CloseHandle((HANDLE)param_1[0xc]);
  }
  piVar1 = ((int *)GEN_TOP(param_1[0x16]));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  F_00c83a60();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c88bd0 */
GEN_LIB GEN_FRAME uint F_00c88bd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc88bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1;
  if (0 < (int)param_1) {
    uVar1 = param_1 & 0xffff | 0x80070000;
  }
  return uVar1;
}

/* ref: FUN_00c88bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(DWORD param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc88bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(DWORD param_1 = (DWORD)gen_a1;)
  DWORD DVar1;
  
  DVar1 = gen_imp_WaitForSingleObject(*(HANDLE *)this,param_1);
  return (uint)(DVar1 == 0);
}

/* ref: FUN_00c88ca0 */
GEN_LIB GEN_NOFRAME uint F_00c88ca0(GEN_P(int in_ecx, unsigned int gen_a0), GEN_P(short * in_edx, unsigned int gen_a1), GEN_P(int * in_edi, unsigned int gen_a2))
{
  GEN_ENTER(0xc88ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(short * in_edx = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = in_ecx;
  do {
    if (iVar2 == 0) {
LAB_00c88cc1: ;
      uVar1 = 0x80070057;
LAB_00c88cc6: ;
      if (in_edi != ((int *)GEN_TOP(0x0))) {
        if (-1 < (int)uVar1) {
          *in_edi = in_ecx - iVar2;
          return uVar1;
        }
        *in_edi = 0;
      }
      return uVar1;
    }
    if (*in_edx == 0) {
      if (iVar2 != 0) goto LAB_00c88cc6;
      goto LAB_00c88cc1;
    }
    in_edx = in_edx + 1;
    iVar2 = iVar2 - 1;
  } while( true );
}

/* ref: FUN_00c88ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88ce0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc88ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if ((in_ecx == 0) || (param_2 < in_ecx)) {
    uVar1 = 0x80070057;
  }
  return uVar1;
}

/* ref: FUN_00c88d00 */
GEN_LIB GEN_FRAME uint F_00c88d00(GEN_P(undefined * in_eax, unsigned int gen_a0), GEN_P(char * in_ecx, unsigned int gen_a1), GEN_P(char * in_edi, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc88d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * in_eax = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * in_ecx = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * in_edi = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a4;)
  uint uVar1;
  uint uVar2;
  uint _Count;
  
  _Count = param_4 - 1;
  uVar2 = 0;
  uVar1 = F_01051c9c(in_edi,_Count,in_ecx,in_eax);
  if (((int)uVar1 < 0) || (_Count < uVar1)) {
    in_edi[_Count] = '\0';
    uVar2 = 0x8007007a;
    uVar1 = _Count;
  }
  else if (uVar1 == _Count) {
    in_edi[_Count] = '\0';
    uVar1 = _Count;
  }
  if (param_5 != ((uint *)GEN_TOP(0x0))) {
    *param_5 = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00c88d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(BOOL param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc88d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(BOOL param_1 = (BOOL)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,param_1,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_2 != ((int *)GEN_TOP(0x0)))) && (-1 < *param_2)) {
    *param_2 = -0x7ff8fff2;
  }
  return (uint)this;
}

/* ref: FUN_00c88d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc88d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != ((int *)GEN_TOP(0x0)))) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  return (uint)this;
}

/* ref: FUN_00c88dd0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c88dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc88dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(HANDLE *)this != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)this);
  }
  return 0;
}

/* ref: FUN_00c88de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc88de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != ((int *)GEN_TOP(0x0)))) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  return (uint)this;
}

/* ref: FUN_00c88e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc88e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  DWORD DVar2;
  uint dwMilliseconds;
  
  uVar1 = param_1;
  dwMilliseconds = param_1;
  if (param_1 != 0xffffffff) {
    DVar2 = gen_imp_timeGetTime();
    param_1 = DVar2;
  }
  while( true ) {
    DVar2 = gen_imp_MsgWaitForMultipleObjects(1,this,0,dwMilliseconds,0x40);
    if (DVar2 != 1) break;
    gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0x0)),(HWND)0x0,0,0,0);
    if (dwMilliseconds != 0xffffffff) {
      DVar2 = gen_imp_timeGetTime();
      if (DVar2 - param_1 < uVar1) {
        dwMilliseconds = uVar1 - (DVar2 - param_1);
      }
      else {
        dwMilliseconds = 0;
      }
    }
  }
  return (uint)(DVar2 == 0);
}

/* ref: FUN_00c88ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc88ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA(0,1,0,0);
  *((HANDLE *)GEN_TOP(((int)this + 4))) = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != ((int *)GEN_TOP(0x0)))) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *((HANDLE *)GEN_TOP(((int)this + 8))) = pvVar1;
  if (((pvVar1 == (HANDLE)0x0) && (param_1 != ((int *)GEN_TOP(0x0)))) && (-1 < *param_1)) {
    *param_1 = -0x7ff8fff2;
  }
  gen_imp_InitializeCriticalSection((int)this + 0x18);
  gen_imp_InitializeCriticalSection((int)this + 0x30);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  return (uint)this;
}

/* ref: FUN_00c88f20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c88f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc88f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  HANDLE hHandle;
  
  hHandle = (HANDLE)gen_imp_InterlockedExchange(((LONG *)GEN_TOP(((int)this + 0x14))),0);
  if (hHandle != (HANDLE)0x0) {
    gen_imp_WaitForSingleObject(hHandle,0xffffffff);
    gen_imp_CloseHandle(hHandle);
  }
  gen_imp_DeleteCriticalSection((int)this + 0x30);
  gen_imp_DeleteCriticalSection((int)this + 0x18);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    gen_imp_CloseHandle(*((int *)GEN_TOP(((int)this + 8))));
  }
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    gen_imp_CloseHandle(*((int *)GEN_TOP(((int)this + 4))));
  }
  return 0;
}

/* ref: FUN_00c88f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c88f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc88f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this + 4))));
  gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP(((int)this + 8))),0xffffffff);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}

/* ref: FUN_00c88fe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c88fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc88fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP(((int)this + 4))),0xffffffff);
  return *((uint *)GEN_TOP(((int)this + 0xc)));
}

/* ref: FUN_00c89000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c89000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc89000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  DWORD DVar1;
  
  DVar1 = gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP(((int)this + 4))),0);
  if (DVar1 != 0) {
    return 0;
  }
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  }
  return 1;
}

/* ref: FUN_00c89040 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c89040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc89040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  gen_imp_ResetEvent(*((HANDLE *)GEN_TOP(((int)this + 4))));
  return (uint)(gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this + 8)))));
}

/* ref: FUN_00c890b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c890b0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc890b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  gen_imp_CoInitialize((LPVOID)0x0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)));
  } while (uVar1 == 0);
  gen_imp_CoUninitialize();
  return uVar1;
}

/* ref: FUN_00c89120 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89120(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc89120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined1 * puVar3;
  undefined4 * puVar4;
  undefined1 * puVar5;
  undefined4 * puVar6;
  
  if ((param_2 < param_1) && (param_1 < ((undefined4 *)GEN_TOP(((int)param_2 + param_3))))) {
    puVar3 = ((undefined1 *)GEN_TOP(((int)param_2 + param_3)));
    puVar5 = ((undefined1 *)GEN_TOP(((int)param_1 + param_3)));
    uVar1 = param_3;
    while( true ) {
      puVar5 = puVar5 - 1;
      puVar3 = puVar3 - 1;
      if (uVar1 == 0) break;
      uVar1 = uVar1 - 1;
      *puVar5 = *puVar3;
    }
    return (uint)param_1;
  }
  uVar2 = param_3 & 3;
  puVar4 = param_2;
  puVar6 = param_1;
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (uVar2 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = ((undefined4 *)GEN_TOP(((int)puVar4 + 1)));
      puVar6 = ((undefined4 *)GEN_TOP(((int)puVar6 + 1)));
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00c89170 */
GEN_LIB GEN_FRAME uint F_00c89170(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xc89170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  if ((param_7 <= param_6 + param_7) && (param_6 + param_7 <= param_5)) {
    if ((param_7 <= param_3 + param_7) && (param_3 + param_7 <= param_2)) {
      F_00c89120(param_1 + param_3,param_4 + param_6,param_7);
      return 0;
    }
  }
  return 0x80070057;
}

/* ref: FUN_00c891c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c891c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(wchar_t * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc891c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;)
  BSTR pOVar1;
  
  pOVar1 = gen_imp_SysAllocString(param_2);
  *param_1 = pOVar1;
  return (-(uint)(pOVar1 != (BSTR)0x0) & 0x7ff8fff2) + 0x8007000e;
}

/* ref: FUN_00c891f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c891f0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc891f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if ((BSTR)*param_1 == (BSTR)0x0) {
    return 1;
  }
  gen_imp_SysFreeString((BSTR)*param_1);
  return 0;
}

/* ref: FUN_00c89220 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89220(GEN_P(HANDLE param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc89220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(HANDLE param_1 = (HANDLE)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  uint uVar1;
  int iVar2;
  HANDLE pvVar3;
  uint uVar4;
  DWORD DVar5;
  UINT UVar6;
  uint dwMilliseconds;
  WPARAM wParam;
  LPARAM lParam;
  
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(HANDLE *)(gen_frame + 0x1c)) = param_1;
  (*(int *)(gen_frame + 0x20)) = param_5;
  if ((param_2 != 0xffffffff) && (param_2 != 0)) {
    param_1 = (HANDLE)gen_imp_GetTickCount();
  }
  uVar4 = (param_5 != 0) + 1;
  (*(uint *)(gen_frame + 0x28)) = uVar4;
  uVar1 = gen_imp_WaitForMultipleObjects(uVar4,&(*(HANDLE *)(gen_frame + 0x1c)),0,0);
  if (uVar4 <= uVar1) {
    do {
      dwMilliseconds = param_2;
      if (10 < param_2) {
        dwMilliseconds = 10;
      }
      uVar1 = gen_imp_MsgWaitForMultipleObjects(uVar4,&(*(HANDLE *)(gen_frame + 0x1c)),0,dwMilliseconds,(uint)(param_3 != 0) * 8 + 0x40);
      if ((uVar1 != uVar4) && ((uVar1 != 0x102 || (dwMilliseconds == param_2)))) break;
      if (param_3 != 0) {
        iVar2 = gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0x0)),param_3,param_4,param_4,1);
        while (iVar2 != 0) {
          gen_imp_DispatchMessageA(((undefined1 *)(gen_frame + 0x0)));
          iVar2 = gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0x0)),param_3,param_4,param_4,1);
        }
      }
      gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0x0)),0,0,0,0);
      if ((param_2 != 0xffffffff) && (param_2 != 0)) {
        pvVar3 = (HANDLE)gen_imp_GetTickCount();
        if (param_2 < (uint)((int)pvVar3 - (int)param_1)) {
          param_2 = 0;
          param_1 = pvVar3;
        }
        else {
          param_2 = param_2 - ((int)pvVar3 - (int)param_1);
          param_1 = pvVar3;
        }
      }
      if ((*(int *)(gen_frame + 0x2c)) == 0) {
        pvVar3 = gen_imp_GetCurrentThread();
        uVar4 = gen_imp_GetThreadPriority(pvVar3);
        (*(uint *)(gen_frame + 0x24)) = uVar4;
        if (uVar4 < 2) {
          iVar2 = 2;
          pvVar3 = gen_imp_GetCurrentThread();
          gen_imp_SetThreadPriority(pvVar3,iVar2);
        }
        (*(int *)(gen_frame + 0x2c)) = 1;
      }
      uVar4 = (*(uint *)(gen_frame + 0x28));
      uVar1 = gen_imp_WaitForMultipleObjects((*(uint *)(gen_frame + 0x28)),&(*(HANDLE *)(gen_frame + 0x1c)),0,0);
    } while (uVar4 <= uVar1);
    if ((*(int *)(gen_frame + 0x2c)) != 0) {
      uVar4 = (*(uint *)(gen_frame + 0x24));
      pvVar3 = gen_imp_GetCurrentThread();
      gen_imp_SetThreadPriority(pvVar3,uVar4);
      DVar5 = gen_imp_GetQueueStatus(8);
      if ((DVar5 >> 0x10 & 8) != 0) {
        if (REFG(undefined4, 0x15d764c) != 0) goto LAB_00c893d1;
        REFG(undefined4, 0x15d764c) = gen_imp_RegisterWindowMessageA(((char *)REFP(0x1128c34)));
        UVar6 = REFG(undefined4, 0x15d764c);
        while (UVar6 != 0) {
LAB_00c893d1: ;
          UVar6 = gen_imp_PeekMessageA(((undefined1 *)(gen_frame + 0x0)),(HWND)0xffffffff,REFG(undefined4, 0x15d764c),REFG(undefined4, 0x15d764c),1);
        }
        lParam = 0;
        wParam = 0;
        UVar6 = REFG(undefined4, 0x15d764c);
        DVar5 = gen_imp_GetCurrentThreadId();
        gen_imp_PostThreadMessageA(DVar5,UVar6,wParam,lParam);
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00c89410 */
GEN_LIB GEN_NOFRAME uint F_00c89410(void)
{
  GEN_ENTER(0xc89410u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = gen_imp_GetLastError();
  if (uVar1 == 0) {
    uVar1 = 0x80004005;
  }
  else if (0 < (int)uVar1) {
    return uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}

/* ref: FUN_00c89430 */
GEN_LIB GEN_FRAME uint F_00c89430(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc89430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
  }
  piVar1 = ((int *)GEN_TOP(*param_1));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  *param_1 = (int)param_2;
  return (uint)param_2;
}

/* ref: FUN_00c89460 */
GEN_LIB_GS GEN_FRAME byte F_00c89460(void)
{
  GEN_ENTER(0xc89460u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x9c, 4, 4);
  BOOL BVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x94)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x98));
  ((byte *)(gen_frame + 0x0))[0] = 0x94;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  BVar1 = gen_imp_GetVersionExA((GEN_LPANY)((byte *)(gen_frame + 0x0)));
  if ((BVar1 != 0) && ((5 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) || (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) == 5 && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) != 0)))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c894d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c894d0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc894d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  HMODULE hModule;
  FARPROC pFVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x80004005;
  hModule = gen_imp_GetModuleHandleA(((char *)REFP(0x1128c14)));
  if (hModule != (HMODULE)0x0) {
    pFVar1 = gen_imp_GetProcAddress(hModule,((char *)REFP(0x1128c20)));
    if (pFVar1 != (FARPROC)0x0) {
      uVar3 = ((code *)pFVar1)(0,4);
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG);
  if (-1 < (int)uVar3) {
    gen_imp_CoUninitialize();
  }
  return uVar2;
}

/* ref: FUN_00c89520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c89520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc89520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
    pvVar1 = gen_imp_CreateThread((GEN_LPANY)0x0,0,((code *)REFP(0xc894d0)),this,0,(LPDWORD)&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    *((HANDLE *)GEN_TOP(((int)this + 0x14))) = pvVar1;
    if (pvVar1 != (HANDLE)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 1;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c89580 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c89580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc89580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*((HANDLE *)GEN_TOP(((int)this + 8))) != (HANDLE)0x0) {
    gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP(((int)this + 8))),0xffffffff);
    gen_imp_CloseHandle(*((undefined4 *)GEN_TOP(((int)this + 8))));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc)));
  while ((*(undefined * PTR32 *)(gen_frame + 0x0)) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00c8d7f0(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    F_00406ad0(uVar1);
  }
  F_00c8d780(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 0x3c))) != 0) {
    gen_imp_CloseHandle(*((int *)GEN_TOP(((int)this + 0x3c))));
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x24));
  F_00c8df10(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00c89650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c89650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc89650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 * puVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x24);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  puVar1 = ((undefined8 *)GEN_TOP(F_00c8df70(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG)));
  while (puVar1 == ((undefined8 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(((int)this + 0x40))) = *((int *)GEN_TOP(((int)this + 0x40))) + 1;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP(((int)this + 0x3c))),0xffffffff);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    puVar1 = ((undefined8 *)GEN_TOP(F_00c8df70(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG)));
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  uVar2 = F_00406ad0(puVar1);
  return uVar2;
}

/* ref: FUN_00c896d0 */
GEN_LIB_GS GEN_FRAME uint GEN_STDCALL F_00c896d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(LPWSTR param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc896d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(LPWSTR param_2 = (LPWSTR)gen_a1;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  uVar1 = F_00c89890(((CHAR *)(gen_frame + 0x0)),0xc,&REFG(undefined, 0x1128c30),param_1);
  if ((int)uVar1 < 0) {
    *param_2 = L'\0';
    return uVar1;
  }
  uVar1 = gen_imp_MultiByteToWideChar(0,0,((CHAR *)(gen_frame + 0x0)),-1,param_2,0xc);
  return uVar1;
}

/* ref: FUN_00c89740 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc89740u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(0x0));
  if ((*(int *)&gen_args[0]) == 0) {
    uVar2 = 0x80070057;
  }
  else {
    uVar2 = F_00c88ca0(50000,(*(int *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[1]));
    if (-1 < (int)uVar2) {
      iVar4 = (int)(*(undefined4 * PTR32 *)&gen_args[1]) * 2;
      goto LAB_00c8978a;
    }
  }
  iVar4 = 0;
LAB_00c8978a: ;
  if (-1 < (int)uVar2) {
    pvVar3 = gen_imp_CoTaskMemAlloc(iVar4 + 2U);
    *puVar1 = pvVar3;
    if (pvVar3 == (LPVOID)0x0) {
      return 0x8007000e;
    }
    F_00c46aa0(pvVar3,(*(int *)&gen_args[0]),iVar4 + 2U);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00c897c0 */
GEN_LIB_GS GEN_FRAME uint F_00c897c0(GEN_P(UINT param_1, unsigned int gen_a0), GEN_P(UINT param_2, unsigned int gen_a1), GEN_P(GEN_LPANY param_3, unsigned int gen_a2), GEN_P(DWORD_PTR param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc897c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(UINT param_1 = (UINT)gen_a0;)
  GEN_PIN(UINT param_2 = (UINT)gen_a1;)
  GEN_PIN(GEN_LPANY param_3 = (GEN_LPANY)gen_a2;)
  GEN_PIN(DWORD_PTR param_4 = (DWORD_PTR)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_FRAME_DECL_GS(0x9c, 4, 4);
  BOOL BVar1;
  uint MVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x94)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x98));
  if (REFG(char, 0x15d7651) == '\0') {
    ((byte *)(gen_frame + 0x0))[0] = 0x94;
    ((byte *)(gen_frame + 0x0))[1] = 0;
    ((byte *)(gen_frame + 0x0))[2] = 0;
    ((byte *)(gen_frame + 0x0))[3] = 0;
    BVar1 = gen_imp_GetVersionExA((GEN_LPANY)((byte *)(gen_frame + 0x0)));
    if ((BVar1 == 0) || (((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) < 6 && (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) != 5 || ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) == 0))))))
    {
      REFG(char, 0x15d7650) = '\0';
    }
    else {
      REFG(char, 0x15d7650) = '\x01';
    }
    REFG(char, 0x15d7651) = '\x01';
  }
  if (REFG(char, 0x15d7650) != '\0') {
    param_5 = param_5 | 0x100;
  }
  MVar2 = gen_imp_timeSetEvent(param_1,param_2,param_3,param_4,param_5);
  return MVar2;
}

/* ref: FUN_00c89870 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89870(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc89870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c8d7f0(param_1);
  return uVar1;
}

/* ref: FUN_00c89890 */
GEN_LIB GEN_FRAME uint F_00c89890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc89890u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint _Count;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
  }
  if (-1 < (int)uVar1) {
    _Count = param_2 - 1;
    uVar1 = 0;
    uVar2 = F_01051c9c(param_1,_Count,param_3,((undefined *)&gen_args[3]));
    if (((int)uVar2 < 0) || (_Count < uVar2)) {
      param_1[_Count] = '\0';
      uVar1 = 0x8007007a;
    }
    else if (uVar2 == _Count) {
      param_1[_Count] = '\0';
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00c898f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c898f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc898f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_args[1]) >> 1;
  (*(uint *)&gen_args[1]) = 0;
  if (((*(int *)&gen_args[0]) == 0) || (0x7fffffff < uVar1)) {
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = F_00c88ca0(uVar1,(*(int *)&gen_args[0]),&(*(uint *)&gen_args[1]));
  }
  if ((*(int * PTR32 *)&gen_args[2]) != ((int *)GEN_TOP(0x0))) {
    if (-1 < (int)uVar1) {
      *(*(int * PTR32 *)&gen_args[2]) = (*(uint *)&gen_args[1]) * 2;
      return uVar1;
    }
    *(*(int * PTR32 *)&gen_args[2]) = 0;
  }
  return uVar1;
}

/* ref: FUN_00c89940 */
GEN_LIB GEN_FRAME uint F_00c89940(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc89940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_1,param_2);
  return (uint)(uVar1 == 0);
}

/* ref: CRefTime::CRefTime */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c89960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc89960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(longlong *)this = (longlong)param_1 * 10000;
  return (uint)this;
}

/* ref: FUN_00c89990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c89990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc89990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c899b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c899b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc899b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)this;
  *(uint *)this = *(int *)this + uVar2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1[1] + (uint)CARRY4(uVar1,uVar2);
  return (uint)this;
}

/* ref: FUN_00c899f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c899f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc899f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00c89a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c89a10(GEN_P(longlong * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double param_2, double gen_a1))
{
  GEN_ENTER(0xc89a10u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(longlong * param_1 = (longlong *)(uintptr_t)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  *param_1 = (longlong)(param_2 * *(double *)&REFG(double, 0x1087ef0));
  return (uint)param_1;
}

/* ref: COARefTime::operator= */
GEN_LIB GEN_FRAME undefined * GEN_THISCALL F_00c89a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc89a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(double * param_1 = (double *)(uintptr_t)gen_a1;)
  *(longlong *)this = (longlong)(*param_1 * *(double *)&REFG(double, 0x1087ef0));
  return this;
}

/* ref: FUN_00c89a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c89a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc89a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c89ab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c89ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc89ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00c89b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c89b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc89b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  bool bVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x60)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (param_3 != 0) {
      if (*((int *)GEN_TOP(((int)this + 100))) == 0) {
        return 0;
      }
      bVar2 = CARRY4(param_1,*((uint *)GEN_TOP(((int)this + 0x68))));
      param_1 = param_1 + *((uint *)GEN_TOP(((int)this + 0x68)));
      param_2 = param_2 + *((int *)GEN_TOP(((int)this + 0x6c))) + (uint)bVar2;
    }
    (*(undefined8 *)(gen_frame + 0x0)) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,&(*(undefined8 *)(gen_frame + 0x0)));
    if ((param_2 <= (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4))) && ((param_2 < (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) || (param_1 <= (uint)(*(undefined8 *)(gen_frame + 0x0)))))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c89ba0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89ba0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc89ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c89bc0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc89bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  FARPROC pFVar2;
  uint uVar3;
  DWORD DVar4;
  
  if ((*(int * PTR32 *)&gen_args[4]) == ((int *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *(*(int * PTR32 *)&gen_args[4]) = 0;
  if ((*(int * PTR32 *)&gen_args[2]) != ((int *)GEN_TOP(0x0))) {
    return 0x8002802b;
  }
  if (*(*(int * PTR32 *)&gen_args[0]) == 0) {
    uVar1 = F_00c83a90();
    if ((uVar1 == 0) || (pFVar2 = gen_imp_GetProcAddress(uVar1,((char *)REFP(0x1128c64))), pFVar2 == (FARPROC)0x0)) {
LAB_00c89c37: ;
      DVar4 = gen_imp_GetLastError();
      return DVar4 | 0x80070000;
    }
    uVar3 = ((code *)pFVar2)(&REFG(undefined, 0x1084cc8),1,0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
    if ((int)uVar3 < 0) {
      pFVar2 = gen_imp_GetProcAddress(uVar1,((char *)REFP(0x1128c58)));
      if (pFVar2 == (FARPROC)0x0) goto LAB_00c89c37;
      uVar1 = ((code *)pFVar2)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)&gen_args[2]));
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x18))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[0]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  *(*(int * PTR32 *)&gen_args[4]) = *(*(int * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 4))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c89ca0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89ca0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc89ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  FARPROC pFVar2;
  uint uVar3;
  DWORD DVar4;
  int * piVar5;
  
  piVar5 = ((int *)GEN_TOP(0x0));
  if (*param_1 == 0) {
    uVar1 = F_00c83a90();
    if ((uVar1 == 0) || (pFVar2 = gen_imp_GetProcAddress(uVar1,((char *)REFP(0x1128c64))), pFVar2 == (FARPROC)0x0)) {
LAB_00c89d35: ;
      DVar4 = gen_imp_GetLastError();
      uVar1 = DVar4 | 0x80070000;
    }
    else {
      uVar3 = ((code *)pFVar2)(&REFG(undefined, 0x1084cc8),1,0,param_5,&(*(int * PTR32 *)(gen_frame + 0x0)));
      if ((int)uVar3 < 0) {
        pFVar2 = gen_imp_GetProcAddress(uVar1,((char *)REFP(0x1128c58)));
        if (pFVar2 == (FARPROC)0x0) goto LAB_00c89d35;
        uVar1 = ((code *)pFVar2)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)(gen_frame + 0x0)));
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x18))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,param_1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      if (-1 < (int)uVar1) goto LAB_00c89d26;
    }
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  else {
LAB_00c89d26: ;
    piVar5 = ((int *)GEN_TOP(*param_1));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x28))))(piVar5 GEN_EDX_ARG,param_3,param_4,param_6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 8))))(piVar5 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c89d70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89d70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc89d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084ce8));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 - 4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c89dc0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89dc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc89dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c89de0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89de0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc89de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084ce8),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c89e10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89e10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc89e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084ce8),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c89e40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc89e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[2]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00c89ec0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89ec0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc89ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084cf8));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d08));
    if (uVar1 == 0) {
      uVar1 = F_00c83bc0(param_1,param_2,param_3);
      return uVar1;
    }
  }
  uVar1 = F_00c83ae0(param_1 - 4,param_3);
  return uVar1;
}

/* ref: FUN_00c89f20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89f20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc89f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c89f40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89f40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc89f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084cf8),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c89f70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89f70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc89f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084cf8),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c89fa0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c89fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc89fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[2]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00c8a020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8a020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc8a020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c83b90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00c8a050 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a050(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8a050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d18));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 - 4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8a0a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a0a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8a0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c8a0c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a0c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc8a0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084d18),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c8a0f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a0f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc8a0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084d18),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c8a120 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc8a120u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[2]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00c8a1a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a1a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8a1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_3 = 0;
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095ac4));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 - 8,param_3);
    return uVar1;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d18));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 - 4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8a220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8a220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(*(int * PTR32 *)&gen_args[0]) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1084d18),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar2) {
      *piVar1 = (int)(*(undefined * PTR32 *)(gen_frame + 0x0));
      return 0;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8a290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(*(int * PTR32 *)&gen_args[0]) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar2) {
      *piVar1 = (int)(*(undefined * PTR32 *)(gen_frame + 0x0));
      return 0;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a300 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a300u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a380 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a380u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x10))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a400 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x14))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a480 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a480u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x18))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a500 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a500u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x24))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a580 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a580u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x1c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a600 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a600u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x20))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a680 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc8a680u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a710 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8a710u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x38))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a790 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a790u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x3c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8a810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(code * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8a810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x4)));
  if ((int)uVar1 < 0) {
    return 0x80004001;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x4)))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if ((int)uVar1 < 0) {
    return 0x80004001;
  }
  uVar1 = (*param_1)((*(int * PTR32 *)(gen_frame + 0x0)),param_2);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c8a890 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8a890u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x40))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a910 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a910u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1095ac4),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x48))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8a990 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a990(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8a990u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  int * piVar1;
  uint uVar2;
  
  if (GEN_ISNAN((*(double *)&gen_args[1])) != (GEN_ISNAN((*(double *)&gen_args[1])) || (*(double *)&gen_args[1]) == 0.0)) {
    return 0x80070057;
  }
  uVar2 = F_00c8a290((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x44))))
                      ((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(int)(ulonglong)gen_d2bits((*(double *)&gen_args[1])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[1])) >> 0x20));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00c8a9f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8a9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8a9f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x1c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8aa70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8aa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8aa70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x24))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8aaf0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8aaf0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8aaf0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x20))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8ab70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8ab70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ab70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8abf0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8abf0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8abf0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x2c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8ac70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8ac70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ac70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8acf0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8acf0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8acf0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8ad70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8ad70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ad70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x3c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8adf0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8adf0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8adf0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  int * piVar1;
  uint uVar2;
  
  if (GEN_ISNAN((*(double *)&gen_args[1])) != (GEN_ISNAN((*(double *)&gen_args[1])) || (*(double *)&gen_args[1]) == 0.0)) {
    return 0x80070057;
  }
  uVar2 = F_00c8a220((*(int * PTR32 *)&gen_args[0]) - 1 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x38))))
                      ((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(int)(ulonglong)gen_d2bits((*(double *)&gen_args[1])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[1])) >> 0x20));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00c8ae50 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8ae50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ae50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x40))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8aed0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8aed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8aed0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x18)));
  uVar3 = (*pcVar2)(piVar1,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&REFG(undefined, 0x1084d18),&(*(int * PTR32 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (-1 < (int)uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x44))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0x80004001;
}

/* ref: FUN_00c8af50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8af50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8af50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x0)));
  if ((int)uVar1 < 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = (*(undefined4 *)(gen_frame + 0x8));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined4 *)(gen_frame + 0xc));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = (*(undefined4 *)(gen_frame + 0x0));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = (*(undefined4 *)(gen_frame + 0x4));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8afc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8afc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc8afc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return 0;
}

/* ref: FUN_00c8b000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8b000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8b000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP(((int)this + 0x48))) == 1) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))
                    (this GEN_EDX_ARG,param_1,0,*((undefined4 *)GEN_TOP(((int)this + 0x38))),
                     *((undefined4 *)GEN_TOP(((int)this + 0x3c))),&REFG(undefined8, 0x1086498));
  if ((param_2 != 0) && (-1 < (int)uVar1)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))
                      (this GEN_EDX_ARG,param_2,0,*((undefined4 *)GEN_TOP(((int)this + 0x40))),
                       *((undefined4 *)GEN_TOP(((int)this + 0x44))),&REFG(undefined8, 0x1086498));
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}

/* ref: FUN_00c8b080 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c8b080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8b080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return 0;
}

/* ref: FUN_00c8b0b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8b0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8b0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x48))) == 1) {
    return 0x80004005;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  if (-1 < (int)uVar1) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = (*(undefined4 *)(gen_frame + 0x0));
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = (*(undefined4 *)(gen_frame + 0x4));
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = (*(undefined4 *)(gen_frame + 0x0));
    *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined4 *)(gen_frame + 0x4));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  }
  return uVar1;
}

/* ref: FUN_00c8b110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8b110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc8b110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined8 uVar1;
  
  F_00c83b90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  uVar1 = (undefined8)gen_d2bits((double)(REFG(double, 0x1088130)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x3fffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *((undefined8 *)GEN_TOP(((int)this + 0x28))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x37;
  return (uint)this;
}

/* ref: FUN_00c8b170 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b170(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8b170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1095ac4));
  if (uVar1 == 0) {
    uVar1 = F_00c83bc0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_3 == 0) {
    return 0x80004003;
  }
  uVar1 = F_00c83ae0(param_1 - 4,param_3);
  return uVar1;
}

/* ref: FUN_00c8b1c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b1c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined8, 0x1086498));
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00c8b1f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b1f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined8 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = REFG(undefined8, 0x1086498);
  param_2[1] = REFG(undefined8, 0x10864a0);
  return 0;
}

/* ref: FUN_00c8b230 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b230(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined8, 0x1086498));
  return (-(uint)(uVar1 != 0) & 0x7ff8ffa9) + 0x80070057;
}

/* ref: FUN_00c8b270 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b270(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined8, 0x1086498));
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00c8b2a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b2a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined8 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = REFG(undefined8, 0x1086498);
  param_2[1] = REFG(undefined8, 0x10864a0);
  return 0;
}

/* ref: FUN_00c8b2e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b2e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x34)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  param_2[1] = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b320 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b320(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x34)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  param_2[1] = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b370 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b370(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  return 0;
}

/* ref: FUN_00c8b3a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b3a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  if (param_2 == ((uint *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  return (uint)((~*((uint *)GEN_TOP((param_1 + 0x30))) & *param_2) != 0);
}

/* ref: FUN_00c8b3d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b3d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc8b3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  uint uVar1;
  
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  if ((param_3 != 0) && (uVar1 = F_00c80fd0(param_3,&REFG(undefined8, 0x1086498)), uVar1 == 0)) {
    return 0x80070057;
  }
  if ((param_6 != 0) && (uVar1 = F_00c80fd0(param_6,&REFG(undefined8, 0x1086498)), uVar1 == 0)) {
    return 0x80070057;
  }
  *param_2 = param_4;
  param_2[1] = param_5;
  return 0;
}

/* ref: FUN_00c8b440 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b440(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc8b440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  uint * puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_5 & 3;
  uVar4 = param_3 & 3;
  if (param_5 != 0) {
    if (param_4 == ((uint *)GEN_TOP(0x0))) {
      return 0x80004003;
    }
    if (uVar5 != param_5) {
      return 0x80070057;
    }
  }
  if (param_3 != 0) {
    if (param_2 == ((uint *)GEN_TOP(0x0))) {
      return 0x80004003;
    }
    if ((uVar4 != 1) && (uVar4 != 2)) {
      return 0x80070057;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xd];
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (uVar4 == 1) {
    param_1[6] = *param_2;
    param_1[7] = param_2[1];
  }
  else if (uVar4 == 2) {
    uVar2 = *param_2;
    puVar1 = (uint *)(param_1 + 6);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + uVar2;
    param_1[7] = param_1[7] + param_2[1] + (uint)CARRY4(uVar3,uVar2);
  }
  if (uVar5 == 1) {
    param_1[8] = *param_4;
    param_1[9] = param_4[1];
  }
  else if (uVar5 == 3) {
    uVar3 = *param_4;
    uVar2 = param_4[1];
    param_1[8] = param_1[6] + *param_4;
    param_1[9] = param_1[7] + uVar2 + (uint)CARRY4(param_1[6],uVar3);
  }
  else if (uVar5 == 2) {
    uVar2 = *param_4;
    puVar1 = (uint *)(param_1 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + uVar2;
    param_1[9] = param_1[9] + param_4[1] + (uint)CARRY4(uVar3,uVar2);
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x54))))(param_1 GEN_EDX_ARG);
  }
  if (uVar4 != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00c8b540 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b540(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8b540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
    param_2[1] = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  }
  if (param_3 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_3 = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
    param_3[1] = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
  }
  return 0;
}

/* ref: FUN_00c8b570 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b570(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8b570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if (param_3 != ((undefined4 *)GEN_TOP(0x0))) {
    lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x34)));
    gen_imp_EnterCriticalSection(lpCriticalSection);
    *param_3 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    param_3[1] = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00c8b5c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b5c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(double param_2, double gen_a1))
{
  GEN_ENTER(0xc8b5c0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xd];
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(double *)(param_1 + 10) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x58))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c8b600 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b600(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == ((undefined8 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x34)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = *((undefined8 *)GEN_TOP((param_1 + 0x28)));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b640 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return 0;
}

/* ref: FUN_00c8b670 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b670(GEN_P(int param_1, unsigned int gen_a0), GEN_P(double * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == ((double *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x38)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = (double)*((longlong *)GEN_TOP((param_1 + 0x18))) / *(double *)&REFG(double, 0x1087ef0);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b6b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b6b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(double param_2, double gen_a1))
{
  GEN_ENTER(0xc8b6b0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  *(longlong *)(param_1 + 8) = (longlong)(param_2 * *(double *)&REFG(double, 0x1087ef0));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c8b6f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b6f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(double * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == ((double *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x38)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = (double)*((longlong *)GEN_TOP((param_1 + 0x28))) / *(double *)&REFG(double, 0x1087ef0);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b730 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b730(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(double param_2, double gen_a1))
{
  GEN_ENTER(0xc8b730u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  *(longlong *)(param_1 + 10) = (longlong)(param_2 * *(double *)&REFG(double, 0x1087ef0));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x4c))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c8b770 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b770(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(param_2 == 0) * 2 + 0x80004001;
}

/* ref: FUN_00c8b7a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b7a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == ((undefined8 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  lpCriticalSection = *((LPCRITICAL_SECTION *)GEN_TOP((param_1 + 0x38)));
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = *((undefined8 *)GEN_TOP((param_1 + 0x30)));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b7e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b7e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(double param_2, double gen_a1))
{
  GEN_ENTER(0xc8b7e0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  *(double *)(param_1 + 0xc) = param_2;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c8b820 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b820(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = 0xffffffff;
  return 0;
}

/* ref: FUN_00c8b840 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b840(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = 0xffffffff;
  return 0;
}

/* ref: FUN_00c8b860 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b860(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8b860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d28));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 - 4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8b8b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b8b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8b8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c8b8d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b8d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc8b8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084d28),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c8b900 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b900(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc8b900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084d28),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c8b930 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc8b930u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[2]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00c8b9b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8b9b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8b9b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d38));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 - 4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8ba00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8ba00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8ba00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c8ba20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8ba20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc8ba20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084d38),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c8ba50 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8ba50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc8ba50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084d38),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c8ba80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8ba80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc8ba80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[2]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00c8bb00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8bb00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8bb00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d48));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d58));
    if (uVar1 == 0) {
      uVar1 = F_00c83bc0(param_1,param_2,param_3);
      return uVar1;
    }
  }
  uVar1 = F_00c83ae0(param_1 - 4,param_3);
  return uVar1;
}

/* ref: FUN_00c8bb60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8bb60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8bb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c8bb80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8bb80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc8bb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084d48),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c8bbb0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8bbb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc8bbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084d48),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c8bbe0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8bbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc8bbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  uint uVar1;
  
  uVar1 = F_00c80fd0(&REFG(undefined, 0x1156560),(*(int * PTR32 *)&gen_args[2]));
  if (uVar1 == 0) {
    return 0x80020001;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00c8bc60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8bc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc8bc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  ushort uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  ushort * puVar5;
  undefined2 * puVar6;
  int * piVar7;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
  }
  else {
    uVar4 = F_004069f0(-(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) |
                         (uint)((ulonglong)param_1 * 0x10));
    *(uint *)this = uVar4;
    if (uVar4 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      if (param_3 != ((undefined4 *)GEN_TOP(0x0))) {
        *param_3 = 0x8007000e;
        return (uint)this;
      }
    }
    else {
      param_1 = 0;
      if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
        piVar7 = ((int *)GEN_TOP((param_2 + 8)));
        do {
          iVar3 = piVar7[-2];
          puVar6 = ((undefined2 *)GEN_TOP(((int)piVar7 + *(int *)this + (-8 - param_2))));
          *puVar6 = (short)iVar3;
          switch((unsigned int)(uintptr_t)((short)iVar3)) {
          case 2: ;
            puVar6[4] = (short)*piVar7;
            break;
          case 3: ;
            *(int *)(puVar6 + 4) = *piVar7;
            break;
          case 4: ;
            *(int *)(puVar6 + 4) = *piVar7;
            break;
          case 5: ;
          case 7: ;
            *(undefined8 *)(puVar6 + 4) = *(undefined8 *)piVar7;
            break;
          case 6: ;
            *(int *)(puVar6 + 4) = *piVar7;
            *(int *)(puVar6 + 6) = piVar7[1];
            break;
          case 8: ;
            if (*piVar7 == 0) {
              *(undefined4 *)(puVar6 + 4) = 0;
            }
            else {
              uVar1 = *((ushort *)GEN_TOP((*piVar7 - 2)));
              puVar5 = ((ushort *)GEN_TOP(F_004069f0((uVar1 + 1) * 2)));
              if (puVar5 == ((ushort *)GEN_TOP(0x0))) {
                *((uint *)GEN_TOP(((int)this + 8))) = param_1;
                if (param_3 != ((undefined4 *)GEN_TOP(0x0))) {
                  *param_3 = 0x8007000e;
                }
              }
              else {
                *puVar5 = uVar1;
                *(ushort * PTR32 *)(puVar6 + 4) = puVar5 + 1;
                F_00c46aa0(puVar5 + 1,*piVar7,(uint)uVar1 * 2);
              }
            }
            break;
          case 9: ;
          case 0xd: ;
            piVar2 = ((int *)GEN_TOP(*piVar7));
            *(int * PTR32 *)(puVar6 + 4) = piVar2;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
            break;
          case 10: ;
            *(int *)(puVar6 + 4) = *piVar7;
            break;
          case 0xb: ;
            puVar6[4] = (short)*piVar7;
            break;
          case 0x11: ;
            *(char *)(puVar6 + 4) = (char)*piVar7;
          }
          param_1 = param_1 + 1;
          piVar7 = piVar7 + 4;
        } while (param_1 < *((uint *)GEN_TOP(((int)this + 8))));
        return (uint)this;
      }
    }
  }
  return (uint)this;
}

/* ref: FUN_00c8be30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c8be30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8be30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  short * psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    iVar4 = 0;
    do {
      psVar1 = ((short *)GEN_TOP((iVar4 + *(int *)this)));
      sVar2 = *psVar1;
      if (sVar2 == 8) {
        if (*(int *)(psVar1 + 4) != 0) {
          F_00406ad0(*(int *)(psVar1 + 4) - 2);
        }
      }
      else if ((sVar2 == 9) || (sVar2 == 0xd)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(psVar1 + 4) + 8))))(*(int * PTR32 *)(psVar1 + 4) GEN_EDX_ARG);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  uVar3 = F_00406ad0(*(undefined4 *)this);
  return uVar3;
}

/* ref: FUN_00c8be90 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8be90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8be90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d68));
  if (uVar1 == 0) {
    uVar1 = F_00c83bc0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = F_00c83ae0(param_1 + 0xc,param_3);
    return uVar1;
  }
  uVar1 = F_00c83ae0(0,param_3);
  return uVar1;
}

/* ref: FUN_00c8bef0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8bef0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8bef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0x80040234;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,param_1 - 0xc);
  if (-1 < (int)uVar2) {
    *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00c8bf30 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c8bf30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8bf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 0x80004001;
}

/* ref: FUN_00c8bf40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8bf40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8bf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0x80004003;
  }
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    return 0x80004004;
  }
  *param_2 = *((undefined4 *)GEN_TOP((param_1 + 0x40)));
  return 0;
}

/* ref: FUN_00c8bf70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8bf70(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8bf70u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  int iVar1;
  int * piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = (longlong)((*(double *)&gen_args[1]) * *(double *)&REFG(double, 0x1087ef0));
  iVar1 = *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 4)));
  if (*((int *)GEN_TOP((iVar1 + 0x60))) != 0) {
    lVar4 = lVar3;
    if (*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x24))) != 0) {
      if (*((int *)GEN_TOP((iVar1 + 100))) == 0) goto LAB_00c8bfe7;
      lVar4 = lVar3 + *((longlong *)GEN_TOP((iVar1 + 0x68)));
    }
    iVar6 = (int)((ulonglong)lVar4 >> 0x20);
    piVar2 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x60)));
    (*(double *)&gen_args[1]) = 0.0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,&(*(double *)&gen_args[1]));
    if ((iVar6 <= (*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 4))) && ((iVar6 < (*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 4)) || ((uint)lVar4 <= (*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 0)))))) {
      return 0x80040233;
    }
  }
LAB_00c8bfe7: ;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 4))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 4))) GEN_EDX_ARG,(*(int *)&gen_args[0]) - 0xc);
  if (-1 < (int)uVar5) {
    *((longlong *)GEN_TOP(((*(int *)&gen_args[0]) + 0xc))) = lVar3;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 4))) GEN_EDX_ARG,(*(int *)&gen_args[0]) - 0xc);
  }
  return uVar5;
}

/* ref: FUN_00c8c020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8c020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  HMODULE hModule;
  FARPROC pFVar1;
  uint uVar2;
  DWORD DVar3;
  int * piVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    return 0x80040234;
  }
  piVar4 = ((int *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  if (*((int *)GEN_TOP(((int)this + 0x48))) == 0) {
    hModule = (HMODULE)F_00c83a90();
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = gen_imp_GetProcAddress(hModule,((char *)REFP(0x1128c64))), pFVar1 == (FARPROC)0x0)) {
LAB_00c8c0ce: ;
      DVar3 = gen_imp_GetLastError();
      uVar2 = DVar3 | 0x80070000;
    }
    else {
      uVar2 = ((code *)pFVar1)(&REFG(undefined, 0x1084cc8),1,0,0,&(*(int * PTR32 *)(gen_frame + 0x2c)));
      if ((int)uVar2 < 0) {
        pFVar1 = gen_imp_GetProcAddress(hModule,((char *)REFP(0x1128c58)));
        if (pFVar1 == (FARPROC)0x0) goto LAB_00c8c0ce;
        uVar2 = ((code *)pFVar1)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)(gen_frame + 0x2c)));
        if ((int)uVar2 < 0) {
          return uVar2;
        }
      }
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x18))))((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x24)),(int)this + 0x48);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x2c)) + 8))))((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
      if (-1 < (int)uVar2) goto LAB_00c8c0c1;
    }
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  else {
LAB_00c8c0c1: ;
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x48)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))))))
                    (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))),&(*(int * PTR32 *)(gen_frame + 0x28)));
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x2c))))
                      (piVar4 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x28)),*((undefined4 *)GEN_TOP(((int)this + 0x24))),
                       (uint)*((ushort *)GEN_TOP(((int)this + 0x28))),(int)this + 0x34,
                       *((undefined4 *)GEN_TOP(((int)this + 0x2c))),((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x20)));
    *((uint *)GEN_TOP(((int)this + 0x4c))) = uVar2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 8))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,this);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    return uVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c8c160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8c160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c83b90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc8c190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  F_00c83b90(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((int *)GEN_TOP(((int)this + 0x18))) = param_4;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x1128cd0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[18])REFP(0x1128c88));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[4])REFP(0x1128c74));
  if (param_4 == 0) {
    *param_3 = 0x80004003;
  }
  return (uint)this;
}

/* ref: FUN_00c8c1e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8c1e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8c1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,param_2,0);
  if (-1 < (int)uVar1) {
    return 0;
  }
  uVar1 = F_00c8a810(param_1 GEN_EDX_ARG,((code *)REFP(0xc8ceb0)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c220 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8c220(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8c220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c8a810(param_1 GEN_EDX_ARG,((code *)REFP(0xc8ce90)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c240 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8c240(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8c240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c8a810(param_1 GEN_EDX_ARG,((code *)REFP(0xc8ce80)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c260 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8c260(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8c260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c8a810(param_1 GEN_EDX_ARG,((code *)REFP(0xc8cea0)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc8c280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  F_00c83b90(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x1128cd0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[18])REFP(0x1128c88));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[4])REFP(0x1128c74));
  *((int *)GEN_TOP(((int)this + 0x18))) = param_4;
  if (param_4 == 0) {
    *param_3 = 0x80004003;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x1128d80));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[18])REFP(0x1128d38));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[4])REFP(0x1128d24));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 1;
  return (uint)this;
}

/* ref: FUN_00c8c300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc8c300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined8 uVar1;
  
  F_00c83b90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  uVar1 = (undefined8)gen_d2bits((double)(REFG(double, 0x1088130)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x7fffffff;
  *((undefined8 *)GEN_TOP(((int)this + 0x30))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00c8c370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8c370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c83b90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c3a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c83b90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c3d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, double gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xc8c3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[14];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  memcpy(&gen_args[4], &gen_a5, sizeof gen_a5);
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  double dVar2;
  uint uVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  DWORD DVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x0)) = param_1;
  F_00c83b90(param_1 GEN_EDX_FWD,0,(*(int * PTR32 *)&gen_args[1]));
  param_1[4] = (int)(*(int * PTR32 *)&gen_args[0]);
  param_1[5] = (int)(*(int * PTR32 *)&gen_args[3]);
  param_1[8] = (*(int *)&gen_args[6]);
  param_1[9] = (*(int *)&gen_args[7]);
  *(short *)(param_1 + 10) = (short)(*(undefined4 *)&gen_args[8]);
  param_1[0xb] = (*(int *)&gen_args[11]);
  param_1[0xc] = (*(int *)&gen_args[13]);
  *param_1 = (int)(*(undefined * PTR32 (*)[4])REFP(0x1128df0));
  param_1[3] = (int)(*(undefined * PTR32 (*)[7])REFP(0x1128dd4));
  F_00c8bc60(param_1 + 0xd GEN_EDX_ARG,(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]),(*(uint * PTR32 *)&gen_args[2]));
  dVar2 = GEN_X87((*(double *)&gen_args[4]) * *(double *)&REFG(double, 0x1087ef0));
  piVar1 = param_1 + 0x12;
  *piVar1 = 0;
  param_1[0x13] = -0x7fffbffc;
  *(longlong *)(param_1 + 6) = (longlong)dVar2;
  uVar3 = (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(param_1[5])))))(((undefined4 *)GEN_TOP(param_1[5])),param_1[8],&(*(int * PTR32 *)(gen_frame + 0x0)));
  if ((int)uVar3 < 0) goto LAB_00c8c54f;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(0x0));
  if (*piVar1 == 0) {
    hModule = (HMODULE)F_00c83a90();
    if ((hModule == (HMODULE)0x0) ||
       (pFVar4 = gen_imp_GetProcAddress(hModule,((char *)REFP(0x1128c64))), pFVar4 == (FARPROC)0x0)) {
LAB_00c8c55f: ;
      DVar5 = gen_imp_GetLastError();
      uVar3 = DVar5 | 0x80070000;
    }
    else {
      uVar3 = ((code *)pFVar4)(&REFG(undefined, 0x1084cc8),1,0,0,&(*(int * PTR32 *)&gen_args[1]));
      if ((int)uVar3 < 0) {
        pFVar4 = gen_imp_GetProcAddress(hModule,((char *)REFP(0x1128c58)));
        if (pFVar4 == (FARPROC)0x0) goto LAB_00c8c55f;
        uVar3 = ((code *)pFVar4)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)&gen_args[1]));
        if ((int)uVar3 < 0) goto LAB_00c8c56e;
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x18))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(int *)&gen_args[6]),piVar1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      if (-1 < (int)uVar3) goto LAB_00c8c50e;
    }
    if ((int)uVar3 < 0) {
LAB_00c8c56e: ;
      *(*(uint * PTR32 *)&gen_args[2]) = uVar3;
      return (uint)param_1;
    }
  }
  else {
LAB_00c8c50e: ;
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(*piVar1));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 4))))((*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 8))))((*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  if ((short)(*(undefined4 *)&gen_args[8]) == 4) {
    param_1[0x10] = 1;
    param_1[0x11] = -3;
    param_1[0xe] = (int)(param_1 + 0x11);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,param_1);
  if (-1 < (int)uVar3) {
    return (uint)param_1;
  }
LAB_00c8c54f: ;
  *(*(uint * PTR32 *)&gen_args[2]) = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00c8c580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8c580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  F_00c8d760((int)this + 0x20 GEN_EDX_ARG,0);
  F_00c8d760((int)this + 0x38 GEN_EDX_ARG,0);
  F_00c88d50(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,1,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c5d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8c5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8c5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20)));
  while ((*(undefined * PTR32 *)(gen_frame + 0x0)) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00c8d7f0(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0xc))) + 8))))(uVar2 + 0xc);
  }
  F_00c8d780(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x38)));
  while ((*(undefined * PTR32 *)(gen_frame + 0x0)) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00c8d7f0(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0xc))) + 8))))(uVar2 + 0xc);
  }
  F_00c8d780(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x60)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (*((int *)GEN_TOP(((int)this + 0x54))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x54))));
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x60))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
  }
  F_00c88dd0(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
  F_00c8df10(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG);
  F_00c8df10(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 8)));
}

/* ref: FUN_00c8c690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c690(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(double param_4, double gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xc8c690u, gen_a0, gen_a1, gen_a2, (unsigned int)gen_trace_d(gen_a3));
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(double param_4 = (double)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x0)) = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  (*(uint *)(gen_frame + 0x0)) = 0;
  *param_2 = 0;
  uVar1 = F_004069f0(0x50);
  if (uVar1 != 0) {
    uVar2 = F_00c8c3d0(uVar1 GEN_EDX_ARG,param_1,0,&(*(uint *)(gen_frame + 0x0)),param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10,param_11,param_12);
    uVar1 = (*(uint *)(gen_frame + 0x0));
    if (uVar2 != 0) {
      *param_2 = uVar2;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x8007000e;
}

/* ref: FUN_00c8c740 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8c740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8c740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_c;
  int iStack_8;
  
  if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
    gen_imp_ResetEvent(*((HANDLE *)GEN_TOP(((int)this + 0x50))));
    iStack_8 = 0;
    local_c = 0;
    uVar1 = local_c;
    if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
      uVar1 = F_00c8d830(*((int *)GEN_TOP(((int)this + 0x20))));
      iStack_8 = *((int *)GEN_TOP((uVar1 + 0x1c)));
      uVar1 = *((uint *)GEN_TOP((uVar1 + 0x18)));
    }
    iVar5 = iStack_8;
    if ((*((int *)GEN_TOP(((int)this + 100))) != 0) && (iVar5 = iStack_8, *((int *)GEN_TOP(((int)this + 0x38))) != 0)) {
      uVar2 = F_00c8d830(*((int *)GEN_TOP(((int)this + 0x38))));
      uVar4 = *((uint *)GEN_TOP((uVar2 + 0x18))) + *((uint *)GEN_TOP(((int)this + 0x68)));
      iVar3 = *((int *)GEN_TOP((uVar2 + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x6c))) +
              (uint)CARRY4(*((uint *)GEN_TOP((uVar2 + 0x18))),*((uint *)GEN_TOP(((int)this + 0x68))));
      if ((uVar1 == 0 && iStack_8 == 0) ||
         ((iVar5 = iStack_8, iVar3 <= iStack_8 &&
          ((iVar3 < iStack_8 || (iVar5 = iStack_8, uVar4 < uVar1)))))) {
        iVar5 = iVar3;
        uVar1 = uVar4;
      }
    }
    if (((-1 < iVar5) && ((0 < iVar5 || (uVar1 != 0)))) &&
       ((uVar1 != *((uint *)GEN_TOP(((int)this + 0x58))) || (iVar5 != *((int *)GEN_TOP(((int)this + 0x5c))))))) {
      if (*((int *)GEN_TOP(((int)this + 0x54))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x60))) + 0x18))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x54))));
        gen_imp_ResetEvent(*((HANDLE *)GEN_TOP(((int)this + 0x50))));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x60))) + 0x10))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,uVar1,iVar5,0,0,*((undefined4 *)GEN_TOP(((int)this + 0x50))),
                 (int)this + 0x54);
      *((uint *)GEN_TOP(((int)this + 0x58))) = uVar1;
      *((int *)GEN_TOP(((int)this + 0x5c))) = iVar5;
    }
  }
  return;
}

/* ref: FUN_00c8c820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8c820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 1;
  F_00c8c740(this GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8c860 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c8c860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8c860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  F_00c8c740(this GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8c890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(DWORD param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8c890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(DWORD param_2 = (DWORD)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int * piVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x10)) = lpCriticalSection;
  do {
    gen_imp_EnterCriticalSection(lpCriticalSection);
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
      uVar5 = F_00c8d830(*((int *)GEN_TOP(((int)this + 0x20))));
    }
    if ((*((int *)GEN_TOP(((int)this + 100))) != 0) && (*((int *)GEN_TOP(((int)this + 0x38))) != 0)) {
      uVar2 = F_00c8d830(*((int *)GEN_TOP(((int)this + 0x38))));
      if (uVar5 != 0) {
        iVar4 = *((int *)GEN_TOP((uVar2 + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x6c))) +
                (uint)CARRY4(*((uint *)GEN_TOP((uVar2 + 0x18))),*((uint *)GEN_TOP(((int)this + 0x68))));
        if ((*((int *)GEN_TOP((uVar5 + 0x1c))) < iVar4) ||
           ((*((int *)GEN_TOP((uVar5 + 0x1c))) <= iVar4 &&
            (*((uint *)GEN_TOP((uVar5 + 0x18))) <= *((uint *)GEN_TOP((uVar2 + 0x18))) + *((uint *)GEN_TOP(((int)this + 0x68)))))))
        goto LAB_00c8c8f0;
      }
      uVar5 = uVar2;
    }
LAB_00c8c8f0: ;
    if (uVar5 != 0) {
      uVar2 = *((uint *)GEN_TOP((uVar5 + 0x18)));
      iVar4 = *((int *)GEN_TOP((uVar5 + 0x1c)));
      (*(uint *)(gen_frame + 0x8)) = uVar2;
      lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x10));
      if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
        if (*((int *)GEN_TOP((uVar5 + 0x30))) != 0) {
          if (*((int *)GEN_TOP(((int)this + 100))) == 0) goto LAB_00c8c942;
          (*(uint *)(gen_frame + 0x8)) = uVar2 + *((uint *)GEN_TOP(((int)this + 0x68)));
          iVar4 = iVar4 + *((int *)GEN_TOP(((int)this + 0x6c))) +
                  (uint)CARRY4(uVar2,*((uint *)GEN_TOP(((int)this + 0x68))));
        }
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x60)));
        (*(undefined8 *)(gen_frame + 0x0)) = 0;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x0)));
        if ((iVar4 < (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4))) ||
           ((lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x10)), iVar4 <= (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) && ((*(uint *)(gen_frame + 0x8)) <= (uint)(*(undefined8 *)(gen_frame + 0x0))))))
        {
          ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0xc))) + 4))))(*((int *)GEN_TOP((uVar5 + 0xc))),uVar5 + 0xc);
          *param_1 = uVar5;
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x10)));
          return 0;
        }
      }
    }
LAB_00c8c942: ;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    DVar3 = gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP(((int)this + 0x50))),param_2);
    if (DVar3 != 0) {
      return 0x80004004;
    }
  } while( true );
}

/* ref: FUN_00c8c9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8c9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc8c9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x10)) = (LPCRITICAL_SECTION)((int)this + 8);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x38))) != 0) {
    uVar2 = F_00c8d830(*((int *)GEN_TOP(((int)this + 0x38))));
  }
  uVar4 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    uVar4 = F_00c8d830(*((int *)GEN_TOP(((int)this + 0x20))));
    if (uVar4 != 0) {
      (*(uint *)(gen_frame + 0x8)) = *((uint *)GEN_TOP((uVar4 + 0x18)));
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((uVar4 + 0x1c)));
      if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x60)));
        (*(undefined8 *)(gen_frame + 0x0)) = 0;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x0)));
        if (((*(int *)(gen_frame + 0xc)) <= (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4))) &&
           (((*(int *)(gen_frame + 0xc)) < (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) || ((*(uint *)(gen_frame + 0x8)) <= (uint)(*(undefined8 *)(gen_frame + 0x0)))))) {
          ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0xc))) + 4))))(uVar4 + 0xc);
          *param_3 = uVar4;
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x10)));
          return 0;
        }
      }
    }
  }
  if ((uVar2 != 0) &&
     ((*((int *)GEN_TOP((uVar2 + 0x1c))) <= param_2 &&
      ((*((int *)GEN_TOP((uVar2 + 0x1c))) < param_2 || (*((uint *)GEN_TOP((uVar2 + 0x18))) <= param_1)))))) {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0xc))) + 4))))(*((int *)GEN_TOP((uVar2 + 0xc))),uVar2 + 0xc);
    *param_3 = uVar2;
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x10)));
    return 0;
  }
  if ((*((int *)GEN_TOP(((int)this + 100))) != 0) && (uVar4 != 0)) {
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c))) + param_2 + (uint)CARRY4(*((uint *)GEN_TOP(((int)this + 0x68))),param_1)
    ;
    if ((*((int *)GEN_TOP((uVar4 + 0x1c))) <= iVar3) &&
       ((*((int *)GEN_TOP((uVar4 + 0x1c))) < iVar3 ||
        (*((uint *)GEN_TOP((uVar4 + 0x18))) <= *((uint *)GEN_TOP(((int)this + 0x68))) + param_1)))) {
      *param_3 = uVar4;
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x10)));
      return 0;
    }
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x10)));
  return 0x80040216;
}

/* ref: FUN_00c8cae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8cae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8cae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c83b90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00c8cb10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8cb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8cb10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c83b90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00c8cb40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8cb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8cb40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c83b90(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00c8cb70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8cb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8cb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint uVar2;
  int * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 4))))(*((int *)GEN_TOP((param_1 + 0xc))),param_1 + 0xc);
  this_00 = ((int *)GEN_TOP(((int)this + 0x38)));
  if (*((int *)GEN_TOP((param_1 + 0x30))) == 0) {
    this_00 = ((int *)GEN_TOP(((int)this + 0x20)));
  }
  iVar1 = *this_00;
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (iVar1 == 0) {
LAB_00c8cbed: ;
    F_00c8d8e0(this_00 GEN_EDX_ARG,param_1);
  }
  else {
    do {
      uVar2 = F_00c8d830((*(int *)(gen_frame + 0x0)));
      if ((*((int *)GEN_TOP((param_1 + 0x1c))) < *((int *)GEN_TOP((uVar2 + 0x1c)))) ||
         ((*((int *)GEN_TOP((param_1 + 0x1c))) <= *((int *)GEN_TOP((uVar2 + 0x1c))) &&
          (*((uint *)GEN_TOP((param_1 + 0x18))) < *((uint *)GEN_TOP((uVar2 + 0x18))))))) {
        if ((*(int *)(gen_frame + 0x0)) == 0) goto LAB_00c8cbed;
        F_00c8dc50(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),param_1);
        goto LAB_00c8cc00;
      }
      F_00c8d7f0(&(*(int *)(gen_frame + 0x0)));
    } while ((*(int *)(gen_frame + 0x0)) != 0);
    F_00c8d8e0(this_00 GEN_EDX_ARG,param_1);
  }
LAB_00c8cc00: ;
  F_00c8c740(this GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8cc20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8cc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8cc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint uVar2;
  int * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  this_00 = ((int *)GEN_TOP(((int)this + 0x38)));
  if (*((int *)GEN_TOP((param_1 + 0x30))) == 0) {
    this_00 = ((int *)GEN_TOP(((int)this + 0x20)));
  }
  iVar1 = *this_00;
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (iVar1 == 0) {
LAB_00c8cc83: ;
    uVar2 = 0x80040216;
  }
  else {
    do {
      uVar2 = F_00c8d830((*(int *)(gen_frame + 0x0)));
      if (uVar2 == param_1) {
        if ((*(int *)(gen_frame + 0x0)) == 0) goto LAB_00c8cc83;
        F_00c8d870(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 8))))(*((int *)GEN_TOP((param_1 + 0xc))),param_1 + 0xc);
        F_00c8c740(this GEN_EDX_ARG);
        uVar2 = 0;
        goto LAB_00c8cca8;
      }
      F_00c8d7f0(&(*(int *)(gen_frame + 0x0)));
    } while ((*(int *)(gen_frame + 0x0)) != 0);
    uVar2 = 0x80040216;
  }
LAB_00c8cca8: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return uVar2;
}

/* ref: FUN_00c8ccc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8ccc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8ccc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x60)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (*((int *)GEN_TOP(((int)this + 0x54))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x54))));
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x60))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x60))) = param_1;
  F_00c8c740(this GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8cd60 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c8cd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8cd60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
  }
  F_00c83a60();
  return;
}

/* ref: FUN_00c8cd90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c8cd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8cd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
  }
  F_00c83a60();
  return;
}

/* ref: FUN_00c8ce00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8ce00(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8ce00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00c8d760(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00c8ce30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8ce30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8ce30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c8d7f0(param_1);
  return uVar1;
}

/* ref: FUN_00c8ce40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8ce40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8ce40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c8d830(param_1);
  return uVar1;
}

/* ref: FUN_00c8ce50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8ce50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8ce50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c8d870(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00c8ce60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8ce60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8ce60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c8dc50(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c8ce70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8ce70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8ce70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c8d8e0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00c8ce80 */
GEN_LIB GEN_NOFRAME uint F_00c8ce80(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc8ce80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))
                    (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8ce90 */
GEN_LIB GEN_NOFRAME uint F_00c8ce90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc8ce90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x2c))))
                    (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8cea0 */
GEN_LIB GEN_NOFRAME uint F_00c8cea0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc8cea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x4c))))
                    (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8ceb0 */
GEN_LIB GEN_NOFRAME uint F_00c8ceb0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc8ceb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))
                    (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8cee0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8cee0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8cee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 + 0xc))))))
                    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8cf00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8cf00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8cf00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 4))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c8cf20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8cf20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8cf20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 8))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c8cf40 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c8cf40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8cf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 0x80004005;
}

/* ref: FUN_00c8cf50 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c8cf50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8cf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c8cf20(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00c8cf60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c8cf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8cf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c8cf90((int)this - 8 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00c8cf70 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c8cf70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8cf70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c8cf00(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00c8cf80 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c8cf80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8cf80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c8cee0(param_1 - 4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8cf90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8cf90(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8cf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
  }
  F_00c83a60();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00c8cfd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c8cfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8cfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c8d010((int)this - 8 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00c8cfe0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c8cfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8cfe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  F_00c83a60();
  return;
}

/* ref: FUN_00c8d010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d010(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  F_00c83a60();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00c8d060 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8d060(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8d060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 - 8))))))
                    (*((undefined4 * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8d080 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8d080(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8d080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 - 8))) + 4))))(*((int * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c8d0a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8d0a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8d0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 - 8))) + 8))))(*((int * PTR32 *)GEN_TOP((param_1 - 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c8d0c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c8d0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8d0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x48)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
  }
  F_00c8be30(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  F_00c83a60();
  return;
}

/* ref: FUN_00c8d0f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d0f0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x48)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
  }
  F_00c8be30(((undefined *)GEN_TOP((param_1 + 0x34))) GEN_EDX_ARG);
  F_00c83a60();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: EnlargedUnsignedDivide */
GEN_LIB GEN_FRAME ulong GEN_STDCALL F_00c8d130(GEN_P(_ULARGE_INTEGER param_1, unsigned long long gen_a0), GEN_P(ulong param_2, unsigned int gen_a1), GEN_P(ulong * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8d130u, (unsigned int)gen_a0, (unsigned int)(gen_a0 >> 32), gen_a1, gen_a2);
  GEN_PIN(_ULARGE_INTEGER param_1; memcpy(&param_1, &gen_a0, sizeof param_1);)
  GEN_PIN(ulong param_2 = (ulong)gen_a1;)
  GEN_PIN(ulong * param_3 = (ulong *)(uintptr_t)gen_a2;)
  if (param_3 != ((ulong *)GEN_TOP(0x0))) {
    *param_3 = (ulong)((ulonglong)(*(ULONGLONG *)&param_1) % (ulonglong)param_2);
  }
  return (ulong)((ulonglong)(*(ULONGLONG *)&param_1) / (ulonglong)param_2);
}

/* ref: FUN_00c8d160 */
GEN_LIB GEN_FRAME ulonglong GEN_STDCALL F_00c8d160(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(uint param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc8d160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  GEN_PIN(uint param_8 = (uint)gen_a7;)
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint local_34;
  uint local_24;
  uint local_1c;
  int iStack_18;
  
  uVar9 = (int)param_2 >> 0x1f;
  uVar13 = (param_1 ^ uVar9) - uVar9;
  uVar9 = ((param_2 ^ uVar9) - uVar9) - (uint)((param_1 ^ uVar9) < uVar9);
  uVar10 = (int)param_4 >> 0x1f;
  uVar15 = (param_3 ^ uVar10) - uVar10;
  uVar2 = (ulonglong)(((param_4 ^ uVar10) - uVar10) - (uint)((param_3 ^ uVar10) < uVar10));
  uVar10 = (int)param_6 >> 0x1f;
  uVar8 = (param_5 ^ uVar10) - uVar10;
  uVar10 = ((param_6 ^ uVar10) - uVar10) - (uint)((param_5 ^ uVar10) < uVar10);
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  if (((int)param_4 < 1) && ((int)param_4 < 0)) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  bVar18 = (bool)(bVar6 ^ bVar5);
  uVar1 = (ulonglong)uVar13 * (ulonglong)uVar15;
  local_34 = (uint)uVar1;
  uVar1 = uVar2 * uVar13 + (ulonglong)uVar9 * (ulonglong)uVar15 + (uVar1 >> 0x20);
  uVar13 = (uint)uVar1;
  uVar2 = uVar2 * uVar9 + (uVar1 >> 0x20);
  if (param_7 == 0 && param_8 == 0) goto LAB_00c8d2e9;
  if (bVar18) {
    local_24 = -param_7;
    uVar9 = -(param_8 + (param_7 != 0));
    if ((-1 < (int)param_8) && ((0 < (int)param_8 || (param_7 != 0)))) goto LAB_00c8d2cb;
LAB_00c8d25d: ;
    local_1c = 0;
    iStack_18 = 0;
  }
  else {
    local_24 = param_7;
    uVar9 = param_8;
    if ((0 < (int)param_8) || (-1 < (int)param_8)) goto LAB_00c8d25d;
LAB_00c8d2cb: ;
    iStack_18 = -1;
    local_1c = 0xffffffff;
  }
  bVar16 = CARRY4(local_34,local_24);
  local_34 = local_34 + local_24;
  bVar17 = CARRY4(uVar9,uVar13);
  uVar9 = uVar9 + uVar13;
  uVar13 = bVar16 + uVar9;
  uVar9 = (uint)bVar17 + (uint)CARRY4((uint)bVar16,uVar9);
  lVar3 = CONCAT44(iStack_18 + (uint)CARRY4(uVar9,local_1c),uVar9 + local_1c);
  lVar4 = uVar2 + lVar3;
  uVar2 = uVar2 + lVar3;
  if (lVar4 < 0) {
    bVar18 = !bVar18;
    uVar9 = ~local_34;
    local_34 = uVar9 + 1;
    uVar13 = ~uVar13 + (uint)(0xfffffffe < uVar9);
    uVar9 = (uint)(local_34 == 0 && uVar13 == 0);
    uVar2 = CONCAT44(~(uint)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(~(uint)lVar4,uVar9),
                     ~(uint)lVar4 + uVar9);
  }
LAB_00c8d2e9: ;
  if (((int)param_6 < 1) && ((int)param_6 < 0)) {
    bVar18 = !bVar18;
  }
  if (uVar2 < CONCAT44(uVar10,uVar8)) {
    if (uVar2 == 0) {
      uVar2 = CONCAT44(uVar13,local_34) / CONCAT44(uVar10,uVar8);
      if (bVar18) {
        return CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
      }
    }
    else {
      if (uVar10 == 0) {
        uVar1 = CONCAT44((int)uVar2,uVar13);
        uVar2 = CONCAT44((int)(uVar1 % (ulonglong)uVar8),local_34) / (ulonglong)uVar8;
        iVar12 = (int)uVar2;
        iVar14 = (int)(uVar1 / uVar8) + (int)(uVar2 >> 0x20);
        if (bVar18) {
          bVar18 = iVar12 != 0;
          iVar12 = -iVar12;
          iVar14 = -(iVar14 + (uint)bVar18);
        }
        return CONCAT44(iVar14,iVar12);
      }
      param_2 = 0;
      param_1 = 0;
      param_6 = 0x40;
      uVar15 = param_2;
      uVar9 = param_1;
      do {
        uVar15 = uVar15 << 1 | uVar9 >> 0x1f;
        uVar11 = (int)(uVar2 >> 0x20) << 1 | (uint)uVar2 >> 0x1f;
        uVar9 = uVar9 * 2;
        uVar7 = (uint)uVar2 * 2;
        if ((int)uVar13 < 0) {
          uVar7 = uVar7 + 1;
        }
        uVar13 = uVar13 << 1 | local_34 >> 0x1f;
        local_34 = local_34 * 2;
        if ((uVar10 <= uVar11) && ((uVar10 < uVar11 || (uVar8 <= uVar7)))) {
          bVar16 = uVar7 < uVar8;
          uVar7 = uVar7 - uVar8;
          uVar11 = (uVar11 - uVar10) - (uint)bVar16;
          bVar16 = 0xfffffffe < uVar9;
          uVar9 = uVar9 + 1;
          uVar15 = uVar15 + bVar16;
        }
        uVar2 = CONCAT44(uVar11,uVar7);
        param_6 = param_6 - 1;
      } while (param_6 != 0);
      if (bVar18) {
        bVar18 = uVar9 != 0;
        uVar9 = -uVar9;
        uVar15 = -(uVar15 + bVar18);
      }
      uVar2 = CONCAT44(uVar15,uVar9);
    }
    return uVar2;
  }
  if (bVar18) {
    return 0x8000000000000000;
  }
  return 0x7fffffffffffffff;
}

/* ref: FUN_00c8d420 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8d420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8d420u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar10 = (int)(*(uint *)&gen_args[1]) >> 0x1f;
  uVar7 = (((*(uint *)&gen_args[1]) ^ uVar10) - uVar10) - (uint)(((*(uint *)&gen_args[0]) ^ uVar10) < uVar10);
  uVar13 = ((*(uint *)&gen_args[2]) ^ (int)(*(uint *)&gen_args[2]) >> 0x1f) - ((int)(*(uint *)&gen_args[2]) >> 0x1f);
  uVar8 = ((*(uint *)&gen_args[3]) ^ (int)(*(uint *)&gen_args[3]) >> 0x1f) - ((int)(*(uint *)&gen_args[3]) >> 0x1f);
  if (((int)(*(uint *)&gen_args[1]) < 1) && ((int)(*(uint *)&gen_args[1]) < 0)) {
    bVar6 = 1;
    bVar4 = 1;
    bVar5 = 1;
  }
  else {
    bVar6 = 0;
    bVar4 = 0;
    bVar5 = 0;
  }
  bVar15 = (int)(*(uint *)&gen_args[2]) < 0;
  bVar2 = (bool)(bVar15 ^ bVar4);
  bVar3 = (bool)(bVar15 ^ bVar5);
  *(longlong *)&(*(uint *)&gen_args[0]) = (ulonglong)(((*(uint *)&gen_args[0]) ^ uVar10) - uVar10) * (ulonglong)uVar13;
  uVar10 = (uint)((ulonglong)*(longlong *)&(*(uint *)&gen_args[0]) >> 0x20);
  if (uVar7 == 0) {
    uVar1 = (ulonglong)uVar10;
  }
  else {
    uVar1 = (ulonglong)uVar7 * (ulonglong)uVar13 + (ulonglong)uVar10;
    *(longlong *)&(*(uint *)&gen_args[0]) = CONCAT44((int)uVar1,(*(uint *)&gen_args[0]));
  }
  if ((*(uint *)&gen_args[4]) != 0) {
    uVar7 = (int)(*(uint *)&gen_args[4]) >> 0x1f;
    if (bVar3) {
      uVar10 = -(*(uint *)&gen_args[4]);
      uVar7 = -(uVar7 + ((*(uint *)&gen_args[4]) != 0));
      bVar14 = (int)(*(uint *)&gen_args[4]) < 1;
    }
    else {
      bVar14 = -1 < (int)(*(uint *)&gen_args[4]);
      uVar10 = (*(uint *)&gen_args[4]);
    }
    (*(uint *)&gen_args[4]) = bVar14 - 1;
    bVar14 = CARRY4((*(uint *)&gen_args[0]),uVar10);
    uVar10 = (*(uint *)&gen_args[0]) + uVar10;
    uVar13 = (uint)uVar1 + uVar7;
    uVar11 = uVar13 + bVar14;
    *(longlong *)&(*(uint *)&gen_args[0]) = CONCAT44(uVar11,uVar10);
    uVar7 = (int)(uVar1 >> 0x20) +
            (uint)CARRY4((uint)uVar1,uVar7) + (uint)CARRY4(uVar13,(uint)bVar14) + (*(uint *)&gen_args[4]);
    uVar1 = CONCAT44(uVar7,uVar11);
    if ((int)uVar7 < 0) {
      bVar2 = !(bool)(bVar15 ^ bVar6);
      uVar10 = ~uVar10;
      iVar9 = uVar10 + 1;
      iVar12 = ~uVar11 + (uint)(0xfffffffe < uVar10);
      uVar1 = CONCAT44(~uVar7,iVar12);
      *(longlong *)&(*(uint *)&gen_args[0]) = CONCAT44(iVar12,iVar9);
      bVar3 = bVar2;
      if (iVar9 == 0 && iVar12 == 0) {
        uVar1 = CONCAT44(~uVar7 + 1,iVar12);
      }
    }
  }
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar7 = (uint)uVar1;
  if ((int)(*(uint *)&gen_args[3]) < 0) {
    bVar3 = !bVar2;
  }
  if (uVar10 < uVar8) {
    if ((uVar10 != 0) || (uVar8 <= uVar7)) {
      uVar7 = (*(uint *)&gen_args[1]);
    }
    uVar7 = (uint)(CONCAT44(uVar7,(int)*(longlong *)&(*(uint *)&gen_args[0])) / (ulonglong)uVar8);
    if (bVar3) {
      uVar7 = -uVar7;
    }
    return uVar7;
  }
  if (!bVar3) {
    return 0xffffffff;
  }
  return 0;
}

/* ref: FUN_00c8d620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d620(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c8d630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00c8d650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00c8d660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c8d6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) < *(int *)this) {
    *((undefined4 *)GEN_TOP((param_1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1;
    return param_1;
  }
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00c8d700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d700(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 0) {
    return *in_ecx;
  }
  return *((uint *)GEN_TOP((param_2 + 4)));
}

/* ref: FUN_00c8d720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  if (param_2 == ((uint *)GEN_TOP(0x0))) {
    return *((uint *)GEN_TOP((in_ecx + 4)));
  }
  return *param_2;
}

/* ref: FUN_00c8d740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8d740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  return (uint)this;
}

/* ref: FUN_00c8d760 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c8d760(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 10;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c8d780 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c8d780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8d780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  while (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP((iVar2 + 4)));
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00c8d7f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8d7f0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8d7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *((int *)GEN_TOP((iVar1 + 4)));
  return *((uint *)GEN_TOP((iVar1 + 8)));
}

/* ref: FUN_00c8d810 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8d810(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8d810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00c8d830 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8d830(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8d830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((uint *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00c8d840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)this;
  while( true ) {
    uVar1 = uVar2;
    if (uVar1 == 0) {
      return 0;
    }
    if (*((int *)GEN_TOP((uVar1 + 8))) == param_1) break;
    uVar2 = *(uint *)this;
    if (uVar1 != 0) {
      uVar2 = *((uint *)GEN_TOP((uVar1 + 4)));
    }
  }
  return uVar1;
}

/* ref: FUN_00c8d870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  if (*param_1 == 0) {
    *(int *)this = param_1[1];
  }
  else {
    *((int *)GEN_TOP((*param_1 + 4))) = param_1[1];
  }
  if (((int *)GEN_TOP(param_1[1])) == ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(((int)this + 4))) = *param_1;
  }
  else {
    *((int *)GEN_TOP(param_1[1])) = *param_1;
  }
  uVar1 = param_1[2];
  if (*((int *)GEN_TOP(((int)this + 0x10))) < *((int *)GEN_TOP(((int)this + 0xc)))) {
    param_1[1] = *((int *)GEN_TOP(((int)this + 0x14)));
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
    *((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_1;
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
    return uVar1;
  }
  F_00406ad0(param_1);
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  return uVar1;
}

/* ref: FUN_00c8d8e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = puVar2[1];
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c8d90d;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004069f0(0xc)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00c8d90d: ;
  puVar2[2] = param_1;
  puVar2[1] = 0;
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    *(undefined4 * PTR32 *)this = puVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
    return (uint)puVar2;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = puVar2;
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
  return (uint)puVar2;
}

/* ref: FUN_00c8d950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = puVar2[1];
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c8d97d;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004069f0(0xc)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00c8d97d: ;
  puVar2[2] = param_1;
  *puVar2 = 0;
  puVar2[1] = *(undefined4 *)this;
  if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)puVar2;
  }
  **(undefined4 * PTR32 *)this = puVar2;
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  *(undefined4 * PTR32 *)this = puVar2;
  return (uint)puVar2;
}

/* ref: FUN_00c8d9b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8d9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8d9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  iVar1 = *param_1;
  do {
    if (iVar1 == 0) {
      return 1;
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 8)));
    iVar1 = *((int *)GEN_TOP((iVar1 + 4)));
    if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
LAB_00c8d9db: ;
      puVar4 = ((undefined4 *)GEN_TOP(F_004069f0(0xc)));
      if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
        return 0;
      }
    }
    else {
      uVar3 = puVar4[1];
      *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar3;
      if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c8d9db;
    }
    puVar4[2] = uVar2;
    puVar4[1] = 0;
    *puVar4 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
      *(undefined4 * PTR32 *)this = puVar4;
    }
    else {
      *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = puVar4;
    }
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  } while( true );
}

/* ref: FUN_00c8da30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8da30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8da30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)));
  do {
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      return 1;
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
    uVar2 = puVar1[2];
    if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
LAB_00c8da59: ;
      puVar4 = ((undefined4 *)GEN_TOP(F_004069f0(0xc)));
      if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
        return 0;
      }
    }
    else {
      uVar3 = puVar4[1];
      *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar3;
      if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c8da59;
    }
    puVar4[2] = uVar2;
    *puVar4 = 0;
    puVar4[1] = *(undefined4 *)this;
    if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
      *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
    }
    else {
      **(undefined4 * PTR32 *)this = puVar4;
    }
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    *(undefined4 * PTR32 *)this = puVar4;
    puVar1 = ((undefined4 *)GEN_TOP(*puVar1));
  } while( true );
}

/* ref: FUN_00c8dab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8dab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8dab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint * puVar2;
  uint uVar3;
  int * piVar4;
  
  if (param_1 == 0) {
    uVar3 = F_00c8d950(this GEN_EDX_FWD,param_2);
    return uVar3;
  }
  if (param_1 == *((int *)GEN_TOP(((int)this + 4)))) {
    uVar3 = F_00c8d8e0(this GEN_EDX_ARG,param_2);
    return uVar3;
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    iVar1 = piVar4[1];
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
    *((int *)GEN_TOP(((int)this + 0x14))) = iVar1;
    if (piVar4 != ((int *)GEN_TOP(0x0))) goto LAB_00c8db0b;
  }
  piVar4 = ((int *)GEN_TOP(F_004069f0(0xc)));
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00c8db0b: ;
  piVar4[2] = param_2;
  puVar2 = *((uint * PTR32 *)GEN_TOP((param_1 + 4)));
  *piVar4 = param_1;
  piVar4[1] = (int)puVar2;
  *puVar2 = (uint)piVar4;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar4;
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  return (uint)piVar4;
}

/* ref: FUN_00c8db30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8db30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8db30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  iVar1 = *param_2;
  puVar5 = param_1;
  do {
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 8)));
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
    if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar3 = puVar6[1];
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
        *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar3;
        if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c8db6e;
LAB_00c8db80: ;
        puVar6[2] = uVar2;
        *puVar6 = 0;
        puVar6[1] = *(undefined4 *)this;
        if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar6;
          *(undefined4 * PTR32 *)this = puVar6;
        }
        else {
          **(undefined4 * PTR32 *)this = puVar6;
          *(undefined4 * PTR32 *)this = puVar6;
        }
        goto LAB_00c8dc19;
      }
LAB_00c8db6e: ;
      puVar6 = ((undefined4 *)GEN_TOP(F_004069f0(0xc)));
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c8db80;
    }
    else {
      if (puVar5 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) {
        if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
LAB_00c8dbb7: ;
          puVar6 = ((undefined4 *)GEN_TOP(F_004069f0(0xc)));
          if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c8dbc5;
          goto LAB_00c8dc1c;
        }
        uVar3 = puVar6[1];
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
        *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar3;
        if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c8dbb7;
LAB_00c8dbc5: ;
        puVar6[2] = uVar2;
        puVar6[1] = 0;
        *puVar6 = *((undefined4 *)GEN_TOP(((int)this + 4)));
        if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
          *(undefined4 * PTR32 *)this = puVar6;
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar6;
        }
        else {
          *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = puVar6;
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar6;
        }
      }
      else {
        if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
LAB_00c8dbfb: ;
          puVar6 = ((undefined4 *)GEN_TOP(F_004069f0(0xc)));
          if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
            return 0;
          }
        }
        else {
          uVar3 = puVar6[1];
          *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
          *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar3;
          if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c8dbfb;
        }
        puVar6[2] = uVar2;
        puVar4 = ((undefined4 *)GEN_TOP(puVar5[1]));
        *puVar6 = puVar5;
        puVar6[1] = puVar4;
        *puVar4 = puVar6;
        puVar5[1] = puVar6;
      }
LAB_00c8dc19: ;
      *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    }
LAB_00c8dc1c: ;
    if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    iVar1 = *((int *)GEN_TOP((iVar1 + 4)));
    puVar5 = puVar6;
  } while( true );
}

/* ref: FUN_00c8dc50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8dc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8dc50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    uVar2 = F_00c8d8e0(this GEN_EDX_FWD,param_2);
    return uVar2;
  }
  if (param_1 == *(int * PTR32 *)this) {
    uVar2 = F_00c8d950(this GEN_EDX_ARG,param_2);
    return uVar2;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    iVar1 = piVar3[1];
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
    *((int *)GEN_TOP(((int)this + 0x14))) = iVar1;
    if (piVar3 != ((int *)GEN_TOP(0x0))) goto LAB_00c8dcaa;
  }
  piVar3 = ((int *)GEN_TOP(F_004069f0(0xc)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00c8dcaa: ;
  piVar3[2] = param_2;
  iVar1 = *param_1;
  piVar3[1] = (int)param_1;
  *piVar3 = iVar1;
  *param_1 = (int)piVar3;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  return (uint)piVar3;
}

/* ref: FUN_00c8dcd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8dcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8dcd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_2 + 4)));
  piVar4 = param_1;
  do {
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      return 1;
    }
    iVar2 = puVar1[2];
    piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        iVar3 = piVar5[1];
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
        *((int *)GEN_TOP(((int)this + 0x14))) = iVar3;
        if (piVar5 == ((int *)GEN_TOP(0x0))) goto LAB_00c8dd0e;
LAB_00c8dd20: ;
        piVar5[2] = iVar2;
        piVar5[1] = 0;
        *piVar5 = *((int *)GEN_TOP(((int)this + 4)));
        if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
          *(int * PTR32 *)this = piVar5;
          *((int * PTR32 *)GEN_TOP(((int)this + 4))) = piVar5;
        }
        else {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar5;
          *((int * PTR32 *)GEN_TOP(((int)this + 4))) = piVar5;
        }
        goto LAB_00c8ddb7;
      }
LAB_00c8dd0e: ;
      piVar5 = ((int *)GEN_TOP(F_004069f0(0xc)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) goto LAB_00c8dd20;
    }
    else {
      if (piVar4 == *(int * PTR32 *)this) {
        if (piVar5 == ((int *)GEN_TOP(0x0))) {
LAB_00c8dd5a: ;
          piVar5 = ((int *)GEN_TOP(F_004069f0(0xc)));
          if (piVar5 != ((int *)GEN_TOP(0x0))) goto LAB_00c8dd68;
          goto LAB_00c8ddba;
        }
        iVar3 = piVar5[1];
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
        *((int *)GEN_TOP(((int)this + 0x14))) = iVar3;
        if (piVar5 == ((int *)GEN_TOP(0x0))) goto LAB_00c8dd5a;
LAB_00c8dd68: ;
        piVar5[2] = iVar2;
        *piVar5 = 0;
        piVar5[1] = *(int *)this;
        if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
          *((int * PTR32 *)GEN_TOP(((int)this + 4))) = piVar5;
          *(int * PTR32 *)this = piVar5;
        }
        else {
          **(undefined4 * PTR32 *)this = piVar5;
          *(int * PTR32 *)this = piVar5;
        }
      }
      else {
        if (piVar5 == ((int *)GEN_TOP(0x0))) {
LAB_00c8dd9a: ;
          piVar5 = ((int *)GEN_TOP(F_004069f0(0xc)));
          if (piVar5 == ((int *)GEN_TOP(0x0))) {
            return 0;
          }
        }
        else {
          iVar3 = piVar5[1];
          *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
          *((int *)GEN_TOP(((int)this + 0x14))) = iVar3;
          if (piVar5 == ((int *)GEN_TOP(0x0))) goto LAB_00c8dd9a;
        }
        piVar5[2] = iVar2;
        iVar2 = *piVar4;
        *piVar5 = iVar2;
        piVar5[1] = (int)piVar4;
        *piVar4 = (int)piVar5;
        *((int * PTR32 *)GEN_TOP((iVar2 + 4))) = piVar5;
      }
LAB_00c8ddb7: ;
      *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
    }
LAB_00c8ddba: ;
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar1 = ((undefined4 *)GEN_TOP(*puVar1));
    piVar4 = piVar5;
  } while( true );
}

/* ref: FUN_00c8ddf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8ddf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8ddf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    iVar3 = 0;
    piVar2 = param_1;
    do {
      piVar2 = ((int *)GEN_TOP(*piVar2));
      iVar3 = iVar3 + 1;
    } while (piVar2 != ((int *)GEN_TOP(0x0)));
    if (param_2[1] != 0) {
      *((undefined4 *)GEN_TOP((param_2[1] + 4))) = *(undefined4 *)this;
    }
    if (*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) {
      **(int * PTR32 *)this = param_2[1];
    }
    if (*param_2 == 0) {
      *param_2 = *(int *)this;
    }
    iVar1 = param_1[1];
    *(int *)this = iVar1;
    if (iVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    }
    param_2[1] = (int)param_1;
    if (*(undefined4 * PTR32 *)this != ((undefined4 *)GEN_TOP(0x0))) {
      **(undefined4 * PTR32 *)this = 0;
    }
    param_1[1] = 0;
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - iVar3;
    param_2[2] = param_2[2] + iVar3;
  }
  return 1;
}

/* ref: FUN_00c8de60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8de60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8de60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    iVar3 = 0;
    piVar2 = param_1;
    do {
      piVar2 = ((int *)GEN_TOP(piVar2[1]));
      iVar3 = iVar3 + 1;
    } while (piVar2 != ((int *)GEN_TOP(0x0)));
    if (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(*param_2)) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    }
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *param_2;
    }
    if (param_2[1] == 0) {
      param_2[1] = *((int *)GEN_TOP(((int)this + 4)));
    }
    iVar1 = *param_1;
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)this = 0;
    }
    *param_2 = (int)param_1;
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = 0;
    }
    *param_1 = 0;
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - iVar3;
    param_2[2] = param_2[2] + iVar3;
  }
  return 1;
}

/* ref: FUN_00c8df10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c8df10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8df10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  while (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP((iVar2 + 4)));
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *(undefined4 *)this = 0;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x14)));
  while (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP((iVar2 + 4)));
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  return;
}

/* ref: FUN_00c8df70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c8df70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8df70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c8d870(this GEN_EDX_FWD,*(undefined4 *)this);
  return uVar1;
}

/* ref: FUN_00c8dfc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8dfc0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8dfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c8dfd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8dfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8dfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  uVar1 = F_00c80fd0(this,param_1);
  if ((((uVar1 == 1) && (uVar1 = F_00c80fd0((int)this + 0x10,param_1 + 0x10), uVar1 == 1)) &&
      (uVar1 = F_00c80fd0((int)this + 0x2c,param_1 + 0x2c), uVar1 == 1)) &&
     (uVar1 = *((uint *)GEN_TOP(((int)this + 0x40))), uVar1 == *((uint *)GEN_TOP((param_1 + 0x40))))) {
    if (uVar1 == 0) {
      return 1;
    }
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x44)));
    if ((piVar3 != ((int *)GEN_TOP(0x0))) && (piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 0x44))), piVar2 != ((int *)GEN_TOP(0x0)))) {
      for (; 3 < uVar1; uVar1 = uVar1 - 4) {
        if (*piVar3 != *piVar2) {
          return 0;
        }
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      if (uVar1 == 0) {
        return 1;
      }
      if ((char)*piVar2 == (char)*piVar3) {
        if (uVar1 < 2) {
          return 1;
        }
        if (*((char *)GEN_TOP(((int)piVar2 + 1))) == *((char *)GEN_TOP(((int)piVar3 + 1)))) {
          if (uVar1 < 3) {
            return 1;
          }
          if (*((char *)GEN_TOP(((int)piVar2 + 2))) == *((char *)GEN_TOP(((int)piVar3 + 2)))) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00c8e090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c8dfd0(this GEN_EDX_FWD,param_1);
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00c8e0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e0d0(GEN_P(undefined8 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)param_2;
}

/* ref: FUN_00c8e0f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e0f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  *((undefined8 *)GEN_TOP((in_ecx + 0x10))) = *param_2;
  *((undefined8 *)GEN_TOP((in_ecx + 0x18))) = param_2[1];
  return (uint)param_2;
}

/* ref: FUN_00c8e130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: FUN_00c8e140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  *((undefined8 *)GEN_TOP((in_ecx + 0x2c))) = *param_2;
  *((undefined8 *)GEN_TOP((in_ecx + 0x34))) = param_2[1];
  return (uint)param_2;
}

/* ref: FUN_00c8e160 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c8e160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8e160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP(((int)this + 0x44))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  return;
}

/* ref: FUN_00c8e180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x40))) == param_1) {
    return *((uint *)GEN_TOP(((int)this + 0x44)));
  }
  pvVar1 = gen_imp_CoTaskMemAlloc(param_1);
  if (pvVar1 == (LPVOID)0x0) {
    if (param_1 <= *((uint *)GEN_TOP(((int)this + 0x40)))) {
      return *((uint *)GEN_TOP(((int)this + 0x44)));
    }
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP(((int)this + 0x44))));
  }
  *((LPVOID *)GEN_TOP(((int)this + 0x44))) = pvVar1;
  *((uint *)GEN_TOP(((int)this + 0x40))) = param_1;
  return (uint)pvVar1;
}

/* ref: FUN_00c8e1e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 0x40))) == param_1) {
    return *((uint *)GEN_TOP(((int)this + 0x44)));
  }
  pvVar1 = gen_imp_CoTaskMemAlloc(param_1);
  if (pvVar1 == (LPVOID)0x0) {
    if (param_1 <= *((uint *)GEN_TOP(((int)this + 0x40)))) {
      return *((uint *)GEN_TOP(((int)this + 0x44)));
    }
    return 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x40)));
  if (uVar2 != 0) {
    if (param_1 < uVar2) {
      uVar2 = param_1;
    }
    F_00c46aa0(pvVar1,*((undefined4 *)GEN_TOP(((int)this + 0x44))),uVar2);
    gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP(((int)this + 0x44))));
  }
  *((LPVOID *)GEN_TOP(((int)this + 0x44))) = pvVar1;
  *((uint *)GEN_TOP(((int)this + 0x40))) = param_1;
  return (uint)pvVar1;
}

/* ref: FUN_00c8e260 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c8e260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8e260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c48350(this,0,0x48);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 1;
  return 1;
}

/* ref: FUN_00c8e280 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c8e280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8e280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(this,&REFG(undefined, 0x1156560));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0((int)this + 0x2c,&REFG(undefined, 0x1156560));
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00c8e2c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  uVar1 = F_00c80fd0(param_1,&REFG(undefined, 0x1156560));
  if ((uVar1 == 0) && (uVar1 = F_00c80fd0(this,param_1), uVar1 == 0)) {
    return 0;
  }
  uVar1 = F_00c80fd0(param_1 + 0x10,&REFG(undefined, 0x1156560));
  if ((uVar1 == 0) && (uVar1 = F_00c80fd0((int)this + 0x10,param_1 + 0x10), uVar1 == 0)) {
    return 0;
  }
  uVar1 = F_00c80fd0(param_1 + 0x2c,&REFG(undefined, 0x1156560));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0((int)this + 0x2c,param_1 + 0x2c);
    if (uVar1 == 0) {
      return 0;
    }
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x40)));
    if (uVar1 != *((uint *)GEN_TOP((param_1 + 0x40)))) {
      return 0;
    }
    if (uVar1 != 0) {
      piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 0x44)));
      piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x44)));
      for (; 3 < uVar1; uVar1 = uVar1 - 4) {
        if (*piVar3 != *piVar2) {
          return 0;
        }
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      if (uVar1 != 0) {
        if ((char)*piVar2 != (char)*piVar3) {
          return 0;
        }
        if (1 < uVar1) {
          if (*((char *)GEN_TOP(((int)piVar2 + 1))) != *((char *)GEN_TOP(((int)piVar3 + 1)))) {
            return 0;
          }
          if ((2 < uVar1) && (*((char *)GEN_TOP(((int)piVar2 + 2))) != *((char *)GEN_TOP(((int)piVar3 + 2))))) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_00c8e3b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8e3b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar4 = param_2;
  puVar5 = param_1;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (param_2[0x10] != 0) {
    pvVar2 = gen_imp_CoTaskMemAlloc(param_2[0x10]);
    param_1[0x11] = pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      param_1[0x10] = 0;
      return 0x8007000e;
    }
    F_00c46aa0(pvVar2,param_2[0x11],param_1[0x10]);
  }
  piVar1 = ((int *)GEN_TOP(param_1[0xf]));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00c8e420 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8e420(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8e420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP((param_1 + 0x40))) != 0) {
    gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP((param_1 + 0x44))));
    *((undefined4 *)GEN_TOP((param_1 + 0x40))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x44))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x3c)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c8e460 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c8e460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8e460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP(((int)this + 0x44))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c8e4a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c8e4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8e4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c48350(this,0,0x48);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 1;
  return (uint)this;
}

/* ref: FUN_00c8e4c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  F_00c48350(this,0,0x48);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 1;
  *(undefined8 *)this = *param_1;
  *((undefined8 *)GEN_TOP(((int)this + 8))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c8e500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8e500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c8e3b0(this,param_1);
  if (((int)uVar1 < 0) && (param_2 != ((uint *)GEN_TOP(0x0)))) {
    *param_2 = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00c8e530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8e530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c8e3b0(this,param_1);
  if (((int)uVar1 < 0) && (param_2 != ((uint *)GEN_TOP(0x0)))) {
    *param_2 = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00c8e560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (param_1 != this) {
    if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
      gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP(((int)this + 0x44))));
      *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
    }
    uVar2 = F_00c8e3b0(this,param_1);
    if ((int)uVar2 < 0) {
      return 0x8007000e;
    }
  }
  return 0;
}

/* ref: FUN_00c8e5c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e5c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 == 0) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = 0;
    return param_2;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = 1;
  *((uint *)GEN_TOP((in_ecx + 0x28))) = param_2;
  return param_2;
}

/* ref: FUN_00c8e5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8e5e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  LPVOID pvVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x40))) == param_2) {
    pvVar1 = *((LPVOID *)GEN_TOP(((int)this + 0x44)));
  }
  else {
    pvVar1 = gen_imp_CoTaskMemAlloc(param_2);
    if (pvVar1 == (LPVOID)0x0) {
      if (*((uint *)GEN_TOP(((int)this + 0x40))) < param_2) {
        return 0;
      }
      pvVar1 = *((LPVOID *)GEN_TOP(((int)this + 0x44)));
    }
    else {
      if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
        gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP(((int)this + 0x44))));
      }
      *((uint *)GEN_TOP(((int)this + 0x40))) = param_2;
      *((LPVOID *)GEN_TOP(((int)this + 0x44))) = pvVar1;
    }
  }
  if (pvVar1 == (LPVOID)0x0) {
    return 0;
  }
  F_00c46aa0(*((undefined4 *)GEN_TOP(((int)this + 0x44))),param_1,param_2);
  return 1;
}

/* ref: FUN_00c8e650 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00c8e650(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8e650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  
  if (param_1 != 0) {
    if (*((int *)GEN_TOP((param_1 + 0x40))) != 0) {
      gen_imp_CoTaskMemFree(*((undefined4 *)GEN_TOP((param_1 + 0x44))));
      *((undefined4 *)GEN_TOP((param_1 + 0x40))) = 0;
      *((undefined4 *)GEN_TOP((param_1 + 0x44))) = 0;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x3c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = 0;
    }
    gen_imp_CoTaskMemFree(param_1);
  }
  return;
}

/* ref: FUN_00c8e6a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8e6a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8e6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pv;
  uint uVar1;
  
  pv = gen_imp_CoTaskMemAlloc(0x48);
  if (pv != (LPVOID)0x0) {
    uVar1 = F_00c8e3b0(pv,param_1);
    if (-1 < (int)uVar1) {
      return (uint)pv;
    }
    gen_imp_CoTaskMemFree(pv);
  }
  return 0;
}

/* ref: FUN_00c8e6e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c8e6e0(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8e6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined8 uVar1;
  undefined8 * puVar2;
  
  *param_2 = REFG(undefined8, 0x1084e08);
  param_2[1] = REFG(undefined8, 0x1084e10);
  if (*param_1 == 0xfffe) {
    param_2[2] = *(undefined8 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    param_2[2] = CONCAT44(0x100000,(uint)*param_1);
    uVar1 = 0x719b3800aa000080;
  }
  param_2[3] = uVar1;
  *((undefined8 *)GEN_TOP(((int)param_2 + 0x2c))) = REFG(undefined8, 0x1085d28);
  *((undefined8 *)GEN_TOP(((int)param_2 + 0x34))) = REFG(undefined8, 0x1085d30);
  *(undefined4 *)(param_2 + 4) = 1;
  *((undefined4 *)GEN_TOP(((int)param_2 + 0x24))) = 0;
  *(uint *)(param_2 + 5) = (uint)param_1[6];
  *((undefined4 *)GEN_TOP(((int)param_2 + 0x3c))) = 0;
  if (param_3 != 0) {
    if (*param_1 == 1) {
      *(undefined4 *)(param_2 + 8) = 0x12;
    }
    else {
      *(uint *)(param_2 + 8) = param_1[8] + 0x12;
    }
    puVar2 = gen_imp_CoTaskMemAlloc(*(SIZE_T *)(param_2 + 8));
    *((undefined8 * PTR32 *)GEN_TOP(((int)param_2 + 0x44))) = puVar2;
    if (puVar2 == ((undefined8 *)GEN_TOP(0x0))) {
      return 0x8007000e;
    }
    if (*param_1 == 1) {
      *puVar2 = *(undefined8 *)param_1;
      puVar2[1] = *(undefined8 *)(param_1 + 4);
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)param_2 + 0x44))) + 0x10))) = 0;
      return 0;
    }
    F_00c46aa0(puVar2,param_1,*(undefined4 *)(param_2 + 8));
  }
  return 0;
}

/* ref: FUN_00c8e810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != this) {
    if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
      gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP(((int)this + 0x44))));
      *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
    }
    F_00c8e3b0(this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00c8e870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != this) {
    if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
      gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP(((int)this + 0x44))));
      *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
    }
    F_00c8e3b0(this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00c8e8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (param_1 != this) {
    if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
      gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP(((int)this + 0x44))));
      *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
    }
    uVar2 = F_00c8e3b0(this,param_1);
    if ((int)uVar2 < 0) {
      return 0x8007000e;
    }
  }
  return 0;
}

/* ref: FUN_00c8e930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e930(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = 0x100000;
  in_ecx[2] = 0xaa000080;
  in_ecx[3] = 0x719b3800;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c8e9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e9a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c8e9d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8e9d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8e9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00c8e9f0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00c8e9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc8e9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 8))) *
                                      (float10)*((float *)GEN_TOP(((int)this + 8))) +
                                     ((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*((float *)GEN_TOP(((int)this + 4))) *
                                     (float10)*((float *)GEN_TOP(((int)this + 4)))))))))));
}

/* ref: FUN_00c8ea30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8ea30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8ea30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = 0;
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00c8ea60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8ea60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8ea60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00c8eb80 */
GEN_LIB GEN_NOFRAME uint F_00c8eb80(void)
{
  GEN_ENTER(0xc8eb80u, 0u, 0u, 0u, 0u);
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0;
    REFG(float, 0x15d7694) = 0;
    REFG(float, 0x15d7698) = 0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  return 0x15d7690;
}

/* ref: FUN_00c8ebd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8ebd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8ebd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00c8ec10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8ec10(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(float param_9, float gen_a8), GEN_P(float param_10, float gen_a9), GEN_P(float param_11, float gen_a10), GEN_P(float param_12, float gen_a11), GEN_P(float param_13, float gen_a12), GEN_P(float param_14, float gen_a13), GEN_P(float param_15, float gen_a14), GEN_P(float param_16, float gen_a15), GEN_P(float param_17, float gen_a16))
{
  GEN_ENTER(0xc8ec10u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  GEN_PIN(float param_11 = (float)gen_a10;)
  GEN_PIN(float param_12 = (float)gen_a11;)
  GEN_PIN(float param_13 = (float)gen_a12;)
  GEN_PIN(float param_14 = (float)gen_a13;)
  GEN_PIN(float param_15 = (float)gen_a14;)
  GEN_PIN(float param_16 = (float)gen_a15;)
  GEN_PIN(float param_17 = (float)gen_a16;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  in_ecx[4] = param_6;
  in_ecx[5] = param_7;
  in_ecx[6] = param_8;
  in_ecx[7] = param_9;
  in_ecx[8] = param_10;
  in_ecx[9] = param_11;
  in_ecx[10] = param_12;
  in_ecx[0xb] = param_13;
  in_ecx[0xc] = param_14;
  in_ecx[0xd] = param_15;
  in_ecx[0xe] = param_16;
  in_ecx[0xf] = param_17;
  return 0;
}

/* ref: FUN_00c8ecc0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8ecc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8ecc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
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

/* ref: FUN_00c8ed30 */
GEN_LIB GEN_FRAME unsigned int F_00c8ed30(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8ed30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  *param_1 = ((float)GEN_TOF(((((double)param_2[4] * (double)param_3[1] + (double)*param_2 * (double)*param_3
                      ) + (double)param_2[8] * (double)param_3[2]) +
                    (double)param_2[0xc] * (double)param_3[3])));
  param_1[1] = ((float)GEN_TOF(((((double)param_2[1] * (double)*param_3 +
                        (double)param_2[5] * (double)param_3[1]) +
                       (double)param_2[9] * (double)param_3[2]) +
                      (double)param_2[0xd] * (double)param_3[3])));
  param_1[2] = ((float)GEN_TOF(((((double)param_2[2] * (double)*param_3 +
                        (double)param_2[6] * (double)param_3[1]) +
                       (double)param_2[10] * (double)param_3[2]) +
                      (double)param_2[0xe] * (double)param_3[3])));
  param_1[3] = ((float)GEN_TOF(((((double)param_2[3] * (double)*param_3 +
                        (double)param_2[7] * (double)param_3[1]) +
                       (double)param_2[0xb] * (double)param_3[2]) +
                      (double)param_2[0xf] * (double)param_3[3])));
  return 0;
}

/* ref: FUN_00c8eed0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8eed0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8eed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = param_3[3];
  fVar2 = in_ecx[0xd];
  fVar3 = in_ecx[0xe];
  fVar4 = in_ecx[0xf];
  fVar5 = param_3[2];
  fVar6 = in_ecx[9];
  fVar7 = in_ecx[10];
  fVar8 = in_ecx[0xb];
  fVar9 = param_3[1];
  fVar10 = in_ecx[5];
  fVar11 = in_ecx[6];
  fVar12 = in_ecx[7];
  fVar13 = *param_3;
  fVar14 = in_ecx[1];
  fVar15 = in_ecx[2];
  fVar16 = in_ecx[3];
  *param_2 = ((*in_ecx * fVar13 + in_ecx[4] * fVar9) + in_ecx[8] * fVar5) + in_ecx[0xc] * fVar1;
  param_2[1] = ((fVar14 * fVar13 + fVar10 * fVar9) + fVar6 * fVar5) + fVar2 * fVar1;
  param_2[2] = ((fVar15 * fVar13 + fVar11 * fVar9) + fVar7 * fVar5) + fVar3 * fVar1;
  param_2[3] = ((fVar16 * fVar13 + fVar12 * fVar9) + fVar8 * fVar5) + fVar4 * fVar1;
  return 0;
}

/* ref: FUN_00c8f180 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8f180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc8f180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 0.0;
  *param_1 = ((float)GEN_TOF(((((double)*param_2 * (double)*(float *)this +
                      (double)param_2[1] * (double)*((float *)GEN_TOP(((int)this + 0x10)))) +
                     (double)*((float *)GEN_TOP(((int)this + 0x20))) * (double)param_2[2]) +
                    (double)*((float *)GEN_TOP(((int)this + 0x30))) * (double)param_2[3])));
  param_1[1] = ((float)GEN_TOF(((((double)*((float *)GEN_TOP(((int)this + 0x14))) * (double)param_2[1] +
                        (double)*param_2 * (double)*((float *)GEN_TOP(((int)this + 4)))) +
                       (double)*((float *)GEN_TOP(((int)this + 0x24))) * (double)param_2[2]) +
                      (double)param_2[3] * (double)*((float *)GEN_TOP(((int)this + 0x34))))));
  param_1[2] = ((float)GEN_TOF(((((double)*((float *)GEN_TOP(((int)this + 0x18))) * (double)param_2[1] +
                        (double)*((float *)GEN_TOP(((int)this + 8))) * (double)*param_2) +
                       (double)param_2[2] * (double)*((float *)GEN_TOP(((int)this + 0x28)))) +
                      (double)param_2[3] * (double)*((float *)GEN_TOP(((int)this + 0x38))))));
  param_1[3] = ((float)GEN_TOF(((((double)*((float *)GEN_TOP(((int)this + 0x1c))) * (double)param_2[1] +
                        (double)*param_2 * (double)*((float *)GEN_TOP(((int)this + 0xc)))) +
                       (double)*((float *)GEN_TOP(((int)this + 0x2c))) * (double)param_2[2]) +
                      (double)param_2[3] * (double)*((float *)GEN_TOP(((int)this + 0x3c))))));
  param_1[4] = ((float)GEN_TOF(((((double)param_2[5] * (double)*((float *)GEN_TOP(((int)this + 0x10))) +
                        (double)*(float *)((int)(uintptr_t)this) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*((float *)GEN_TOP(((int)this + 0x20)))) +
                      (double)*((float *)GEN_TOP(((int)this + 0x30))) * (double)param_2[7])));
  param_1[5] = ((float)GEN_TOF(((((double)*((float *)GEN_TOP(((int)this + 0x14))) * (double)param_2[5] +
                        (double)*((float *)GEN_TOP(((int)this + 4))) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*((float *)GEN_TOP(((int)this + 0x24)))) +
                      (double)param_2[7] * (double)*((float *)GEN_TOP(((int)this + 0x34))))));
  param_1[6] = ((float)GEN_TOF(((((double)param_2[5] * (double)*((float *)GEN_TOP(((int)this + 0x18))) +
                        (double)*((float *)GEN_TOP(((int)this + 8))) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*((float *)GEN_TOP(((int)this + 0x28)))) +
                      (double)*((float *)GEN_TOP(((int)this + 0x38))) * (double)param_2[7])));
  param_1[7] = ((float)GEN_TOF(((((double)*((float *)GEN_TOP(((int)this + 0x1c))) * (double)param_2[5] +
                        (double)*((float *)GEN_TOP(((int)this + 0xc))) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*((float *)GEN_TOP(((int)this + 0x2c)))) +
                      (double)param_2[7] * (double)*((float *)GEN_TOP(((int)this + 0x3c))))));
  param_1[8] = ((float)GEN_TOF(((((double)param_2[8] * (double)*(float *)this +
                        (double)param_2[9] * (double)*((float *)GEN_TOP(((int)this + 0x10)))) +
                       (double)param_2[10] * (double)*((float *)GEN_TOP(((int)this + 0x20)))) +
                      (double)param_2[0xb] * (double)*((float *)GEN_TOP(((int)this + 0x30))))));
  param_1[9] = ((float)GEN_TOF(((((double)param_2[8] * (double)*((float *)GEN_TOP(((int)this + 4))) +
                        (double)*((float *)GEN_TOP(((int)this + 0x14))) * (double)param_2[9]) +
                       (double)param_2[10] * (double)*((float *)GEN_TOP(((int)this + 0x24)))) +
                      (double)param_2[0xb] * (double)*((float *)GEN_TOP(((int)this + 0x34))))));
  param_1[10] = ((float)GEN_TOF(((((double)param_2[9] * (double)*((float *)GEN_TOP(((int)this + 0x18))) +
                         (double)*((float *)GEN_TOP(((int)this + 8))) * (double)param_2[8]) +
                        (double)param_2[10] * (double)*((float *)GEN_TOP(((int)this + 0x28)))) +
                       (double)param_2[0xb] * (double)*((float *)GEN_TOP(((int)this + 0x38))))));
  param_1[0xb] = ((float)GEN_TOF(((((double)param_2[8] * (double)*((float *)GEN_TOP(((int)this + 0xc))) +
                          (double)*((float *)GEN_TOP(((int)this + 0x1c))) * (double)param_2[9]) +
                         (double)param_2[10] * (double)*((float *)GEN_TOP(((int)this + 0x2c)))) +
                        (double)param_2[0xb] * (double)*((float *)GEN_TOP(((int)this + 0x3c))))));
  param_1[0xc] = ((float)GEN_TOF(((((double)param_2[0xd] * (double)*((float *)GEN_TOP(((int)this + 0x10))) +
                          (double)param_2[0xc] * (double)*(float *)this) +
                         (double)*((float *)GEN_TOP(((int)this + 0x20))) * (double)param_2[0xe]) +
                        (double)*((float *)GEN_TOP(((int)this + 0x30))) * (double)param_2[0xf])));
  param_1[0xd] = ((float)GEN_TOF(((((double)*((float *)GEN_TOP(((int)this + 0x14))) * (double)param_2[0xd] +
                          (double)param_2[0xc] * (double)*((float *)GEN_TOP(((int)this + 4)))) +
                         (double)*((float *)GEN_TOP(((int)this + 0x24))) * (double)param_2[0xe]) +
                        (double)param_2[0xf] * (double)*((float *)GEN_TOP(((int)this + 0x34))))));
  param_1[0xe] = ((float)GEN_TOF(((((double)param_2[0xc] * (double)*((float *)GEN_TOP(((int)this + 8))) +
                          (double)param_2[0xd] * (double)*((float *)GEN_TOP(((int)this + 0x18)))) +
                         (double)param_2[0xe] * (double)*((float *)GEN_TOP(((int)this + 0x28)))) +
                        (double)param_2[0xf] * (double)*((float *)GEN_TOP(((int)this + 0x38))))));
  param_1[0xf] = ((float)GEN_TOF(((((double)*((float *)GEN_TOP(((int)this + 0x1c))) * (double)param_2[0xd] +
                          (double)param_2[0xc] * (double)*((float *)GEN_TOP(((int)this + 0xc)))) +
                         (double)*((float *)GEN_TOP(((int)this + 0x2c))) * (double)param_2[0xe]) +
                        (double)param_2[0xf] * (double)*((float *)GEN_TOP(((int)this + 0x3c))))));
  return 0;
}

/* ref: FUN_00c8f7f0 */
GEN_LIB GEN_FRAME uint F_00c8f7f0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc8f7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0;
    REFG(float, 0x15d7694) = 0;
    REFG(float, 0x15d7698) = 0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  uVar15 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d769c)));
  uVar14 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7698)));
  uVar13 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7694)));
  uVar12 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7690)));
  if ((*(uint *)&REFG(undefined, 0x15d768c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d768c) = *(uint *)&REFG(undefined, 0x15d768c) | 1;
    REFG(float, 0x15d767c) = 0;
    REFG(float, 0x15d7680) = 0;
    REFG(float, 0x15d7684) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7688) = 0;
  }
  uVar11 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7688)));
  uVar10 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7684)));
  uVar9 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7680)));
  uVar8 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d767c)));
  if ((*(uint *)&REFG(undefined, 0x15d7678) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7678) = *(uint *)&REFG(undefined, 0x15d7678) | 1;
    REFG(float, 0x15d7668) = 0;
    REFG(float, 0x15d766c) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7670) = 0;
    REFG(float, 0x15d7674) = 0;
  }
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7674)));
  uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7670)));
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d766c)));
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7668)));
  if ((*(uint *)&REFG(undefined, 0x15d7664) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7664) = *(uint *)&REFG(undefined, 0x15d7664) | 1;
    REFG(float, 0x15d7654) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7658) = 0;
    REFG(float, 0x15d765c) = 0;
    REFG(float, 0x15d7660) = 0;
  }
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7660)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d765c)));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x15d7654)));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x15d7658));
  *param_1 = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[0xc] = uVar12;
  param_1[0xd] = uVar13;
  param_1[0xe] = uVar14;
  param_1[0xf] = uVar15;
  return (uint)param_1;
}

/* ref: FUN_00c8fa40 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8fa40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8fa40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[4];
  in_ecx[4] = param_2[5];
  in_ecx[5] = param_2[6];
  in_ecx[6] = param_2[8];
  in_ecx[7] = param_2[9];
  in_ecx[8] = param_2[10];
  in_ecx[9] = param_2[0xc];
  in_ecx[10] = param_2[0xd];
  in_ecx[0xb] = param_2[0xe];
  return 0;
}

/* ref: FUN_00c8faa0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8faa0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8faa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
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
  return 0;
}

/* ref: FUN_00c8fb00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8fb00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8fb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = 0;
  in_ecx[2] = uVar1;
  in_ecx[4] = param_2[3];
  in_ecx[5] = param_2[4];
  uVar1 = param_2[5];
  in_ecx[7] = 0;
  in_ecx[6] = uVar1;
  in_ecx[8] = param_2[6];
  in_ecx[9] = param_2[7];
  uVar1 = param_2[8];
  in_ecx[0xb] = 0;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[10] = uVar1;
  in_ecx[0xc] = param_2[9];
  in_ecx[0xd] = param_2[10];
  in_ecx[0xe] = param_2[0xb];
  in_ecx[0xf] = uVar2;
  return 0;
}

/* ref: FUN_00c8fb80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8fb80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8fb80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *in_ecx = *param_2;
  in_ecx[3] = 0;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  in_ecx[7] = 0;
  in_ecx[4] = uVar1;
  in_ecx[5] = uVar2;
  in_ecx[6] = uVar3;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  in_ecx[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[8] = uVar1;
  in_ecx[9] = uVar2;
  in_ecx[10] = uVar3;
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  in_ecx[0xc] = param_2[9];
  in_ecx[0xd] = uVar1;
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00c8fc30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c8fc30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc8fc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = *param_3;
  in_ecx[4] = param_3[1];
  in_ecx[5] = param_3[2];
  return (uint)in_ecx;
}

/* ref: FUN_00c8fc60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8fc60(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc8fc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  double dVar1;
  
  dVar1 = REFG(double, 0x1088108);
  *param_2 = ((float)GEN_TOF((((double)in_ecx[3] + (double)*in_ecx) * REFG(double, 0x1088108))));
  param_2[1] = ((float)GEN_TOF((((double)in_ecx[4] + (double)in_ecx[1]) * dVar1)));
  param_2[2] = ((float)GEN_TOF((((double)in_ecx[5] + (double)in_ecx[2]) * dVar1)));
  return 0;
}

/* ref: FUN_00c8fce0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8fce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc8fce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x40))) + 4)));
  F_00c9f060(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00c8fd40 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c8fd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc8fd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
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
  int iVar12;
  int iVar13;
  float * pfVar14;
  ushort * puVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  iVar12 = *((int *)GEN_TOP(((int)this + 0xc)));
  fVar1 = *((float *)GEN_TOP((iVar12 + 0x10)));
  fVar2 = *((float *)GEN_TOP((iVar12 + 0x14)));
  fVar3 = *((float *)GEN_TOP((iVar12 + 0x18)));
  dVar20 = ((double)*((float *)GEN_TOP((iVar12 + 0x1c))) - (double)fVar1) / REFG(double, 0x109cab0);
  dVar21 = ((double)*((float *)GEN_TOP((iVar12 + 0x20))) - (double)fVar2) / REFG(double, 0x109cab0);
  puVar15 = ((ushort *)GEN_TOP((iVar12 + ((uint)*((ushort *)GEN_TOP((iVar12 + 0x2c))) * 3 + 0xc) * 4)));
  iVar13 = *((int *)GEN_TOP(((int)this + 0xc)));
  dVar22 = ((double)*((float *)GEN_TOP((iVar12 + 0x24))) - (double)fVar3) / REFG(double, 0x109cab0);
  uVar16 = 0;
  if (*((short *)GEN_TOP((iVar13 + 0x28))) != 0) {
    pfVar14 = ((float *)GEN_TOP((param_3 + param_1 * 0xc + 8)));
    do {
      fVar17 = (float)((double)*puVar15 * (double)(float)dVar20 + (double)fVar1);
      fVar18 = (float)((double)puVar15[1] * (double)(float)dVar21 + (double)fVar2);
      fVar19 = (float)((double)puVar15[2] * (double)(float)dVar22 + (double)fVar3);
      fVar4 = param_2[9];
      fVar5 = param_2[10];
      fVar6 = param_2[0xd];
      fVar7 = param_2[0xe];
      fVar8 = param_2[5];
      fVar9 = param_2[6];
      fVar10 = param_2[1];
      fVar11 = param_2[2];
      pfVar14[-2] = ((*param_2 * fVar17 + fVar18 * param_2[4]) + param_2[8] * fVar19) + param_2[0xc]
      ;
      pfVar14[-1] = ((fVar17 * fVar10 + fVar8 * fVar18) + fVar4 * fVar19) + fVar6;
      *pfVar14 = ((fVar11 * fVar17 + fVar18 * fVar9) + fVar5 * fVar19) + fVar7;
      uVar16 = uVar16 + 1;
      puVar15 = puVar15 + 3;
      pfVar14 = pfVar14 + 3;
    } while (uVar16 < *((ushort *)GEN_TOP((iVar13 + 0x28))));
  }
  return 0;
}

/* ref: FUN_00c90030 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c90030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc90030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort * puVar8;
  float * pfVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar6 = *((int *)GEN_TOP(((int)this + 0xc)));
  fVar1 = *((float *)GEN_TOP((iVar6 + 0x10)));
  uVar4 = *((ushort *)GEN_TOP((iVar6 + 0x2c)));
  fVar2 = *((float *)GEN_TOP((iVar6 + 0x14)));
  fVar3 = *((float *)GEN_TOP((iVar6 + 0x18)));
  dVar12 = ((double)*((float *)GEN_TOP((iVar6 + 0x1c))) - (double)fVar1) / REFG(double, 0x109cab0);
  dVar13 = ((double)*((float *)GEN_TOP((iVar6 + 0x20))) - (double)fVar2) / REFG(double, 0x109cab0);
  dVar11 = ((double)*((float *)GEN_TOP((iVar6 + 0x24))) - (double)fVar3) / REFG(double, 0x109cab0);
  F_00c46aa0(param_1,iVar6 + 0x30,(uint)uVar4 * 0xc);
  iVar7 = *((int *)GEN_TOP(((int)this + 0xc)));
  pfVar9 = ((float *)GEN_TOP((param_1 + 8 + (uint)*((ushort *)GEN_TOP((iVar7 + 0x2c))) * 0xc)));
  uVar10 = 0;
  if (*((short *)GEN_TOP((iVar7 + 0x28))) != 0) {
    puVar8 = ((ushort *)GEN_TOP((iVar6 + ((uint)uVar4 * 3 + 0xc) * 4 + 4)));
    do {
      uVar4 = puVar8[-1];
      uVar5 = *puVar8;
      pfVar9[-2] = (float)((double)puVar8[-2] * (double)(float)dVar12 + (double)fVar1);
      pfVar9[-1] = (float)((double)uVar4 * (double)(float)dVar13 + (double)fVar2);
      *pfVar9 = (float)((double)uVar5 * (double)(float)dVar11 + (double)fVar3);
      uVar10 = uVar10 + 1;
      puVar8 = puVar8 + 3;
      pfVar9 = pfVar9 + 3;
    } while (uVar10 < *((ushort *)GEN_TOP((iVar7 + 0x28))));
  }
  return 0;
}

/* ref: FUN_00c901b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c901b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xc901b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  byte * pbVar1;
  float * pfVar2;
  int iVar3;
  
  if (-1 < param_2) {
    iVar3 = *((int *)GEN_TOP((param_1 + 0xc)));
    pbVar1 = ((byte *)GEN_TOP((iVar3 + ((uint)*((ushort *)GEN_TOP((iVar3 + 0x28))) + param_2 + 8 +
                              (uint)*((ushort *)GEN_TOP((iVar3 + 0x2c))) * 2) * 6)));
    *param_3 = *param_6 * param_7;
    param_3[1] = param_6[1] * param_7;
    param_3[2] = param_6[2] * param_7;
    *param_3 = *param_3 + *param_5;
    param_3[1] = param_5[1] + param_3[1];
    param_3[2] = param_5[2] + param_3[2];
    iVar3 = *param_4;
    pfVar2 = ((float *)GEN_TOP((iVar3 + (uint)*pbVar1 * 0xc)));
    param_3[3] = *pfVar2;
    param_3[4] = pfVar2[1];
    param_3[5] = pfVar2[2];
    pfVar2 = ((float *)GEN_TOP((iVar3 + (uint)pbVar1[1] * 0xc)));
    param_3[6] = *pfVar2;
    param_3[7] = pfVar2[1];
    param_3[8] = pfVar2[2];
    pfVar2 = ((float *)GEN_TOP((iVar3 + (uint)pbVar1[2] * 0xc)));
    param_3[9] = *pfVar2;
    param_3[10] = pfVar2[1];
    param_3[0xb] = pfVar2[2];
    param_3[0xf] = gen_bits2f((uint)CONCAT12(pbVar1[3],*(undefined2 *)(pbVar1 + 4)));
    param_3[0x10] = param_7;
    return 1;
  }
  return 0;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c90300(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc90300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xc))) + 0x10;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c90310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc90310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xc))) + 0x1c;
}

/* ref: FUN_00c90320 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c90320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc90320u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int iVar1;
  int * piVar2;
  byte * pbVar3;
  int * piVar4;
  uint uVar5;
  int local_8;
  
  piVar2 = param_3;
  uVar5 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    local_8 = 0;
    do {
      pbVar3 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x30))) + local_8)));
      iVar1 = *((int *)GEN_TOP(((int)this + 0x2c)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 8))))
                (param_3 GEN_EDX_ARG,param_1,(uint)*pbVar3 * 0x10 + iVar1,(uint)pbVar3[1] * 0x10 + iVar1,
                 (uint)pbVar3[2] * 0x10 + iVar1,0);
      local_8 = local_8 + 6;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *((uint *)GEN_TOP(((int)this + 0x28))));
  }
  piVar4 = ((int *)GEN_TOP(((int)this + 0x34)));
  param_3 = ((int *)GEN_TOP(0x2));
  do {
    if (*piVar4 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar4)) + 4))))(((int *)GEN_TOP(*piVar4)) GEN_EDX_ARG,param_1,param_2,piVar2);
    }
    piVar4 = piVar4 + 1;
    param_3 = ((int *)GEN_TOP(((int)param_3 - 1)));
  } while (param_3 != ((int *)GEN_TOP(0x0)));
  return;
}

/* ref: FUN_00c903b0 */
GEN_LIB GEN_NOFRAME uint F_00c903b0(void)
{
  GEN_ENTER(0xc903b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c903c0 */
GEN_LIB GEN_NOFRAME uint F_00c903c0(void)
{
  GEN_ENTER(0xc903c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c903d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c903d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc903d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00c903e0 */
GEN_LIB GEN_NOFRAME uint F_00c903e0(void)
{
  GEN_ENTER(0xc903e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c903f0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c903f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc903f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00c90400 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c90400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc90400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00c90410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c90410(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc90410u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  ushort * puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  ushort * puVar9;
  float * pfVar10;
  uint uVar11;
  int * piVar12;
  byte * pbVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  
  uVar8 = param_3;
  (*(int *)(gen_frame + 0x34)) = param_1;
  iVar14 = *((int *)GEN_TOP((param_1 + 0xc)));
  fVar2 = *((float *)GEN_TOP((iVar14 + 0x10)));
  fVar3 = *((float *)GEN_TOP((iVar14 + 0x14)));
  fVar4 = *((float *)GEN_TOP((iVar14 + 0x18)));
  (*(float *)(gen_frame + 0x1c)) = *((float *)GEN_TOP((iVar14 + 0x24)));
  fVar5 = *((float *)GEN_TOP((iVar14 + 0x1c))) - fVar2;
  (*(float *)(gen_frame + 0x3c)) = fVar5;
  fVar6 = *((float *)GEN_TOP((iVar14 + 0x20))) - fVar3;
  (*(float *)(gen_frame + 0x38)) = fVar6;
  fVar15 = (float)((double)fVar5 * REFG(double, 0x1088108));
  fVar20 = (float)((double)fVar6 * REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x20)) = fVar2;
  iVar14 = *param_4;
  (*(float *)(gen_frame + 0x24)) = fVar3;
  fVar5 = *((float *)GEN_TOP((param_3 + 0x34)));
  (*(float *)(gen_frame + 0x28)) = fVar4;
  dVar22 = (double)fVar20;
  fVar6 = *((float *)GEN_TOP((param_3 + 0x38)));
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((double)fVar2 + (double)*((float *)GEN_TOP((param_3 + 0x30)))) + (double)fVar15)));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((double)fVar5 + (double)fVar3) + (double)fVar20)));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((((double)fVar6 + (double)fVar4) + (double)fVar15)));
  (*(float *)(gen_frame + 0xc)) = SQRT(((float)GEN_TOF(((dVar22 * dVar22 + (double)fVar15 * (double)fVar15) +
                         (double)fVar15 * (double)fVar15))));
  puVar9 = ((ushort *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar14 + 0x1c))))(param_4,param_2,&(*(float *)(gen_frame + 0x0)))));
  if ((char)puVar9 == '\0') {
    iVar14 = *((int *)GEN_TOP((param_1 + 0xc)));
    (*(int *)(gen_frame + 0x30)) = iVar14;
    if (*((int *)GEN_TOP((iVar14 + 0x2c))) != 0) {
      dVar22 = (double)(*(float *)(gen_frame + 0x3c)) / REFG(double, 0x109cab0);
      (*(float *)(gen_frame + 0x3c)) = (float)dVar22;
      dVar18 = (double)(*(float *)(gen_frame + 0x38)) / REFG(double, 0x109cab0);
      (*(float *)(gen_frame + 0x38)) = (float)dVar18;
      puVar9 = ((ushort *)GEN_TOP((iVar14 + 0x30)));
      puVar1 = puVar9 + *((int *)GEN_TOP((iVar14 + 0x28))) * 3;
      dVar19 = (double)((*(float *)(gen_frame + 0x1c)) - (*(float *)(gen_frame + 0x28))) / REFG(double, 0x109cab0);
      (*(ushort * PTR32 *)(gen_frame + 0x2c)) = puVar1;
      uVar11 = 0;
      if (*((int *)GEN_TOP((iVar14 + 0x28))) != 0) {
        pfVar10 = ((float *)GEN_TOP((param_5 + 8)));
        do {
          fVar21 = (float)((double)puVar9[2] * (double)(float)dVar19 + (double)(*(float *)(gen_frame + 0x28)));
          fVar2 = *((float *)GEN_TOP((param_3 + 0x34)));
          fVar3 = *((float *)GEN_TOP((param_3 + 0x38)));
          fVar4 = *((float *)GEN_TOP((param_3 + 0x24)));
          fVar17 = (float)((double)puVar9[1] * (double)(float)dVar18 + (double)(*(float *)(gen_frame + 0x24)));
          fVar5 = *((float *)GEN_TOP((param_3 + 0x28)));
          fVar6 = *((float *)GEN_TOP((param_3 + 0x14)));
          fVar15 = *((float *)GEN_TOP((param_3 + 0x18)));
          fVar16 = (float)((double)(float)dVar22 * (double)*puVar9 + (double)(*(float *)(gen_frame + 0x20)));
          (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP(param_3)) * fVar16;
          fVar20 = *((float *)GEN_TOP((param_3 + 4)));
          fVar7 = *((float *)GEN_TOP((param_3 + 8))) * fVar16;
          (*(float *)(gen_frame + 0x18)) = fVar7;
          pfVar10[-2] = ((*((float *)GEN_TOP(param_3)) * fVar16 + *((float *)GEN_TOP((param_3 + 0x10))) * fVar17) +
                        *((float *)GEN_TOP((param_3 + 0x20))) * fVar21) + *((float *)GEN_TOP((param_3 + 0x30)));
          pfVar10[-1] = ((fVar20 * fVar16 + fVar6 * fVar17) + fVar4 * fVar21) + fVar2;
          *pfVar10 = ((fVar7 + fVar15 * fVar17) + fVar21 * fVar5) + fVar3;
          uVar11 = uVar11 + 1;
          puVar9 = puVar9 + 3;
          pfVar10 = pfVar10 + 3;
        } while (uVar11 < *((uint *)GEN_TOP((iVar14 + 0x28))));
      }
      param_3 = 0;
      param_1 = (*(int *)(gen_frame + 0x34));
      if (*((int *)GEN_TOP((iVar14 + 0x2c))) != 0) {
        pbVar13 = ((byte *)GEN_TOP(((int)puVar1 + 1)));
        do {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 8))))
                    (param_4 GEN_EDX_ARG,param_2,param_5 + (uint)pbVar13[-1] * 0xc,
                     param_5 + (uint)*pbVar13 * 0xc,param_5 + (uint)pbVar13[1] * 0xc,0);
          puVar9 = ((ushort *)GEN_TOP((param_3 + 1)));
          pbVar13 = pbVar13 + 6;
          param_1 = (*(int *)(gen_frame + 0x34));
          param_3 = (uint)puVar9;
        } while (puVar9 < *((ushort * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0xc))) + 0x2c))));
      }
    }
    piVar12 = ((int *)GEN_TOP((param_1 + 0x10)));
    iVar14 = 2;
    do {
      if (*piVar12 != 0) {
        puVar9 = ((ushort *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar12)) + 4))))(((int *)GEN_TOP(*piVar12)) GEN_EDX_ARG,param_2,uVar8,param_4)));
      }
      piVar12 = piVar12 + 1;
      iVar14 = iVar14 - 1;
    } while (iVar14 != 0);
  }
  return (uint)puVar9;
}

/* ref: FUN_00c908b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c908b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc908b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xc))) + 0x10;
}

/* ref: FUN_00c908c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c908c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc908c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xc))) + 0x1c;
}

/* ref: FUN_00c908d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c908d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc908d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  ushort * puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int * piVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  byte bVar14;
  char cVar17;
  float * pfVar15;
  undefined4 * puVar16;
  ushort * puVar18;
  uint uVar19;
  float * pfVar20;
  uint uVar21;
  undefined4 * puVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  
  iVar11 = (int)(*(byte * PTR32 *)&gen_args[4]);
  uVar21 = (*(uint *)&gen_args[2]);
  pfVar20 = (*(float * PTR32 *)&gen_args[1]);
  iVar8 = *((int *)GEN_TOP((param_1 + 0xc)));
  (*(int *)(gen_frame + 0x74)) = param_1;
  if (*((int *)GEN_TOP((iVar8 + 0x2c))) != 0) {
    fVar23 = *((float *)GEN_TOP((iVar8 + 0x1c)));
    fVar2 = *((float *)GEN_TOP((iVar8 + 0x10)));
    fVar3 = *((float *)GEN_TOP((iVar8 + 0x14)));
    fVar4 = *((float *)GEN_TOP((iVar8 + 0x24)));
    fVar5 = *((float *)GEN_TOP((iVar8 + 0x18)));
    fVar24 = ((float)GEN_TOF((((double)*((float *)GEN_TOP((iVar8 + 0x20))) - (double)fVar3) / REFG(double, 0x109cab0))));
    puVar18 = ((ushort *)GEN_TOP((iVar8 + 0x30)));
    iVar9 = *((int *)GEN_TOP((iVar8 + 0x28)));
    (*(float *)(gen_frame + 0x88)) = fVar24;
    puVar1 = puVar18 + iVar9 * 3;
    (*(ushort * PTR32 *)(gen_frame + 0x7c)) = puVar1;
    dVar25 = ((double)fVar23 - (double)fVar2) / REFG(double, 0x109cab0);
    uVar19 = 0;
    fVar23 = ((float)GEN_TOF((((double)fVar4 - (double)fVar5) / REFG(double, 0x109cab0))));
    (*(uint *)(gen_frame + 0x70)) = 0xffffffff;
    (*(float *)(gen_frame + 0x84)) = fVar23;
    if (*((int *)GEN_TOP((iVar8 + 0x28))) != 0) {
      pfVar15 = ((float *)GEN_TOP(((int)(*(byte * PTR32 *)&gen_args[4]) + 8)));
      do {
        uVar6 = puVar18[1];
        uVar7 = puVar18[2];
        pfVar15[-2] = (float)((double)*puVar18 * (double)(float)dVar25 + (double)fVar2);
        pfVar15[-1] = (float)((double)uVar6 * (double)fVar24 + (double)fVar3);
        *pfVar15 = (float)((double)uVar7 * (double)fVar23 + (double)fVar5);
        uVar19 = uVar19 + 1;
        puVar18 = puVar18 + 3;
        pfVar15 = pfVar15 + 3;
      } while (uVar19 < *((uint *)GEN_TOP((iVar8 + 0x28))));
    }
    iVar8 = *((int *)GEN_TOP((iVar8 + 0x2c)));
    (*(float *)(gen_frame + 0x88)) = 0.0;
    if (iVar8 != 0) {
      (*(byte * PTR32 *)&gen_args[4]) = ((byte *)GEN_TOP(((int)puVar1 + 1)));
      do {
        bVar14 = F_00c99be0(pfVar20,uVar21,iVar11 + (uint)(*(byte * PTR32 *)&gen_args[4])[-1] * 0xc,
                              iVar11 + (uint)*(*(byte * PTR32 *)&gen_args[4]) * 0xc,iVar11 + (uint)(*(byte * PTR32 *)&gen_args[4])[1] * 0xc,&(*(uint *)&gen_args[2])
                              ,&(*(float *)(gen_frame + 0x84)),&(*(float * PTR32 *)&gen_args[1]));
        if (((bVar14 != 0) && (gen_bits2f((*(uint *)&gen_args[2])) <= *((float *)GEN_TOP((*(uint *)&gen_args[3]))))) &&
           ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[2]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !(gen_bits2f((*(uint *)&gen_args[2])) < *(float *)&REFG(undefined, 0x1088114)))) {
          (*(uint *)(gen_frame + 0x70)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x88)));
          *((uint *)GEN_TOP((*(uint *)&gen_args[3]))) = (*(uint *)&gen_args[2]);
        }
        iVar8 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x74)) + 0xc)));
        (*(byte * PTR32 *)&gen_args[4]) = (*(byte * PTR32 *)&gen_args[4]) + 6;
        uVar19 = (int)gen_fl2bits((*(float *)(gen_frame + 0x88))) + 1;
        (*(float *)(gen_frame + 0x88)) = gen_bits2f(uVar19);
      } while (uVar19 < *((uint *)GEN_TOP((iVar8 + 0x2c))));
      if (-1 < (int)(*(uint *)(gen_frame + 0x70))) {
        puVar18 = (*(ushort * PTR32 *)(gen_frame + 0x7c)) + (*(uint *)(gen_frame + 0x70)) * 3;
        fVar23 = *((float *)GEN_TOP((*(uint *)&gen_args[3])));
        *(*(float * PTR32 *)&gen_args[0]) = *((float *)GEN_TOP(uVar21)) * fVar23;
        (*(float * PTR32 *)&gen_args[0])[1] = *((float *)GEN_TOP((uVar21 + 4))) * fVar23;
        (*(float * PTR32 *)&gen_args[0])[2] = *((float *)GEN_TOP((uVar21 + 8))) * fVar23;
        *(*(float * PTR32 *)&gen_args[0]) = *(*(float * PTR32 *)&gen_args[0]) + *pfVar20;
        (*(float * PTR32 *)&gen_args[0])[1] = pfVar20[1] + (*(float * PTR32 *)&gen_args[0])[1];
        (*(float * PTR32 *)&gen_args[0])[2] = pfVar20[2] + (*(float * PTR32 *)&gen_args[0])[2];
        pfVar20 = ((float *)GEN_TOP((iVar11 + (uint)(byte)*puVar18 * 0xc)));
        (*(float * PTR32 *)&gen_args[0])[3] = *pfVar20;
        (*(float * PTR32 *)&gen_args[0])[4] = pfVar20[1];
        (*(float * PTR32 *)&gen_args[0])[5] = pfVar20[2];
        pfVar20 = ((float *)GEN_TOP((iVar11 + (uint)*((byte *)GEN_TOP(((int)puVar18 + 1))) * 0xc)));
        (*(float * PTR32 *)&gen_args[0])[6] = *pfVar20;
        (*(float * PTR32 *)&gen_args[0])[7] = pfVar20[1];
        (*(float * PTR32 *)&gen_args[0])[8] = pfVar20[2];
        pfVar20 = ((float *)GEN_TOP((iVar11 + (uint)(byte)puVar18[1] * 0xc)));
        (*(float * PTR32 *)&gen_args[0])[9] = *pfVar20;
        (*(float * PTR32 *)&gen_args[0])[10] = pfVar20[1];
        (*(float * PTR32 *)&gen_args[0])[0xb] = pfVar20[2];
        (*(float * PTR32 *)&gen_args[0])[0xf] = gen_bits2f((uint)CONCAT12(*((byte *)GEN_TOP(((int)puVar18 + 3))),puVar18[2]));
        (*(float * PTR32 *)&gen_args[0])[0x10] = *((float *)GEN_TOP((*(uint *)&gen_args[3])));
        return 1;
      }
    }
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  uVar21 = 0;
  pfVar20 = &(*(float *)(gen_frame + 0x78));
  puVar22 = ((undefined4 *)GEN_TOP((param_1 + 0x10)));
  do {
    puVar16 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar22)) + 8))))(((int *)GEN_TOP(*puVar22)) GEN_EDX_ARG)));
    piVar10 = ((int *)GEN_TOP(*puVar22));
    (*(undefined4 *)(gen_frame + 0x58)) = *puVar16;
    (*(undefined4 *)(gen_frame + 0x5c)) = puVar16[1];
    (*(undefined4 *)(gen_frame + 0x60)) = puVar16[2];
    puVar16 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0xc))))(piVar10 GEN_EDX_ARG)));
    (*(undefined4 *)(gen_frame + 0x64)) = *puVar16;
    (*(undefined4 *)(gen_frame + 0x68)) = puVar16[1];
    (*(undefined4 *)(gen_frame + 0x6c)) = puVar16[2];
    bVar14 = F_00c99860((*(float * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x58)),pfVar20,&(*(undefined4 *)(gen_frame + 0x4c)));
    iVar8 = (int)(*(byte * PTR32 *)&gen_args[4]);
    uVar19 = (*(uint *)&gen_args[3]);
    *((byte *)GEN_TOP(((int)&(*(float *)(gen_frame + 0x88)) + uVar21))) = bVar14;
    uVar13 = (uint)gen_fl2bits((*(float *)(gen_frame + 0x88)));
    uVar21 = uVar21 + 1;
    puVar22 = puVar22 + 1;
    pfVar20 = pfVar20 + 1;
  } while (uVar21 < 2);
  uVar21 = 0;
  (*(int *)(gen_frame + 0x80)) = 0;
  (*(float *)(gen_frame + 0x84)) = 1.4013e-45;
  cVar17 = (char)((uint)gen_fl2bits((*(float *)(gen_frame + 0x88))) >> 8);
  if ((char)(uint)gen_fl2bits((*(float *)(gen_frame + 0x88))) == '\0') {
    if (cVar17 == '\0') {
      (*(int *)(gen_frame + 0x80)) = -1;
    }
    else {
      (*(int *)(gen_frame + 0x80)) = 1;
      (*(float *)(gen_frame + 0x84)) = -NAN;
    }
  }
  else if (cVar17 == '\0') {
    (*(int *)(gen_frame + 0x80)) = 0;
    (*(float *)(gen_frame + 0x84)) = -NAN;
  }
  else if (((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0x7c))))) < (*(float *)(gen_frame + 0x78))) {
    (*(int *)(gen_frame + 0x80)) = 1;
    (*(float *)(gen_frame + 0x84)) = 0.0;
  }
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x88)) + 3)) = 0;
  (*(float *)(gen_frame + 0x88)) = gen_bits2f(uVar13 & 0xffffff);
  do {
    iVar11 = (&(*(int *)(gen_frame + 0x80)))[uVar21];
    if (iVar11 == -1) break;
    (*(uint *)&gen_args[3]) = *((uint *)GEN_TOP(uVar19));
    fVar23 = (&(*(float *)(gen_frame + 0x78)))[iVar11];
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    if ((((double)fVar23 - REFG(double, 0x1091858) < ((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))))) &&
        (uVar12 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x74)) + 0x10 + iVar11 * 4))),
        bVar14 = F_00c908d0(uVar12 GEN_EDX_ARG,(float *)&(*(undefined4 *)(gen_frame + 0x0)),(*(float * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[2]),(uint)&(*(uint *)&gen_args[3]),((byte *)GEN_TOP(iVar8))
                             ), bVar14 != 0)) && (gen_bits2f((*(uint *)&gen_args[3])) < *((float *)GEN_TOP(uVar19)))) {
      *((uint *)GEN_TOP(uVar19)) = (*(uint *)&gen_args[3]);
      F_00550bc0((*(float * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x88)) + 3)) = 1;
      (*(float *)(gen_frame + 0x88)) = gen_bits2f(CONCAT13(1,GEN_PIECE(&(*(float *)(gen_frame + 0x88)), 0, 3)));
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 < 2);
  return (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x88)) + 3));
}

/* ref: FUN_00c90e00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c90e00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc90e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + 0x2c)));
}

/* ref: FUN_00c90e10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c90e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc90e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + 0x28)));
}

/* ref: FUN_00c90e20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c90e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc90e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
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
  int iVar12;
  ushort * puVar13;
  float * pfVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  iVar12 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (*((int *)GEN_TOP((iVar12 + 0x2c))) != 0) {
    fVar1 = *((float *)GEN_TOP((iVar12 + 0x10)));
    fVar2 = *((float *)GEN_TOP((iVar12 + 0x14)));
    fVar3 = *((float *)GEN_TOP((iVar12 + 0x18)));
    dVar21 = ((double)GEN_TOD((*((float *)GEN_TOP((iVar12 + 0x1c))) - fVar1))) / REFG(double, 0x109cab0);
    dVar19 = ((double)GEN_TOD((*((float *)GEN_TOP((iVar12 + 0x20))) - fVar2))) / REFG(double, 0x109cab0);
    uVar15 = 0;
    dVar20 = ((double)GEN_TOD((*((float *)GEN_TOP((iVar12 + 0x24))) - fVar3))) / REFG(double, 0x109cab0);
    puVar13 = ((ushort *)GEN_TOP((iVar12 + 0x30)));
    if (*((int *)GEN_TOP((iVar12 + 0x28))) != 0) {
      pfVar14 = ((float *)GEN_TOP((param_2 + 8)));
      do {
        fVar16 = (float)((double)(float)dVar21 * (double)*puVar13 + (double)fVar1);
        fVar17 = (float)((double)puVar13[1] * (double)(float)dVar19 + (double)fVar2);
        fVar18 = (float)((double)puVar13[2] * (double)(float)dVar20 + (double)fVar3);
        fVar4 = param_1[9];
        fVar5 = param_1[0xd];
        fVar6 = param_1[0xe];
        fVar7 = param_1[10];
        fVar8 = param_1[5];
        fVar9 = param_1[6];
        fVar10 = param_1[1];
        fVar11 = param_1[2];
        pfVar14[-2] = ((*param_1 * fVar16 + param_1[4] * fVar17) + param_1[8] * fVar18) +
                      param_1[0xc];
        pfVar14[-1] = ((fVar10 * fVar16 + fVar8 * fVar17) + fVar18 * fVar4) + fVar5;
        *pfVar14 = ((fVar11 * fVar16 + fVar9 * fVar17) + fVar7 * fVar18) + fVar6;
        uVar15 = uVar15 + 1;
        puVar13 = puVar13 + 3;
        pfVar14 = pfVar14 + 3;
      } while (uVar15 < *((uint *)GEN_TOP((iVar12 + 0x28))));
    }
  }
  return;
}

/* ref: FUN_00c91120 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c91120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc91120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xc))) + (*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + 0x28))) * 3 + 0x18) * 2;
}

/* ref: FUN_00c91130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c91130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc91130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xc)));
  *param_2 = *((undefined4 *)GEN_TOP((uVar1 + 0x10)));
  param_2[1] = *((undefined4 *)GEN_TOP((uVar1 + 0x14)));
  param_2[2] = *((undefined4 *)GEN_TOP((uVar1 + 0x18)));
  param_2[3] = *((undefined4 *)GEN_TOP((uVar1 + 0x1c)));
  param_2[4] = *((undefined4 *)GEN_TOP((uVar1 + 0x20)));
  param_2[5] = *((undefined4 *)GEN_TOP((uVar1 + 0x24)));
  return uVar1;
}

/* ref: FUN_00c91160 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c91160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc91160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,this);
  piVar2 = ((int *)GEN_TOP(((int)this + 0x10)));
  iVar1 = 2;
  do {
    if (*piVar2 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar2)) + 0x28))))(((int *)GEN_TOP(*piVar2)) GEN_EDX_ARG,param_1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00c911a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c911a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc911a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (this == ((undefined *)GEN_TOP(0x0))) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)this + 0x68;
  }
  uVar3 = F_00c96f70(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4))) GEN_EDX_FWD,param_1,iVar2,0,0,0,0);
  *((uint *)GEN_TOP(((int)this + 0x6c))) = uVar3;
  *((int *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x30))) + 1;
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 0x20)));
  *piVar1 = *piVar1 + 1;
  return 1;
}

/* ref: FUN_00c911e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c911e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc911e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x80))));
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00c91210 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c91210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc91210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0x30))) == 0) && (*((int *)GEN_TOP((in_ecx + 0x6c))) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c91230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c91230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc91230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x94)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x98)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x9c)));
  return (uint)param_2;
}

/* ref: FUN_00c91260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c91260(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc91260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xa0)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0xa4)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0xa8)));
  return (uint)param_2;
}

/* ref: FUN_00c91290 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c91290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc91290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 200)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xc4)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xd8)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xdc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xe0)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xe4)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xec)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xf0)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 0xe8)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00c91360 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c91360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc91360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  
  if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,this);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,this,((undefined1 *)(gen_frame + 0x0)),param_1);
  }
  return;
}

/* ref: FUN_00c913c0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c913c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc913c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x290, 0, 4);
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
  undefined4 * puVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  if (*((char *)GEN_TOP(((int)this + 0x78))) != '\0') {
    fVar8 = *((float *)GEN_TOP(((int)this + 0xb0)));
    (*(float *)(gen_frame + 0x200)) = *((float *)GEN_TOP(((int)this + 0x88))) - *((float *)GEN_TOP(((int)this + 0xac)));
    (*(float *)(gen_frame + 0x204)) = *((float *)GEN_TOP(((int)this + 0x8c))) - fVar8;
    (*(float *)(gen_frame + 0x208)) = *((float *)GEN_TOP(((int)this + 0x90))) - *((float *)GEN_TOP(((int)this + 0xb4)));
    uVar4 = F_00c9da90(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_FWD,(uint)this,(int)this + 0xacU,(uint)&(*(float *)(gen_frame + 0x200)),(int)this + 0xb8,
                         (int)this + 0x94);
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x40))) + 4)));
    F_00c9f060(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,uVar4);
    *((undefined4 *)GEN_TOP(((int)this + 0xacU))) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
    (*(float *)(gen_frame + 0x18c)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP(((int)this + 0x8c)));
    (*(float *)(gen_frame + 0x19c)) = 0.0;
    (*(float *)(gen_frame + 0x1ac)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = *((undefined4 *)GEN_TOP(((int)this + 0x90)));
    (*(float *)(gen_frame + 0x1bc)) = 0.0;
    (*(float *)(gen_frame + 0x218)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = *((undefined4 *)GEN_TOP(((int)this + 0x94)));
    (*(float *)(gen_frame + 0x228)) = 0.0;
    (*(float *)(gen_frame + 0x238)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = *((undefined4 *)GEN_TOP(((int)this + 0x98)));
    (*(float *)(gen_frame + 0x248)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0;
    (*(undefined4 *)(gen_frame + 0x1dc)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = *((undefined4 *)GEN_TOP(((int)this + 0x9c)));
    fVar8 = REFG(float, 0x1128e5c);
    (*(undefined4 *)(gen_frame + 0x1ec)) = 0;
    (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
    pfVar5 = ((float *)GEN_TOP(((int)this + 0xa0)));
    pfVar6 = ((float *)GEN_TOP(((int)this + 0xa0)));
    if ((!GEN_ISNAN(REFG(float, 0x1128e5c)) && !GEN_ISNAN(*pfVar5)) &&
        (!(REFG(float, 0x1128e5c) < *pfVar5) && REFG(uint, 0x1128e5c) != *pfVar5)) {
      *pfVar6 = GEN_FLT_TO(*pfVar6, REFG(float, 0x1128e5c));
    }
    pfVar5 = ((float *)GEN_TOP(((int)this + 0xa4)));
    if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(*pfVar5)) && (!(fVar8 < *pfVar5) && fVar8 != *pfVar5)) {
      *((float *)GEN_TOP(((int)this + 0xa4))) = fVar8;
    }
    pfVar5 = ((float *)GEN_TOP(((int)this + 0xa8)));
    if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(*pfVar5)) && (!(fVar8 < *pfVar5) && fVar8 != *pfVar5)) {
      *((float *)GEN_TOP(((int)this + 0xa8))) = fVar8;
    }
    *((float *)GEN_TOP(((int)this + 0x7c))) = (float)(REFG(double, 0x1088130) / (double)*pfVar6);
    F_00c98a60(&(*(float *)(gen_frame + 0x180)),pfVar6);
    F_00c98b30(&(*(float *)(gen_frame + 0x1c0)),((undefined4 *)GEN_TOP(((int)this + 0x88))));
    pfVar5 = ((float *)GEN_TOP(F_00c98740(((undefined1 *)(gen_frame + 0x40)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x98)))))));
    pfVar6 = ((float *)GEN_TOP(F_00c988c0(((undefined1 *)(gen_frame + 0x0)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x9c)))))));
    fVar8 = *pfVar5;
    fVar10 = pfVar5[1];
    fVar12 = *pfVar6;
    fVar14 = pfVar6[4];
    fVar15 = pfVar5[2];
    (*(float *)(gen_frame + 0x24c)) = ((float)GEN_TOF(((((double)fVar12 * (double)fVar8 + (double)fVar14 * (double)fVar10) +
                       (double)pfVar6[8] * (double)fVar15) + (double)pfVar6[0xc] * (double)pfVar5[3]
                      )));
    (*(float *)(gen_frame + 0x250)) = ((float)GEN_TOF(((((double)pfVar6[1] * (double)fVar8 + (double)pfVar6[5] * (double)fVar10) +
                       (double)pfVar6[9] * (double)fVar15) + (double)pfVar6[0xd] * (double)pfVar5[3]
                      )));
    (*(float *)(gen_frame + 0x254)) = ((float)GEN_TOF(((((double)pfVar6[2] * (double)fVar8 + (double)pfVar6[6] * (double)fVar10) +
                       (double)pfVar6[10] * (double)fVar15) +
                      (double)pfVar6[0xe] * (double)pfVar5[3])));
    fVar16 = pfVar5[6];
    fVar17 = pfVar5[4];
    (*(float *)(gen_frame + 0x258)) = ((float)GEN_TOF(((((double)pfVar6[3] * (double)fVar8 + (double)pfVar6[7] * (double)fVar10) +
                       (double)pfVar6[0xb] * (double)fVar15) +
                      (double)pfVar6[0xf] * (double)pfVar5[3])));
    fVar8 = pfVar5[5];
    (*(float *)(gen_frame + 0x25c)) = ((float)GEN_TOF(((((double)fVar17 * (double)fVar12 + (double)fVar8 * (double)fVar14) +
                       (double)fVar16 * (double)pfVar6[8]) + (double)pfVar5[7] * (double)pfVar6[0xc]
                      )));
    (*(float *)(gen_frame + 0x260)) = ((float)GEN_TOF(((((double)fVar17 * (double)pfVar6[1] + (double)fVar8 * (double)pfVar6[5]) +
                       (double)fVar16 * (double)pfVar6[9]) + (double)pfVar5[7] * (double)pfVar6[0xd]
                      )));
    (*(float *)(gen_frame + 0x264)) = ((float)GEN_TOF(((((double)fVar17 * (double)pfVar6[2] + (double)fVar8 * (double)pfVar6[6]) +
                       (double)fVar16 * (double)pfVar6[10]) +
                      (double)pfVar5[7] * (double)pfVar6[0xe])));
    fVar10 = pfVar5[10];
    fVar15 = pfVar5[8];
    (*(float *)(gen_frame + 0x268)) = ((float)GEN_TOF(((((double)fVar17 * (double)pfVar6[3] + (double)fVar8 * (double)pfVar6[7]) +
                       (double)fVar16 * (double)pfVar6[0xb]) +
                      (double)pfVar5[7] * (double)pfVar6[0xf])));
    fVar8 = pfVar5[9];
    (*(float *)(gen_frame + 0x26c)) = ((float)GEN_TOF(((((double)fVar15 * (double)fVar12 + (double)fVar8 * (double)fVar14) +
                       (double)fVar10 * (double)pfVar6[8]) +
                      (double)pfVar5[0xb] * (double)pfVar6[0xc])));
    (*(float *)(gen_frame + 0x270)) = ((float)GEN_TOF(((((double)fVar15 * (double)pfVar6[1] + (double)fVar8 * (double)pfVar6[5]) +
                       (double)fVar10 * (double)pfVar6[9]) +
                      (double)pfVar5[0xb] * (double)pfVar6[0xd])));
    (*(float *)(gen_frame + 0x274)) = ((float)GEN_TOF(((((double)fVar15 * (double)pfVar6[2] + (double)fVar8 * (double)pfVar6[6]) +
                       (double)fVar10 * (double)pfVar6[10]) +
                      (double)pfVar5[0xb] * (double)pfVar6[0xe])));
    fVar16 = pfVar5[0xe];
    fVar17 = pfVar5[0xd];
    fVar18 = pfVar5[0xf];
    (*(float *)(gen_frame + 0x278)) = ((float)GEN_TOF(((((double)fVar15 * (double)pfVar6[3] + (double)fVar8 * (double)pfVar6[7]) +
                       (double)fVar10 * (double)pfVar6[0xb]) +
                      (double)pfVar5[0xb] * (double)pfVar6[0xf])));
    fVar8 = pfVar5[0xc];
    (*(float *)(gen_frame + 0x27c)) = ((float)GEN_TOF(((((double)fVar8 * (double)fVar12 + (double)fVar17 * (double)fVar14) +
                       (double)fVar16 * (double)pfVar6[8]) + (double)fVar18 * (double)pfVar6[0xc])));
    (*(float *)(gen_frame + 0x280)) = ((float)GEN_TOF(((((double)fVar8 * (double)pfVar6[1] + (double)fVar17 * (double)pfVar6[5]) +
                       (double)fVar16 * (double)pfVar6[9]) + (double)fVar18 * (double)pfVar6[0xd])));
    (*(float *)(gen_frame + 0x284)) = ((float)GEN_TOF(((((double)fVar8 * (double)pfVar6[2] + (double)fVar17 * (double)pfVar6[6]) +
                      (double)fVar16 * (double)pfVar6[10]) + (double)fVar18 * (double)pfVar6[0xe])));
    (*(float *)(gen_frame + 0x288)) = ((float)GEN_TOF(((((double)fVar8 * (double)pfVar6[3] + (double)pfVar5[0xd] * (double)pfVar6[7])
                      + (double)pfVar6[0xb] * (double)fVar16) + (double)fVar18 * (double)pfVar6[0xf]
                     )));
    pfVar5 = ((float *)GEN_TOP(F_00c985b0(((undefined1 *)(gen_frame + 0x9c)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x94)))))));
    fVar8 = pfVar5[1];
    fVar10 = *pfVar5;
    fVar12 = pfVar5[2];
    fVar14 = pfVar5[3];
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x25c)) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x24c))) +
                        (double)fVar12 * (double)(*(float *)(gen_frame + 0x26c))) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x27c)))));
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x260)) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x250))) +
                        (double)fVar12 * (double)(*(float *)(gen_frame + 0x270))) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x280)))));
    (*(float *)(gen_frame + 0xfc)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x264)) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x254))) +
                        (double)fVar12 * (double)(*(float *)(gen_frame + 0x274))) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x284)))));
    fVar15 = pfVar5[7];
    fVar16 = pfVar5[6];
    fVar17 = pfVar5[4];
    (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x268)) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x258))) +
                        (double)fVar12 * (double)(*(float *)(gen_frame + 0x278))) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x288)))));
    fVar8 = pfVar5[5];
    (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x25c)) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x24c))) +
                        (double)fVar16 * (double)(*(float *)(gen_frame + 0x26c))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x27c)))));
    (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x260)) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x250))) +
                        (double)fVar16 * (double)(*(float *)(gen_frame + 0x270))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x280)))));
    (*(float *)(gen_frame + 0x10c)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x264)) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x254))) +
                        (double)fVar16 * (double)(*(float *)(gen_frame + 0x274))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x284)))));
    fVar10 = pfVar5[0xb];
    fVar12 = pfVar5[10];
    fVar14 = pfVar5[8];
    (*(float *)(gen_frame + 0x110)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x268)) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x258))) +
                        (double)fVar16 * (double)(*(float *)(gen_frame + 0x278))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x288)))));
    fVar8 = pfVar5[9];
    (*(float *)(gen_frame + 0x114)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x25c)) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x24c))) +
                        (double)fVar12 * (double)(*(float *)(gen_frame + 0x26c))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x27c)))));
    (*(float *)(gen_frame + 0x118)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x260)) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x250))) +
                        (double)fVar12 * (double)(*(float *)(gen_frame + 0x270))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x280)))));
    (*(float *)(gen_frame + 0x11c)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x264)) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x254))) +
                        (double)fVar12 * (double)(*(float *)(gen_frame + 0x274))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x284)))));
    fVar15 = pfVar5[0xf];
    fVar16 = pfVar5[0xe];
    fVar17 = pfVar5[0xc];
    (*(float *)(gen_frame + 0x120)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x268)) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x258))) +
                        (double)fVar12 * (double)(*(float *)(gen_frame + 0x278))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x288)))));
    fVar8 = pfVar5[0xd];
    (*(float *)(gen_frame + 0x124)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x25c)) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x24c))) +
                        (double)fVar16 * (double)(*(float *)(gen_frame + 0x26c))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x27c)))));
    (*(float *)(gen_frame + 0x128)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x260)) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x250))) +
                        (double)fVar16 * (double)(*(float *)(gen_frame + 0x270))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x280)))));
    (*(float *)(gen_frame + 0x12c)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x264)) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x254))) +
                        (double)fVar16 * (double)(*(float *)(gen_frame + 0x274))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x284)))));
    (*(float *)(gen_frame + 0x130)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x268)) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x258))) +
                        (double)fVar16 * (double)(*(float *)(gen_frame + 0x278))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x288)))));
    F_00c8ecc0(&(*(float *)(gen_frame + 0x20c)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xf4)));
    fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1d0)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c0))) +
                    (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1e0))) + (double)(*(float *)(gen_frame + 0x1f0)) * (double)(*(float *)(gen_frame + 0x218)))));
    fVar10 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c4)) + (double)(*(float *)(gen_frame + 0x1d4)) * (double)(*(float *)(gen_frame + 0x210))) +
                     (double)(*(float *)(gen_frame + 0x1e4)) * (double)(*(float *)(gen_frame + 0x214))) + (double)(*(float *)(gen_frame + 0x1f4)) * (double)(*(float *)(gen_frame + 0x218)))));
    fVar12 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c8)) + (double)(*(float *)(gen_frame + 0x1d8)) * (double)(*(float *)(gen_frame + 0x210))) +
                     (double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x214))) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x218)))));
    fVar14 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d0)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c0))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e0))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1f0)))));
    fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d4)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c4))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e4))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d8)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c8))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e8))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    (*(float *)(gen_frame + 0x264)) = fVar16;
    fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x230)) * (double)(*(float *)(gen_frame + 0x1d0)) + (double)(*(float *)(gen_frame + 0x22c)) * (double)(*(float *)(gen_frame + 0x1c0))) +
                     (double)(*(float *)(gen_frame + 0x234)) * (double)(*(float *)(gen_frame + 0x1e0))) + (double)(*(float *)(gen_frame + 0x238)) * (double)(*(float *)(gen_frame + 0x1f0)))));
    (*(float *)(gen_frame + 0x26c)) = fVar17;
    fVar18 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x230)) * (double)(*(float *)(gen_frame + 0x1d4)) + (double)(*(float *)(gen_frame + 0x22c)) * (double)(*(float *)(gen_frame + 0x1c4))) +
                     (double)(*(float *)(gen_frame + 0x234)) * (double)(*(float *)(gen_frame + 0x1e4))) + (double)(*(float *)(gen_frame + 0x238)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    (*(float *)(gen_frame + 0x270)) = fVar18;
    fVar19 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x230)) * (double)(*(float *)(gen_frame + 0x1d8)) + (double)(*(float *)(gen_frame + 0x22c)) * (double)(*(float *)(gen_frame + 0x1c8))) +
                     (double)(*(float *)(gen_frame + 0x234)) * (double)(*(float *)(gen_frame + 0x1e8))) + (double)(*(float *)(gen_frame + 0x238)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    (*(float *)(gen_frame + 0x274)) = fVar19;
    fVar20 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x240)) * (double)(*(float *)(gen_frame + 0x1d0)) + (double)(*(float *)(gen_frame + 0x23c)) * (double)(*(float *)(gen_frame + 0x1c0))) +
                     (double)(*(float *)(gen_frame + 0x244)) * (double)(*(float *)(gen_frame + 0x1e0))) + (double)(*(float *)(gen_frame + 0x248)) * (double)(*(float *)(gen_frame + 0x1f0)))));
    (*(float *)(gen_frame + 0x27c)) = fVar20;
    fVar21 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x240)) * (double)(*(float *)(gen_frame + 0x1d4)) + (double)(*(float *)(gen_frame + 0x23c)) * (double)(*(float *)(gen_frame + 0x1c4))) +
                     (double)(*(float *)(gen_frame + 0x244)) * (double)(*(float *)(gen_frame + 0x1e4))) + (double)(*(float *)(gen_frame + 0x248)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    (*(float *)(gen_frame + 0x280)) = fVar21;
    fVar22 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x240)) * (double)(*(float *)(gen_frame + 0x1d8)) + (double)(*(float *)(gen_frame + 0x23c)) * (double)(*(float *)(gen_frame + 0x1c8))) +
                     (double)(*(float *)(gen_frame + 0x244)) * (double)(*(float *)(gen_frame + 0x1e8))) + (double)(*(float *)(gen_frame + 0x248)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    (*(float *)(gen_frame + 0x284)) = fVar22;
    fVar23 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x180)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar14) +
                     (double)(*(float *)(gen_frame + 0x188)) * (double)fVar17) + (double)fVar20 * (double)(*(float *)(gen_frame + 0x18c)))));
    (*(float *)(gen_frame + 0x20c)) = fVar23;
    fVar24 = ((float)GEN_TOF(((((double)fVar15 * (double)(*(float *)(gen_frame + 0x184)) + (double)(*(float *)(gen_frame + 0x180)) * (double)fVar10) +
                     (double)fVar18 * (double)(*(float *)(gen_frame + 0x188))) + (double)fVar21 * (double)(*(float *)(gen_frame + 0x18c)))));
    (*(float *)(gen_frame + 0x210)) = fVar24;
    fVar25 = ((float)GEN_TOF(((((double)fVar16 * (double)(*(float *)(gen_frame + 0x184)) + (double)(*(float *)(gen_frame + 0x180)) * (double)fVar12) +
                     (double)fVar19 * (double)(*(float *)(gen_frame + 0x188))) + (double)fVar22 * (double)(*(float *)(gen_frame + 0x18c)))));
    (*(float *)(gen_frame + 0x214)) = fVar25;
    fVar26 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x194)) * (double)fVar14 + (double)(*(float *)(gen_frame + 0x190)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x198)) * (double)fVar17) + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar20)));
    (*(float *)(gen_frame + 0x21c)) = fVar26;
    fVar27 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x194)) * (double)fVar15 + (double)(*(float *)(gen_frame + 0x190)) * (double)fVar10) +
                     (double)(*(float *)(gen_frame + 0x198)) * (double)fVar18) + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar21)));
    (*(float *)(gen_frame + 0x220)) = fVar27;
    fVar28 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x194)) * (double)fVar16 + (double)(*(float *)(gen_frame + 0x190)) * (double)fVar12) +
                     (double)(*(float *)(gen_frame + 0x198)) * (double)fVar19) + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar22)));
    (*(float *)(gen_frame + 0x224)) = fVar28;
    fVar29 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar14 + (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar17) + (double)(*(float *)(gen_frame + 0x1ac)) * (double)fVar20)));
    (*(float *)(gen_frame + 0x22c)) = fVar29;
    fVar30 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar15 + (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar10) +
                     (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar18) + (double)(*(float *)(gen_frame + 0x1ac)) * (double)fVar21)));
    (*(float *)(gen_frame + 0x230)) = fVar30;
    fVar31 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar16 + (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar12) +
                     (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar19) + (double)(*(float *)(gen_frame + 0x1ac)) * (double)fVar22)));
    (*(float *)(gen_frame + 0x234)) = fVar31;
    fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1b0)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x1b4)) * (double)fVar14) +
                    (double)(*(float *)(gen_frame + 0x1b8)) * (double)fVar17) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)fVar20)));
    pfVar5 = ((float *)GEN_TOP(((int)this + 0xc4)));
    *pfVar5 = fVar23;
    *((float *)GEN_TOP(((int)this + 200))) = fVar24;
    *((float *)GEN_TOP(((int)this + 0xcc))) = fVar25;
    *((float *)GEN_TOP(((int)this + 0xd0))) = fVar26;
    *((float *)GEN_TOP(((int)this + 0xd4))) = fVar27;
    *((float *)GEN_TOP(((int)this + 0xd8))) = fVar28;
    *((float *)GEN_TOP(((int)this + 0xdc))) = fVar29;
    *((float *)GEN_TOP(((int)this + 0xe0))) = fVar30;
    *((float *)GEN_TOP(((int)this + 0xe4))) = fVar31;
    *((float *)GEN_TOP(((int)this + 0xe8))) = fVar8;
    *((float *)GEN_TOP(((int)this + 0xec))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1b4)) * (double)fVar15 + (double)(*(float *)(gen_frame + 0x1b0)) * (double)fVar10) +
                 (double)(*(float *)(gen_frame + 0x1b8)) * (double)fVar18) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)fVar21)));
    *((float *)GEN_TOP(((int)this + 0xf0))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1b4)) * (double)fVar16 + (double)(*(float *)(gen_frame + 0x1b0)) * (double)fVar12) +
                 (double)(*(float *)(gen_frame + 0x1b8)) * (double)fVar19) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)fVar22)));
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xd0)));
    (*(float *)(gen_frame + 0x134)) = *pfVar5;
    (*(undefined4 *)(gen_frame + 0x138)) = *((undefined4 *)GEN_TOP(((int)this + 200)));
    (*(undefined4 *)(gen_frame + 0x13c)) = *((undefined4 *)GEN_TOP(((int)this + 0xcc)));
    (*(undefined4 *)(gen_frame + 0x144)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x140)) = 0;
    (*(undefined4 *)(gen_frame + 0x148)) = *((undefined4 *)GEN_TOP(((int)this + 0xd4)));
    (*(undefined4 *)(gen_frame + 0x150)) = 0;
    (*(undefined4 *)(gen_frame + 0x160)) = 0;
    (*(undefined4 *)(gen_frame + 0x14c)) = *((undefined4 *)GEN_TOP(((int)this + 0xd8)));
    (*(float *)(gen_frame + 0x164)) = fVar8;
    (*(undefined4 *)(gen_frame + 0x154)) = *((undefined4 *)GEN_TOP(((int)this + 0xdc)));
    (*(undefined4 *)(gen_frame + 0x168)) = *((undefined4 *)GEN_TOP(((int)this + 0xec)));
    (*(undefined4 *)(gen_frame + 0x158)) = *((undefined4 *)GEN_TOP(((int)this + 0xe0)));
    (*(undefined4 *)(gen_frame + 0x16c)) = *((undefined4 *)GEN_TOP(((int)this + 0xf0)));
    (*(undefined4 *)(gen_frame + 0x15c)) = *((undefined4 *)GEN_TOP(((int)this + 0xe4)));
    (*(undefined4 *)(gen_frame + 0x170)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_00c98ca0(&(*(float *)(gen_frame + 0x134)) GEN_EDX_ARG);
    *((float *)GEN_TOP(((int)this + 0xf4))) = (*(float *)(gen_frame + 0x134));
    *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = (*(undefined4 *)(gen_frame + 0x138));
    *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined4 *)(gen_frame + 0x13c));
    *((undefined4 *)GEN_TOP(((int)this + 0x100))) = (*(undefined4 *)(gen_frame + 0x144));
    *((undefined4 *)GEN_TOP(((int)this + 0x104))) = (*(undefined4 *)(gen_frame + 0x148));
    *((undefined4 *)GEN_TOP(((int)this + 0x108))) = (*(undefined4 *)(gen_frame + 0x14c));
    *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = (*(undefined4 *)(gen_frame + 0x154));
    *((undefined4 *)GEN_TOP(((int)this + 0x110))) = (*(undefined4 *)(gen_frame + 0x158));
    *((undefined4 *)GEN_TOP(((int)this + 0x114))) = (*(undefined4 *)(gen_frame + 0x15c));
    *((float *)GEN_TOP(((int)this + 0x118))) = (*(float *)(gen_frame + 0x164));
    *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = (*(undefined4 *)(gen_frame + 0x168));
    *((undefined4 *)GEN_TOP(((int)this + 0x120))) = (*(undefined4 *)(gen_frame + 0x16c));
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x80)));
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x148))) = 0;
    }
    else {
      pfVar6 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG)));
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x80)));
      iVar3 = *piVar2;
      (*(float *)(gen_frame + 0x200)) = *pfVar6;
      (*(float *)(gen_frame + 0x204)) = pfVar6[1];
      (*(float *)(gen_frame + 0x208)) = pfVar6[2];
      puVar7 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar3 + 8))))(piVar2)));
      (*(undefined4 *)(gen_frame + 0x174)) = *puVar7;
      (*(undefined4 *)(gen_frame + 0x178)) = puVar7[1];
      (*(undefined4 *)(gen_frame + 0x17c)) = puVar7[2];
      F_00c8fb00(&(*(float *)(gen_frame + 0xf4)) GEN_EDX_ARG,pfVar5);
      (*(undefined4 *)(gen_frame + 0xdc)) = (*(undefined4 *)(gen_frame + 0x174));
      (*(undefined4 *)(gen_frame + 0xe0)) = (*(undefined4 *)(gen_frame + 0x178));
      (*(undefined4 *)(gen_frame + 0xe4)) = (*(undefined4 *)(gen_frame + 0x17c));
      (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x200));
      (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0x204));
      (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x208));
      F_00c9bd20((int)this + 0x134,&(*(float *)(gen_frame + 0xf4)),&(*(undefined4 *)(gen_frame + 0xdc)));
    }
    dVar9 = REFG(double, 0x1088108);
    *((float *)GEN_TOP(((int)this + 0x124))) =
         ((float)GEN_TOF((((double)*((float *)GEN_TOP(((int)this + 0x140))) + (double)*((float *)GEN_TOP(((int)this + 0x134)))) *
                REFG(double, 0x1088108))));
    *((float *)GEN_TOP(((int)this + 0x128))) =
         ((float)GEN_TOF((((double)*((float *)GEN_TOP(((int)this + 0x144))) + (double)*((float *)GEN_TOP(((int)this + 0x138)))) *
                dVar9)));
    *((float *)GEN_TOP(((int)this + 300))) =
         ((float)GEN_TOF((((double)*((float *)GEN_TOP(((int)this + 0x148))) + (double)*((float *)GEN_TOP(((int)this + 0x13c)))) *
                dVar9)));
    dVar9 = ((double)GEN_TOD((*((float *)GEN_TOP(((int)this + 0x144))) - *((float *)GEN_TOP(((int)this + 0x128))))));
    dVar11 = ((double)GEN_TOD((*((float *)GEN_TOP(((int)this + 0x140))) - *((float *)GEN_TOP(((int)this + 0x124))))));
    dVar13 = ((double)GEN_TOD((*((float *)GEN_TOP(((int)this + 0x148))) - *((float *)GEN_TOP(((int)this + 300))))));
    *((float *)GEN_TOP(((int)this + 0x130))) =
         SQRT(((float)GEN_TOF(((dVar11 * dVar11 + dVar9 * dVar9) + dVar13 * dVar13))));
    F_00ca11f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,this);
    *((undefined1 *)GEN_TOP(((int)this + 0x78))) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_00c92f30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c92f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc92f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x80)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,0);
    F_00ca2140(*((undefined4 *)GEN_TOP(((int)this + 0x80))),&REFG(undefined, 0x1128e3b),
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4))));
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  }
  return;
}

/* ref: FUN_00c92f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c92f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc92f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  code * pcVar3;
  uint uVar4;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_FWD);
  if ((char)uVar4 != '\0') {
    uVar4 = F_00c97010(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x34))) + 4))) GEN_EDX_ARG,0,((char *)REFP(0x1128e3c))
                        );
    return uVar4;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *((undefined4 *)GEN_TOP((uVar4 + 8)));
  piVar1 = ((int *)GEN_TOP(((int)this - 0x68)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((uVar4 + 0xc)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,uVar4,piVar1,param_1);
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar4;
  piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x34))) + 0x20)));
  *piVar2 = *piVar2 - 1;
  *((int *)GEN_TOP(((int)this - 0x38))) = *((int *)GEN_TOP(((int)this - 0x38))) - 1;
  pcVar3 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x48)));
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
  uVar4 = (*pcVar3)(piVar1);
  *((undefined1 *)GEN_TOP(((int)this + 0x12))) = 1;
  return uVar4;
}

/* ref: FUN_00c92ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c92ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc92ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 0x28))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00c93010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c93010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc93010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  return (uint)this;
}

/* ref: FUN_00c93040 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c93040(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc93040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return;
}

/* ref: FUN_00c93050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c93050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc93050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  uint uVar9;
  int iVar10;
  undefined * this_00;
  undefined * pvVar11;
  uint uVar12;
  ushort * puVar13;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128e80));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e78));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  pvVar11 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x34))) + 4)));
  if ((*((int *)GEN_TOP(((int)this + 0x24))) != 0) && (*((int *)GEN_TOP(((int)this + 0x28))) != 0)) {
    fVar1 = *((float *)GEN_TOP(((int)this + 0x18)));
    fVar2 = *((float *)GEN_TOP(((int)this + 0xc)));
    fVar3 = *((float *)GEN_TOP(((int)this + 0x10)));
    fVar4 = *((float *)GEN_TOP(((int)this + 0x1c)));
    fVar5 = *((float *)GEN_TOP(((int)this + 0x14)));
    fVar6 = *((float *)GEN_TOP(((int)this + 0x20)));
    uVar9 = F_00c96f50(pvVar11 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x24))) << 4,&REFG(undefined, 0x1128e00));
    uVar12 = 0;
    *((uint *)GEN_TOP(((int)this + 0x2c))) = uVar9;
    dVar8 = REFG(double, 0x109cab0);
    uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar13 = ((ushort *)GEN_TOP((param_1 + 0x30)));
    if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
      iVar10 = 0;
      do {
        *((float *)GEN_TOP((iVar10 + *((int *)GEN_TOP(((int)this + 0x2c)))))) =
             ((float)GEN_TOF((((double)(fVar1 - fVar2) * (double)*puVar13) / dVar8 +
                    (double)*((float *)GEN_TOP(((int)this + 0xc))))));
        *((float *)GEN_TOP((iVar10 + 4 + *((int *)GEN_TOP(((int)this + 0x2c)))))) =
             ((float)GEN_TOF((((double)(fVar4 - fVar3) * (double)puVar13[1]) / dVar8 +
                    (double)*((float *)GEN_TOP(((int)this + 0x10))))));
        *((float *)GEN_TOP((iVar10 + 8 + *((int *)GEN_TOP(((int)this + 0x2c)))))) =
             ((float)GEN_TOF((((double)(fVar6 - fVar5) * (double)puVar13[2]) / dVar8 +
                    (double)*((float *)GEN_TOP(((int)this + 0x14))))));
        *((undefined4 *)GEN_TOP((iVar10 + 0xc + *((int *)GEN_TOP(((int)this + 0x2c)))))) = uVar7;
        uVar12 = uVar12 + 1;
        puVar13 = puVar13 + 3;
        iVar10 = iVar10 + 0x10;
      } while (uVar12 < *((uint *)GEN_TOP(((int)this + 0x24))));
    }
    iVar10 = *((int *)GEN_TOP(((int)this + 0x28))) * 6;
    uVar9 = F_00c96f50(pvVar11 GEN_EDX_ARG,iVar10,&REFG(undefined, 0x1128e01));
    *((uint *)GEN_TOP(((int)this + 0x30))) = uVar9;
    F_00c46aa0(uVar9,puVar13,iVar10);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  if ((0 < *((int *)GEN_TOP((param_1 + 8)))) && (0 < *((int *)GEN_TOP((param_1 + 0xc))))) {
    this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x3c,&REFG(undefined, 0x1128e02),pvVar11)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar9 = 0;
    }
    else {
      uVar9 = F_00c93050(this_00 GEN_EDX_ARG,*((int *)GEN_TOP((param_1 + 8))) + param_1);
    }
    *((uint *)GEN_TOP(((int)this + 0x34))) = uVar9;
    pvVar11 = ((undefined *)GEN_TOP(F_00ca2100(0x3c,&REFG(undefined, 0x1128e03),pvVar11)));
    if (pvVar11 != ((undefined *)GEN_TOP(0x0))) {
      uVar9 = F_00c93050(pvVar11 GEN_EDX_ARG,*((int *)GEN_TOP((param_1 + 0xc))) + param_1);
      *((uint *)GEN_TOP(((int)this + 0x38))) = uVar9;
      return (uint)this;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c932c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c932c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc932c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128e80));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e78));
  this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x34))) + 4)));
  F_00c96f60(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x2c))));
  F_00c96f60(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x30))));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x34)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
    F_00ca2140(*((undefined4 *)GEN_TOP(((int)this + 0x34))),&REFG(undefined, 0x1128e04),this_00);
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x38)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
    F_00ca2140(*((undefined4 *)GEN_TOP(((int)this + 0x38))),&REFG(undefined, 0x1128e05),this_00);
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  return;
}

/* ref: FUN_00c93350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c93350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc93350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((int *)GEN_TOP(((int)this + 8))) = param_2;
  *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x34))) + 4)));
  if ((0 < *((int *)GEN_TOP((param_1 + 8)))) && (0 < *((int *)GEN_TOP((param_1 + 0xc))))) {
    pvVar2 = ((undefined *)GEN_TOP(F_00ca2100(0x1c,&REFG(undefined, 0x1128e06),uVar1)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00c93350(pvVar2 GEN_EDX_ARG,*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 8))) + param_1,param_2);
    }
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar3;
    pvVar2 = ((undefined *)GEN_TOP(F_00ca2100(0x1c,&REFG(undefined, 0x1128e07),uVar1)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00c93350(pvVar2 GEN_EDX_ARG,*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc))) + param_1,param_2);
      *((uint *)GEN_TOP(((int)this + 0x14))) = uVar3;
      return (uint)this;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c93410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c93410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc93410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  return (uint)this;
}

/* ref: FUN_00c93450 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c93450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc93450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
  if ((*((char *)GEN_TOP(((int)this + 0x18))) == '\0') && (*((int *)GEN_TOP(((int)this + 8))) != 0)) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x34))) + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,0);
      F_00ca2140(*((undefined4 *)GEN_TOP(((int)this + 0x10))),&REFG(undefined, 0x1128e08),uVar2);
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
      F_00ca2140(*((undefined4 *)GEN_TOP(((int)this + 0x14))),&REFG(undefined, 0x1128e09),uVar2);
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    }
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
         (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
    return;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return;
}

/* ref: FUN_00c934f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c934f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc934f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
    *(undefined1 *)(param_1 + 6) = 1;
    param_1[2] = 0;
    param_1[3] = *((undefined4 *)GEN_TOP(((int)this + 8)));
    param_1[4] = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    param_1[5] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  }
  return (uint)param_1;
}

/* ref: FUN_00c93530 */
GEN_LIB_GS GEN_FRAME unsigned int GEN_THISCALL F_00c93530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc93530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xc08, 8, 4);
  undefined4 * puVar1;
  int iVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc00)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc04));
  iVar2 = 0xff;
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c90410(this GEN_EDX_FWD,param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x0)));
  return;
}

/* ref: FUN_00c935a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c935a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc935a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x134)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x138)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x13c)));
  param_2[3] = *((undefined4 *)GEN_TOP((in_ecx + 0x140)));
  param_2[4] = *((undefined4 *)GEN_TOP((in_ecx + 0x144)));
  param_2[5] = *((undefined4 *)GEN_TOP((in_ecx + 0x148)));
  return (uint)param_2;
}

/* ref: FUN_00c935e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c935e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc935e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x114, 12, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  float * pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar9 = (*(uint *)&gen_args[2]);
  if ((param_1[0x11] & (*(uint *)&gen_args[1])) != 0) {
    fVar1 = REFG(float, 0x109cc48);
    if ((*((byte *)GEN_TOP((*(uint *)&gen_args[2]))) & 1) != 0) {
      fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((*(uint *)&gen_args[2]) + 4))) + 0xc)));
    }
    uVar5 = *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[2]) + 4)));
    (*(int *)(gen_frame + 0x24)) = param_1[0x49];
    (*(int *)(gen_frame + 0x28)) = param_1[0x4a];
    (*(int *)(gen_frame + 0x2c)) = param_1[0x4b];
    (*(float *)(gen_frame + 0x30)) = gen_bits2f(param_1[0x4c]) + fVar1;
    bVar7 = F_00c9ad50(uVar5,*((undefined4 *)GEN_TOP(((*(uint *)&gen_args[2]) + 8))),&(*(int *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x0)));
    if ((bVar7 != 0) && (param_1[0x20] != 0)) {
      (*(undefined4 *)(gen_frame + 0x90)) = 0;
      (*(undefined4 *)(gen_frame + 0xa0)) = 0;
      (*(undefined4 *)(gen_frame + 0xb0)) = 0;
      (*(undefined4 *)(gen_frame + 0xc0)) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x3c))))(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x84)));
      F_00c8fb00(&(*(float *)(gen_frame + 0x44)) GEN_EDX_ARG,param_1 + 0x3d);
      pfVar8 = *((float * PTR32 *)GEN_TOP((uVar9 + 4)));
      fVar2 = pfVar8[1];
      fVar3 = *pfVar8;
      fVar4 = pfVar8[2];
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((((double)fVar2 * (double)(*(float *)(gen_frame + 0x54)) + (double)fVar3 * (double)(*(float *)(gen_frame + 0x44))) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x64))) + (double)(*(float *)(gen_frame + 0x74)))));
      (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((((double)fVar3 * (double)(*(float *)(gen_frame + 0x48)) + (double)fVar2 * (double)(*(float *)(gen_frame + 0x58))) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x68))) + (double)(*(float *)(gen_frame + 0x78)))));
      (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(((((double)fVar3 * (double)(*(float *)(gen_frame + 0x4c)) + (double)fVar2 * (double)(*(float *)(gen_frame + 0x5c))) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x6c))) + (double)(*(float *)(gen_frame + 0x7c)))));
      (*(float *)(gen_frame + 0x40)) = gen_bits2f(param_1[0x1f]) * fVar1;
      pfVar8 = ((float *)GEN_TOP(F_00c8eb80()));
      fVar1 = pfVar8[1];
      fVar2 = *pfVar8;
      fVar3 = pfVar8[2];
      pfVar8 = *((float * PTR32 *)GEN_TOP((uVar9 + 8)));
      (*(float *)(gen_frame + 0xc4)) = 0.0;
      (*(float *)(gen_frame + 0xc8)) = 0.0;
      (*(float *)(gen_frame + 0xcc)) = 0.0;
      (*(float *)(gen_frame + 0xc4)) = ((float)GEN_TOF(((((double)*pfVar8 * (double)(*(float *)(gen_frame + 0x44)) + (double)(*(float *)(gen_frame + 0x54)) * (double)pfVar8[1]
                          ) + (double)(*(float *)(gen_frame + 0x64)) * (double)pfVar8[2]) + (double)fVar2)));
      (*(float *)(gen_frame + 0xc8)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x58)) * (double)pfVar8[1] + (double)(*(float *)(gen_frame + 0x48)) * (double)*pfVar8
                          ) + (double)(*(float *)(gen_frame + 0x68)) * (double)pfVar8[2]) + (double)fVar1)));
      (*(float *)(gen_frame + 0xcc)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x5c)) * (double)pfVar8[1] + (double)(*(float *)(gen_frame + 0x4c)) * (double)*pfVar8
                          ) + (double)(*(float *)(gen_frame + 0x6c)) * (double)pfVar8[2]) + (double)fVar3)));
      F_00553ac0(&(*(float *)(gen_frame + 0xc4)) GEN_EDX_ARG);
      uVar6 = *((undefined4 *)GEN_TOP(uVar9));
      (*(uint *)&gen_args[2]) = REFG(float, 0x1090998);
      uVar5 = *((undefined4 *)GEN_TOP((uVar9 + 0x10)));
      (*(undefined4 *)(gen_frame + 0x4)) = uVar6;
      (*(float * PTR32 *)(gen_frame + 0xc)) = &(*(float *)(gen_frame + 0xc4));
      (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0x34));
      uVar6 = *((undefined4 *)GEN_TOP((uVar9 + 0x14)));
      (*(uint * PTR32 *)(gen_frame + 0x10)) = &(*(uint *)&gen_args[2]);
      (*(int *)(gen_frame + 0x1c)) = param_1[0x12];
      (*(undefined4 *)(gen_frame + 0x14)) = uVar5;
      (*(int *)(gen_frame + 0x20)) = param_1[0x13];
      (*(float * PTR32 *)&gen_args[0])[0x10] = REFG(float, 0x1128ee0);
      (*(undefined4 *)(gen_frame + 0x18)) = uVar6;
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x20])) + 0x10))))
                        (((int *)GEN_TOP(param_1[0x20])) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x84)),(*(float * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)));
      if ((char)uVar9 != '\0') {
        fVar1 = (*(float * PTR32 *)&gen_args[0])[5];
        (*(float *)(gen_frame + 0x100)) = (*(float *)(gen_frame + 0xa4)) * fVar1;
        (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0xa8)) * fVar1;
        (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0xac)) * fVar1;
        fVar2 = (*(float * PTR32 *)&gen_args[0])[4];
        (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0x94)) * fVar2;
        (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0x98)) * fVar2;
        (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x9c)) * fVar2;
        (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0x84)) * (*(float * PTR32 *)&gen_args[0])[3];
        (*(float *)(gen_frame + 0xd4)) = (*(float *)(gen_frame + 0x88)) * (*(float * PTR32 *)&gen_args[0])[3];
        (*(float *)(gen_frame + 0xd8)) = (*(float *)(gen_frame + 0x8c)) * (*(float * PTR32 *)&gen_args[0])[3];
        fVar3 = (*(float *)(gen_frame + 0x84)) * (*(float * PTR32 *)&gen_args[0])[3] + (*(float *)(gen_frame + 0x94)) * fVar2;
        (*(float *)(gen_frame + 0xf0)) = fVar3;
        fVar4 = (*(float *)(gen_frame + 0x88)) * (*(float * PTR32 *)&gen_args[0])[3] + (*(float *)(gen_frame + 0x98)) * fVar2;
        (*(float *)(gen_frame + 0xf4)) = fVar4;
        fVar2 = (*(float *)(gen_frame + 0x8c)) * (*(float * PTR32 *)&gen_args[0])[3] + (*(float *)(gen_frame + 0x9c)) * fVar2;
        (*(float *)(gen_frame + 0xf8)) = fVar2;
        fVar3 = fVar3 + (*(float *)(gen_frame + 0xa4)) * fVar1;
        (*(float *)(gen_frame + 0xe0)) = fVar3;
        fVar4 = fVar4 + (*(float *)(gen_frame + 0xa8)) * fVar1;
        (*(float *)(gen_frame + 0xe4)) = fVar4;
        fVar2 = fVar2 + (*(float *)(gen_frame + 0xac)) * fVar1;
        (*(float *)(gen_frame + 0xe8)) = fVar2;
        fVar3 = (*(float *)(gen_frame + 0xb4)) + fVar3;
        (*(float *)(gen_frame + 0x100)) = fVar3;
        fVar4 = fVar4 + (*(float *)(gen_frame + 0xb8));
        (*(float *)(gen_frame + 0x104)) = fVar4;
        (*(float * PTR32 *)&gen_args[0])[3] = fVar3;
        (*(float * PTR32 *)&gen_args[0])[5] = fVar2 + (*(float *)(gen_frame + 0xbc));
        (*(float * PTR32 *)&gen_args[0])[4] = fVar4;
        (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[0])[8];
        (*(float *)(gen_frame + 0xd4)) = (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[0])[8];
        (*(float *)(gen_frame + 0xd8)) = (*(float *)(gen_frame + 0xac)) * (*(float * PTR32 *)&gen_args[0])[8];
        (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[0])[7];
        (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[0])[7];
        (*(float *)(gen_frame + 0xf8)) = (*(float *)(gen_frame + 0x9c)) * (*(float * PTR32 *)&gen_args[0])[7];
        (*(float *)(gen_frame + 0x100)) = (*(float * PTR32 *)&gen_args[0])[6] * (*(float *)(gen_frame + 0x84));
        (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0x88)) * (*(float * PTR32 *)&gen_args[0])[6];
        (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x8c)) * (*(float * PTR32 *)&gen_args[0])[6];
        fVar1 = (*(float * PTR32 *)&gen_args[0])[6] * (*(float *)(gen_frame + 0x84)) + (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[0])[7];
        (*(float *)(gen_frame + 0xe0)) = fVar1;
        fVar2 = (*(float *)(gen_frame + 0x88)) * (*(float * PTR32 *)&gen_args[0])[6] + (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[0])[7];
        (*(float *)(gen_frame + 0xe4)) = fVar2;
        fVar3 = (*(float *)(gen_frame + 0x8c)) * (*(float * PTR32 *)&gen_args[0])[6] + (*(float *)(gen_frame + 0x9c)) * (*(float * PTR32 *)&gen_args[0])[7];
        (*(float *)(gen_frame + 0xe8)) = fVar3;
        fVar1 = fVar1 + (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[0])[8];
        (*(float *)(gen_frame + 0x100)) = fVar1;
        fVar2 = fVar2 + (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[0])[8];
        (*(float *)(gen_frame + 0x104)) = fVar2;
        fVar3 = fVar3 + (*(float *)(gen_frame + 0xac)) * (*(float * PTR32 *)&gen_args[0])[8];
        (*(float *)(gen_frame + 0x108)) = fVar3;
        fVar1 = (*(float *)(gen_frame + 0xb4)) + fVar1;
        (*(float *)(gen_frame + 0xf0)) = fVar1;
        fVar2 = fVar2 + (*(float *)(gen_frame + 0xb8));
        (*(float *)(gen_frame + 0xf4)) = fVar2;
        (*(float * PTR32 *)&gen_args[0])[6] = fVar1;
        (*(float * PTR32 *)&gen_args[0])[8] = fVar3 + (*(float *)(gen_frame + 0xbc));
        (*(float * PTR32 *)&gen_args[0])[7] = fVar2;
        (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[0])[0xb];
        (*(float *)(gen_frame + 0xd4)) = (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[0])[0xb];
        (*(float *)(gen_frame + 0xd8)) = (*(float *)(gen_frame + 0xac)) * (*(float * PTR32 *)&gen_args[0])[0xb];
        (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[0])[10];
        (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[0])[10];
        (*(float *)(gen_frame + 0xf8)) = (*(float *)(gen_frame + 0x9c)) * (*(float * PTR32 *)&gen_args[0])[10];
        (*(float *)(gen_frame + 0x100)) = (*(float * PTR32 *)&gen_args[0])[9] * (*(float *)(gen_frame + 0x84));
        (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0x88)) * (*(float * PTR32 *)&gen_args[0])[9];
        (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x8c)) * (*(float * PTR32 *)&gen_args[0])[9];
        fVar1 = (*(float * PTR32 *)&gen_args[0])[9] * (*(float *)(gen_frame + 0x84)) + (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[0])[10];
        (*(float *)(gen_frame + 0xe0)) = fVar1;
        fVar2 = (*(float *)(gen_frame + 0x88)) * (*(float * PTR32 *)&gen_args[0])[9] + (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[0])[10];
        (*(float *)(gen_frame + 0xe4)) = fVar2;
        fVar3 = (*(float *)(gen_frame + 0x8c)) * (*(float * PTR32 *)&gen_args[0])[9] + (*(float *)(gen_frame + 0x9c)) * (*(float * PTR32 *)&gen_args[0])[10];
        (*(float *)(gen_frame + 0xe8)) = fVar3;
        fVar1 = fVar1 + (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[0])[0xb];
        (*(float *)(gen_frame + 0x100)) = fVar1;
        fVar2 = fVar2 + (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[0])[0xb];
        (*(float *)(gen_frame + 0x104)) = fVar2;
        fVar3 = fVar3 + (*(float *)(gen_frame + 0xac)) * (*(float * PTR32 *)&gen_args[0])[0xb];
        (*(float *)(gen_frame + 0x108)) = fVar3;
        fVar1 = (*(float *)(gen_frame + 0xb4)) + fVar1;
        (*(float *)(gen_frame + 0xf0)) = fVar1;
        fVar2 = fVar2 + (*(float *)(gen_frame + 0xb8));
        (*(float *)(gen_frame + 0xf4)) = fVar2;
        (*(float * PTR32 *)&gen_args[0])[9] = fVar1;
        (*(float * PTR32 *)&gen_args[0])[10] = fVar2;
        (*(float * PTR32 *)&gen_args[0])[0xb] = fVar3 + (*(float *)(gen_frame + 0xbc));
        fVar1 = (*(float * PTR32 *)&gen_args[0])[2];
        fVar2 = (*(float * PTR32 *)&gen_args[0])[1];
        (*(float *)(gen_frame + 0xf8)) = (*(float *)(gen_frame + 0x9c)) * fVar2;
        fVar3 = *(*(float * PTR32 *)&gen_args[0]);
        (*(float *)(gen_frame + 0x100)) = fVar3 * (*(float *)(gen_frame + 0x84));
        (*(float * PTR32 *)&gen_args[0])[2] = (((*(float *)(gen_frame + 0x8c)) * fVar3 + (*(float *)(gen_frame + 0x9c)) * fVar2) + (*(float *)(gen_frame + 0xac)) * fVar1) + (*(float *)(gen_frame + 0xbc));
        *(*(float * PTR32 *)&gen_args[0]) = (*(float *)(gen_frame + 0xb4)) + ((fVar3 * (*(float *)(gen_frame + 0x84)) + (*(float *)(gen_frame + 0x94)) * fVar2) + (*(float *)(gen_frame + 0xa4)) * fVar1);
        (*(float * PTR32 *)&gen_args[0])[1] = (((*(float *)(gen_frame + 0x88)) * fVar3 + (*(float *)(gen_frame + 0x98)) * fVar2) + (*(float *)(gen_frame + 0xa8)) * fVar1) + (*(float *)(gen_frame + 0xb8));
        (*(float * PTR32 *)&gen_args[0])[0x10] = gen_bits2f(param_1[0x28]) * (*(float * PTR32 *)&gen_args[0])[0x10];
        (*(float * PTR32 *)&gen_args[0])[0x11] = ((float)gen_bits2f((unsigned int)(uintptr_t)(param_1)));
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG);
        if (uVar9 != 0) {
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG);
          uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG);
          uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG);
          (*(float * PTR32 *)&gen_args[0])[0xf] = gen_bits2f(~uVar11 & (uint)gen_fl2bits((*(float * PTR32 *)&gen_args[0])[0xf]) | uVar9 & uVar10);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00c94230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c94230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc94230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  char * pcVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*((int *)GEN_TOP((param_1 + 4))) == 0) {
    if (param_3 == ((int *)GEN_TOP(0x0))) {
      pcVar2 = ((char *)REFP(0x1128e0c));
    }
    else {
      pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 4))))(param_3 GEN_EDX_FWD)));
    }
    F_00c96fb0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4))),
                 ((char *)REFP(0x1128e14)),pcVar2);
    this_00 = ((undefined *)GEN_TOP(F_00ca2100(0x1c,&REFG(undefined, 0x1128e0b),
                                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4))))));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00c93350(this_00 GEN_EDX_ARG,param_1 + 0x10,this);
      return uVar3;
    }
  }
  else if (*((int *)GEN_TOP((param_1 + 4))) == 1) {
    puVar1 = ((undefined4 *)GEN_TOP(F_00ca2100(0x10,&REFG(undefined, 0x1128e3a),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4))))));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
      puVar1[3] = param_1 + 0x10;
      puVar1[2] = this;
      *puVar1 = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
      puVar1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
      return (uint)puVar1;
    }
  }
  return 0;
}

/* ref: FUN_00c942f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c942f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc942f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte * pbVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  
  iVar6 = param_4;
  iVar4 = *((int *)GEN_TOP(((int)this + 0xc)));
  fVar1 = *((float *)GEN_TOP((iVar4 + 0x14)));
  fVar2 = *((float *)GEN_TOP((iVar4 + 0x18)));
  fVar10 = ((float)GEN_TOF((((double)GEN_TOD((*((float *)GEN_TOP((iVar4 + 0x24))) - fVar2))) * REFG(double, 0x1088108))));
  fVar12 = ((float)GEN_TOF((((double)GEN_TOD((*((float *)GEN_TOP((iVar4 + 0x1c))) - *((float *)GEN_TOP((iVar4 + 0x10)))))) * REFG(double, 0x1088108))));
  iVar5 = *param_3;
  fVar14 = ((float)GEN_TOF((((double)GEN_TOD((*((float *)GEN_TOP((iVar4 + 0x20))) - fVar1))) * REFG(double, 0x1088108))));
  fVar3 = *((float *)GEN_TOP((param_2 + 0x34)));
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((double)*((float *)GEN_TOP((param_2 + 0x30))) + (double)*((float *)GEN_TOP((iVar4 + 0x10)))) +
                    (double)fVar12)));
  dVar9 = (double)fVar14;
  dVar13 = (double)fVar12;
  dVar11 = (double)fVar10;
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((double)fVar3 + (double)fVar1) + (double)fVar14)));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((((double)*((float *)GEN_TOP((param_2 + 0x38))) + (double)fVar2) + (double)fVar10)));
  (*(float *)(gen_frame + 0xc)) = SQRT(((float)GEN_TOF(((dVar9 * dVar9 + dVar13 * dVar13) + dVar11 * dVar11))));
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x1c))))(param_3,param_1,&(*(float *)(gen_frame + 0x0)));
  if ((char)uVar7 == '\0') {
    if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x2a))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,param_2,param_4);
      iVar4 = *((int *)GEN_TOP(((int)this + 0xc)));
      pbVar8 = ((byte *)GEN_TOP((iVar4 + (*((ushort *)GEN_TOP((iVar4 + 0x28))) + 8 + (uint)*((ushort *)GEN_TOP((iVar4 + 0x2c))) * 2
                                ) * 6)));
      param_4 = 0;
      if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x2a))) != 0) {
        do {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 8))))
                    (param_3 GEN_EDX_ARG,param_1,iVar6 + (uint)*pbVar8 * 0xc,iVar6 + (uint)pbVar8[1] * 0xc,
                     iVar6 + (uint)pbVar8[2] * 0xc,(uint)*(ushort *)(pbVar8 + 4));
          param_4 = param_4 + 1;
          pbVar8 = pbVar8 + 6;
        } while (param_4 < *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x2a))));
      }
    }
    iVar4 = *((int *)GEN_TOP(((int)this + 0xc)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    if (0 < *((int *)GEN_TOP((iVar4 + 8)))) {
      (*(int *)(gen_frame + 0x1c)) = *((int *)GEN_TOP((iVar4 + 8))) + iVar4;
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP(((int)this + 8)));
      F_00c942f0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_1,param_2,param_3,iVar6);
    }
    iVar4 = *((int *)GEN_TOP(((int)this + 0xc)));
    if (0 < *((int *)GEN_TOP((iVar4 + 8)))) {
      (*(int *)(gen_frame + 0x1c)) = *((int *)GEN_TOP((iVar4 + 0xc))) + iVar4;
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP(((int)this + 8)));
      F_00c942f0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_1,param_2,param_3,iVar6);
    }
  }
  return;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf1 */
GEN_LIB_GS GEN_FRAME unsigned int GEN_THISCALL F_00c94540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc94540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xc08, 8, 4);
  undefined4 * puVar1;
  int iVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc00)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc04));
  iVar2 = 0xff;
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c942f0(this GEN_EDX_FWD,param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x0)));
  return;
}

/* ref: FUN_00c945b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c945b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc945b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    param_1[2] = 0;
  }
  return (uint)param_1;
}

/* ref: FUN_00c945e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c945e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc945e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0xc8, 8, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float * pfVar5;
  byte * pbVar6;
  byte bVar7;
  char cVar9;
  undefined * PTR32 * PTR32 * pppuVar8;
  int iVar10;
  uint uVar11;
  int * piVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  pbVar6 = (*(byte * PTR32 *)&gen_args[2]);
  iVar10 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
  (*(float * PTR32 *)(gen_frame + 0xbc)) = *((float * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 8)));
  iVar4 = *((int *)GEN_TOP(((int)param_1 + 0xc)));
  (*(int *)(gen_frame + 0xb0)) = iVar10;
  (*(float *)(gen_frame + 0xac)) = 0.0;
  if (*((short *)GEN_TOP((iVar4 + 0x2a))) == 0) {
    (*(float *)(gen_frame + 0x8c)) = 0.0;
    (*(float *)(gen_frame + 0x90)) = 0.0;
    (*(float *)(gen_frame + 0x94)) = 0.0;
    (*(float *)(gen_frame + 0x98)) = 0.0;
    (*(float *)(gen_frame + 0x9c)) = 0.0;
    (*(float *)(gen_frame + 0xa0)) = 0.0;
    fVar13 = *((float *)GEN_TOP((iVar10 + 0xc)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x68))[0] = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x78))[0] = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    (*(float * PTR32 *)(gen_frame + 0xc0)) = ((float *)(gen_frame + 0x4c));
    ((int *)(gen_frame + 0x70))[0] = 0;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x78))[2] = ((undefined * PTR32 *)GEN_TOP(0x0));
    (*(uint *)(gen_frame + 0xa4)) = 0;
    (*(float *)(gen_frame + 0xa8)) = fVar13;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x68))[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x78))[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    piVar12 = ((int *)(gen_frame + 0x70)) + 1;
    ((int *)(gen_frame + 0xb4))[1] = 8 - (int)((float *)(gen_frame + 0x4c));
    do {
      fVar13 = (*(float *)(gen_frame + 0xa8));
      iVar10 = *((int *)GEN_TOP(((int)param_1 + 0xc)));
      if (0 < *((int *)GEN_TOP((iVar10 + 8)))) {
        iVar4 = *((int *)GEN_TOP(((int)param_1 + 8)));
        *piVar12 = *((int *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xc0)) + ((int *)(gen_frame + 0xb4))[1] + iVar10))) + iVar10;
        piVar12[-1] = iVar4;
      }
      iVar10 = *piVar12;
      fVar18 = *((float *)GEN_TOP((iVar10 + 0x10)));
      (*(float *)(gen_frame + 0x8c)) = fVar18;
      fVar19 = *((float *)GEN_TOP((iVar10 + 0x14)));
      (*(float *)(gen_frame + 0x90)) = fVar19;
      fVar17 = *((float *)GEN_TOP((iVar10 + 0x18)));
      (*(float *)(gen_frame + 0x94)) = fVar17;
      fVar1 = *((float *)GEN_TOP((iVar10 + 0x1c)));
      (*(float *)(gen_frame + 0x98)) = fVar1;
      fVar2 = *((float *)GEN_TOP((iVar10 + 0x20)));
      (*(float *)(gen_frame + 0x9c)) = fVar2;
      fVar3 = *((float *)GEN_TOP((iVar10 + 0x24)));
      (*(float *)(gen_frame + 0x8c)) = fVar18 - fVar13;
      (*(float *)(gen_frame + 0x90)) = fVar19 - fVar13;
      (*(float *)(gen_frame + 0x94)) = fVar17 - fVar13;
      (*(float *)(gen_frame + 0x98)) = fVar1 + fVar13;
      (*(float *)(gen_frame + 0x9c)) = fVar2 + fVar13;
      (*(float *)(gen_frame + 0xa0)) = fVar3 + fVar13;
      bVar7 = F_00c996f0((*(int *)(gen_frame + 0xb0)),(*(float * PTR32 *)(gen_frame + 0xbc)),&(*(float *)(gen_frame + 0x8c)),(*(float * PTR32 *)(gen_frame + 0xc0)));
      (*(float * PTR32 *)(gen_frame + 0xc0)) = (*(float * PTR32 *)(gen_frame + 0xc0)) + 1;
      *((byte *)GEN_TOP(((int)&(*(byte * PTR32 *)&gen_args[2]) + (*(uint *)(gen_frame + 0xa4))))) = bVar7;
      uVar11 = (*(uint *)(gen_frame + 0xa4)) + 1;
      piVar12 = piVar12 + 4;
      (*(uint *)(gen_frame + 0xa4)) = uVar11;
    } while (uVar11 < 2);
    ((int *)(gen_frame + 0xb4))[0] = 0;
    ((int *)(gen_frame + 0xb4))[1] = 1;
    cVar9 = (char)((uint)(*(byte * PTR32 *)&gen_args[2]) >> 8);
    if ((char)(*(byte * PTR32 *)&gen_args[2]) == '\0') {
      if (cVar9 == '\0') {
        ((int *)(gen_frame + 0xb4))[0] = -1;
      }
      else {
        ((int *)(gen_frame + 0xb4))[0] = 1;
        ((int *)(gen_frame + 0xb4))[1] = 0xffffffff;
      }
    }
    else if (cVar9 == '\0') {
      ((int *)(gen_frame + 0xb4))[0] = 0;
      ((int *)(gen_frame + 0xb4))[1] = 0xffffffff;
    }
    else if (((float *)(gen_frame + 0x4c))[1] < ((float *)(gen_frame + 0x4c))[0]) {
      ((int *)(gen_frame + 0xb4))[0] = 1;
      ((int *)(gen_frame + 0xb4))[1] = 0;
    }
    pfVar5 = *(float * PTR32 *)(pbVar6 + 0xc);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(float *)(gen_frame + 0xc)) = 0.0;
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = 0.0;
    (*(float *)(gen_frame + 0x1c)) = 0.0;
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = 0.0;
    (*(float *)(gen_frame + 0x2c)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    fVar13 = *pfVar5;
    (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(((uint)(*(byte * PTR32 *)&gen_args[2]) & 0xffffff)));
    (*(float * PTR32 *)(gen_frame + 0xc0)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar13)));
    uVar11 = 0;
    do {
      iVar10 = ((int *)(gen_frame + 0xb4))[(int)(uVar11)];
      if (iVar10 == -1) break;
      if (((double)((float *)(gen_frame + 0x4c))[(int)(iVar10)] - (double)(*(float *)(gen_frame + 0xa8)) < ((double)GEN_TOD(**(float * PTR32 *)(pbVar6 + 0xc)))) &&
         (bVar7 = F_00c945e0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x68)) + iVar10 * 4 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x0)),pbVar6,(*(uint *)&gen_args[3])), bVar7 != 0))
      {
        fVar13 = **(float * PTR32 *)(pbVar6 + 0xc);
        if ((*pbVar6 & 1) == 0) {
          if (fVar13 < ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0)))))) {
LAB_00c94ded: ;
            (*(float * PTR32 *)(gen_frame + 0xc0)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar13)));
            F_00550bc0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
            (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(byte * PTR32 *)&gen_args[2]), 0, 3))));
          }
        }
        else if ((double)fVar13 <= (double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0))))) + *(double *)&REFG(undefined, 0x109ce00)) {
          fVar18 = ((float)GEN_TOF(((double)((*(float *)(gen_frame + 0x1c)) - (*(float *)(gen_frame + 0x10))) * (double)((*(float *)(gen_frame + 0x2c)) - (*(float *)(gen_frame + 0x20))) -
                          (double)((*(float *)(gen_frame + 0x20)) - (*(float *)(gen_frame + 0x14))) * (double)((*(float *)(gen_frame + 0x28)) - (*(float *)(gen_frame + 0x1c))))));
          fVar17 = ((float)GEN_TOF(((double)((*(float *)(gen_frame + 0x28)) - (*(float *)(gen_frame + 0x1c))) * (double)((*(float *)(gen_frame + 0x18)) - (*(float *)(gen_frame + 0xc))) -
                          (double)((*(float *)(gen_frame + 0x1c)) - (*(float *)(gen_frame + 0x10))) * (double)((*(float *)(gen_frame + 0x24)) - (*(float *)(gen_frame + 0x18))))));
          dVar14 = (double)fVar18;
          fVar19 = ((float)GEN_TOF(((double)((*(float *)(gen_frame + 0x20)) - (*(float *)(gen_frame + 0x14))) * (double)((*(float *)(gen_frame + 0x24)) - (*(float *)(gen_frame + 0x18))) -
                          (double)((*(float *)(gen_frame + 0x2c)) - (*(float *)(gen_frame + 0x20))) * (double)((*(float *)(gen_frame + 0x18)) - (*(float *)(gen_frame + 0xc))))));
          dVar15 = (double)fVar19;
          dVar16 = (double)fVar17;
          fVar13 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                          ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar15 * dVar15 + dVar14 * dVar14) + dVar16 * dVar16
                                              )))))))));
          if (0.0 < fVar13) {
            fVar18 = fVar13 * fVar18;
            fVar17 = fVar17 * fVar13;
            fVar19 = fVar19 * fVar13;
          }
          else {
            fVar17 = REFG(float, 0x1379708);
            fVar18 = REFG(float, 0x1379700);
            fVar19 = REFG(float, 0x1379704);
            if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
              *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
              REFG(float, 0x1379700) = 0.0;
              REFG(float, 0x1379704) = REFG(float, 0x1087f04);
              REFG(float, 0x1379708) = 0.0;
              fVar17 = REFG(float, 0x1379708);
              fVar18 = REFG(float, 0x1379700);
              fVar19 = REFG(float, 0x1087f04);
            }
          }
          fVar13 = **(float * PTR32 *)(pbVar6 + 0xc);
          fVar18 = ((float)GEN_TOF((((double)(*(float * PTR32 *)(gen_frame + 0xbc))[1] * (double)fVar19 + (double)fVar18 * (double)*(*(float * PTR32 *)(gen_frame + 0xbc)))
                          + (double)(*(float * PTR32 *)(gen_frame + 0xbc))[2] * (double)fVar17)));
          if ((!((double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0))))) - (double)fVar13 < REFG(double, 0x109cdf8))) || (!((*(float *)(gen_frame + 0xac)) <= fVar18))
             ) {
            (*(float *)(gen_frame + 0xac)) = fVar18;
            goto LAB_00c94ded;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 2);
    **(float * PTR32 *)(pbVar6 + 0xc) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0)))));
    iVar10 = 1;
    pppuVar8 = ((undefined * PTR32 * PTR32 *)(gen_frame + 0x78)) + 4;
    do {
      iVar10 = iVar10 - 1;
      pppuVar8[-3] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
      pppuVar8[-4] = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
      pppuVar8 = pppuVar8 - 4;
    } while (-1 < iVar10);
    return (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3))));
  }
  (*(float * PTR32 *)(gen_frame + 0xc0)) = ((float *)GEN_TOP((iVar4 + (*((ushort *)GEN_TOP((iVar4 + 0x28))) + 8 + (uint)*((ushort *)GEN_TOP((iVar4 + 0x2c))) * 2)
                              * 6)));
  uVar11 = 0xffffffff;
  (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP((*(uint *)&gen_args[3])));
  F_00c90030(param_1 GEN_EDX_ARG,(*(uint *)&gen_args[3]));
  (*(uint *)&gen_args[3]) = **(uint * PTR32 *)(pbVar6 + 0xc);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)pbVar6)) {
  case 0: ;
    F_00c96260(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    (*(gen_code32 *)(gen_frame + 0x60)) = ((code *)REFP(0xc95f60));
    uVar11 = F_00c95f60(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,(uint)(*(float * PTR32 *)(gen_frame + 0xc0)),
                          (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[2]),(*(int *)(gen_frame + 0xb0)),
                          (*(float * PTR32 *)(gen_frame + 0xbc)),&(*(uint *)&gen_args[3]));
    break;
  case 1: ;
    F_00c96300(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    (*(gen_code32 *)(gen_frame + 0x58)) = ((code *)REFP(0xc96580));
    uVar11 = F_00c96580(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,(uint)(*(float * PTR32 *)(gen_frame + 0xc0)),
                          (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[2]),
                          *(undefined4 *)(pbVar6 + 4),(*(float * PTR32 *)(gen_frame + 0xbc)),&(*(uint *)&gen_args[3]));
    break;
  case 2: ;
    fVar13 = *(float *)(pbVar6 + 0x10);
    F_00c962a0(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),fVar13);
    (*(gen_code32 *)(gen_frame + 0x60)) = ((code *)REFP(0xc95f60));
    uVar11 = F_00c95f60(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,(uint)(*(float * PTR32 *)(gen_frame + 0xc0)),
                          (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[2]),
                          *(undefined4 *)(pbVar6 + 4),(*(float * PTR32 *)(gen_frame + 0xbc)),&(*(uint *)&gen_args[3]));
    break;
  case 3: ;
    fVar13 = *(float *)(pbVar6 + 0x10);
    F_00c96350(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),fVar13);
    (*(gen_code32 *)(gen_frame + 0x58)) = ((code *)REFP(0xc96580));
    uVar11 = F_00c96580(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,(uint)(*(float * PTR32 *)(gen_frame + 0xc0)),
                          (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[2]),
                          *(undefined4 *)(pbVar6 + 4),(*(float * PTR32 *)(gen_frame + 0xbc)),&(*(uint *)&gen_args[3]));
    break;
  case 4: ;
    F_00c96260(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    uVar23 = *(undefined4 *)(pbVar6 + 0x1c);
    uVar22 = *(undefined4 *)(pbVar6 + 0x18);
    uVar21 = (*(undefined4 * PTR32 *)(pbVar6 + 0x14))[1];
    uVar20 = **(undefined4 * PTR32 *)(pbVar6 + 0x14);
    goto LAB_00c94772;
  case 5: ;
    F_00c96300(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    uVar23 = *(undefined4 *)(pbVar6 + 0x1c);
    uVar22 = *(undefined4 *)(pbVar6 + 0x18);
    uVar21 = (*(undefined4 * PTR32 *)(pbVar6 + 0x14))[1];
    uVar20 = **(undefined4 * PTR32 *)(pbVar6 + 0x14);
    goto LAB_00c94811;
  case 6: ;
    fVar13 = *(float *)(pbVar6 + 0x10);
    F_00c962a0(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),fVar13);
    uVar23 = *(undefined4 *)(pbVar6 + 0x1c);
    uVar22 = *(undefined4 *)(pbVar6 + 0x18);
    uVar21 = (*(undefined4 * PTR32 *)(pbVar6 + 0x14))[1];
    uVar20 = **(undefined4 * PTR32 *)(pbVar6 + 0x14);
LAB_00c94772: ;
    F_00c96490(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,uVar20,uVar21,uVar22,uVar23);
    uVar11 = ((code *)(*(gen_code32 *)(gen_frame + 0x60)))(((undefined1 *)(gen_frame + 0x5c)),(*(float * PTR32 *)(gen_frame + 0xc0)),(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xc))) + 0x2a))),
                         &(*(byte * PTR32 *)&gen_args[2]),*(undefined4 *)(pbVar6 + 4),(*(float * PTR32 *)(gen_frame + 0xbc)),&(*(uint *)&gen_args[3]));
    break;
  case 7: ;
    fVar13 = *(float *)(pbVar6 + 0x10);
    F_00c96350(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),fVar13);
    uVar23 = *(undefined4 *)(pbVar6 + 0x1c);
    uVar22 = *(undefined4 *)(pbVar6 + 0x18);
    uVar21 = (*(undefined4 * PTR32 *)(pbVar6 + 0x14))[1];
    uVar20 = **(undefined4 * PTR32 *)(pbVar6 + 0x14);
LAB_00c94811: ;
    F_00c96a60(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar20,uVar21,uVar22,uVar23);
    uVar11 = ((code *)(*(gen_code32 *)(gen_frame + 0x58)))(((undefined1 *)(gen_frame + 0x54)),(*(float * PTR32 *)(gen_frame + 0xc0)),(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xc))) + 0x2a))),
                         &(*(byte * PTR32 *)&gen_args[2]),*(undefined4 *)(pbVar6 + 4),(*(float * PTR32 *)(gen_frame + 0xbc)),&(*(uint *)&gen_args[3]));
  }
  **(uint * PTR32 *)(pbVar6 + 0xc) = (*(uint *)&gen_args[3]);
  bVar7 = F_00c901b0(param_1 GEN_EDX_ARG,uVar11,(*(undefined * PTR32 *)&gen_args[1]),&(*(byte * PTR32 *)&gen_args[2]),(*(int *)(gen_frame + 0xb0)),(*(float * PTR32 *)(gen_frame + 0xbc)),GEN_ARGF(gen_bits2f((*(uint *)&gen_args[3]))));
  return bVar7;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf4 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00c94e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc94e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xc08, 8, 4);
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc00)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc04));
  iVar3 = 0xff;
  puVar2 = ((undefined4 *)(gen_frame + 0x8));
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  bVar1 = F_00c945e0(this GEN_EDX_FWD,param_1,param_2,param_3,(uint)((undefined1 *)(gen_frame + 0x0)));
  return bVar1;
}

/* ref: FUN_00c94ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c94ed0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc94ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL_TOP(0x74, 12, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 * puVar12;
  undefined * this;
  uint uVar13;
  
  F_00c96ab0(param_1 GEN_EDX_FWD,param_2,param_3);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_1[0x1a] = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x1128f90));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x1128f8c));
  param_1[4] = (*(undefined * PTR32 (*)[1])REFP(0x1128f88));
  param_1[5] = (*(undefined * PTR32 (*)[1])REFP(0x1128f84));
  param_1[0x1a] = (*(undefined * PTR32 (*)[2])REFP(0x1128f7c));
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *((char *)GEN_TOP(((int)param_1 + 0x79))) = param_5;
  param_1[0x1f] = uVar1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x7a))) = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = uVar1;
  param_1[0x29] = uVar1;
  param_1[0x2a] = uVar1;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  puVar12 = ((undefined4 *)GEN_TOP(F_00c8f7f0(((undefined1 *)(gen_frame + 0x0)))));
  uVar1 = puVar12[1];
  uVar2 = puVar12[2];
  uVar3 = puVar12[4];
  uVar4 = puVar12[5];
  uVar5 = puVar12[9];
  uVar6 = puVar12[6];
  uVar7 = puVar12[8];
  (*(undefined4 *)(gen_frame + 0x5c)) = uVar5;
  uVar8 = puVar12[10];
  (*(undefined4 *)(gen_frame + 0x60)) = uVar8;
  uVar9 = puVar12[0xc];
  (*(undefined4 *)(gen_frame + 0x64)) = uVar9;
  uVar10 = puVar12[0xd];
  (*(undefined4 *)(gen_frame + 0x68)) = uVar10;
  uVar11 = puVar12[0xe];
  param_1[0x31] = *puVar12;
  param_1[0x32] = uVar1;
  param_1[0x33] = uVar2;
  param_1[0x34] = uVar3;
  param_1[0x35] = uVar4;
  param_1[0x36] = uVar6;
  param_1[0x38] = uVar5;
  param_1[0x39] = uVar8;
  param_1[0x37] = uVar7;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  param_1[0x3c] = uVar11;
  if (param_5 != '\0') {
    param_1[0x21] = *((undefined4 *)GEN_TOP((param_4 + 8)));
    param_1[0x1d] = *((undefined4 *)GEN_TOP((param_4 + 0xc)));
    this = ((undefined *)GEN_TOP(F_00ca2100(0x3c,&REFG(undefined, 0x1128e0a),*((undefined4 *)GEN_TOP((param_1[0xd] + 4))))));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      uVar13 = F_00c93050(this GEN_EDX_ARG,param_4 + 0x10);
      param_1[0x20] = uVar13;
      return (uint)param_1;
    }
    param_1[0x20] = 0;
  }
  return (uint)param_1;
}

/* ref: FUN_00c951e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c951e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc951e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 uVar1;
  
  F_00c96ab0(this GEN_EDX_FWD,param_1,param_2);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1128f90));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1128f8c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x1128f88));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1128f84));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[2])REFP(0x1128f7c));
  *((undefined2 *)GEN_TOP(((int)this + 0x78))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x7a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x120))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x148))) = 0;
  return (uint)this;
}

/* ref: FUN_00c953c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c953c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc953c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1128f90));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1128f8c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x1128f88));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1128f84));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[2])REFP(0x1128f7c));
  if (*((int *)GEN_TOP(((int)this + 0x6c))) != 0) {
    F_00c96f90(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x6c))));
    if (*((char *)GEN_TOP(((int)this + 0x7a))) == '\0') {
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 0x20)));
      *piVar1 = *piVar1 - 1;
    }
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  uVar2 = F_00c96c00(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c95430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95430(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc95430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c95440 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c95440(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float * param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xc95440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float * param_8 = (float *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  if ((param_7 <= *param_8) &&
     ((!GEN_ISNAN(param_7) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_7 < *(float *)&REFG(undefined, 0x1088114)))) {
    *param_9 = param_5;
    *param_8 = param_7;
  }
  return (uint)param_8;
}

/* ref: FUN_00c95480 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c95480(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(float * param_9, unsigned int gen_a8), GEN_P(undefined4 * param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xc95480u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(float * param_9 = (float *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;)
  float fVar1;
  
  if (((double)param_8 <= (double)*param_9 + *(double *)&REFG(undefined, 0x109ce00)) &&
     ((!GEN_ISNAN(param_8) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_8 < *(float *)&REFG(undefined, 0x1088114)))) {
    fVar1 = ((float)GEN_TOF((((double)param_5[1] * (double)param_7[1] + (double)*param_5 * (double)*param_7)
                   + (double)param_5[2] * (double)param_7[2])));
    if ((!((double)*param_9 - (double)param_8 < REFG(double, 0x109cdf8))) ||
       (!(*((float *)GEN_TOP((param_1 + 0x30))) <= fVar1))) {
      *param_10 = param_6;
      *param_9 = param_8;
      *((float *)GEN_TOP((param_1 + 0x30))) = fVar1;
    }
  }
  return;
}

/* ref: FUN_00c95560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95560(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc95560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  return (uint)in_ecx;
}

/* ref: FUN_00c955d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c955d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc955d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 4))))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c955f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c955f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc955f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 4))))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c95620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95620(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc95620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1128e68));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c95660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95660(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc95660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1128e70));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c95690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc95690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00c956a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c956a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc956a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00c956b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c956b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc956b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00c956c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c956c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc956c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00c956d0 */
GEN_LIB GEN_FRAME byte F_00c956d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xc956d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  byte bVar1;
  
  bVar1 = F_00c9bf20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}

/* ref: FUN_00c956e0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00c956e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc956e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pfVar7 = ((float *)GEN_TOP(*in_ecx));
  fVar10 = param_2[1];
  fVar16 = *param_2;
  fVar1 = param_2[2];
  fVar2 = param_3[2];
  fVar3 = *param_3;
  fVar15 = param_3[1];
  fVar14 = ((float)GEN_TOF(((((double)pfVar7[4] * (double)fVar15 + (double)fVar3 * (double)*pfVar7) +
                   (double)pfVar7[8] * (double)fVar2) + (double)pfVar7[0xc])));
  fVar4 = param_4[2];
  fVar5 = *param_4;
  fVar9 = ((float)GEN_TOF(((((double)pfVar7[2] * (double)fVar3 + (double)pfVar7[6] * (double)fVar15) +
                  (double)pfVar7[10] * (double)fVar2) + (double)pfVar7[0xe])));
  fVar6 = param_4[1];
  fVar15 = ((float)GEN_TOF(((((double)pfVar7[1] * (double)fVar3 + (double)pfVar7[5] * (double)fVar15) +
                   (double)pfVar7[9] * (double)fVar2) + (double)pfVar7[0xd])));
  fVar2 = fVar14 - ((float)GEN_TOF(((((double)pfVar7[4] * (double)fVar10 + (double)fVar16 * (double)*pfVar7)
                           + (double)pfVar7[8] * (double)fVar1) + (double)pfVar7[0xc])));
  fVar3 = ((float)GEN_TOF(((((double)pfVar7[1] * (double)fVar5 + (double)pfVar7[5] * (double)fVar6) +
                  (double)pfVar7[9] * (double)fVar4) + (double)pfVar7[0xd]))) - fVar15;
  fVar15 = fVar15 - ((float)GEN_TOF(((((double)pfVar7[1] * (double)fVar16 +
                             (double)pfVar7[5] * (double)fVar10) + (double)pfVar7[9] * (double)fVar1
                            ) + (double)pfVar7[0xd])));
  fVar8 = ((float)GEN_TOF(((((double)pfVar7[2] * (double)fVar5 + (double)pfVar7[6] * (double)fVar6) +
                  (double)pfVar7[10] * (double)fVar4) + (double)pfVar7[0xe]))) - fVar9;
  fVar9 = fVar9 - ((float)GEN_TOF(((((double)pfVar7[2] * (double)fVar16 + (double)pfVar7[6] * (double)fVar10)
                          + (double)pfVar7[10] * (double)fVar1) + (double)pfVar7[0xe])));
  fVar14 = ((float)GEN_TOF(((((double)pfVar7[4] * (double)fVar6 + (double)fVar5 * (double)*pfVar7) +
                   (double)pfVar7[8] * (double)fVar4) + (double)pfVar7[0xc]))) - fVar14;
  fVar16 = (float)((double)fVar9 * (double)fVar14 - (double)fVar8 * (double)fVar2);
  dVar13 = (double)(float)((double)fVar3 * (double)fVar2 - (double)fVar15 * (double)fVar14);
  dVar12 = (double)fVar16;
  dVar11 = (double)(float)((double)fVar8 * (double)fVar15 - (double)fVar3 * (double)fVar9);
  fVar10 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                  ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar12 * dVar12 + dVar11 * dVar11) + dVar13 * dVar13)))))))));
  if (0.0 < fVar10) {
    return (float10)(fVar10 * fVar16);
  }
  if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
    REFG(float, 0x1379700) = 0;
    REFG(float, 0x1379704) = REFG(float, 0x1087f04);
    REFG(float, 0x1379708) = 0;
  }
  return (float10)REFG(float, 0x1379704);
}

/* ref: FUN_00c95b50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c95b50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(uint param_9, unsigned int gen_a8), GEN_P(undefined4 * param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xc95b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(uint param_9 = (uint)gen_a8;)
  GEN_PIN(undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;)
  float10 fVar1;
  
  if ((param_8 <= *((float *)GEN_TOP(param_9))) &&
     ((!GEN_ISNAN(param_8) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_8 < *(float *)&REFG(undefined, 0x1088114)))) {
    fVar1 = F_00c956e0(param_1 + 0x18 GEN_EDX_FWD,param_2,param_3,param_4);
    if ((float10)(float)fVar1 <= (float10)*((float *)GEN_TOP((param_1 + 0x1c)))) {
      *param_10 = param_6;
      *((float *)GEN_TOP(param_9)) = param_8;
    }
  }
  return;
}

/* ref: FUN_00c95bc0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c95bc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(uint param_9, unsigned int gen_a8), GEN_P(undefined4 * param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xc95bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(uint param_9 = (uint)gen_a8;)
  GEN_PIN(undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;)
  float10 fVar1;
  float fVar2;
  
  if (((double)param_8 <= (double)*((float *)GEN_TOP(param_9)) + *(double *)&REFG(undefined, 0x109ce00)) &&
     ((!GEN_ISNAN(param_8) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_8 < *(float *)&REFG(undefined, 0x1088114)))) {
    fVar2 = ((float)GEN_TOF((((double)*((float *)GEN_TOP((param_5 + 4))) * (double)param_7[1] +
                    (double)*((float *)GEN_TOP(param_5)) * (double)*param_7) +
                   (double)*((float *)GEN_TOP((param_5 + 8))) * (double)param_7[2])));
    if ((!((double)*((float *)GEN_TOP(param_9)) - (double)param_8 < REFG(double, 0x109cdf8))) ||
       (!(*((float *)GEN_TOP((param_1 + 0x30))) <= fVar2))) {
      fVar1 = F_00c956e0(param_1 + 0x18 GEN_EDX_FWD,param_2,param_3,param_4);
      if ((float10)(float)fVar1 <= (float10)*((float *)GEN_TOP((param_1 + 0x1c)))) {
        *param_10 = param_6;
        *((float *)GEN_TOP(param_9)) = param_8;
        *((float *)GEN_TOP((param_1 + 0x30))) = fVar2;
      }
    }
  }
  return;
}

/* ref: FUN_00c95cc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c95cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc95cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xc;
}

/* ref: FUN_00c95cd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c95cd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc95cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x18;
}

/* ref: FUN_00c95ce0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00c95ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc95ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: FUN_00c95cf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c95cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc95cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c963c0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00c95d00 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00c95d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc95d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: FUN_00c95d10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c95d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc95d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c963f0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00c95d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95d20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc95d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ee4));
  in_ecx[6] = 0;
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return (uint)in_ecx;
}

/* ref: FUN_00c95d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95d50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xc95d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x20))))
                    (*((int *)GEN_TOP((param_1 + 0x24))) + param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,(undefined4)gen_fl2bits(param_8),param_9,param_10);
  return uVar1;
}

/* ref: FUN_00c95d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95d90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xc95d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ee4));
  in_ecx[6] = param_6;
  in_ecx[7] = (undefined4)gen_fl2bits(param_7);
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return (uint)in_ecx;
}

/* ref: FUN_00c95de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95de0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc95de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128eec));
  in_ecx[6] = 0;
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return (uint)in_ecx;
}

/* ref: FUN_00c95e10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95e10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xc95e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x20))))
                    (*((int *)GEN_TOP((param_1 + 0x24))) + param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,(undefined4)gen_fl2bits(param_8),param_9,param_10);
  return uVar1;
}

/* ref: FUN_00c95e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95e50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xc95e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128eec));
  in_ecx[6] = param_6;
  in_ecx[7] = (undefined4)gen_fl2bits(param_7);
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return (uint)in_ecx;
}

/* ref: FUN_00c95ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95ea0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc95ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1128e68));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c95ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95ed0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc95ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1128e70));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c95f60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c95f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc95f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  
  uVar4 = 0xffffffff;
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if ((*(uint *)&gen_args[1]) != 0) {
    pbVar6 = ((byte *)GEN_TOP(((*(uint *)&gen_args[0]) + 2)));
    do {
      iVar2 = *(*(int * PTR32 *)&gen_args[2]);
      uVar4 = iVar2 + (uint)pbVar6[-2] * 0xc;
      uVar5 = iVar2 + (uint)pbVar6[-1] * 0xc;
      uVar1 = iVar2 + (uint)*pbVar6 * 0xc;
      (*(uint *)(gen_frame + 0xc)) = uVar1;
      bVar3 = F_00c9bf20((*(undefined4 *)&gen_args[3]),(*(uint *)&gen_args[4]),uVar4,uVar5,uVar1,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
      if (bVar3 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))))
                  ((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar4,uVar5,(*(uint *)(gen_frame + 0xc)),(*(uint *)&gen_args[4]),(*(uint *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[5]),&(*(uint *)(gen_frame + 0x14)))
        ;
      }
      uVar5 = (*(uint *)(gen_frame + 0x18)) + 1;
      pbVar6 = pbVar6 + 6;
      (*(uint *)(gen_frame + 0x18)) = uVar5;
      uVar4 = (*(uint *)(gen_frame + 0x14));
    } while (uVar5 < (*(uint *)&gen_args[1]));
  }
  return uVar4;
}

/* ref: FUN_00c96040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96040u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 * puVar6;
  
  uVar5 = param_1[2];
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_1;
  uVar1 = param_1[3];
  uVar4 = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  (*(uint *)(gen_frame + 0x20)) = 0;
  if ((*(uint *)&gen_args[1]) != 0) {
    puVar6 = ((undefined2 *)GEN_TOP(((*(uint *)&gen_args[0]) + 4)));
    do {
      if ((CONCAT12(*((undefined1 *)GEN_TOP(((int)puVar6 - 1))),*puVar6) & (*(uint *)(gen_frame + 0x18))) == (*(uint *)(gen_frame + 0x14))) {
        iVar2 = *(*(int * PTR32 *)&gen_args[2]);
        uVar5 = iVar2 + (uint)*((byte *)GEN_TOP(((int)puVar6 - 3))) * 0xc;
        uVar1 = iVar2 + (uint)*(byte *)(puVar6 - 2) * 0xc;
        uVar4 = iVar2 + (uint)*(byte *)(puVar6 - 1) * 0xc;
        (*(uint *)(gen_frame + 0xc)) = uVar4;
        bVar3 = F_00c9bf20((*(undefined4 *)&gen_args[3]),(*(uint *)&gen_args[4]),uVar1,uVar5,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
        if (bVar3 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))))
                    ((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar1,uVar5,(*(uint *)(gen_frame + 0xc)),(*(uint *)&gen_args[4]),(*(uint *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[5]),
                     &(*(uint *)(gen_frame + 0x1c)));
        }
      }
      uVar5 = (*(uint *)(gen_frame + 0x20)) + 1;
      puVar6 = puVar6 + 3;
      (*(uint *)(gen_frame + 0x20)) = uVar5;
      uVar4 = (*(uint *)(gen_frame + 0x1c));
    } while (uVar5 < (*(uint *)&gen_args[1]));
  }
  return uVar4;
}

/* ref: FUN_00c96140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96140u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 * puVar6;
  
  (*(uint *)(gen_frame + 0x18)) = param_1[2];
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(uint *)(gen_frame + 0x14)) = param_1[3];
  uVar5 = param_1[4];
  uVar1 = param_1[5];
  uVar4 = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x1c)) = uVar5;
  (*(uint *)(gen_frame + 0x20)) = ~uVar1;
  (*(uint *)(gen_frame + 0x28)) = 0;
  if ((*(uint *)&gen_args[1]) != 0) {
    puVar6 = ((undefined2 *)GEN_TOP(((*(uint *)&gen_args[0]) + 4)));
    do {
      if (((CONCAT12(*((undefined1 *)GEN_TOP(((int)puVar6 - 1))),*puVar6) & (*(uint *)(gen_frame + 0x20)) | (*(uint *)(gen_frame + 0x1c))) & (*(uint *)(gen_frame + 0x18)))
          == (*(uint *)(gen_frame + 0x14))) {
        iVar2 = *(*(int * PTR32 *)&gen_args[2]);
        uVar5 = iVar2 + (uint)*(byte *)(puVar6 - 2) * 0xc;
        uVar1 = iVar2 + (uint)*((byte *)GEN_TOP(((int)puVar6 - 3))) * 0xc;
        uVar4 = iVar2 + (uint)*(byte *)(puVar6 - 1) * 0xc;
        (*(uint *)(gen_frame + 0xc)) = uVar4;
        bVar3 = F_00c9bf20((*(undefined4 *)&gen_args[3]),(*(uint *)&gen_args[4]),uVar5,uVar1,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
        if (bVar3 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))))
                    ((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar5,uVar1,(*(uint *)(gen_frame + 0xc)),(*(uint *)&gen_args[4]),(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[5]),
                     &(*(uint *)(gen_frame + 0x24)));
        }
      }
      uVar5 = (*(uint *)(gen_frame + 0x28)) + 1;
      puVar6 = puVar6 + 3;
      (*(uint *)(gen_frame + 0x28)) = uVar5;
      uVar4 = (*(uint *)(gen_frame + 0x24));
    } while (uVar5 < (*(uint *)&gen_args[1]));
  }
  return uVar4;
}

/* ref: FUN_00c96250 */
GEN_LIB GEN_FRAME byte F_00c96250(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xc96250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  byte bVar1;
  
  bVar1 = F_00553ba0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}

/* ref: FUN_00c96260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96260(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc96260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[6] = 0;
  *(undefined8 *)(in_ecx + 8) = 0xc95440;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ef4));
  return (uint)in_ecx;
}

/* ref: FUN_00c962a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c962a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xc962a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  in_ecx[6] = param_2;
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  *(undefined8 *)(in_ecx + 8) = 0xc95b50;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ef4));
  return (uint)in_ecx;
}

/* ref: FUN_00c96300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96300(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc96300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[6] = 0;
  *(undefined8 *)(in_ecx + 8) = 0xc95480;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1128efc));
  in_ecx[0xc] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c96350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96350(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xc96350u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  in_ecx[6] = param_2;
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  *(undefined8 *)(in_ecx + 8) = 0xc95bc0;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1128efc));
  in_ecx[0xc] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c963c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c963c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc963c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c932c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c963f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c963f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc963f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c93450(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c96490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc96490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  if (param_4 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_3;
    *((int *)GEN_TOP(((int)this + 0x14))) = param_4;
    *((gen_code32 *)GEN_TOP(((int)this + 4))) = ((code *)REFP(0xc96140));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1;
    return param_1;
  }
  *((gen_code32 *)GEN_TOP(((int)this + 4))) = ((code *)REFP(0xc96040));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00c964e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c964e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc964e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 0x1c))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 0x18))) = param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c96530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96530(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc96530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1128e64));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 0xc))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 8))) = param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c96580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96580u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  
  uVar3 = 0xffffffff;
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if ((*(uint *)&gen_args[1]) != 0) {
    pbVar5 = ((byte *)GEN_TOP(((*(uint *)&gen_args[0]) + 2)));
    do {
      iVar1 = *(*(int * PTR32 *)&gen_args[2]);
      uVar3 = iVar1 + (uint)pbVar5[-2] * 0xc;
      uVar4 = iVar1 + (uint)pbVar5[-1] * 0xc;
      iVar1 = iVar1 + (uint)*pbVar5 * 0xc;
      (*(int *)(gen_frame + 0xc)) = iVar1;
      bVar2 = F_00553ba0((*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),uVar3,uVar4,iVar1,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
      if (bVar2 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))))
                  ((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar3,uVar4,(*(int *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[4]),(*(uint *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[5]),&(*(uint *)(gen_frame + 0x14)))
        ;
      }
      uVar4 = (*(uint *)(gen_frame + 0x18)) + 1;
      pbVar5 = pbVar5 + 6;
      (*(uint *)(gen_frame + 0x18)) = uVar4;
      uVar3 = (*(uint *)(gen_frame + 0x14));
    } while (uVar4 < (*(uint *)&gen_args[1]));
  }
  return uVar3;
}

/* ref: FUN_00c96660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96660u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 * puVar6;
  
  uVar5 = param_1[2];
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_1;
  uVar1 = param_1[3];
  uVar4 = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  (*(uint *)(gen_frame + 0x20)) = 0;
  if ((*(uint *)&gen_args[1]) != 0) {
    puVar6 = ((undefined2 *)GEN_TOP(((*(uint *)&gen_args[0]) + 4)));
    do {
      if ((CONCAT12(*((undefined1 *)GEN_TOP(((int)puVar6 - 1))),*puVar6) & (*(uint *)(gen_frame + 0x18))) == (*(uint *)(gen_frame + 0x14))) {
        iVar2 = *(*(int * PTR32 *)&gen_args[2]);
        uVar5 = iVar2 + (uint)*((byte *)GEN_TOP(((int)puVar6 - 3))) * 0xc;
        uVar1 = iVar2 + (uint)*(byte *)(puVar6 - 2) * 0xc;
        iVar2 = iVar2 + (uint)*(byte *)(puVar6 - 1) * 0xc;
        (*(int *)(gen_frame + 0xc)) = iVar2;
        bVar3 = F_00553ba0((*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),uVar1,uVar5,iVar2,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
        if (bVar3 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))))
                    ((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar1,uVar5,(*(int *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[4]),(*(uint *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[5]),
                     &(*(uint *)(gen_frame + 0x1c)));
        }
      }
      uVar5 = (*(uint *)(gen_frame + 0x20)) + 1;
      puVar6 = puVar6 + 3;
      (*(uint *)(gen_frame + 0x20)) = uVar5;
      uVar4 = (*(uint *)(gen_frame + 0x1c));
    } while (uVar5 < (*(uint *)&gen_args[1]));
  }
  return uVar4;
}

/* ref: FUN_00c96760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96760u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 * puVar6;
  
  (*(uint *)(gen_frame + 0x18)) = param_1[2];
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(uint *)(gen_frame + 0x14)) = param_1[3];
  uVar5 = param_1[4];
  uVar1 = param_1[5];
  uVar4 = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x1c)) = uVar5;
  (*(uint *)(gen_frame + 0x20)) = ~uVar1;
  (*(uint *)(gen_frame + 0x28)) = 0;
  if ((*(uint *)&gen_args[1]) != 0) {
    puVar6 = ((undefined2 *)GEN_TOP(((*(uint *)&gen_args[0]) + 4)));
    do {
      if (((CONCAT12(*((undefined1 *)GEN_TOP(((int)puVar6 - 1))),*puVar6) & (*(uint *)(gen_frame + 0x20)) | (*(uint *)(gen_frame + 0x1c))) & (*(uint *)(gen_frame + 0x18)))
          == (*(uint *)(gen_frame + 0x14))) {
        iVar2 = *(*(int * PTR32 *)&gen_args[2]);
        uVar5 = iVar2 + (uint)*(byte *)(puVar6 - 2) * 0xc;
        uVar1 = iVar2 + (uint)*((byte *)GEN_TOP(((int)puVar6 - 3))) * 0xc;
        iVar2 = iVar2 + (uint)*(byte *)(puVar6 - 1) * 0xc;
        (*(int *)(gen_frame + 0xc)) = iVar2;
        bVar3 = F_00553ba0((*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),uVar5,uVar1,iVar2,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
        if (bVar3 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))))
                    ((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar5,uVar1,(*(int *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[4]),(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[5]),
                     &(*(uint *)(gen_frame + 0x24)));
        }
      }
      uVar5 = (*(uint *)(gen_frame + 0x28)) + 1;
      puVar6 = puVar6 + 3;
      (*(uint *)(gen_frame + 0x28)) = uVar5;
      uVar4 = (*(uint *)(gen_frame + 0x24));
    } while (uVar5 < (*(uint *)&gen_args[1]));
  }
  return uVar4;
}

/* ref: FUN_00c96890 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c96890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc96890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c96950((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00c96900 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c96900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc96900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c969a0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00c96950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96950(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc96950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x1128e64));
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 0xc))) = param_1[3];
  }
  if (param_1[3] != 0) {
    *((undefined4 *)GEN_TOP((param_1[3] + 8))) = param_1[2];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c969a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c969a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc969a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 0x1c))) = param_1[3];
  }
  if (param_1[3] != 0) {
    *((undefined4 *)GEN_TOP((param_1[3] + 0x18))) = param_1[2];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c969f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c969f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc969f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1128e68));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c96a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96a20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc96a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1128e70));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c96a60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc96a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  if (param_4 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_3;
    *((int *)GEN_TOP(((int)this + 0x14))) = param_4;
    *((gen_code32 *)GEN_TOP(((int)this + 4))) = ((code *)REFP(0xc96760));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1;
    return param_1;
  }
  *((gen_code32 *)GEN_TOP(((int)this + 4))) = ((code *)REFP(0xc96660));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00c96ab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c96ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc96ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1128e64));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x1128f10));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1128f0c));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1128f20));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x1128f1c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x1128f18));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1128f14));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0xffffff80;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x7000;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x54))) = 1;
  F_00c9f3e0((int)this + 0x58 GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c96b40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c96b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc96b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

