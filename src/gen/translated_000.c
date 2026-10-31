#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: UIDropTarget::DragEnter */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00401000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x401000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((param_1 + 8))) = param_2;
  *param_6 = 0;
  if (*((gen_code32 *)GEN_TOP((param_1 + 0xc))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0xc))))(param_2,param_4,param_5,*((undefined4 *)GEN_TOP((param_1 + 0x10))));
    if ((char)uVar1 != '\0') {
      *param_6 = 1;
    }
  }
  return 0;
}

/* ref: UIDropTarget::DragOver */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00401040(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x401040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  *param_5 = 0;
  if (*((gen_code32 *)GEN_TOP((param_1 + 0x14))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x14))))
                      (*((undefined4 *)GEN_TOP((param_1 + 8))),param_3,param_4,*((undefined4 *)GEN_TOP((param_1 + 0x18))))
    ;
    if ((char)uVar1 != '\0') {
      *param_5 = 1;
    }
  }
  return 0;
}

/* ref: UIDropTarget::DragLeave */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00401080(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x401080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (*((gen_code32 *)GEN_TOP((param_1 + 0x1c))) != ((code *)GEN_TOP(0x0))) {
    ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x1c))))(*((undefined4 *)GEN_TOP((param_1 + 0x20))));
  }
  return 0;
}

/* ref: UIDropTarget::Drop */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004010a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x4010a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  if (*((gen_code32 *)GEN_TOP((param_1 + 0x24))) != ((code *)GEN_TOP(0x0))) {
    ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x24))))(param_2,param_4,param_5,*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  }
  return 0;
}

/* ref: ComBase_UIDropTarget_E_IID_IDropTarget_U_GUID_B::AddRef */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00401170(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x401170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((param_1 + 4))) + 1;
  *((uint *)GEN_TOP((param_1 + 4))) = uVar1;
  return uVar1;
}

/* ref: ComBase_UIDropTarget_E_IID_IDropTarget_U_GUID_B::Release */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00401190(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x401190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 - 1;
  uVar2 = param_1[1];
  if (*piVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG,1);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: ComBase_UIDropTarget_E_IID_IDropTarget_U_GUID_B::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004011b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4011b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x107f650));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::GuidEquals */
GEN_OWN GEN_FRAME uint F_004011f0(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4011f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  byte * pbVar4;
  
  uVar1 = 0x10;
  pbVar3 = param_2;
  pbVar4 = param_1;
  do {
    if (*(int *)pbVar4 != *(int *)pbVar3) {
      iVar2 = (uint)*pbVar4 - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)pbVar4[1] - (uint)pbVar3[1], iVar2 == 0)) &&
         (iVar2 = (uint)pbVar4[2] - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)pbVar4[3] - (uint)pbVar3[3];
      }
      return (uint)((iVar2 >> 0x1f | 1U) == 0);
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  } while (3 < uVar1);
  return 1;
}

/* ref: ComBase_UIDropTarget_E_IID_IDropTarget_U_GUID_B::QueryInterface */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00401260(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x401260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1082374));
  if (uVar1 == 0) {
    uVar1 = F_004011f0(param_2,&REFG(undefined, 0x1082344));
    if (uVar1 == 0) {
      *param_3 = 0;
      return 0x80004002;
    }
  }
  *param_3 = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  return 0;
}

/* ref: UIDropTarget::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00401320(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x401320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x107f650));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Debug::StackTrace::TraceCallbackInterface::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00401360(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x401360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1080214));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::FindSubstring */
GEN_OWN GEN_FRAME uint F_00401390(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x401390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  
  pcVar1 = F_00c46a10(param_1,param_2);
  return (uint)pcVar1;
}

/* ref: _wmemchr */
GEN_OWN GEN_FRAME wchar_t * F_004013a0(GEN_P(wchar_t * _S, unsigned int gen_a0), GEN_P(wchar_t _C, unsigned int gen_a1), GEN_P(gen_size32 _N, unsigned int gen_a2))
{
  GEN_ENTER(0x4013a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _S = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t _C = (wchar_t)gen_a1;)
  GEN_PIN(gen_size32 _N = (gen_size32)gen_a2;)
  wchar_t * pwVar1;
  gen_size32 sVar2;
  
  pwVar1 = _S;
  sVar2 = _N;
  while( true ) {
    if (sVar2 == 0) {
      return ((wchar_t *)GEN_TOP(0x0));
    }
    if (*pwVar1 == _C) break;
    pwVar1 = pwVar1 + 1;
    sVar2 = sVar2 - 1;
  }
  return pwVar1;
}

/* ref: FUN_004013c0 */
GEN_OWN GEN_FRAME uint F_004013c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4013c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_1,param_2,param_3 * 2);
  return (uint)uVar1;
}

/* ref: FUN_004013e0 */
GEN_OWN GEN_FRAME uint F_004013e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4013e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c46e20(param_1,param_2,param_3 * 2);
  return uVar1;
}

/* ref: FUN_00401400 */
GEN_OWN GEN_FRAME uint F_00401400(GEN_P(short * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x401400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  short sVar1;
  short * psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return (int)psVar2 - (int)(param_1 + 1) >> 1;
}

/* ref: FUN_00401430 */
GEN_OWN GEN_FRAME uint F_00401430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x401430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_1,param_2,param_3 * 2);
  return (uint)uVar1;
}

/* ref: FUN_00401450 */
GEN_OWN GEN_FRAME uint F_00401450(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(short * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x401450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(short * param_3 = (short *)(uintptr_t)gen_a2;)
  short * psVar1;
  int iVar2;
  
  if (param_2 != 0) {
    psVar1 = param_1;
    iVar2 = param_2;
    do {
      if (*psVar1 == *param_3) {
        return (uint)psVar1;
      }
      psVar1 = psVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00401480 */
GEN_OWN GEN_FRAME uint F_00401480(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x401480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c46e20(param_1,param_2,param_3 * 2);
  return uVar1;
}

/* ref: FUN_004014a0 */
GEN_OWN GEN_FRAME uint F_004014a0(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4014a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *param_2;
  return (uint)param_2;
}

/* ref: FUN_004014c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004014c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4014c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00401500 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00401500(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x401500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  iVar1 = param_3;
  while (iVar1 = iVar1 - 1, -1 < iVar1) {
    (*param_4)(iVar2);
    iVar2 = iVar2 + param_2;
  }
  return;
}

/* ref: FUN_00401530 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00401530(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x401530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + param_2 * param_3;
  iVar1 = param_3;
  while (iVar1 = iVar1 - 1, -1 < iVar1) {
    iVar2 = iVar2 - param_2;
    (*param_4)(iVar2);
  }
  return 0;
}

/* ref: FUN_00401580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00401580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x401580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: Global::Equals */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004015a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4015a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if ((*(int *)this == *param_1) && (*((int *)GEN_TOP(((int)this + 4))) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: Global::NotEquals */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004015d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4015d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if ((*(int *)this == *param_1) && (*((int *)GEN_TOP(((int)this + 4))) == param_1[1])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00401610 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00401610(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x401610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00408e90(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: Global::CloseHandleRef */
GEN_OWN GEN_FRAME unsigned int F_00401640(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x401640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    gen_imp_CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return 0;
}

/* ref: Global::MutexExists */
GEN_OWN GEN_FRAME byte F_00401660(GEN_P(LPCSTR param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x401660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  HANDLE hObject;
  
  hObject = gen_imp_OpenMutexA(0x1f0001,0,param_1);
  if (hObject == (HANDLE)0x0) {
    return 0;
  }
  gen_imp_CloseHandle(hObject);
  return 1;
}

/* ref: Mutex::Close */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00401690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x401690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(HANDLE *)this != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: Mutex::CreateUnique */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004016b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPCSTR param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4016b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a1;)
  HANDLE pvVar1;
  DWORD DVar2;
  
  if (*(int *)this != 0) {
    gen_imp_CloseHandle(*(int *)this);
    *(undefined4 *)this = 0;
  }
  pvVar1 = gen_imp_CreateMutexA((GEN_LPANY)0x0,0,param_1);
  *(HANDLE *)this = pvVar1;
  DVar2 = gen_imp_GetLastError();
  if (DVar2 == 0xb7) {
    gen_imp_ReleaseMutex(*(HANDLE *)this);
    if (*(int *)this != 0) {
      gen_imp_CloseHandle(*(int *)this);
      *(undefined4 *)this = 0;
    }
  }
  return *(int *)this != 0;
}

/* ref: Global::GetGameMutexName */
GEN_OWN GEN_FRAME uint F_00401710(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x401710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((&REFG(undefined1, 0x1370190))[(int)(param_1 * 0x100)] == '\0') {
    gen_imp_wsprintfA(&REFG(undefined1, 0x1370190) + param_1 * 0x100,
              ((char *)REFP(0x1080230)),param_1);
  }
  return (uint)(&REFG(undefined1, 0x1370190) + param_1 * 0x100);
}

/* ref: Client::System::Configuration::SystemConfig::SystemConfig */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00401740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x401740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00421920(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1080270));
  return (uint)this;
}

/* ref: Client::System::Configuration::SystemConfig::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00401770(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x401770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004219f0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Configuration::DevConfig::DevConfig */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004017a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4017a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00421a50(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1080280));
  return (uint)this;
}

/* ref: Client::System::Configuration::DevConfig::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004017d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4017d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00421a70(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::RegisterPrintScreenHotKey */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00401810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x401810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  BOOL BVar1;
  int iVar2;
  
  iVar2 = REFG(int, 0x136fc00);
  if (REFG(int, 0x136fc00) < 0xbfff) {
    while (BVar1 = gen_imp_RegisterHotKey(REFG(undefined4, 0x136fb14),iVar2,param_1,0x2c), BVar1 == 0) {
      iVar2 = iVar2 + 1;
      if (0xbffe < iVar2) {
        return;
      }
    }
    *(int *)this = iVar2;
    REFG(int, 0x136fc00) = iVar2 + 1;
  }
  return;
}

/* ref: Global::BytesToHex */
GEN_OWN GEN_FRAME uint F_00401900(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(byte * in_ecx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x401900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(byte * in_ecx = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  
  uVar1 = in_eax;
  for (iVar2 = param_3; iVar2 != 0; iVar2 = iVar2 - 1) {
    uVar1 = F_00c472af(in_eax,3,&REFG(undefined, 0x108028c),(uint)(*in_ecx >> 4),*in_ecx & 0xf);
    in_eax = in_eax + 2;
    in_ecx = in_ecx + 1;
  }
  return uVar1;
}

/* ref: Client::System::Debug::StackTrace::TraceCallbackInterface::AppendTraceLine */
GEN_OWN_GS GEN_FRAME uint F_00401960(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0x401960u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  GEN_FRAME_DECL_GS(0x408, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x400)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x404));
  F_00c475c9(((char *)(gen_frame + 0x0)),0x400,param_1,((undefined *)&gen_args[1]));
  F_00c473c8(((char *)(gen_frame + 0x0)),0x400,&REFG(undefined, 0x1080294));
  uVar1 = F_00c473c8(this + 4,0x4000,((char *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: Global::CreateMainWindow */
GEN_OWN_GS GEN_FRAME uint F_004019e0(GEN_P(HINSTANCE param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4019e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(HINSTANCE param_1 = (HINSTANCE)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  int iVar1;
  int iVar2;
  HWND hWnd;
  int nWidth;
  int nHeight;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  REFG(undefined4, 0x136fb7c) = param_1;
  (*(tagRECT *)(gen_frame + 0x8)).right = REFG(int, 0x136fae0);
  (*(tagRECT *)(gen_frame + 0x8)).left = 0;
  (*(tagRECT *)(gen_frame + 0x8)).top = 0;
  (*(tagRECT *)(gen_frame + 0x8)).bottom = REFG(int, 0x136fae4);
  gen_imp_AdjustWindowRect(&(*(tagRECT *)(gen_frame + 0x8)),REFG(undefined4, 0x12fd1f8),0);
  nWidth = (*(tagRECT *)(gen_frame + 0x8)).right - (*(tagRECT *)(gen_frame + 0x8)).left;
  nHeight = (*(tagRECT *)(gen_frame + 0x8)).bottom - (*(tagRECT *)(gen_frame + 0x8)).top;
  iVar1 = gen_imp_GetSystemMetrics(0);
  iVar2 = gen_imp_GetSystemMetrics(1);
  hWnd = gen_imp_CreateWindowExA(0,&REFG(undefined, 0x136fb18),&REFG(undefined, 0x136fb80),REFG(undefined4, 0x12fd1f8),(iVar1 - nWidth) / 2,
                         (iVar2 - nHeight) / 2,nWidth,nHeight,(HWND)0x0,(HMENU)0x0,param_1,
                         (LPVOID)0x0);
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  gen_imp_UpdateWindow(hWnd);
  REFG(undefined4, 0x136fb14) = hWnd;
  gen_imp_GetClientRect(hWnd,&(*(tagRECT *)(gen_frame + 0x8)));
  (*(tagPOINT *)(gen_frame + 0x0)).x = 0;
  (*(tagPOINT *)(gen_frame + 0x0)).y = 0;
  gen_imp_ClientToScreen(REFG(undefined4, 0x136fb14),&(*(tagPOINT *)(gen_frame + 0x0)));
  REFG(undefined4, 0x136fad0) = (*(tagPOINT *)(gen_frame + 0x0)).x;
  REFG(undefined4, 0x136facc) = (*(tagPOINT *)(gen_frame + 0x0)).y;
  *(int *)&REFG(undefined, 0x136fac4) = REFG(int, 0x136fae4);
  *(int *)&REFG(undefined, 0x136fac8) = REFG(int, 0x136fae0);
  return 1;
}

/* ref: Global::GetWStringData */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00401b30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x401b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  if (7 < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  return (uint)in_ecx;
}

/* ref: FUN_00401b50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00401b50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x401b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 2,0x3d);
  return (uint)uVar1;
}

/* ref: FUN_00401bb0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00401bb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x401bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 2,param_2,0x3d);
  return uVar1;
}

/* ref: Global::FormatString1024 */
GEN_OWN GEN_FRAME uint F_00401be0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0x401be0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c475c9(param_1,0x400,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00401c00 */
GEN_OWN GEN_FRAME uint F_00401c00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x401c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00401c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00401c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x401c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x6c))) = uVar1;
  return uVar1;
}

/* ref: FUN_00401ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00401ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x401ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1260))) = param_2;
  return param_2;
}

/* ref: FUN_00401cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00401cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x401cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00401cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00401cd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x401cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: Global::GetMutexName */
GEN_OWN GEN_FRAME uint F_00401d20(GEN_P(char param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x401d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != '\0') {
    if ((&REFG(undefined1, 0x1370190))[(int)(param_2 * 0x100)] == '\0') {
      gen_imp_wsprintfA(&REFG(undefined1, 0x1370190) + param_2 * 0x100,
                ((char *)REFP(0x1080230)),param_2);
    }
    return (uint)(&REFG(undefined1, 0x1370190) + param_2 * 0x100);
  }
  return (uint)(&REFG(undefined * PTR32, 0x12fa5a0))[(int)(param_2)];
}

/* ref: Client::System::Debug::StackTrace::TraceCallbackInterface::ScalarDeletingDestructor_00401d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00401d80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x401d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1080214));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Debug::StackTrace::TraceCallbackInterface::OnTraceLine */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00401db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x401db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x408, 8, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x400)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x404));
  F_00401be0(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x1080530),param_1);
  F_00c473c8(this + 4,0x4000,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Global::PumpWindowMessages */
GEN_OWN GEN_FRAME byte F_00401e10(void)
{
  GEN_ENTER(0x401e10u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  byte bVar1;
  int iVar2;
  UINT UVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 10;
  iVar2 = gen_imp_PeekMessageW(((undefined *)(gen_frame + 0x0)),0,0,0,0);
  while( true ) {
    if ((iVar2 == 0) || (iVar5 == 0)) goto LAB_00401f12;
    if ((*(UINT *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) == 0x12) break;
    gen_imp_GetMessageW(((undefined *)(gen_frame + 0x0)),(HWND)0x0,0,0);
    iVar2 = gen_imp_TranslateAcceleratorA((*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))),REFG(undefined4, 0x136fb10),((undefined *)(gen_frame + 0x0)));
    if (iVar2 == 0) {
      if (((*(WPARAM *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) == 0xe5) &&
         (((*(UINT *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) == 0x100 || ((*(UINT *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) == 0x101)))) {
        UVar3 = gen_imp_ImmGetVirtualKey((*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))));
        bVar1 = F_004247a0(REFG(int * PTR32, 0x136fbec) GEN_EDX_ARG,(*(UINT *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) == 0x100,UVar3);
        if ((bVar1 != 0) || ((UVar3 == 9 || ((*(UINT *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) == 0x101)))) {
          (*(WPARAM *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = UVar3;
        }
      }
      gen_imp_TranslateMessage(((undefined *)(gen_frame + 0x0)));
      gen_imp_DispatchMessageW(((undefined *)(gen_frame + 0x0)));
      if ((*(UINT *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) == 0) {
        iVar5 = 1;
      }
    }
    iVar5 = iVar5 - 1;
    iVar2 = gen_imp_PeekMessageW(((undefined *)(gen_frame + 0x0)),0,0,0,0);
  }
  F_004246b0(REFG(int * PTR32, 0x136fbec) GEN_EDX_ARG,0);
LAB_00401f12: ;
  bVar1 = 0;
  if (*((char *)GEN_TOP(((int)REFG(int * PTR32, 0x136fbec) + 10))) == '\0') {
    if (REFG(int * PTR32, 0x136fb0c) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x136fb0c) + 8))))(REFG(int * PTR32, 0x136fb0c) GEN_EDX_ARG);
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x136fbec) + 0x10))))(REFG(int * PTR32, 0x136fbec) GEN_EDX_ARG);
    gen_imp_Sleep(0);
    bVar1 = (byte)uVar4;
  }
  return bVar1;
}

/* ref: Global::SizeMoveTimerProc */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00401f50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x401f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  byte bVar1;
  
  bVar1 = F_004298f0();
  if (bVar1 == 0) {
    bVar1 = F_00401e10();
  }
  return bVar1;
}

/* ref: Global::WStringFindLastOf */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00401fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x401fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  undefined * pvVar2;
  short * psVar3;
  uint uVar4;
  int iVar5;
  short * psVar6;
  
  if ((param_3 != 0) && (uVar1 = *((uint *)GEN_TOP(((int)this + 0x10))), uVar1 != 0)) {
    uVar4 = param_2;
    if (uVar1 <= param_2) {
      uVar4 = uVar1 - 1;
    }
    pvVar2 = this;
    if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    psVar6 = ((short *)GEN_TOP(((int)pvVar2 + uVar4 * 2)));
    while( true ) {
      psVar3 = param_1;
      iVar5 = param_3;
      do {
        if (*psVar3 == *psVar6) {
          if (*((uint *)GEN_TOP(((int)this + 0x14))) < 8) {
            return (int)psVar6 - (int)((int)(uintptr_t)this) >> 1;
          }
          return (int)psVar6 - *(int *)((int)(uintptr_t)this) >> 1;
        }
        psVar3 = psVar3 + 1;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
      psVar3 = ((short *)GEN_TOP(F_00401b30(this GEN_EDX_FWD)));
      if (psVar6 == psVar3) break;
      psVar6 = psVar6 - 1;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00402050 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00402050(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x402050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::WStringSetLength */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00402080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x402080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    this = *(undefined * PTR32 *)this;
  }
  *((undefined2 *)GEN_TOP(((int)this + param_1 * 2))) = 0;
  return param_1;
}

/* ref: Global::WStringErase */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004020a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4020a0u, gen_a0, gen_a1, gen_a2, 0u);
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
    if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20(((undefined *)GEN_TOP(((int)pvVar4 + param_1 * 2))),((undefined *)GEN_TOP(((int)pvVar1 + (param_1 + uVar5) * 2))),
               (uVar2 - uVar5) * 2);
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - uVar5;
    *((int *)GEN_TOP(((int)this + 0x10))) = iVar3;
    if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined2 *)GEN_TOP((*(int *)this + iVar3 * 2))) = 0;
      return (uint)this;
    }
    *((undefined2 *)GEN_TOP(((int)this + iVar3 * 2))) = 0;
  }
  return (uint)this;
}

/* ref: Global::WStringContainsPointer */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00402130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x402130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * pvVar1;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = this;
    if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP(((int)pvVar1 + *((int *)GEN_TOP(((int)this + 0x10))) * 2)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Global::IsGameInstanceMutexPresent */
GEN_OWN GEN_FRAME byte F_00402190(GEN_P(char param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x402190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  HANDLE hObject;
  LPSTR lpName;
  
  if (param_1 == '\0') {
    lpName = (&REFG(undefined * PTR32, 0x12fa5a0))[(int)(param_2)];
  }
  else {
    lpName = &REFG(undefined1, 0x1370190) + param_2 * 0x100;
    if ((&REFG(undefined1, 0x1370190))[(int)(param_2 * 0x100)] == '\0') {
      gen_imp_wsprintfA(lpName,((char *)REFP(0x1080230)),param_2);
    }
  }
  hObject = gen_imp_OpenMutexA(0x1f0001,0,lpName);
  if (hObject == (HANDLE)0x0) {
    return 0;
  }
  gen_imp_CloseHandle(hObject);
  return 1;
}

/* ref: Global::CreateGameInstanceMutex */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004021f0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4021f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  HANDLE pvVar1;
  DWORD DVar2;
  LPSTR lpName;
  
  if (param_2 == '\0') {
    lpName = (&REFG(undefined * PTR32, 0x12fa5a0))[(int)(param_3)];
  }
  else {
    lpName = &REFG(undefined1, 0x1370190) + param_3 * 0x100;
    if ((&REFG(undefined1, 0x1370190))[(int)(param_3 * 0x100)] == '\0') {
      gen_imp_wsprintfA(lpName,((char *)REFP(0x1080230)),param_3);
    }
  }
  if (*param_1 != 0) {
    gen_imp_CloseHandle(*param_1);
    *param_1 = 0;
  }
  pvVar1 = gen_imp_CreateMutexA((GEN_LPANY)0x0,0,lpName);
  *param_1 = (int)pvVar1;
  DVar2 = gen_imp_GetLastError();
  if (DVar2 == 0xb7) {
    gen_imp_ReleaseMutex((HANDLE)*param_1);
    if (*param_1 != 0) {
      gen_imp_CloseHandle(*param_1);
      *param_1 = 0;
    }
  }
  return *param_1 != 0;
}

/* ref: Global::CreateNamedGlobalMutex */
GEN_OWN GEN_FRAME unsigned int F_00402290(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x402290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  gen_imp_CreateMutexA((GEN_LPANY)0x0,0,
               (&REFG(undefined * PTR32, 0x12fa5a0))[(int)(param_1)]);
  return 0;
}

/* ref: FUN_004022b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004022b0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4022b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14aa0, 0, 4);
  char cVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  HANDLE pvVar7;
  DWORD DVar8;
  
  uVar4 = (*(uint *)(gen_frame + 0x10010));
  (*(uint *)(gen_frame + 0x14a98)) = 0x4022bd;
  (*(uint *)(gen_frame + 0x14a98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  iVar3 = param_1[1];
  (*(undefined4 *)(gen_frame + 0x14474)) = *((undefined4 *)GEN_TOP((iVar3 + 0xb8)));
  (*(undefined4 *)(gen_frame + 0x14478)) = *((undefined4 *)GEN_TOP((iVar3 + 0xb4)));
  (*(undefined4 *)(gen_frame + 0x1447c)) = *((undefined4 *)GEN_TOP((iVar3 + 0xc4)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1000c)) = (*(undefined * PTR32 (*)[2])REFP(0x1080528));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10010)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x10010)) = uVar4 & 0xffffff00;
  if (REFG(int, 0x136fc08) != 0) {
    F_00401960((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1000c)),REFG(undefined4, 0x136fc04));
    F_00401960((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1000c)),REFG(int, 0x136fc08));
  }
  puVar2 = ((uint *)GEN_TOP(*param_1));
  uVar4 = *puVar2;
  if (uVar4 < 0xc0000095) {
    if (uVar4 == 0xc0000094) {
      uVar4 = 0xc0000094;
      pcVar5 = ((char *)REFP(0x108072c));
    }
    else if (uVar4 < 0xc000001e) {
      if (uVar4 == 0xc000001d) {
        uVar4 = 0xc000001d;
        pcVar5 = ((char *)REFP(0x1080774));
      }
      else if (uVar4 == 0x80000002) {
        uVar4 = 0x80000002;
        pcVar5 = ((char *)REFP(0x1080798));
      }
      else {
        if (uVar4 != 0xc0000005) goto LAB_0040240a;
        if (puVar2[4] == 2) {
          F_00401be0(((undefined1 *)(gen_frame + 0x14698)),((char *)REFP(0x10807dc)),
                     (-(uint)(puVar2[5] != 0) & 5) + 0x72,puVar2[6]);
          goto LAB_00402451;
        }
        uVar4 = 0xc0000005;
        pcVar5 = ((char *)REFP(0x10807bc));
      }
    }
    else if (uVar4 == 0xc000008c) {
      pcVar5 = ((char *)REFP(0x108074c));
    }
    else {
LAB_0040240a: ;
      pcVar5 = ((char *)REFP(0x108071c));
    }
  }
  else if (uVar4 == 0xc0000095) {
    uVar4 = 0xc0000095;
    pcVar5 = ((char *)REFP(0x10806c0));
  }
  else if (uVar4 == 0xc0000096) {
    uVar4 = 0xc0000096;
    pcVar5 = ((char *)REFP(0x10806dc));
  }
  else {
    if (uVar4 != 0xc00000fd) goto LAB_0040240a;
    uVar4 = 0xc00000fd;
    pcVar5 = ((char *)REFP(0x10806fc));
  }
  F_00401be0(((undefined1 *)(gen_frame + 0x14698)),pcVar5,uVar4);
LAB_00402451: ;
  F_00401960((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1000c)),((undefined1 *)(gen_frame + 0x14698)));
  iVar3 = param_1[1];
  F_00401960(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1000c)),((char *)REFP(0x1080694)),*((undefined4 *)GEN_TOP((iVar3 + 0xb8))),
             *((undefined4 *)GEN_TOP((iVar3 + 0xc4))),*((undefined4 *)GEN_TOP((iVar3 + 0xb4))),
             *((undefined4 *)GEN_TOP((iVar3 + 0xc0))));
  iVar3 = param_1[1];
  F_00401960(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1000c)),((char *)REFP(0x1080658)),
             *((undefined4 *)GEN_TOP((iVar3 + 0xb0))),*((undefined4 *)GEN_TOP((iVar3 + 0xa4))),
             *((undefined4 *)GEN_TOP((iVar3 + 0xac))),*((undefined4 *)GEN_TOP((iVar3 + 0xa8))),
             *((undefined4 *)GEN_TOP((iVar3 + 0xa0))),*((undefined4 *)GEN_TOP((iVar3 + 0x9c))));
  iVar3 = param_1[1];
  F_00401960(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1000c)),((char *)REFP(0x108061c)),
             *((undefined4 *)GEN_TOP((iVar3 + 0xbc))),*((undefined4 *)GEN_TOP((iVar3 + 200))),
             *((undefined4 *)GEN_TOP((iVar3 + 0x8c))),*((undefined4 *)GEN_TOP((iVar3 + 0x90))),
             *((undefined4 *)GEN_TOP((iVar3 + 0x94))),*((undefined4 *)GEN_TOP((iVar3 + 0x98))));
  (*(undefined * PTR32 *)(gen_frame + 0x10044)) = ((undefined *)GEN_TOP(0x1));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = (undefined * PTR32 *)&(*(undefined4 *)(gen_frame + 0x14474));
  (*(char * PTR32 *)(gen_frame + 0x1003c)) = (char *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1000c));
  (*(LPCWSTR *)(gen_frame + 0x10038)) = L"쒃茌\xec3d㛻\x01萏ǅ";
  F_00430bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1000c)),&(*(undefined4 *)(gen_frame + 0x14474)),1);
  if ((REFG(int, 0x136fbec) == 0) || (REFG(short, 0x136fc10) == 0)) {
    (*(undefined * PTR32 *)(gen_frame + 0x10044)) = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x10805ec));
    (*(char * PTR32 *)(gen_frame + 0x1003c)) = (char *)&(*(uint *)(gen_frame + 0x10010));
    (*(LPCWSTR *)(gen_frame + 0x10038)) = (LPCWSTR)0x0;
    (*(uint *)(gen_frame + 0x10034)) = 0x40270f;
    gen_imp_MessageBoxA((HWND)0x0,(LPCSTR)&(*(uint *)(gen_frame + 0x10010)),((char *)REFP(0x10805ec)),0);
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x10044)) = &REFG(undefined, 0x10805f4);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x402552));
    F_00401960((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10805f4));
    (*(undefined * PTR32 *)(gen_frame + 0x10044)) = ((undefined *)GEN_TOP(0x4));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x10805ec));
    (*(char * PTR32 *)(gen_frame + 0x1003c)) = (char *)&(*(uint *)(gen_frame + 0x10010));
    (*(LPCWSTR *)(gen_frame + 0x10038)) = (LPCWSTR)0x0;
    (*(uint *)(gen_frame + 0x10034)) = 0x40256b;
    iVar3 = gen_imp_MessageBoxA((HWND)0x0,(LPCSTR)&(*(uint *)(gen_frame + 0x10010)),((char *)REFP(0x10805ec)),4);
    if (iVar3 == 6) {
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = (undefined * PTR32 *)&(*(_SYSTEMTIME *)(gen_frame + 0x14480));
      (*(char * PTR32 *)(gen_frame + 0x1003c)) = ((char *)GEN_TOP(0x402582));
      gen_imp_GetLocalTime(&(*(_SYSTEMTIME *)(gen_frame + 0x14480)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x40258d));
      uVar4 = F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(uVar4));
      (*(char * PTR32 *)(gen_frame + 0x1003c)) = ((char *)GEN_TOP(0x402599));
      F_0042e170(((undefined1 *)(gen_frame + 0x14420)) GEN_EDX_ARG,uVar4);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x1));
      (*(char * PTR32 *)(gen_frame + 0x1003c)) = ((undefined1 *)(gen_frame + 0x14420));
      (*(LPCWSTR *)(gen_frame + 0x10038)) = 
      L"趍濾\xffff죨ʢ栀נĈ閍\xf77c\xffff赒璍\xfff5\xe8ff胱\x02j薍\xf77c\xffffｐ䠕ߡ栁לĈ偨⾢㌁\xe8f6䐡\x84쒃蔈瓀訣͈삃萃瓉贙큑婢眉༑즾ᒍ䂶璍큑ࢊ즄\xe775뜏\xf095\xfff9࿿薷燐\xffff뜏\xec8d\xfff9勿뜏\xea95\xfff9僿뜏\xe685\xfff9凿뜏\xe48d\xfff9勿児桖ﰐĶ閍\xf77c\xffff桒ոĈ薍林\xffffѨ\x01倀ꏨ葑茀ツjjɪjͪh"
      ;
      F_0042a3a0(((undefined1 *)(gen_frame + 0x14010)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14420)),1);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x4025b8));
      F_0042c880(((undefined1 *)(gen_frame + 0x14420)) GEN_EDX_ARG);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x10805e0));
      (*(char * PTR32 *)(gen_frame + 0x1003c)) = (char *)((WCHAR *)(gen_frame + 0x14218));
      (*(LPCWSTR *)(gen_frame + 0x10038)) = 
      L"j薍\xf77c\xffffｐ䠕ߡ栁לĈ偨⾢㌁\xe8f6䐡\x84쒃蔈瓀訣͈삃萃瓉贙큑婢眉༑즾ᒍ䂶璍큑ࢊ즄\xe775뜏\xf095\xfff9࿿薷燐\xffff뜏\xec8d\xfff9勿뜏\xea95\xfff9僿뜏\xe685\xfff9凿뜏\xe48d\xfff9勿児桖ﰐĶ閍\xf77c\xffff桒ոĈ薍林\xffffѨ\x01倀ꏨ葑茀ツjjɪjͪh"
      ;
      F_0042a6c0(((undefined1 *)(gen_frame + 0x14010)) GEN_EDX_ARG,((WCHAR *)(gen_frame + 0x14218)),((char *)REFP(0x10805e0)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x0));
      (*(char * PTR32 *)(gen_frame + 0x1003c)) = (char *)((WCHAR *)(gen_frame + 0x14218));
      (*(LPCWSTR *)(gen_frame + 0x10038)) = (LPCWSTR)0x4025de;
      gen_imp_CreateDirectoryW(((WCHAR *)(gen_frame + 0x14218)),(GEN_LPANY)0x0);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = (*(undefined * PTR32 (*)[1])REFP(0x10805dc));
      (*(char * PTR32 *)(gen_frame + 0x1003c)) = ((char *)REFP(0x12fa250));
      iVar3 = 0;
      (*(LPCWSTR *)(gen_frame + 0x10038)) = 
      L"쒃蔈瓀訣͈삃萃瓉贙큑婢眉༑즾ᒍ䂶璍큑ࢊ즄\xe775뜏\xf095\xfff9࿿薷燐\xffff뜏\xec8d\xfff9勿뜏\xea95\xfff9僿뜏\xe685\xfff9凿뜏\xe48d\xfff9勿児桖ﰐĶ閍\xf77c\xffff桒ոĈ薍林\xffffѨ\x01倀ꏨ葑茀ツjjɪjͪh"
      ;
      pcVar5 = F_00c46a10(((char *)REFP(0x12fa250)),((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x10805dc)))));
      if (pcVar5 != ((char *)GEN_TOP(0x0))) {
        pcVar6 = pcVar5 + 3;
        cVar1 = pcVar5[3];
        while ((cVar1 != '\0' && ((byte)(cVar1 - 0x30U) < 10))) {
          pcVar6 = pcVar6 + 1;
          iVar3 = cVar1 - 0x30 + iVar3 * 10;
          cVar1 = *pcVar6;
        }
      }
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP((uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wSecond));
      (*(char * PTR32 *)(gen_frame + 0x1003c)) = ((char *)GEN_TOP((uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wMinute));
      (*(LPCWSTR *)(gen_frame + 0x10038)) = (LPCWSTR)(uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wHour;
      (*(uint *)(gen_frame + 0x10034)) = (uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wDay;
      (*(HANDLE *)(gen_frame + 0x10030)) = (HANDLE)(uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wMonth;
      (*(uint *)(gen_frame + 0x1002c)) = (uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wYear;
      (*(LPCWSTR *)(gen_frame + 0x10028)) = (LPCWSTR)iVar3;
      (*(undefined2 * PTR32 *)(gen_frame + 0x10024)) = &REFG(short, 0x136fc10);
      (*(WCHAR * PTR32 *)(gen_frame + 0x10020)) = ((WCHAR *)(gen_frame + 0x14218));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1001c)) = (*(undefined * PTR32 (*)[1])REFP(0x1080578));
      (*(undefined4 *)(gen_frame + 0x10018)) = 0x104;
      (*(WCHAR * PTR32 *)(gen_frame + 0x10014)) = ((WCHAR *)(gen_frame + 0x14490));
      (*(uint *)(gen_frame + 0x10010)) = 0x40266c;
      F_00c4780f(((WCHAR *)(gen_frame + 0x14490)),0x104,(*(undefined * PTR32 (*)[1])REFP(0x1080578)),((WCHAR *)(gen_frame + 0x14218)),&REFG(short, 0x136fc10),iVar3,
                  (uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wMonth,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wDay,
                  (uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wHour,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wMinute,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x14480)).wSecond);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x0));
      (*(char * PTR32 *)(gen_frame + 0x1003c)) = ((char *)GEN_TOP(0x0));
      (*(LPCWSTR *)(gen_frame + 0x10038)) = (LPCWSTR)0x2;
      (*(uint *)(gen_frame + 0x10034)) = 0;
      (*(HANDLE *)(gen_frame + 0x10030)) = (HANDLE)0x3;
      (*(uint *)(gen_frame + 0x1002c)) = 0xc0000000;
      (*(LPCWSTR *)(gen_frame + 0x10028)) = ((WCHAR *)(gen_frame + 0x14490));
      (*(undefined2 * PTR32 *)(gen_frame + 0x10024)) = ((undefined2 *)GEN_TOP(0x40268b));
      pvVar7 = gen_imp_CreateFileW(((WCHAR *)(gen_frame + 0x14490)),0xc0000000,3,(GEN_LPANY)0x0,2,0,(HANDLE)0x0);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x402693));
      DVar8 = gen_imp_GetCurrentThreadId();
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x0));
      (*(char * PTR32 *)(gen_frame + 0x1003c)) = ((char *)GEN_TOP(0x0));
      (*(LPCWSTR *)(gen_frame + 0x10038)) = (LPCWSTR)&(*(DWORD *)(gen_frame + 0x10000));
      (*(uint *)(gen_frame + 0x10034)) = 1;
      (*(HANDLE *)(gen_frame + 0x10030)) = pvVar7;
      (*(DWORD *)(gen_frame + 0x10000)) = DVar8;
      (*(int * PTR32 *)(gen_frame + 0x10004)) = param_1;
      (*(undefined4 *)(gen_frame + 0x10008)) = 1;
      (*(uint *)(gen_frame + 0x1002c)) = 0x4026bd;
      DVar8 = gen_imp_GetCurrentProcessId();
      (*(uint *)(gen_frame + 0x1002c)) = DVar8;
      (*(LPCWSTR *)(gen_frame + 0x10028)) = 
      L"\xe850\xe8fa\x87j㡨ࠅ贁\xf485\xfff9僿jᗿ\xe47cć趍\xf77c\xffff뗨ɸ贀璍\xfff5\xe8ff碪\x02\xeb5e樖栀׬Ĉ趍땴\xffff橑＀耕ߤ謁ﱍ촳Ƹ"
      ;
      pvVar7 = gen_imp_GetCurrentProcess();
      (*(LPCWSTR *)(gen_frame + 0x10028)) = pvVar7;
      (*(undefined2 * PTR32 *)(gen_frame + 0x10024)) = ((undefined2 *)GEN_TOP(0x4026ca));
      gen_imp_MiniDumpWriteDump();
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x0));
      (*(char * PTR32 *)(gen_frame + 0x1003c)) = &REFG(undefined, 0x1080538);
      (*(LPCWSTR *)(gen_frame + 0x10038)) = ((WCHAR *)(gen_frame + 0x14490));
      (*(uint *)(gen_frame + 0x10034)) = 0;
      (*(HANDLE *)(gen_frame + 0x10030)) = (HANDLE)0x4026e0;
      gen_imp_MessageBoxW((HWND)0x0,((WCHAR *)(gen_frame + 0x14490)),
                  L"以下のファイルをプログラマーに渡してください(DBに添付とか)"
                  ,0);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x4026eb));
      F_00429fa0();
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10040)) = ((undefined * PTR32 *)GEN_TOP(0x4026f6));
      F_00429fa0();
    }
  }
  (*(undefined4 *)(gen_frame + 0x10048)) = 0x40271f;
  return 1;
}

/* ref: Global::MainWndProc */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00402730(GEN_P(HWND param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x402730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(HWND param_1 = (HWND)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_FRAME_DECL_GS(0x40, 0, 4);
  undefined4 uVar1;
  byte bVar2;
  BOOL BVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined * pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c));
  (*(uint *)(gen_frame + 0x0)) = param_4;
  (*(char *)(gen_frame + 0x7)) = '\0';
  F_0049e630(param_1,param_2,param_3,&(*(uint *)(gen_frame + 0x0)),&(*(char *)(gen_frame + 0x7)));
  uVar7 = (*(uint *)(gen_frame + 0x0));
  if ((*(char *)(gen_frame + 0x7)) != '\0') {
    return 1;
  }
  if (0x104 < param_2) {
    if (param_2 < 0x232) {
      if (param_2 == 0x231) {
LAB_00402e48: ;
        if (REFG(char, 0x136fbe6) != '\x01') {
          REFG(char, 0x136fbe6) = '\x01';
          REFG(undefined4, 0x136fbe8) = gen_imp_SetTimer(REFG(undefined4, 0x136fb14),1,0x21,((code *)REFP(0x401f50)));
          goto LAB_00402fc5;
        }
      }
      else if (param_2 < 0x212) {
        if (param_2 == 0x211) goto LAB_00402e48;
        if (param_2 == 0x112) {
          uVar7 = param_3 & 0xfff0;
          if (((uVar7 == 0xf100) || (uVar7 == 0xf140)) || (uVar7 == 0xf170)) {
            return 0;
          }
        }
        else if ((param_2 == 0x201) && (REFG(undefined4, 0x136fbec) != ((undefined *)GEN_TOP(0x0)))) {
          gen_imp_GetCursorPos((LPPOINT)(((undefined1 *)(gen_frame + 0x28)) + 8));
          gen_imp_ScreenToClient(REFG(undefined4, 0x136fb14),(LPPOINT)(((undefined1 *)(gen_frame + 0x28)) + 8));
          gen_imp_GetClientRect(REFG(undefined4, 0x136fb14),&(*(tagRECT *)(gen_frame + 0x18)));
          if (((*(tagRECT *)(gen_frame + 0x18)).left <= (int)(*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x28)) + 8))) &&
             ((((*(tagRECT *)(gen_frame + 0x18)).top <= (*(int *)(gen_frame + 0x34)) && ((int)(*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x28)) + 8)) <= (*(tagRECT *)(gen_frame + 0x18)).right)) &&
              ((*(int *)(gen_frame + 0x34)) <= (*(tagRECT *)(gen_frame + 0x18)).bottom)))) {
            F_00424aa0(REFG(undefined4, 0x136fbec) GEN_EDX_ARG,0);
            goto LAB_00402fc5;
          }
        }
      }
      else if (param_2 == 0x212) {
        if ((REFG(char, 0x136fbe6) != '\0') && (REFG(char, 0x136fbe6) = '\0', REFG(undefined4, 0x136fbe8) != 0)) {
          gen_imp_KillTimer(REFG(undefined4, 0x136fb14),REFG(undefined4, 0x136fbe8));
          REFG(undefined4, 0x136fbe8) = 0;
          goto LAB_00402fc5;
        }
      }
      else if (param_2 == 0x219) {
        if (((param_3 == 7) && (REFG(undefined4, 0x136fbec) != ((undefined *)GEN_TOP(0x0)))) &&
           (piVar4 = ((int *)GEN_TOP(F_00424cd0())), *piVar4 != 0)) {
          puVar5 = ((undefined4 *)GEN_TOP(F_00424cd0()));
          F_00496bd0(((undefined *)GEN_TOP(*puVar5)) GEN_EDX_ARG);
        }
        return 0;
      }
    }
    else {
      if (0x30d < param_2) {
        if (param_2 != 0x312) {
          if (param_2 != 0x8001) goto switchD_0040279d_caseD_4;
          F_00410aa0(REFG(void * PTR32, 0x1370c0c) GEN_EDX_ARG,param_3,(*(uint *)(gen_frame + 0x0)));
        }
        if ((*(uint *)(gen_frame + 0x0)) >> 0x10 == 0x2c) {
          uVar7 = 0;
          do {
            if ((*((uint *)GEN_TOP(((int)&REFG(undefined4, 0x12fa22c) + uVar7))) != 0xffff) &&
               (param_3 == *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x12fa22c) + uVar7))))) {
              return 1;
            }
            uVar7 = uVar7 + 4;
          } while (uVar7 < 0x20);
        }
        goto LAB_00402fc5;
      }
      if (param_2 == 0x30d) {
        uVar7 = F_00424760(REFG(undefined4, 0x136fbec) GEN_EDX_ARG);
        if (uVar7 != 0) {
          uVar7 = param_3;
          uVar10 = (*(uint *)(gen_frame + 0x0));
          pvVar6 = ((undefined *)GEN_TOP(F_00424760(REFG(undefined4, 0x136fbec) GEN_EDX_ARG)));
          F_00431af0(pvVar6 GEN_EDX_ARG,uVar7,uVar10);
          goto LAB_00402fc5;
        }
      }
      else if (param_2 == 0x232) {
        if ((REFG(char, 0x136fbe6) != '\0') && (REFG(char, 0x136fbe6) = '\0', REFG(undefined4, 0x136fbe8) != 0)) {
          gen_imp_KillTimer(REFG(undefined4, 0x136fb14),REFG(undefined4, 0x136fbe8));
          REFG(undefined4, 0x136fbe8) = 0;
        }
        gen_imp_GetClientRect(REFG(undefined4, 0x136fb14),&(*(tagRECT *)(gen_frame + 0x8)));
        REFG(undefined4, 0x1370184) = (*(tagRECT *)(gen_frame + 0x8)).right;
        REFG(undefined4, 0x1370188) = (*(tagRECT *)(gen_frame + 0x8)).bottom;
        bVar2 = F_004015d0(&REFG(undefined, 0x12fa424) GEN_EDX_ARG,&REFG(undefined4, 0x1370184));
        iVar8 = REFG(int, 0x1370b90);
        if (bVar2 != 0) {
          if ((REFG(int, 0x1370b90) != 0) && (*((char *)GEN_TOP((REFG(int, 0x1370b90) + 0x4c))) == '\0')) {
            *((LONG *)GEN_TOP((REFG(int, 0x1370b90) + 0x68))) = (*(tagRECT *)(gen_frame + 0x8)).right;
            *((LONG *)GEN_TOP((iVar8 + 0x6c))) = (*(tagRECT *)(gen_frame + 0x8)).bottom;
          }
          *(uint *)&REFG(undefined, 0x12fa424) = REFG(undefined4, 0x1370184);
          *(uint *)&REFG(undefined, 0x12fa428) = REFG(undefined4, 0x1370188);
        }
        if ((REFG(char, 0x136faf0) != '\0') && (REFG(char, 0x136fbe5) == '\0')) {
          uVar1 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
          uVar7 = F_00414500(uVar1 GEN_EDX_ARG,0x11);
          if (*((int *)GEN_TOP((uVar7 + 0x14))) == 0) {
            uVar9 = 1;
            iVar8 = REFG(int, 0x136fad0);
            pvVar6 = ((undefined *)GEN_TOP(F_00414500(uVar1 GEN_EDX_ARG,0xd)));
            F_00414a40(pvVar6 GEN_EDX_ARG,iVar8,uVar9);
            uVar9 = 1;
            iVar8 = REFG(int, 0x136facc);
            pvVar6 = ((undefined *)GEN_TOP(F_00414500(uVar1 GEN_EDX_ARG,0xe)));
            F_00414a40(pvVar6 GEN_EDX_ARG,iVar8,uVar9);
          }
        }
        if (REFG(int, 0x137104c) != 0) {
          F_00424aa0(REFG(int, 0x137104c) GEN_EDX_ARG,1);
        }
      }
      else if ((param_2 == 0x308) && (uVar7 = F_00424760(REFG(undefined4, 0x136fbec) GEN_EDX_ARG), uVar7 != 0)) {
        pvVar6 = ((undefined *)GEN_TOP(F_00424760(REFG(undefined4, 0x136fbec) GEN_EDX_ARG)));
        F_00431a80(pvVar6 GEN_EDX_ARG);
        goto LAB_00402fc5;
      }
    }
    goto switchD_0040279d_caseD_4;
  }
  if (param_2 == 0x104) {
    if (param_3 == 0x73) goto switchD_0040279d_caseD_10;
    goto switchD_0040279d_caseD_4;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    REFG(undefined4, 0x136fa80) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x8b,2,0,0,0);
    REFG(undefined4, 0x136fa84) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x8a,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136fa88) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x84,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136fa8c) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x98,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136fa90) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x82,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136fa94) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x83,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136fa98) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x88,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136fa9c) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x97,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136faa0) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x95,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136faa4) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x96,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136faa8) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x94,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136faac) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x85,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136fab0) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x81,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136fab4) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x86,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136fab8) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x87,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136fabc) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x9c,2,0,0,0);
    *(HANDLE *)&REFG(undefined, 0x136fac0) = gen_imp_LoadImageA(REFG(undefined4, 0x136fb7c),0x89,2,0,0,0);
    break;
  case 2: ;
    gen_imp_PostQuitMessage(0);
    break;
  case 3: ;
    REFG(int, 0x136fad0) = (int)(short)(*(uint *)(gen_frame + 0x0));
    REFG(int, 0x136facc) = (int)(short)((*(uint *)(gen_frame + 0x0)) >> 0x10);
    break;
  default: ;
    goto switchD_0040279d_caseD_4;
  case 5: ;
    if (param_3 == 1) {
      if (REFG(undefined4, 0x136fbec) != ((undefined *)GEN_TOP(0x0))) goto LAB_00402a11;
    }
    else if (REFG(undefined4, 0x136fbec) != ((undefined *)GEN_TOP(0x0))) {
      bVar2 = F_0049b6c0(*((undefined4 *)GEN_TOP((REFG(undefined4, 0x136fbec) + 0x25f4))) GEN_EDX_ARG);
      if (bVar2 == 0) {
        uVar7 = F_0049c1d0();
        iVar8 = REFG(int, 0x1370b90);
        if (uVar7 != 1) {
          REFG(undefined4, 0x1370188) = (*(uint *)(gen_frame + 0x0)) >> 0x10;
          REFG(undefined4, 0x1370184) = (*(uint *)(gen_frame + 0x0)) & 0xffff;
        }
        if ((param_3 == 2) || (REFG(char, 0x136fbe7) != '\0')) {
          *(uint *)&REFG(undefined, 0x12fa428) = REFG(undefined4, 0x1370188);
          *(uint *)&REFG(undefined, 0x12fa424) = REFG(undefined4, 0x1370184);
          if ((REFG(int, 0x1370b90) != 0) && (*((char *)GEN_TOP((REFG(int, 0x1370b90) + 0x4c))) == '\0')) {
            *((uint *)GEN_TOP((REFG(int, 0x1370b90) + 0x68))) = (*(uint *)(gen_frame + 0x0)) & 0xffff;
            *((uint *)GEN_TOP((iVar8 + 0x6c))) = (*(uint *)(gen_frame + 0x0)) >> 0x10;
          }
        }
        REFG(char, 0x136fbe7) = param_3 == 2;
        if (param_3 != 2) {
          *(uint *)&REFG(undefined, 0x136fbf8) = (*(uint *)(gen_frame + 0x0)) & 0xffff;
          *(uint *)&REFG(undefined, 0x136fbfc) = (*(uint *)(gen_frame + 0x0)) >> 0x10;
          REFG(int, 0x136fbf4) = 1;
        }
      }
LAB_00402a11: ;
      F_00424aa0(REFG(undefined4, 0x136fbec) GEN_EDX_ARG,1);
      if (REFG(undefined4, 0x136fbec) != ((undefined *)GEN_TOP(0x0))) {
        F_00425940(REFG(undefined4, 0x136fbec) GEN_EDX_ARG,(uint)(param_3 == 1));
        break;
      }
    }
    goto switchD_0040279d_caseD_4;
  case 6: ;
    if ((REFG(char, 0x136faf0) != '\0') && ((short)param_3 == 2)) {
      F_00424830();
    }
    if (REFG(int, 0x137104c) != 0) {
      F_00424aa0(REFG(int, 0x137104c) GEN_EDX_ARG,(short)param_3 == 0);
      break;
    }
    goto switchD_0040279d_caseD_4;
  case 0xf: ;
    gen_imp_ValidateRect(param_1,((RECT *)GEN_TOP(0x0)));
    return 0;
  case 0x10: ;
switchD_0040279d_caseD_10: ;
    F_00424be0(REFG(undefined4, 0x136fbec) GEN_EDX_ARG);
    return 0;
  case 0x14: ;
    if (((REFG(undefined4, 0x136fbec) != ((undefined *)GEN_TOP(0x0))) && (1 < *((uint *)GEN_TOP((REFG(undefined4, 0x136fbec) + 0x11a8))))) &&
       (REFG(undefined * PTR32, 0x136fbec)[10] == (undefined1)0x0)) {
      return 0;
    }
    goto switchD_0040279d_caseD_4;
  case 0x46: ;
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x28)) + 8)) = REFG(int, 0x136fb04);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x28)) + 0)) = 0;
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x28)) + 4)) = 0;
    (*(int *)(gen_frame + 0x34)) = REFG(int, 0x136fb08);
    gen_imp_AdjustWindowRect((LPRECT)((undefined1 *)(gen_frame + 0x28)),REFG(undefined4, 0x12fd1f8),0);
    if (*((int *)GEN_TOP((uVar7 + 0x10))) < (int)((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x28)) + 8)) - (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x28)) + 0)))) {
      *((undefined4 *)GEN_TOP((uVar7 + 0x10))) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x28)) + 8)) - (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x28)) + 0));
    }
    if (*((int *)GEN_TOP((uVar7 + 0x14))) < (*(int *)(gen_frame + 0x34)) - (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x28)) + 4))) {
      *((int *)GEN_TOP((uVar7 + 0x14))) = (*(int *)(gen_frame + 0x34)) - (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x28)) + 4));
    }
    return 1;
  case 0x86: ;
    if ((REFG(undefined4, 0x136fbec) != ((undefined *)GEN_TOP(0x0))) && (BVar3 = gen_imp_IsIconic(REFG(undefined4, 0x136fb14)), BVar3 == 0)) {
      F_00425940(REFG(undefined4, 0x136fbec) GEN_EDX_ARG,(uint)(param_3 == 0));
      break;
    }
switchD_0040279d_caseD_4: ;
    break;
  case 0xa0: ;
    if (REFG(int, 0x136fbf4) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
      uVar7 = F_00414500(uVar1 GEN_EDX_ARG,0x11);
      if (*((int *)GEN_TOP((uVar7 + 0x14))) == 0) {
        gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x18)));
        uVar7 = F_00414500(uVar1 GEN_EDX_ARG,0xf);
        if (*((int *)GEN_TOP((uVar7 + 0x14))) != (*(tagRECT *)(gen_frame + 0x18)).right) {
          uVar9 = 1;
          pvVar6 = ((undefined *)GEN_TOP(F_00414500(uVar1 GEN_EDX_ARG,0xf)));
          F_00414a40(pvVar6 GEN_EDX_ARG,(*(tagRECT *)(gen_frame + 0x18)).right,uVar9);
        }
        uVar7 = F_00414500(uVar1 GEN_EDX_ARG,0x10);
        if (*((int *)GEN_TOP((uVar7 + 0x14))) != (*(tagRECT *)(gen_frame + 0x18)).bottom) {
          uVar9 = 1;
          pvVar6 = ((undefined *)GEN_TOP(F_00414500(uVar1 GEN_EDX_ARG,0x10)));
          F_00414a40(pvVar6 GEN_EDX_ARG,(*(tagRECT *)(gen_frame + 0x18)).bottom,uVar9);
        }
      }
      REFG(int, 0x136fbf4) = 0;
    }
    REFG(undefined4, 0x136fbf0) = 0;
    break;
  case 0xa1: ;
    if (param_3 == 8) {
      gen_imp_PostMessageA(param_1,0x112,0xf020,0);
      return 0;
    }
    if (param_3 == 0x14) {
      gen_imp_PostMessageA(param_1,0x112,0xf060,0);
      return 0;
    }
    REFG(undefined4, 0x136fbf0) = 1;
    break;
  case 0xa3: ;
    if ((param_3 != 2) &&
       (uVar7 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x19), *((int *)GEN_TOP((uVar7 + 0x14))) != 0
       )) {
      return 1;
    }
    REFG(char, 0x136fbe7) = '\x01';
    REFG(int, 0x136fbf4) = 1;
    break;
  case 0xa4: ;
    return 0;
  }
LAB_00402fc5: ;
  uVar7 = gen_imp_DefWindowProcA(param_1,param_2,param_3,(*(uint *)(gen_frame + 0x0)));
  return uVar7;
}

/* ref: Global::WStringFindLastOfCStr */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x403150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  short sVar1;
  short * psVar2;
  uint uVar3;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  uVar3 = F_00401fc0(this GEN_EDX_FWD,param_1,param_2,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return uVar3;
}

/* ref: Global::WStringTidy */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403180(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x403180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 uVar1;
  
  if ((param_2 != '\0') && (7 < (uint)param_1[5])) {
    uVar1 = *param_1;
    if (param_3 != 0) {
      F_00c46aa0(param_1,uVar1,param_3 * 2);
    }
    F_00429760(uVar1,param_1[5] * 2 + 2,0x3d);
  }
  param_1[4] = param_3;
  param_1[5] = 7;
  *((undefined2 *)GEN_TOP(((int)param_1 + param_3 * 2))) = 0;
  return 0;
}

/* ref: Global::WStringReallocate */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004031e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4031e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 | 7;
  uVar5 = param_1;
  if (uVar4 != 0xffffffff) {
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
    uVar2 = uVar1 >> 1;
    uVar5 = uVar4;
    if ((uVar4 / 3 < uVar2) && (uVar5 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      uVar5 = 0xfffffffe;
    }
  }
  uVar4 = F_004296a0(uVar5 * 2 + 2,0,0x3d);
  if (param_2 != 0) {
    pvVar3 = this;
    if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2 * 2);
  }
  if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    F_00429760(*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 0x14))) * 2 + 2,0x3d);
  }
  *(uint *)this = uVar4;
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar5;
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2;
  if (uVar5 < 8) {
    *((undefined2 *)GEN_TOP(((int)this + param_2 * 2))) = 0;
    return uVar4;
  }
  *((undefined2 *)GEN_TOP((uVar4 + param_2 * 2))) = 0;
  return uVar4;
}

/* ref: Global::RegisterMainWindowClass */
GEN_OWN GEN_FRAME unsigned int F_004032a0(GEN_P(HINSTANCE param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4032a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(HINSTANCE param_1 = (HINSTANCE)gen_a0;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  HICON pHVar1;
  HCURSOR pHVar2;
  HBRUSH pHVar3;
  
  (*(UINT *)((char *)((undefined *)(gen_frame + 0x0)))) = 0x30;
  (*(UINT *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = 3;
  (*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = ((code *)REFP(0x402730));
  (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 12))) = 0;
  (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 16))) = 0;
  (*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 20))) = param_1;
  pHVar1 = gen_imp_LoadIconA(param_1,0x99);
  (*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 24))) = pHVar1;
  pHVar2 = gen_imp_LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  (*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 28))) = pHVar2;
  pHVar3 = gen_imp_GetStockObject(4);
  (*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 32))) = pHVar3;
  (*(LPCSTR *)(((char *)((undefined *)(gen_frame + 0x0)) + 36))) = (LPCSTR)0x6d;
  (*(LPCSTR *)(((char *)((undefined *)(gen_frame + 0x0)) + 40))) = &REFG(undefined, 0x136fb18);
  pHVar1 = gen_imp_LoadIconA((*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 20))),0x99);
  (*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 44))) = pHVar1;
  return (uint)(gen_imp_RegisterClassExA(((undefined *)(gen_frame + 0x0))));
}

/* ref: Global::WStringRelease */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00403330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x403330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (7 < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 * 2 + 2,0x3d);
    uVar1 = (uint)uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined2 *)this = 0;
  return uVar1;
}

/* ref: Global::WStringGrow */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403370(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x403370u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_004031e0(param_1 GEN_EDX_ARG,param_2,param_1[4]);
    return (uint)(param_2 != 0);
  }
  if ((param_3 != '\0') && (param_2 < 8)) {
    uVar3 = param_1[4];
    if (param_2 < uVar3) {
      uVar3 = param_2;
    }
    if (7 < uVar1) {
      uVar2 = *param_1;
      if (uVar3 != 0) {
        F_00c46aa0(param_1,uVar2,uVar3 * 2);
      }
      F_00429760(uVar2,param_1[5] * 2 + 2,0x3d);
    }
    param_1[4] = uVar3;
    param_1[5] = 7;
    *((undefined2 *)GEN_TOP(((int)param_1 + uVar3 * 2))) = 0;
    return (uint)(param_2 != 0);
  }
  if (param_2 == 0) {
    param_1[4] = 0;
    if (7 < uVar1) {
      param_1 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *(undefined2 *)param_1 = 0;
  }
  return (uint)(param_2 != 0);
}

/* ref: Global::WStringAssignSubstring */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x403430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int iVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar4 = param_1[4] - param_2;
  if (param_3 < uVar4) {
    uVar4 = param_3;
  }
  if (this == param_1) {
    F_004020a0(this GEN_EDX_ARG,uVar4 + param_2,0xffffffff);
    F_004020a0(this GEN_EDX_ARG,0,param_2);
    return (uint)this;
  }
  if (uVar4 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar4) {
    F_004031e0(this GEN_EDX_ARG,uVar4,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    if (uVar4 == 0) {
      return (uint)this;
    }
  }
  else if (uVar4 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      **(undefined2 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined2 *)this = 0;
    return (uint)this;
  }
  puVar3 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar3 = ((undefined4 *)GEN_TOP(*param_1));
  }
  pvVar2 = this;
  if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  iVar1 = uVar4 * 2;
  F_00c46aa0(pvVar2,(int)puVar3 + param_2 * 2,iVar1);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar4;
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < 8) {
    *((undefined2 *)GEN_TOP((iVar1 + (int)this))) = 0;
    return (uint)this;
  }
  *((undefined2 *)GEN_TOP((iVar1 + *(int *)this))) = 0;
  return (uint)this;
}

/* ref: Global::WStringAssignChars */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x403530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
    pvVar3 = this;
    if (7 < uVar2) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    if (pvVar3 <= param_1) {
      pvVar3 = this;
      if (7 < uVar2) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP(((int)pvVar3 + *((int *)GEN_TOP(((int)this + 0x10))) * 2)))) {
        pvVar3 = this;
        if (7 < uVar2) {
          pvVar3 = *(undefined * PTR32 *)this;
        }
        uVar2 = F_00403430(this GEN_EDX_FWD,this,(int)param_1 - (int)((int)(uintptr_t)pvVar3) >> 1,param_2);
        return uVar2;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < param_2) {
    F_004031e0(this GEN_EDX_ARG,param_2,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      **(undefined2 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined2 *)this = 0;
    return (uint)this;
  }
  pvVar3 = this;
  if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  iVar1 = param_2 * 2;
  F_00c46aa0(pvVar3,param_1,iVar1);
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_2;
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < 8) {
    *((undefined2 *)GEN_TOP((iVar1 + (int)this))) = 0;
    return (uint)this;
  }
  *((undefined2 *)GEN_TOP((iVar1 + *(int *)this))) = 0;
  return (uint)this;
}

/* ref: Global::WStringAssign */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x403620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00403430(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: Global::WStringConstructSubstring */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x403640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined2 *)this = 0;
  F_00403430(this GEN_EDX_FWD,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: Global::WStringAssignCStr */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x403680u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::WStringAssignCopy */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004036b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4036b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00403430(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: Global::WStringConstructCStr */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004036d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4036d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  short sVar1;
  short * psVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined2 *)this = 0;
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  F_00403530(this GEN_EDX_FWD,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return (uint)this;
}

/* ref: Global::WStringSubstr */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x403720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  F_00403430(param_1 GEN_EDX_FWD,this,param_2,param_3);
  return (uint)param_1;
}

/* ref: Global::WStringMoveAssign */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x403760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    if (7 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      F_00429760(*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 0x14))) * 2 + 2,0x3d);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 7;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *(undefined2 *)this = 0;
    if ((uint)param_1[5] < 8) {
      F_00c46e20(this,param_1,param_1[4] * 2 + 2);
    }
    else {
      *(undefined4 *)this = *param_1;
      *param_1 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
    param_1[5] = 7;
    param_1[4] = 0;
    *(undefined2 *)param_1 = 0;
  }
  return (uint)this;
}

/* ref: Global::WStringMoveAssignThunk */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004037f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4037f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00403760(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Global::BuildExeVersionString */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x403800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x116d8, 8, 4);
  DWORD DVar1;
  HANDLE hFile;
  BOOL BVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 * puVar6;
  undefined4 uVar7;
  byte * pbVar8;
  bool bVar9;
  
  (*(uint *)(gen_frame + 0x116d0)) = 0x40380d;
  (*(uint *)(gen_frame + 0x116d0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(undefined * PTR32 *)(gen_frame + 0x10014)) = this;
  DVar1 = gen_imp_GetModuleFileNameW((HMODULE)0x0,((WCHAR *)(gen_frame + 0x100bc)),0x800);
  if ((DVar1 == 0) || (0x7fe < DVar1)) {
    return 0xfffffffc;
  }
  F_00408e90(((undefined1 *)(gen_frame + 0x1001c)) GEN_EDX_ARG);
  hFile = gen_imp_CreateFileW(((WCHAR *)(gen_frame + 0x100bc)),0x80000000,1,(GEN_LPANY)0x0,3,0x80,(HANDLE)0x0);
  (*(HANDLE *)(gen_frame + 0x10018)) = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    return 0xffffffff;
  }
  BVar2 = gen_imp_GetFileSizeEx(hFile,&(*(LARGE_INTEGER *)(gen_frame + 0x10004)));
  if (BVar2 == 0) {
    return 0xfffffffe;
  }
  (*(uint *)(gen_frame + 0x1000c)) = (*(LARGE_INTEGER *)(gen_frame + 0x10004)).s.LowPart;
  (*(int *)(gen_frame + 0x10010)) = (*(LARGE_INTEGER *)(gen_frame + 0x10004)).s.HighPart;
  uVar4 = (*(LARGE_INTEGER *)(gen_frame + 0x10004)).s.HighPart;
  uVar7 = (*(LARGE_INTEGER *)(gen_frame + 0x10004)).s.LowPart;
  if ((*(LARGE_INTEGER *)(gen_frame + 0x10004)).s.LowPart != 0 || (*(LARGE_INTEGER *)(gen_frame + 0x10004)).s.HighPart != 0) {
    do {
      if ((uVar4 != 0) || (uVar3 = uVar7, 0x3ff < (uint)uVar7)) {
        uVar3 = 0x400;
      }
      BVar2 = gen_imp_ReadFile((*(HANDLE *)(gen_frame + 0x10018)),((undefined1 *)(gen_frame + 0x110bc)),uVar3,&(*(DWORD *)(gen_frame + 0x10000)),(GEN_LPANY)0x0);
      if (BVar2 == 0) {
        return 0xfffffffd;
      }
      F_0040b110(((undefined1 *)(gen_frame + 0x1001c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x110bc)),uVar3);
      bVar9 = (uint)uVar7 < uVar3;
      uVar7 = uVar7 - uVar3;
      uVar4 = uVar4 - (uint)bVar9;
      this = (*(undefined * PTR32 *)(gen_frame + 0x10014));
    } while (uVar7 != 0 || uVar4 != 0);
  }
  F_0040b090(((undefined1 *)(gen_frame + 0x1001c)) GEN_EDX_ARG,((byte *)(gen_frame + 0x116bc)));
  gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x10018)));
  F_004036d0(((undefined1 *)(gen_frame + 0x100a0)) GEN_EDX_ARG,((WCHAR *)(gen_frame + 0x100bc)));
  uVar3 = F_00401fc0(((undefined1 *)(gen_frame + 0x100a0)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x108080c)),0xffffffff,2);
  if (uVar3 != 0xffffffff) {
    uVar3 = F_00403720(((undefined1 *)(gen_frame + 0x100a0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10084)),uVar3 + 1,0xffffffff);
    F_00403760(((undefined1 *)(gen_frame + 0x100a0)) GEN_EDX_ARG,uVar3);
    F_00403330(((undefined1 *)(gen_frame + 0x10084)) GEN_EDX_ARG);
  }
  F_0042cf30(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x100a0)));
  F_0042e370(this GEN_EDX_ARG,&REFG(undefined, 0x1080808));
  F_00c472af(((undefined1 *)(gen_frame + 0x114bc)),0x200,&REFG(undefined, 0x1080800),(*(uint *)(gen_frame + 0x1000c)),(*(int *)(gen_frame + 0x10010)));
  F_0042e370(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x114bc)));
  F_0042e370(this GEN_EDX_ARG,&REFG(undefined, 0x1080808));
  puVar6 = ((undefined1 *)(gen_frame + 0x114bc));
  pbVar8 = ((byte *)(gen_frame + 0x116bc));
  iVar5 = 0x14;
  do {
    F_00c472af(puVar6,3,&REFG(undefined, 0x108028c),(uint)(*pbVar8 >> 4),*pbVar8 & 0xf);
    puVar6 = puVar6 + 2;
    pbVar8 = pbVar8 + 1;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  F_0042e370((*(undefined * PTR32 *)(gen_frame + 0x10014)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x114bc)));
  F_00403330(((undefined1 *)(gen_frame + 0x100a0)) GEN_EDX_ARG);
  return 0;
}

/* ref: Global::WinMain */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00403aa0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x403aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8c, 4, 4);
  int * piVar1;
  undefined4 * puVar2;
  byte bVar3;
  HANDLE hObject;
  DWORD DVar4;
  char * pcVar5;
  BOOL BVar6;
  uint uVar7;
  undefined * this;
  int * piVar8;
  LPSTR lpName;
  int iVar9;
  HANDLE pvVar10;
  
  ((int *)(gen_frame + 0x64))[8] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88);
  pvVar10 = (HANDLE)0x0;
  (*(char * PTR32 *)(gen_frame + 0xc)) = param_3;
  gen_imp_CreateMutexA((GEN_LPANY)0x0,0,REFG(undefined * PTR32, 0x12fa5c4));
  hObject = gen_imp_OpenMutexA(0x1f0001,0,REFG(undefined * PTR32, 0x12fa5bc));
  if (hObject != (HANDLE)0x0) {
    gen_imp_CloseHandle(hObject);
    return 0;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  lpName = &REFG(undefined1, 0x1370190);
  do {
    if (*lpName == '\0') {
      gen_imp_wsprintfA(lpName,((char *)REFP(0x1080230)),(*(int *)(gen_frame + 0x0)));
    }
    if (pvVar10 != (HANDLE)0x0) {
      gen_imp_CloseHandle(pvVar10);
    }
    (*(HANDLE *)(gen_frame + 0x8)) = gen_imp_CreateMutexA((GEN_LPANY)0x0,0,lpName);
    DVar4 = gen_imp_GetLastError();
    if (DVar4 == 0xb7) {
      gen_imp_ReleaseMutex((*(HANDLE *)(gen_frame + 0x8)));
      if ((*(HANDLE *)(gen_frame + 0x8)) != (HANDLE)0x0) {
        gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x8)));
        (*(HANDLE *)(gen_frame + 0x8)) = (HANDLE)0x0;
      }
    }
    else if ((*(HANDLE *)(gen_frame + 0x8)) != (HANDLE)0x0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      F_00403800(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      gen_imp_OleInitialize((LPVOID)0x0);
      pcVar5 = F_00c46a10((*(char * PTR32 *)(gen_frame + 0xc)),((char *)REFP(0x1080814)));
      if (pcVar5 != ((char *)GEN_TOP(0x0))) {
        (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)GEN_TOP(0x101));
        BVar6 = gen_imp_GetUserNameW(&REFG(undefined2, 0x136fc10),(LPDWORD)&(*(char * PTR32 *)(gen_frame + 0xc)));
        if (BVar6 == 0) {
          REFG(undefined2, 0x136fc10) = 0;
        }
      }
      REFG(undefined4, 0x12fd1f8) = 0xcf0000;
      gen_imp_LoadStringA(param_1,0x67,&REFG(undefined, 0x136fb80),100);
      gen_imp_LoadStringA(param_1,0x6d,&REFG(undefined, 0x136fb18),100);
      F_004032a0(param_1);
      *(undefined4 *)&REFG(undefined, 0x136fad8) = REFG(undefined4, 0x15d6838);
      *(undefined4 *)&REFG(undefined, 0x136fad4) = REFG(undefined4, 0x15d6834);
      REFG(undefined4, 0x136fae0) = 0x500;
      REFG(undefined4, 0x136fae4) = 0x2d0;
      REFG(undefined4, 0x136fb04) = 0x400;
      REFG(undefined4, 0x136fb08) = 0x2d0;
      *(undefined2 *)&REFG(undefined1, 0x136faf0) = 1;
      uVar7 = F_004019e0(param_1,param_4);
      if (uVar7 == 0) {
        F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x8)));
        return 0;
      }
      uVar7 = 0;
      iVar9 = REFG(int, 0x136fc00);
      break;
    }
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    lpName = lpName + 0x100;
    pvVar10 = (*(HANDLE *)(gen_frame + 0x8));
    if (0x137038f < (int)lpName) {
      if ((*(HANDLE *)(gen_frame + 0x8)) != (HANDLE)0x0) {
        gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x8)));
      }
      return 0xffffffff;
    }
  } while( true );
joined_r0x00403ccc: ;
  if (iVar9 < 0xbfff) {
    BVar6 = gen_imp_RegisterHotKey(REFG(undefined4, 0x136fb14),iVar9,uVar7,0x2c);
    if (BVar6 == 0) {
      iVar9 = iVar9 + 1;
      goto joined_r0x00403ccc;
    }
    ((int *)(gen_frame + 0x64))[(int)(uVar7)] = iVar9;
    REFG(int, 0x136fc00) = iVar9 + 1;
  }
  (&REFG(undefined4, 0x12fa22c))[(int)(uVar7)] = ((int *)(gen_frame + 0x64))[(int)(uVar7)];
  uVar7 = uVar7 + 1;
  iVar9 = REFG(int, 0x136fc00);
  if (7 < uVar7) {
    *(undefined4 *)&REFG(undefined, 0x136fadc) = REFG(undefined4, 0x136fb14);
    this = ((undefined *)GEN_TOP(F_00406b90(0x26c8,0,0)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      piVar8 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar8 = ((int *)GEN_TOP(F_00426fc0(this GEN_EDX_ARG,&REFG(undefined, 0x136fad4))));
    }
    REFG(int * PTR32, 0x136fbec) = piVar8;
    piVar8[4] = (int)&REFG(undefined, 0x136fe20);
    piVar8[5] = (int)&REFG(undefined, 0x13700d8);
    uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    REFG(int * PTR32, 0x136fbec)[0x498] = uVar7;
    gen_imp_SetUnhandledExceptionFilter(((code *)REFP(0x4022b0)));
    DVar4 = gen_imp_GetProcessId((HANDLE)0x0);
    gen_imp_DebugActiveProcess(DVar4);
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x136fbec) + 4))))(REFG(int * PTR32, 0x136fbec) GEN_EDX_ARG);
    if ((char)uVar7 == '\0') {
      do {
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x136fbec) + 8))))(REFG(int * PTR32, 0x136fbec) GEN_EDX_ARG);
      } while ((char)uVar7 == '\0');
      F_004246b0(REFG(int * PTR32, 0x136fbec) GEN_EDX_ARG,2);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x136fbec) + 0xc))))(REFG(int * PTR32, 0x136fbec) GEN_EDX_ARG);
    }
    else {
      REFG(undefined4, 0x136fb0c) = ((undefined *)GEN_TOP(REFG(int * PTR32, 0x136fbec)[8]));
      uVar7 = 0;
      do {
        F_00424370(REFG(undefined4, 0x136fb0c) GEN_EDX_ARG,uVar7,(&REFG(undefined4, 0x136fa80))[(int)(uVar7)]);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x11);
      do {
        bVar3 = F_00401e10();
      } while (bVar3 != 0);
    }
    puVar2 = ((undefined4 *)GEN_TOP(*REFG(int * PTR32, 0x136fbec)));
    (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)GEN_TOP(REFG(int * PTR32, 0x136fbec)[3]));
    (*((code *)GEN_TOP(*puVar2)))(REFG(int * PTR32, 0x136fbec),1);
    REFG(int * PTR32, 0x136fbec) = ((int *)GEN_TOP(0x0));
    gen_imp_ClipCursor(((RECT *)GEN_TOP(0x0)));
    gen_imp_OleUninitialize();
    piVar8 = ((int *)(gen_frame + 0x64)) + 8;
    iVar9 = 7;
    do {
      piVar1 = piVar8 - 1;
      piVar8 = piVar8 - 1;
      gen_imp_UnregisterHotKey(REFG(undefined4, 0x136fb14),*piVar1);
      iVar9 = iVar9 - 1;
    } while (-1 < iVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x8)));
    return (uint)(*(char * PTR32 *)(gen_frame + 0xc));
  }
  goto joined_r0x00403ccc;
}

/* ref: Client::System::Framework::TaskManager::RootTask::~RootTask */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00403e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x403e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_004a05c0((undefined *)(this + 0x28) GEN_EDX_FWD);
  uVar1 = F_004a05c0((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Environment::EnvAnim::VectorDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403ea0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x403ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  int * in_ecx;
  
  if ((param_2 & 2) == 0) {
    F_004a47c0(param_1 GEN_EDX_FWD);
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    piVar1 = param_1 - 1;
    iVar2 = *piVar1;
    in_ecx = param_1 + iVar2 * 0xa5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      in_ecx = in_ecx - 0xa5;
      F_004a47c0(in_ecx GEN_EDX_ARG);
    }
    param_1 = piVar1;
    if ((param_2 & 1) != 0) {
      F_00406b30(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)param_1;
}

/* ref: Client::System::Framework::TaskManager::RootTask::VectorDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00403f20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x403f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * pTVar1;
  int iVar2;
  undefined * pTVar3;
  
  if ((param_2 & 2) == 0) {
    F_004a05c0(param_1 + 0x28 GEN_EDX_FWD);
    F_004a05c0(param_1 GEN_EDX_ARG);
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
  }
  else {
    pTVar1 = param_1 - 4;
    iVar2 = *(int *)pTVar1;
    pTVar3 = param_1 + iVar2 * 0x58;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      F_004a05c0(pTVar3 - 0x30 GEN_EDX_ARG);
      F_004a05c0(pTVar3 - 0x58 GEN_EDX_ARG);
      pTVar3 = pTVar3 - 0x58;
    }
    param_1 = pTVar1;
    if ((param_2 & 1) != 0) {
      F_00406b30(pTVar1);
      return (uint)pTVar1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00404110 */
GEN_OWN GEN_FRAME uint F_00404110(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x404110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 - 4))) + 0x18))))
                    (*((int * PTR32 *)GEN_TOP((param_1 - 4))) GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00404140 */
GEN_OWN GEN_FRAME unsigned int F_00404140(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x404140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    if (param_1 == REFG(int * PTR32, 0x1370bd4)) {
      REFG(int * PTR32, 0x1370bd4) = ((int *)GEN_TOP(0x0));
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8))) = 0;
      return;
    }
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,1);
  }
  return;
}

/* ref: FUN_004041b0 */
GEN_OWN GEN_FRAME unsigned int F_004041b0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4041b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,1);
  }
  return;
}

/* ref: FUN_004041f0 */
GEN_OWN GEN_FRAME uint F_004041f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4041f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x1370bd4) = param_1;
  return param_1;
}

/* ref: FUN_00404220 */
GEN_OWN GEN_FRAME uint F_00404220(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x404220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x1370bd8) = param_1;
  return param_1;
}

/* ref: FUN_00404230 */
GEN_OWN GEN_NOFRAME uint F_00404230(void)
{
  GEN_ENTER(0x404230u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1370bd8);
}

/* ref: FUN_00404250 */
GEN_OWN GEN_NOFRAME uint F_00404250(void)
{
  GEN_ENTER(0x404250u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1370bd4);
}

/* ref: FUN_00404260 */
GEN_OWN GEN_FRAME uint F_00404260(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x404260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x1370bdc) = param_1;
  return param_1;
}

/* ref: FUN_00404270 */
GEN_OWN GEN_NOFRAME uint F_00404270(void)
{
  GEN_ENTER(0x404270u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1370bdc);
}

/* ref: FUN_00404280 */
GEN_OWN GEN_FRAME uint F_00404280(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x404280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x1370be0) = param_1;
  return param_1;
}

/* ref: FUN_00404290 */
GEN_OWN GEN_NOFRAME uint F_00404290(void)
{
  GEN_ENTER(0x404290u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1370be0);
}

/* ref: FUN_004042a0 */
GEN_OWN GEN_FRAME uint F_004042a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4042a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x1370be4) = param_1;
  return param_1;
}

/* ref: FUN_004042b0 */
GEN_OWN GEN_NOFRAME uint F_004042b0(void)
{
  GEN_ENTER(0x4042b0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1370be4);
}

/* ref: FUN_004042d0 */
GEN_OWN GEN_NOFRAME uint F_004042d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4042d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return REFG(undefined4, 0x1370be4);
}

/* ref: FUN_004042e0 */
GEN_OWN GEN_FRAME uint F_004042e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4042e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x1370bf0) = param_1;
  return param_1;
}

/* ref: FUN_00404300 */
GEN_OWN GEN_FRAME uint F_00404300(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x404300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x1370bf4) = param_1;
  return param_1;
}

/* ref: FUN_00404310 */
GEN_OWN GEN_NOFRAME uint F_00404310(void)
{
  GEN_ENTER(0x404310u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1370bf4);
}

/* ref: FUN_00404320 */
GEN_OWN GEN_FRAME uint F_00404320(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x404320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x1370bf8) = param_1;
  return param_1;
}

/* ref: FUN_00404340 */
GEN_OWN GEN_FRAME uint F_00404340(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x404340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4)));
  *((int *)GEN_TOP((iVar1 + 0x14))) = *((int *)GEN_TOP((iVar1 + 0x14))) + 1;
  *((uint *)GEN_TOP((iVar1 + 0x98 + *((int *)GEN_TOP((iVar1 + 0x14))) * 4))) = param_1;
  *((uint *)GEN_TOP((iVar1 + 8))) = param_1;
  return param_1;
}

/* ref: FUN_004043a0 */
GEN_OWN GEN_FRAME uint F_004043a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4043a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4)));
  *((int *)GEN_TOP((iVar1 + 0x10))) = *((int *)GEN_TOP((iVar1 + 0x10))) + 1;
  *((uint *)GEN_TOP((iVar1 + 0x18 + *((int *)GEN_TOP((iVar1 + 0x10))) * 4))) = param_1;
  *((uint *)GEN_TOP((iVar1 + 0xc))) = param_1;
  return param_1;
}

/* ref: FUN_00404400 */
GEN_OWN GEN_FRAME uint F_00404400(GEN_P(gen_size32 param_1, unsigned int gen_a0), GEN_P(gen_size32 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x404400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a0;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a1;)
  gen_size32 _Alignment;
  undefined * pvVar1;
  
  _Alignment = param_2;
  if (param_2 == 0) {
    _Alignment = 0x10;
  }
  pvVar1 = F_00c480eb(param_1,_Alignment);
  return (uint)pvVar1;
}

/* ref: FUN_00404420 */
GEN_OWN GEN_FRAME uint F_00404420(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(gen_size32 param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x404420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  gen_size32 _Alignment;
  undefined * pvVar1;
  
  _Alignment = param_3;
  if (param_3 == 0) {
    _Alignment = 0x10;
  }
  pvVar1 = F_00c4830c(param_1,param_2,_Alignment);
  return (uint)pvVar1;
}

/* ref: Global::FreeAlignedBlock */
GEN_OWN GEN_FRAME uint F_00404450(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x404450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c480d1(param_1);
  return extraout_EAX;
}

/* ref: FUN_004044b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004044b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4044b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return (uint)this;
}

/* ref: FUN_004044d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004044d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4044d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_004044f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004044f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4044f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00404510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x404510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00404530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x404530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: Client::System::Memory::Managed::ManagedSpace::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00404570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x404570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Memory::Managed::ManagedSpace::Allocate */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x404590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD)));
  uVar2 = *(uint *)(this + 8);
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,this,param_1,uVar2);
  return uVar2;
}

/* ref: Client::System::Memory::Managed::ManagedSpace::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004045c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4045c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,this,param_1);
  return uVar2;
}

/* ref: Client::System::Memory::Managed::ManagedSpace::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004045e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x4045e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Memory::Managed::ManagedSpace::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004045f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x4045f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Memory::Managed::ManagedSpace::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00404600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x404600u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(uint *)(this + 0xc) == 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return *(uint *)(this + 0xc);
}

/* ref: Client::System::Memory::Managed::ManagedSpace::vf10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00404620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Memory::Managed::MemoryHandle::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00404630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x404630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: Client::System::Memory::Managed::MemoryHandle::vf5 */
GEN_OWN GEN_NOFRAME unsigned int F_00404640(void)
{
  GEN_ENTER(0x404640u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Memory::Managed::SeparateManagedAllocator::DestroyAllSpaces */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00404650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 4);
  while (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[9] == 0) {
      puVar2 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      puVar2 = ((undefined4 *)GEN_TOP((puVar1[9] - 8)));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    puVar1 = puVar2;
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}

/* ref: FUN_00404690 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00404690(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x404690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 - 1 + param_2;
}

/* ref: Client::System::Memory::Managed::SystemManagedAllocator::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004046b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4046b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Memory::Regular::MemorySpace::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004046c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4046c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Memory::Regular::MemorySpace::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004046e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4046e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
  uVar2 = *(uint *)(this + 8);
  if (uVar2 <= param_3) {
    uVar2 = param_3;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,param_1,param_2,uVar2);
  return uVar2;
}

/* ref: Client::System::Memory::Regular::MemorySpace::Free */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,param_1);
  return 0;
}

/* ref: Client::System::Memory::Regular::MemorySpace::GetBlockSize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x404730u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Memory::Regular::MemorySpace::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00404750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x404750u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Memory::Regular::MemorySpace::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00404760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x404760u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Memory::Regular::MemorySpace::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00404770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x404770u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(uint *)(this + 0xc) == 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return *(uint *)(this + 0xc);
}

/* ref: Client::System::Memory::Regular::MemorySpace::vf15 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00404790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Global::InitFreeList */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004047e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4047e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  *((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_1;
  piVar1 = param_1;
  iVar4 = param_3;
  if (param_3 == 0) {
    *(undefined4 *)&REFG(undefined, 0x4) = 0;
    return 0;
  }
  do {
    piVar2 = piVar1;
    iVar4 = iVar4 - 1;
    *piVar2 = (int)piVar3;
    piVar2[1] = (int)piVar2 + param_2;
    piVar1 = ((int *)GEN_TOP(((int)piVar2 + param_2)));
    piVar3 = piVar2;
  } while (iVar4 != 0);
  piVar2[1] = 0;
  return 0;
}

/* ref: Global::PushFreeBlock */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  if (iVar1 == 0) {
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_1;
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)this = *(int *)this - 1;
    return (uint)param_1;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 4)));
  *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 4))) = param_1;
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  param_1[1] = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = param_1;
  }
  *(int *)this = *(int *)this - 1;
  return (uint)puVar2;
}

/* ref: Client::System::Memory::Regular::FixedSpace::vf1 */
GEN_OWN GEN_NOFRAME unsigned int F_00404880(void)
{
  GEN_ENTER(0x404880u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Memory::Regular::FixedSpace::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00404890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x404890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: Client::System::Memory::Regular::FixedSpace::GetFreeSize */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004048a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4048a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (*((int *)GEN_TOP((in_ecx + 0x14))) - *((int *)GEN_TOP((in_ecx + 4)))) * *((int *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Client::System::Memory::Regular::FixedSpace::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004048b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4048b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x24)));
  if (uVar1 == 0) {
    uVar1 = *((uint *)GEN_TOP((in_ecx + 0xc)));
  }
  return uVar1;
}

/* ref: Client::System::Memory::Regular::FixedSpace::vf15 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004048c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4048c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Memory::Regular::FixedSpace::AllocateAligned */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004048d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4048d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Client::System::Memory::Regular::FixedSpace::Allocate */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004048f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4048f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x18);
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = 0;
    }
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(undefined4 * PTR32 *)(this + 0x18) = puVar2;
    uVar3 = iVar1 + 0x17U & 0xfffffff0;
    *((int *)GEN_TOP((uVar3 - 8))) = iVar1;
    *((undefined * PTR32 *)GEN_TOP((uVar3 - 4))) = this;
  }
  return uVar3;
}

/* ref: Client::System::Memory::Regular::FixedSpace::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00404920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x404920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: Client::System::Memory::Regular::FixedSpace::Free */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20) + 8))))(*(int * PTR32 *)(this + 0x20) GEN_EDX_FWD);
  iVar1 = *(int *)(this + 0x18);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 - 8)));
  if (iVar1 == 0) {
    *(undefined4 * PTR32 *)(this + 0x18) = puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  else {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 4)));
    *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 4))) = puVar2;
    *puVar2 = *(undefined4 *)(this + 0x18);
    puVar2[1] = puVar3;
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = puVar2;
    }
  }
  *(int *)(this + 4) = *(int *)(this + 4) - 1;
  if (*(int *)(this + 4) == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20) + 0x30))))(*(int * PTR32 *)(this + 0x20) GEN_EDX_ARG,this);
    if (((char)uVar4 != '\0') && (uVar5 = *(uint *)(this + 8), uVar5 != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20) + 0xc))))(*(int * PTR32 *)(this + 0x20) GEN_EDX_ARG);
  return uVar5;
}

/* ref: Client::System::Memory::Regular::FixedSpace::GetBlockSize */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004049b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4049b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Client::System::Memory::Regular::RegularAllocator::ReleaseAllSpaces */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004049c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4049c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined * pRVar4;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(this + 0x18)) {
    pRVar4 = this + 0x6c;
    do {
      puVar3 = *(undefined4 * PTR32 *)(pRVar4 - 0x50);
      while (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar3[0xb]));
        uVar2 = puVar3[2];
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_FWD,0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,uVar2);
        puVar3 = puVar1;
      }
      puVar3 = *(undefined4 * PTR32 *)pRVar4;
      *(int *)(pRVar4 - 0x50) = 0;
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar2 = puVar3[2];
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,uVar2);
      }
      *(int *)pRVar4 = 0;
      local_8 = local_8 + 1;
      pRVar4 = pRVar4 + 4;
    } while (local_8 < *(int *)(this + 0x18));
  }
  return;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::Allocate */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x404a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD,param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00404a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x404a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::GetBlockSize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((param_1 - 0xc))) & 0x7fffffff;
}

/* ref: Global::AlignPayloadAddress */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00404aa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x404aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 + 0x1c + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00404ac0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00404ac0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x404ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  return (param_1 - param_3) + param_2 & ~(param_4 - 1U);
}

/* ref: Global::CalcRequiredBlockSize */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00404ae0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x404ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 + 0x1b + param_2;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::FindFreeBlock */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404b00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x404b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * local_8;
  
  iVar2 = param_2;
  piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0x10)));
  uVar1 = param_2 + 0x1b + param_3;
  piVar3 = ((int *)GEN_TOP(0x0));
  uVar5 = param_2 + 0x1c;
  local_8 = ((int *)GEN_TOP(0x0));
  param_2 = 0;
  if (param_4 == '\0') {
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      do {
        uVar5 = piVar4[-1] & 0x7fffffff;
        if (iVar2 + 0x1cU <= uVar5) {
          if (uVar5 < uVar1) {
            piVar3 = local_8;
            if ((*piVar4 + 0x1c + (param_3 - 1U) & ~(param_3 - 1U)) + iVar2 <= *piVar4 + uVar5) {
              return (uint)piVar4;
            }
          }
          else if ((piVar3 == ((int *)GEN_TOP(0x0))) || (uVar5 < param_2)) {
            piVar3 = piVar4;
            param_2 = uVar5;
            local_8 = piVar4;
          }
        }
        piVar4 = ((int *)GEN_TOP(piVar4[-4]));
      } while (piVar4 != ((int *)GEN_TOP(0x0)));
      return (uint)piVar3;
    }
  }
  else {
    for (; piVar4 != ((int *)GEN_TOP(0x0)); piVar4 = ((int *)GEN_TOP(piVar4[-4]))) {
      if ((uVar5 <= (piVar4[-1] & 0x7fffffffU)) &&
         (((piVar3 == ((int *)GEN_TOP(0x0)) || (piVar3 < piVar4)) && (uVar1 <= (piVar4[-1] & 0x7fffffffU))))) {
        piVar3 = piVar4;
      }
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_00404bc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00404bc0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x404bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((uint *)GEN_TOP((param_1 - 4))) = *((uint *)GEN_TOP((param_1 - 4))) & 0x7fffffff;
  *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
  return param_1;
}

/* ref: Global::UnlinkFreeBlock */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00404be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 - 0x14)));
  iVar2 = *((int *)GEN_TOP((param_1 - 0x10)));
  if (iVar1 == 0) {
    *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
  }
  else {
    *((int *)GEN_TOP((iVar1 - 0x10))) = iVar2;
  }
  if (iVar2 != 0) {
    *((int *)GEN_TOP((iVar2 - 0x14))) = iVar1;
  }
  return 0;
}

/* ref: FUN_00404c10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00404c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x404c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar1 = *((int *)GEN_TOP((param_2 - 0x10)));
  uVar2 = *((uint *)GEN_TOP((param_2 - 0xc)));
  puVar4 = ((undefined4 *)GEN_TOP((param_1 - 8)));
  iVar3 = *((int *)GEN_TOP((param_2 - 0x14)));
  *puVar4 = *((undefined4 *)GEN_TOP((param_2 - 8)));
  *((uint *)GEN_TOP((param_1 - 0xc))) =
       *((uint *)GEN_TOP((param_1 - 0xc))) ^ (*((uint *)GEN_TOP((param_1 - 0xc))) ^ uVar2 & 0x7fffffff) & 0x7fffffff;
  *((int *)GEN_TOP((param_1 - 0x14))) = iVar3;
  *((int *)GEN_TOP((param_1 - 0x10))) = iVar1;
  if (iVar3 == 0) {
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar4;
  }
  else {
    *((undefined4 * PTR32 *)GEN_TOP((iVar3 - 8))) = puVar4;
  }
  if (iVar1 != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((iVar1 - 0xc))) = puVar4;
  }
  return 0;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::ReleaseSpace */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00404c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x28)));
  iVar4 = *(int *)(this + iVar1 * 4 + 0x1c);
  iVar3 = 0;
  do {
    iVar2 = iVar4;
    if (iVar2 == 0) {
LAB_00404ca4: ;
      if (*(int *)(this + iVar1 * 4 + 0x6c) == 0) {
        *(int *)(this + iVar1 * 4 + 0x6c) = param_1;
        *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = 0;
        return 0;
      }
      return 1;
    }
    if (iVar2 == param_1) {
      if (iVar3 == 0) {
        *(undefined4 *)(this + iVar1 * 4 + 0x1c) = *((undefined4 *)GEN_TOP((iVar2 + 0x2c)));
      }
      else {
        *((undefined4 *)GEN_TOP((iVar3 + 0x2c))) = *((undefined4 *)GEN_TOP((iVar2 + 0x2c)));
      }
      goto LAB_00404ca4;
    }
    iVar4 = *((int *)GEN_TOP((iVar2 + 0x2c)));
    iVar3 = iVar2;
  } while( true );
}

/* ref: Client::System::Memory::Regular::RegularAllocator::FindPoolIndex */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x404cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint * puVar2;
  
  if (this[0xbc] != (undefined1)0x0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (0 < *(int *)(this + 0x18)) {
    puVar2 = ((uint *)GEN_TOP((*(int *)(this + 0x14) + 0xc)));
    do {
      if (((puVar2[-2] <= param_1) && (param_1 <= puVar2[-3])) && (param_2 <= *puVar2)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 4;
    } while ((int)uVar1 < *(int *)(this + 0x18));
  }
  return 0xffffffff;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00404d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::AllocateEx */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x404d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::Allocate */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(gen_size32 param_2, unsigned int gen_a2), GEN_P(gen_size32 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x404d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a2;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a3;)
  undefined * pvVar1;
  
  pvVar1 = F_00c480eb(param_2,param_3);
  return (uint)pvVar1;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::Reallocate */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(gen_size32 param_2, unsigned int gen_a2), GEN_P(gen_size32 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x404d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a2;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a3;)
  undefined * pvVar1;
  
  pvVar1 = F_00c4830c(param_1,param_2,param_3);
  return (uint)pvVar1;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::Free */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint extraout_EAX = 0;
  
  F_00c480d1(param_1);
  return extraout_EAX;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00404dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x404dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00404dd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00404dd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x404dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 - 1 + param_2;
}

/* ref: Client::System::Memory::Regular::UIAllocator::FindFreeBlock */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x404df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x10);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if ((uint)(param_1 + 0x1b + param_2) <= (*((uint *)GEN_TOP((uVar1 - 4))) & 0x7fffffff)) break;
    uVar1 = *((uint *)GEN_TOP((uVar1 - 0x10)));
  }
  return uVar1;
}

/* ref: Client::System::Memory::Regular::FileAllocator::FindFreeBlock */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x404e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x10);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if ((uint)(param_1 + 0x1b + param_2) <= (*((uint *)GEN_TOP((uVar1 - 4))) & 0x7fffffff)) break;
    uVar1 = *((uint *)GEN_TOP((uVar1 - 0x10)));
  }
  return uVar1;
}

/* ref: Global::AllocateDefault */
GEN_OWN GEN_FRAME uint F_00404e50(GEN_P(gen_size32 param_1, unsigned int gen_a0), GEN_P(gen_size32 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x404e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a0;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * piVar1;
  gen_size32 _Alignment;
  undefined * pvVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00406520()));
  if (REFG(int, 0x1370bcc) == 0) {
    _Alignment = param_2;
    if (param_2 == 0) {
      _Alignment = 0x10;
    }
    pvVar2 = F_00c480eb(param_1,_Alignment);
    return (uint)pvVar2;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar3;
}

/* ref: FUN_00404eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404eb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x404eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00404ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x404ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00404ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x404ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00404f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x404f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00404f30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x404f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: Client::System::Memory::Managed::ManagedSpace::ManagedSpace */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00404f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x404f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  *(undefined4 *)(this + 8) = param_6;
  *(undefined4 *)(this + 0xc) = param_5;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10825b0));
  this[0x10] = (undefined1)0x0;
  *(int * PTR32 *)(this + 4) = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,param_2,this,param_3,param_4);
  return (uint)this;
}

/* ref: Client::System::Memory::Managed::SeparateManagedAllocator::FreeBlock */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00404f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x404f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  if (param_2[8] == 0) {
    puVar7 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    puVar7 = ((undefined4 *)GEN_TOP((param_2[8] - 8)));
  }
  if (param_2[9] == 0) {
    puVar6 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    puVar6 = ((undefined4 *)GEN_TOP((param_2[9] - 8)));
  }
  puVar1 = param_2;
  if ((puVar7 != ((undefined4 *)GEN_TOP(0x0))) && (puVar1 = param_2, *(char *)(puVar7 + 7) == '\0')) {
    if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar1 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      puVar1 = puVar6 + 2;
    }
    puVar7[9] = puVar1;
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar6[8] = puVar7 + 2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_2)))(param_2 GEN_EDX_ARG,1);
    puVar1 = puVar7;
  }
  if ((puVar6 == ((undefined4 *)GEN_TOP(0x0))) || (*(char *)(puVar6 + 7) != '\0')) goto LAB_0040502e;
  iVar3 = puVar6[9];
  if (iVar3 == 0) {
    iVar2 = 0;
LAB_00405015: ;
    iVar3 = 0;
  }
  else {
    iVar2 = iVar3 - 8;
    if (iVar2 == 0) goto LAB_00405015;
  }
  puVar1[9] = iVar3;
  if (iVar2 != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x20))) = puVar1 + 2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
LAB_0040502e: ;
  iVar3 = puVar1[9];
  *(undefined1 *)(puVar1 + 7) = 0;
  if ((iVar3 == 0) || (iVar3 == 8)) {
    iVar3 = puVar1[3];
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    iVar3 = uVar5 + (uVar4 - iVar3);
  }
  else {
    iVar3 = *((int *)GEN_TOP((iVar3 + 4))) - puVar1[3];
  }
  puVar1[4] = iVar3;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 8)));
}

/* ref: Client::System::Memory::Managed::SeparateManagedAllocator::GetFreeSize */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00405080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x405080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  for (iVar1 = *(int *)(this + 4); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x24))) - 8) {
    if (*((char *)GEN_TOP((iVar1 + 0x1c))) == '\0') {
      uVar2 = uVar2 + *((int *)GEN_TOP((iVar1 + 0x10)));
    }
    if (*((int *)GEN_TOP((iVar1 + 0x24))) == 0) break;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 8));
  return uVar2;
}

/* ref: Client::System::Memory::Regular::MemorySpace::MemorySpace */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004050c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4050c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)(this + 0xc) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
  this[0x10] = (undefined1)0x0;
  *(undefined4 *)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = param_3;
  return (uint)this;
}

/* ref: Global::InitFixedPool */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004050f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4050f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  *((uint *)GEN_TOP(((int)this + 8))) = param_2;
  uVar3 = param_2 / param_3;
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = param_3;
  *(undefined4 *)this = 0;
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar3;
  piVar1 = ((int *)GEN_TOP(0x0));
  piVar2 = param_1;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *piVar2 = (int)piVar1;
    piVar2[1] = (int)((int)piVar2 + param_3);
    piVar1 = piVar2;
    piVar2 = ((int *)GEN_TOP(((int)piVar2 + param_3)));
  }
  piVar1[1] = 0;
  return 0;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::GetFreeSize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00405140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x405140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * pRVar4;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  if (this[0xbd] == (undefined1)0x0) {
    do {
      iVar1 = _InterlockedExchange((volatile gen_long *)(((int *)(this + 0xd8))), (gen_long)(1));
    } while (iVar1 != 0);
  }
  else {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc0));
  }
  for (iVar1 = *(int *)(this + 0x10); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 - 0x10)))) {
    local_8 = local_8 + (*((uint *)GEN_TOP((iVar1 - 4))) & 0x7fffffff);
  }
  local_c = 0;
  if (0 < *(int *)(this + 0x18)) {
    pRVar4 = this + 0x6c;
    do {
      for (piVar2 = *(int * PTR32 *)(pRVar4 - 0x50); piVar2 != ((int *)GEN_TOP(0x0)); piVar2 = ((int *)GEN_TOP(piVar2[0xb]))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x2c))))(piVar2 GEN_EDX_ARG);
        local_8 = local_8 + uVar3;
      }
      piVar2 = *(int * PTR32 *)pRVar4;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x2c))))(piVar2 GEN_EDX_ARG);
        local_8 = local_8 + uVar3;
      }
      local_c = local_c + 1;
      pRVar4 = pRVar4 + 4;
    } while (local_c < *(int *)(this + 0x18));
  }
  if (this[0xbd] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc0));
    return local_8;
  }
  _InterlockedExchange((volatile gen_long *)(((undefined4 *)(this + 0xd8))), (gen_long)(0));
  return local_8;
}

/* ref: Global::InitBlockHeader */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00405230(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x405230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP((param_1 - 0x14))) = 0;
  *((undefined4 *)GEN_TOP((param_1 - 0x10))) = 0;
  *((undefined4 *)GEN_TOP((param_1 - 0x1c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 - 0x18))) = 0;
  *((undefined4 *)GEN_TOP((param_1 - 4))) = 0;
  *((undefined4 *)GEN_TOP((param_1 - 8))) = param_2;
  *((uint *)GEN_TOP((param_1 - 0xc))) = param_3 & 0x7fffffff;
  return param_1;
}

/* ref: Global::CoalesceFreeBlock */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00405260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x405260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP((param_1 - 8)));
  *((uint *)GEN_TOP((param_1 - 4))) = *((uint *)GEN_TOP((param_1 - 4))) & 0x7fffffff;
  if ((iVar1 != 0) && (-1 < *((int *)GEN_TOP((iVar1 - 4))))) {
    iVar2 = *((int *)GEN_TOP((iVar1 - 0x14)));
    iVar3 = *((int *)GEN_TOP((iVar1 - 0x10)));
    if (iVar2 == 0) {
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar3;
    }
    else {
      *((int *)GEN_TOP((iVar2 - 0x10))) = iVar3;
    }
    if (iVar3 != 0) {
      *((int *)GEN_TOP((iVar3 - 0x14))) = iVar2;
    }
    uVar4 = *((uint *)GEN_TOP((param_1 - 4)));
    *((uint *)GEN_TOP((param_1 - 4))) = (*((int *)GEN_TOP((iVar1 - 4))) + uVar4 ^ uVar4) & 0x7fffffff ^ uVar4;
    iVar1 = *((int *)GEN_TOP((iVar1 - 8)));
    *((int *)GEN_TOP((param_1 - 8))) = iVar1;
    if (iVar1 != 0) {
      *((uint *)GEN_TOP((iVar1 - 0xc))) = param_1;
    }
  }
  uVar4 = *((uint *)GEN_TOP((param_1 - 0xc)));
  uVar5 = param_1;
  if ((uVar4 != 0) && (uVar5 = param_1, -1 < *((int *)GEN_TOP((uVar4 - 4))))) {
    iVar1 = *((int *)GEN_TOP((uVar4 - 0x14)));
    iVar2 = *((int *)GEN_TOP((uVar4 - 0x10)));
    if (iVar1 == 0) {
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
    }
    else {
      *((int *)GEN_TOP((iVar1 - 0x10))) = iVar2;
    }
    if (iVar2 != 0) {
      *((int *)GEN_TOP((iVar2 - 0x14))) = iVar1;
    }
    uVar5 = *((uint *)GEN_TOP((uVar4 - 4)));
    *((uint *)GEN_TOP((uVar4 - 4))) = (*((int *)GEN_TOP((param_1 - 4))) + uVar5 ^ uVar5) & 0x7fffffff ^ uVar5;
    iVar1 = *((int *)GEN_TOP((param_1 - 8)));
    *((int *)GEN_TOP((uVar4 - 8))) = iVar1;
    uVar5 = uVar4;
    if (iVar1 != 0) {
      *((uint *)GEN_TOP((iVar1 - 0xc))) = uVar4;
    }
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP((uVar5 - 0x14))) = 0;
  *((int *)GEN_TOP((uVar5 - 0x10))) = iVar1;
  if (iVar1 != 0) {
    *((uint *)GEN_TOP((iVar1 - 0x14))) = uVar5;
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar5;
  return uVar5;
}

/* ref: Global::AllocateInSpace */
GEN_OWN GEN_FRAME uint F_00405330(GEN_P(gen_size32 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(gen_size32 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x405330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(gen_size32 param_5 = (gen_size32)gen_a4;)
  uint uVar1;
  int * piVar2;
  gen_size32 _Alignment;
  undefined * pvVar3;
  
  if (param_4 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0x14))))(param_4 GEN_EDX_ARG,param_1,param_5,param_2);
    return uVar1;
  }
  piVar2 = ((int *)GEN_TOP(F_00406520()));
  if (REFG(int, 0x1370bcc) == 0) {
    _Alignment = param_5;
    if (param_5 == 0) {
      _Alignment = 0x10;
    }
    pvVar3 = F_00c480eb(param_1,_Alignment);
    return (uint)pvVar3;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,param_1,param_5,param_2);
  return uVar1;
}

/* ref: Global::AllocateInSpace2 */
GEN_OWN GEN_FRAME uint F_00405390(GEN_P(gen_size32 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(gen_size32 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x405390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(gen_size32 param_5 = (gen_size32)gen_a4;)
  uint uVar1;
  int * piVar2;
  gen_size32 _Alignment;
  undefined * pvVar3;
  
  if (param_4 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0x14))))(param_4 GEN_EDX_ARG,param_1,param_5,param_2);
    return uVar1;
  }
  piVar2 = ((int *)GEN_TOP(F_00406520()));
  if (REFG(int, 0x1370bcc) == 0) {
    _Alignment = param_5;
    if (param_5 == 0) {
      _Alignment = 0x10;
    }
    pvVar3 = F_00c480eb(param_1,_Alignment);
    return (uint)pvVar3;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,param_1,param_5,param_2);
  return uVar1;
}

/* ref: Global::CreateManagedSpace */
GEN_OWN GEN_FRAME uint F_004053f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x4053f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  piVar4 = ((int *)GEN_TOP(0x0));
  piVar5 = param_2;
  if ((param_2 == ((int *)GEN_TOP(0x0))) && (piVar5 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
    F_00405f60();
    piVar5 = REFG(int * PTR32, 0x1370bd4);
  }
  if (param_1 == 0) {
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(F_00406520()));
      if (REFG(int, 0x1370bcc) != 0) {
        iVar3 = *piVar4;
        goto LAB_004054a3;
      }
      piVar4 = F_00c480eb(8,0x10);
    }
    else {
      iVar3 = *piVar5;
      piVar4 = piVar5;
LAB_004054a3: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x14))))(piVar4,8,0,1)));
    }
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
LAB_004054bc: ;
      piVar4 = ((int *)GEN_TOP(0x0));
    }
    else {
      *piVar4 = (int)(*(undefined * PTR32 (*)[8])REFP(0x1082568));
    }
  }
  else if (param_1 == 1) {
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(F_00406520()));
      if (REFG(int, 0x1370bcc) == 0) {
        piVar4 = F_00c480eb(0x2c,0x10);
      }
      else {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x14))))(piVar4 GEN_EDX_ARG,0x2c,0,1)));
      }
    }
    else {
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG,0x2c,0,1)));
    }
    if (piVar4 == ((int *)GEN_TOP(0x0))) goto LAB_004054bc;
    *piVar4 = (int)(*(undefined * PTR32 (*)[8])REFP(0x108258c));
    gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
  }
  if (piVar5 == ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(F_00406520()));
    if (REFG(int, 0x1370bcc) == 0) {
      puVar2 = F_00c480eb(0x14,0x10);
      goto LAB_004054f3;
    }
    iVar3 = *piVar1;
  }
  else {
    iVar3 = *piVar5;
    piVar1 = piVar5;
  }
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x14))))(piVar1,0x14,0,1)));
LAB_004054f3: ;
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  puVar2[3] = param_5;
  puVar2[2] = param_6;
  *puVar2 = (*(undefined * PTR32 (*)[11])REFP(0x10825b0));
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar2[1] = piVar4;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,piVar5,puVar2,param_3,param_4);
  return (uint)puVar2;
}

/* ref: Client::System::Memory::Managed::SeparateManagedAllocator::Allocate */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00405540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x405540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  piVar4 = *(int * PTR32 *)(this + 0x20);
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar2 = *(uint *)(this + 4);
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      if ((*((char *)GEN_TOP((uVar2 + 0x1c))) == '\0') && (uVar1 = *((uint *)GEN_TOP((uVar2 + 0x10))), param_2 <= uVar1))
      {
        if (uVar1 < (param_2 - 1) + param_3) {
          uVar8 = uVar2;
          if (((*((int *)GEN_TOP((uVar2 + 0xc))) - 1 + param_3 & ~(param_3 - 1U)) - *((int *)GEN_TOP((uVar2 + 0xc)))) +
              param_2 <= uVar1) goto LAB_004055bc;
        }
        else if ((uVar7 == 0) || (uVar1 < *((uint *)GEN_TOP((uVar7 + 0x10))))) {
          uVar7 = uVar2;
        }
      }
      uVar8 = uVar7;
      if ((*((int *)GEN_TOP((uVar2 + 0x24))) == 0) ||
         (uVar2 = *((int *)GEN_TOP((uVar2 + 0x24))) - 8, uVar7 = uVar8, uVar2 == 0)) goto LAB_004055bc;
    } while( true );
  }
LAB_004055c0: ;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
LAB_004055bc: ;
  if (uVar8 != 0) {
    iVar9 = ((*((int *)GEN_TOP((uVar8 + 0xc))) - 1 + param_3 & ~(param_3 - 1U)) - *((int *)GEN_TOP((uVar8 + 0xc)))) +
            param_2;
    if (0x2f < (uint)(*((int *)GEN_TOP((uVar8 + 0x10))) - iVar9)) {
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(F_00406520()));
        if (REFG(int, 0x1370bcc) == 0) {
          puVar3 = F_00c480eb(0x28,0x10);
        }
        else {
          puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x14))))(piVar4 GEN_EDX_ARG,0x28,0,1)));
        }
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x14))))(piVar4 GEN_EDX_ARG,0x28,0,1)));
      }
      if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
      puVar3[1] = (*(undefined * PTR32 (*)[1])REFP(0x10824c4));
      *puVar3 = (*(undefined * PTR32 (*)[6])REFP(0x10825e8));
      puVar3[1] = (*(undefined * PTR32 (*)[1])REFP(0x10825e0));
      if (*((int *)GEN_TOP((uVar8 + 0x24))) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *((int *)GEN_TOP((uVar8 + 0x24))) - 8;
      }
      puVar3[6] = param_1;
      puVar3[3] = *((int *)GEN_TOP((uVar8 + 0xc))) + iVar9;
      piVar4 = puVar3 + 2;
      *piVar4 = *((int *)GEN_TOP((uVar8 + 0xc))) + iVar9;
      puVar3[4] = *((int *)GEN_TOP((uVar8 + 0x10))) - iVar9;
      puVar3[8] = uVar8 + 8;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar5 + 8;
      }
      puVar3[9] = iVar6;
      *(undefined1 *)(puVar3 + 7) = 0;
      if (iVar5 != 0) {
        *((int * PTR32 *)GEN_TOP((iVar5 + 0x20))) = piVar4;
      }
      *((int *)GEN_TOP((uVar8 + 0x10))) = iVar9;
      *((int * PTR32 *)GEN_TOP((uVar8 + 0x24))) = piVar4;
    }
    *((uint *)GEN_TOP((uVar8 + 8))) = *((int *)GEN_TOP((uVar8 + 0xc))) - 1 + param_3 & ~(param_3 - 1U);
    *((undefined1 *)GEN_TOP((uVar8 + 0x1c))) = 1;
    *((uint *)GEN_TOP((uVar8 + 0x14))) = param_2;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar8;
  }
  goto LAB_004055c0;
}

/* ref: Global::FixedPool */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004056f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4056f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  
  *((uint *)GEN_TOP(((int)this + 8))) = param_2;
  uVar2 = param_2 / param_3;
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = param_3;
  *(undefined4 *)this = 0;
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
  piVar1 = param_1;
  piVar4 = ((int *)GEN_TOP(0));
  if (uVar2 != 0) {
    do {
      piVar3 = piVar1;
      uVar2 = uVar2 - 1;
      *piVar3 = (int)piVar4;
      piVar3[1] = (int)((int)piVar3 + param_3);
      piVar1 = ((int *)GEN_TOP(((int)piVar3 + param_3)));
      piVar4 = piVar3;
    } while (uVar2 != 0);
    piVar3[1] = 0;
    return (uint)this;
  }
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return (uint)this;
}

/* ref: FUN_00405750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00405750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x405750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x108264c));
  F_004056f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_3,param_4,param_5);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  return (uint)this;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::RegularAllocator */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00405790(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x405790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  undefined4 * puVar4;
  
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xbd))) = param_6;
  *param_1 = (*(undefined * PTR32 (*)[14])REFP(0x1082690));
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xbe))) = param_7;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xbf))) = param_8;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  LOCK();
  param_1[0x36] = 0;
  UNLOCK();
  param_1[5] = param_4;
  param_1[6] = param_5;
  param_1[2] = param_3;
  param_1[1] = param_2;
  uVar1 = param_2 + 0x2bU & 0xfffffff0;
  piVar2 = ((int *)GEN_TOP((uVar1 - 8)));
  *((undefined4 *)GEN_TOP((uVar1 - 0x14))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 - 0x10))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 - 0x1c))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 - 0x18))) = 0;
  *piVar2 = param_2;
  *((undefined4 *)GEN_TOP((uVar1 - 4))) = 0;
  *((uint *)GEN_TOP((uVar1 - 0xc))) = param_3 & 0x7fffffff;
  param_1[3] = piVar2;
  param_1[4] = piVar2;
  iVar3 = param_1[6];
  if (iVar3 != 0) {
    puVar4 = param_1 + iVar3 + 0x1b;
    do {
      iVar3 = iVar3 - 1;
      puVar4[-0x15] = 0;
      puVar4[-1] = 0;
      puVar4 = puVar4 - 1;
    } while (iVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0x2f) = 0;
  return (uint)param_1;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::Free */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00405840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x405840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  if (this[0xbd] == (undefined1)0x0) {
    do {
      iVar1 = _InterlockedExchange((volatile gen_long *)(((int *)(this + 0xd8))), (gen_long)(1));
    } while (iVar1 != 0);
  }
  else {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc0));
  }
  *((uint *)GEN_TOP((param_1 - 0xc))) = *((uint *)GEN_TOP((param_1 - 0xc))) & 0x7fffffff;
  *((undefined4 *)GEN_TOP((param_1 - 4))) = 0;
  F_00405260(this GEN_EDX_ARG,param_1 - 8);
  if (this[0xbd] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc0));
    return extraout_EAX;
  }
  uVar2 = _InterlockedExchange((volatile gen_long *)(((uint *)(this + 0xd8))), (gen_long)(0));
  return uVar2;
}

/* ref: Global::AllocateFromHeap */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004058d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4058d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  uint uVar8;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD,param_1,param_2,param_3)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  if ((char)param_3 == '\0') {
    iVar1 = piVar3[-5];
    iVar2 = piVar3[-4];
    if (iVar1 == 0) {
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
    }
    else {
      *((int *)GEN_TOP((iVar1 - 0x10))) = iVar2;
    }
    if (iVar2 != 0) {
      *((int *)GEN_TOP((iVar2 - 0x14))) = iVar1;
    }
    piVar6 = piVar3 + 2;
    piVar7 = ((int *)GEN_TOP((*piVar3 + 0x1c + (param_2 - 1U) & ~(param_2 - 1U))));
    if (piVar6 != piVar7) {
      F_00404c10(this GEN_EDX_ARG,piVar7,piVar6);
      piVar3 = piVar7 - 2;
      piVar6 = piVar7;
    }
    piVar3[-1] = piVar3[-1] | 0x80000000;
    uVar4 = piVar3[-1];
    iVar1 = (int)piVar6 + param_1;
    uVar5 = ((uVar4 & 0x7fffffff) - iVar1) + *piVar3;
    if (0x4b < uVar5) {
      piVar3[-1] = (uVar4 - uVar5 ^ uVar4) & 0x7fffffff ^ uVar4;
      uVar4 = iVar1 + 0x2bU & 0xfffffff0;
      piVar7 = ((int *)GEN_TOP((uVar4 - 8)));
      *((undefined4 *)GEN_TOP((uVar4 - 0x14))) = 0;
      *((undefined4 *)GEN_TOP((uVar4 - 0x10))) = 0;
      *((undefined4 *)GEN_TOP((uVar4 - 0x1c))) = 0;
      *((undefined4 *)GEN_TOP((uVar4 - 0x18))) = 0;
      *piVar7 = iVar1;
      *((undefined4 *)GEN_TOP((uVar4 - 4))) = 0;
      *((uint *)GEN_TOP((uVar4 - 0xc))) = uVar5 & 0x7fffffff;
      iVar1 = piVar3[-2];
      piVar3[-2] = (int)piVar7;
      *((int * PTR32 *)GEN_TOP((uVar4 - 0x14))) = piVar3;
      *((int *)GEN_TOP((uVar4 - 0x10))) = iVar1;
      if (iVar1 != 0) {
        *((int * PTR32 *)GEN_TOP((iVar1 - 0xc))) = piVar7;
      }
      F_00405260(this GEN_EDX_ARG,piVar7);
      return (uint)piVar6;
    }
  }
  else {
    uVar4 = piVar3[-1];
    uVar5 = ((uVar4 & 0x7fffffff) - param_1) + *piVar3 & ~(param_2 - 1U);
    piVar6 = ((int *)GEN_TOP((uVar5 - 8)));
    if (piVar3 + 0xe <= ((int *)GEN_TOP((uVar5 - 0x1c)))) {
      uVar8 = (int)(uVar5 - 0x1c) - *piVar3;
      *((undefined4 *)GEN_TOP((uVar5 - 0x14))) = 0;
      *((undefined4 *)GEN_TOP((uVar5 - 0x10))) = 0;
      *((undefined4 *)GEN_TOP((uVar5 - 0x1c))) = 0;
      *((undefined4 *)GEN_TOP((uVar5 - 0x18))) = 0;
      *((undefined4 *)GEN_TOP((uVar5 - 4))) = 0;
      *((uint *)GEN_TOP((uVar5 - 0xc))) = (uVar4 & 0x7fffffff) - uVar8 & 0x7fffffff;
      *piVar6 = uVar5 - 0x1c;
      *((uint *)GEN_TOP((uVar5 - 0xc))) = *((uint *)GEN_TOP((uVar5 - 0xc))) | 0x80000000;
      iVar1 = piVar3[-2];
      piVar3[-2] = (int)piVar6;
      *((int * PTR32 *)GEN_TOP((uVar5 - 0x14))) = piVar3;
      *((int *)GEN_TOP((uVar5 - 0x10))) = iVar1;
      if (iVar1 != 0) {
        *((int * PTR32 *)GEN_TOP((iVar1 - 0xc))) = piVar6;
      }
      piVar3[-1] = piVar3[-1] ^ (piVar3[-1] ^ uVar8) & 0x7fffffff;
      return uVar5;
    }
    iVar1 = piVar3[-5];
    iVar2 = piVar3[-4];
    if (iVar1 == 0) {
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
    }
    else {
      *((int *)GEN_TOP((iVar1 - 0x10))) = iVar2;
    }
    if (iVar2 != 0) {
      *((int *)GEN_TOP((iVar2 - 0x14))) = iVar1;
    }
    piVar6 = piVar3 + 2;
    piVar7 = ((int *)GEN_TOP((*piVar3 + 0x1c + (param_2 - 1U) & ~(param_2 - 1U))));
    if (piVar6 != piVar7) {
      F_00404c10(this GEN_EDX_ARG,piVar7,piVar6);
      piVar3 = piVar7 - 2;
      piVar6 = piVar7;
    }
    piVar3[-1] = piVar3[-1] | 0x80000000;
  }
  return (uint)piVar6;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::CreateFixedSpace */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00405aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x405aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  uVar2 = *param_2 + 7 + param_2[3] & ~(param_2[3] - 1U);
  iVar4 = param_2[2] * uVar2;
  this[0xbc] = (undefined1)0x1;
  uVar1 = F_004058d0(this GEN_EDX_FWD,iVar4 + 0x30,param_2[3],1);
  if (uVar1 == 0) {
    return 0;
  }
  puVar3 = ((undefined4 *)GEN_TOP((uVar1 + iVar4)));
  *((undefined4 *)GEN_TOP((uVar1 - 4))) = param_1;
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar3 = (*(undefined * PTR32 (*)[16])REFP(0x108264c));
    F_004056f0(puVar3 + 1 GEN_EDX_ARG,uVar1,iVar4,uVar2);
    puVar3[8] = this;
    puVar3[7] = param_1;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
  }
  puVar3[10] = param_3;
  this[0xbc] = (undefined1)0x0;
  return (uint)puVar3;
}

/* ref: Client::System::Memory::Regular::UIAllocator::UIAllocator */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00405b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x405b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  F_00405790(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,(undefined1)param_5,(undefined1)param_6,
             (undefined1)param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10826cc));
  return (uint)this;
}

/* ref: Client::System::Memory::Regular::FileAllocator::FileAllocator */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00405b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x405b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  F_00405790(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,(undefined1)param_5,(undefined1)param_6,
             (undefined1)param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x1082708));
  return (uint)this;
}

/* ref: Global::CreateMemorySpace */
GEN_OWN GEN_FRAME uint F_00405bc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x405bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  uint uVar1;
  undefined * this;
  undefined * this_00;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * in_ECX = 0;
  int iVar4;
  
  piVar2 = REFG(int * PTR32, 0x1370bd4);
  if (REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0))) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x1370bc4) = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
      in_ECX = (undefined4 *)&REFG(undefined * PTR32 * PTR32, 0x1370bc4);
      break;
    case 1: ;
      in_ECX = ((undefined4 *)GEN_TOP(F_00405790(&REFG(undefined * PTR32 * PTR32, 0x1370bc4) GEN_EDX_ARG,param_2,param_3,param_6,param_7,(char)param_8,(char)param_9,
                          (char)param_10)));
      break;
    case 2: ;
      in_ECX = ((undefined4 *)GEN_TOP(F_00405b40((undefined *)&REFG(undefined * PTR32 * PTR32, 0x1370bc4) GEN_EDX_ARG,param_2,param_3,param_6,param_7,param_8,
                          param_9,param_10)));
      break;
    case 3: ;
      in_ECX = ((undefined4 *)GEN_TOP(F_00405b80((undefined *)&REFG(undefined * PTR32 * PTR32, 0x1370bc4) GEN_EDX_ARG,param_2,param_3,param_6,param_7,param_8,
                          param_9,param_10)));
    }
    *(undefined4 * PTR32 *)&REFG(undefined, 0x1370bb4) = in_ECX;
    REFG(undefined * PTR32 * PTR32, 0x1370bb0) = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
    *(undefined4 *)&REFG(undefined, 0x1370bbc) = param_4;
    REFG(undefined4, 0x1370bc0) = 0;
    *(undefined4 *)&REFG(undefined, 0x1370bb8) = param_5;
    return 0x1370bb0;
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    in_ECX = ((undefined4 *)GEN_TOP(F_00405330(4,1,0,REFG(int * PTR32, 0x1370bd4),0)));
    if (in_ECX == ((undefined4 *)GEN_TOP(0x0))) {
LAB_00405cd7: ;
      in_ECX = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *in_ECX = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
    }
    break;
  case 1: ;
    uVar1 = F_00405330(0xdc,1,0,REFG(int * PTR32, 0x1370bd4),0);
    if (uVar1 == 0) goto LAB_00405cd7;
    in_ECX = ((undefined4 *)GEN_TOP(F_00405790(uVar1 GEN_EDX_ARG,param_2,param_3,param_6,param_7,(char)param_8,(char)param_9,
                        (char)param_10)));
    break;
  case 2: ;
    this = ((undefined *)GEN_TOP(F_00405330(0xdc,1,0,REFG(int * PTR32, 0x1370bd4),0)));
    if (this == ((undefined *)GEN_TOP(0x0))) goto LAB_00405cd7;
    in_ECX = ((undefined4 *)GEN_TOP(F_00405b40(this GEN_EDX_ARG,param_2,param_3,param_6,param_7,param_8,param_9,param_10)));
    break;
  case 3: ;
    this_00 = ((undefined *)GEN_TOP(F_00405330(0xdc,1,0,REFG(int * PTR32, 0x1370bd4),0)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00405cd7;
    in_ECX = ((undefined4 *)GEN_TOP(F_00405b80(this_00 GEN_EDX_ARG,param_2,param_3,param_6,param_7,param_8,param_9,param_10)));
  }
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(F_00406520()));
    if (REFG(int, 0x1370bcc) == 0) {
      puVar3 = F_00c480eb(0x14,0x10);
      goto LAB_00405dda;
    }
    iVar4 = *piVar2;
  }
  else {
    iVar4 = *piVar2;
  }
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar4 + 0x14))))(piVar2,0x14,0,1)));
LAB_00405dda: ;
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  puVar3[1] = in_ECX;
  *puVar3 = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
  puVar3[3] = param_4;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[2] = param_5;
  return (uint)puVar3;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::Allocate_00405e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00405e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x405e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint local_8;
  
  local_8 = 0;
  if (this[0xbd] == (undefined1)0x0) {
    do {
      iVar1 = _InterlockedExchange((volatile gen_long *)(((int *)(this + 0xd8))), (gen_long)(1));
    } while (iVar1 != 0);
  }
  else {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc0));
  }
  if ((*(int *)(this + 0x14) == 0) || (uVar2 = F_00404cd0(this GEN_EDX_ARG,param_2,param_3), (int)uVar2 < 0))
  {
LAB_00405f05: ;
    local_8 = F_004058d0(this GEN_EDX_ARG,param_2,param_3,param_4);
    if (local_8 != 0) {
      *((undefined4 *)GEN_TOP((local_8 - 4))) = param_1;
    }
  }
  else {
    piVar3 = *(int * PTR32 *)(this + uVar2 * 4 + 0x1c);
    do {
      if (piVar3 == ((int *)GEN_TOP(0x0))) {
        piVar3 = *(int * PTR32 *)(this + uVar2 * 4 + 0x6c);
        *(undefined4 *)(this + uVar2 * 4 + 0x6c) = 0;
        if ((piVar3 != ((int *)GEN_TOP(0x0))) ||
           (piVar3 = ((int *)GEN_TOP(F_00405aa0(this GEN_EDX_ARG,param_1,uVar2 * 0x10 + *(int *)(this + 0x14),uVar2
                                            ))), piVar3 != ((int *)GEN_TOP(0x0)))) {
          piVar3[0xb] = *(int *)(this + uVar2 * 4 + 0x1c);
          *(int * PTR32 *)(this + uVar2 * 4 + 0x1c) = piVar3;
          local_8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,param_2,param_3);
        }
        if (local_8 == 0) goto LAB_00405f05;
        break;
      }
      local_8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,param_2,param_3);
      piVar3 = ((int *)GEN_TOP(piVar3[0xb]));
    } while (local_8 == 0);
  }
  if (this[0xbd] == (undefined1)0x0) {
    _InterlockedExchange((volatile gen_long *)(((undefined4 *)(this + 0xd8))), (gen_long)(0));
    return local_8;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc0));
  return local_8;
}

/* ref: Global::InitializeMemorySystem */
GEN_OWN GEN_FRAME uint F_00405f60(void)
{
  GEN_ENTER(0x405f60u, 0u, 0u, 0u, 0u);
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined * this;
  uint uVar4;
  int iVar5;
  int * local_c;
  int * local_8;
  
  piVar3 = REFG(int * PTR32, 0x1370bd4);
  if (REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0))) {
    *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x1370bc4) = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
    REFG(undefined * PTR32 * PTR32, 0x1370bb0) = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
    *(undefined4 *)&REFG(undefined, 0x1370bbc) = 0;
    REFG(undefined4, 0x1370bc0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x1370bb4) = &REFG(undefined * PTR32 * PTR32, 0x1370bc4);
    *(undefined4 *)&REFG(undefined, 0x1370bb8) = 0x10;
    local_8 = (int *)&REFG(undefined * PTR32 * PTR32, 0x1370bb0);
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(F_00405330(4,1,0,REFG(int * PTR32, 0x1370bd4),0)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar2 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
    }
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(F_00406520()));
      if (REFG(int, 0x1370bcc) == 0) {
        local_8 = F_00c480eb(0x14,0x10);
      }
      else {
        local_8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG,0x14,0,1)));
      }
    }
    else {
      local_8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG,0x14,0,1)));
    }
    if (local_8 == ((int *)GEN_TOP(0x0))) {
      local_8 = ((int *)GEN_TOP(0x0));
    }
    else {
      *local_8 = (int)(*(undefined * PTR32 (*)[16])REFP(0x1082604));
      local_8[3] = 0;
      *(undefined1 *)(local_8 + 4) = 0;
      local_8[1] = (int)puVar2;
      local_8[2] = 0x10;
    }
  }
  REFG(int * PTR32, 0x1370bd4) = local_8;
  if ((local_8 == ((int *)GEN_TOP(0x0))) &&
     (F_00405f60(), piVar3 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
    piVar1 = ((int *)GEN_TOP(F_00406520()));
    if (REFG(int, 0x1370bcc) != 0) {
      iVar5 = *piVar1;
      goto LAB_00406071;
    }
    local_c = F_00c480eb(8,0x10);
  }
  else {
    iVar5 = *REFG(int * PTR32, 0x1370bd4);
    piVar1 = REFG(int * PTR32, 0x1370bd4);
    piVar3 = REFG(int * PTR32, 0x1370bd4);
LAB_00406071: ;
    local_c = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x14))))(piVar1,8,0,1)));
  }
  if (local_c == ((int *)GEN_TOP(0x0))) {
    local_c = ((int *)GEN_TOP(0x0));
  }
  else {
    *local_c = (int)(*(undefined * PTR32 (*)[8])REFP(0x1082568));
  }
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(F_00406520()));
    if (REFG(int, 0x1370bcc) != 0) {
      iVar5 = *piVar1;
      goto LAB_004060b6;
    }
    puVar2 = F_00c480eb(0x14,0x10);
  }
  else {
    iVar5 = *piVar3;
    piVar1 = piVar3;
LAB_004060b6: ;
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x14))))(piVar1,0x14,0,1)));
  }
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[11])REFP(0x10825b0));
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[1] = local_c;
    puVar2[2] = 0x10;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*local_c + 4))))(local_c GEN_EDX_ARG,piVar3,puVar2,0,0);
  }
  piVar3 = REFG(int * PTR32, 0x1370bd4);
  REFG(undefined4 * PTR32, 0x1370bf8) = puVar2;
  if (REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0))) {
    *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x1370bc4) = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
    REFG(undefined * PTR32 * PTR32, 0x1370bb0) = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
    *(undefined4 *)&REFG(undefined, 0x1370bbc) = 0;
    REFG(undefined4, 0x1370bc0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x1370bb4) = &REFG(undefined * PTR32 * PTR32, 0x1370bc4);
    *(undefined4 *)&REFG(undefined, 0x1370bb8) = 0x10;
    REFG(undefined4 * PTR32, 0x1370bd8) = &REFG(undefined * PTR32 * PTR32, 0x1370bb0);
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(F_00405330(4,1,0,REFG(int * PTR32, 0x1370bd4),0)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar2 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
    }
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(F_00406520()));
      if (REFG(int, 0x1370bcc) != 0) {
        iVar5 = *piVar3;
        goto LAB_00406183;
      }
      REFG(undefined4 * PTR32, 0x1370bd8) = F_00c480eb(0x14,0x10);
    }
    else {
      iVar5 = *piVar3;
LAB_00406183: ;
      REFG(undefined4 * PTR32, 0x1370bd8) = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x14))))(piVar3,0x14,0,1)));
    }
    if (REFG(undefined4 * PTR32, 0x1370bd8) == ((undefined4 *)GEN_TOP(0x0))) {
      REFG(undefined4 * PTR32, 0x1370bd8) = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *REFG(undefined4 * PTR32, 0x1370bd8) = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
      REFG(undefined4 * PTR32, 0x1370bd8)[3] = 0;
      *((undefined1 *)GEN_TOP((REFG(undefined4 * PTR32, 0x1370bd8) + 4))) = 0;
      REFG(undefined4 * PTR32, 0x1370bd8)[1] = puVar2;
      REFG(undefined4 * PTR32, 0x1370bd8)[2] = 0x10;
    }
  }
  piVar3 = REFG(int * PTR32, 0x1370bd4);
  if (REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0))) {
    *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x1370bc4) = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
    REFG(undefined * PTR32 * PTR32, 0x1370bb0) = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
    *(undefined4 *)&REFG(undefined, 0x1370bbc) = 0;
    REFG(undefined4, 0x1370bc0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x1370bb4) = &REFG(undefined * PTR32 * PTR32, 0x1370bc4);
    *(undefined4 *)&REFG(undefined, 0x1370bb8) = 0x10;
    REFG(undefined4 * PTR32, 0x1370bdc) = &REFG(undefined * PTR32 * PTR32, 0x1370bb0);
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(F_00405330(4,1,0,REFG(int * PTR32, 0x1370bd4),0)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar2 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
    }
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(F_00406520()));
      if (REFG(int, 0x1370bcc) != 0) {
        iVar5 = *piVar3;
        goto LAB_0040623f;
      }
      REFG(undefined4 * PTR32, 0x1370bdc) = F_00c480eb(0x14,0x10);
    }
    else {
      iVar5 = *piVar3;
LAB_0040623f: ;
      REFG(undefined4 * PTR32, 0x1370bdc) = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x14))))(piVar3,0x14,0,1)));
    }
    if (REFG(undefined4 * PTR32, 0x1370bdc) == ((undefined4 *)GEN_TOP(0x0))) {
      REFG(undefined4 * PTR32, 0x1370bdc) = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *REFG(undefined4 * PTR32, 0x1370bdc) = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
      REFG(undefined4 * PTR32, 0x1370bdc)[3] = 0;
      *((undefined1 *)GEN_TOP((REFG(undefined4 * PTR32, 0x1370bdc) + 4))) = 0;
      REFG(undefined4 * PTR32, 0x1370bdc)[1] = puVar2;
      REFG(undefined4 * PTR32, 0x1370bdc)[2] = 0x10;
    }
  }
  piVar3 = REFG(int * PTR32, 0x1370bd4);
  if (REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0))) {
    *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x1370bc4) = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
    REFG(undefined * PTR32 * PTR32, 0x1370bb0) = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
    *(undefined4 *)&REFG(undefined, 0x1370bbc) = 0;
    REFG(undefined4, 0x1370bc0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x1370bb4) = &REFG(undefined * PTR32 * PTR32, 0x1370bc4);
    *(undefined4 *)&REFG(undefined, 0x1370bb8) = 0x10;
    REFG(undefined4 * PTR32, 0x1370be0) = &REFG(undefined * PTR32 * PTR32, 0x1370bb0);
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(F_00405330(4,1,0,REFG(int * PTR32, 0x1370bd4),0)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar2 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
    }
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(F_00406520()));
      if (REFG(int, 0x1370bcc) != 0) {
        iVar5 = *piVar3;
        goto LAB_004062fb;
      }
      REFG(undefined4 * PTR32, 0x1370be0) = F_00c480eb(0x14,0x10);
    }
    else {
      iVar5 = *piVar3;
LAB_004062fb: ;
      REFG(undefined4 * PTR32, 0x1370be0) = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x14))))(piVar3,0x14,0,1)));
    }
    if (REFG(undefined4 * PTR32, 0x1370be0) == ((undefined4 *)GEN_TOP(0x0))) {
      REFG(undefined4 * PTR32, 0x1370be0) = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *REFG(undefined4 * PTR32, 0x1370be0) = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
      REFG(undefined4 * PTR32, 0x1370be0)[3] = 0;
      *((undefined1 *)GEN_TOP((REFG(undefined4 * PTR32, 0x1370be0) + 4))) = 0;
      REFG(undefined4 * PTR32, 0x1370be0)[1] = puVar2;
      REFG(undefined4 * PTR32, 0x1370be0)[2] = 0x10;
    }
  }
  piVar3 = REFG(int * PTR32, 0x1370bd4);
  if (REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0))) {
    *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x1370bc4) = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
    REFG(undefined * PTR32 * PTR32, 0x1370bb0) = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
    *(undefined4 *)&REFG(undefined, 0x1370bbc) = 0;
    REFG(undefined4, 0x1370bc0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x1370bb4) = &REFG(undefined * PTR32 * PTR32, 0x1370bc4);
    *(undefined4 *)&REFG(undefined, 0x1370bb8) = 0x10;
    REFG(undefined4 * PTR32, 0x1370be4) = &REFG(undefined * PTR32 * PTR32, 0x1370bb0);
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(F_00405330(4,1,0,REFG(int * PTR32, 0x1370bd4),0)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar2 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = (*(undefined * PTR32 (*)[13])REFP(0x1082530));
    }
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(F_00406520()));
      if (REFG(int, 0x1370bcc) != 0) {
        iVar5 = *piVar3;
        goto LAB_004063b7;
      }
      REFG(undefined4 * PTR32, 0x1370be4) = F_00c480eb(0x14,0x10);
    }
    else {
      iVar5 = *piVar3;
LAB_004063b7: ;
      REFG(undefined4 * PTR32, 0x1370be4) = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x14))))(piVar3,0x14,0,1)));
    }
    if (REFG(undefined4 * PTR32, 0x1370be4) == ((undefined4 *)GEN_TOP(0x0))) {
      REFG(undefined4 * PTR32, 0x1370be4) = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *REFG(undefined4 * PTR32, 0x1370be4) = (*(undefined * PTR32 (*)[16])REFP(0x1082604));
      REFG(undefined4 * PTR32, 0x1370be4)[3] = 0;
      *((undefined1 *)GEN_TOP((REFG(undefined4 * PTR32, 0x1370be4) + 4))) = 0;
      REFG(undefined4 * PTR32, 0x1370be4)[1] = puVar2;
      REFG(undefined4 * PTR32, 0x1370be4)[2] = 0x10;
    }
  }
  piVar3 = local_8;
  if (local_8 == ((int *)GEN_TOP(0x0))) {
    if (REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0))) {
      F_00405f60();
    }
    piVar1 = REFG(int * PTR32, 0x1370bd4);
    piVar3 = REFG(int * PTR32, 0x1370bd4);
    if (REFG(int * PTR32, 0x1370bd4) != ((int *)GEN_TOP(0x0))) goto LAB_00406406;
    piVar3 = ((int *)GEN_TOP(F_00406520()));
    if (REFG(int, 0x1370bcc) != 0) {
      iVar5 = *piVar3;
      goto LAB_0040642b;
    }
    local_c = F_00c480eb(8,0x10);
  }
  else {
LAB_00406406: ;
    iVar5 = *piVar3;
    piVar1 = piVar3;
LAB_0040642b: ;
    local_c = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x14))))(piVar3,8,0,1)));
  }
  if (local_c == ((int *)GEN_TOP(0x0))) {
    local_c = ((int *)GEN_TOP(0x0));
  }
  else {
    *local_c = (int)(*(undefined * PTR32 (*)[8])REFP(0x1082568));
  }
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar3 = ((int *)GEN_TOP(F_00406520()));
    if (REFG(int, 0x1370bcc) == 0) {
      puVar2 = F_00c480eb(0x14,0x10);
      goto LAB_0040647a;
    }
    iVar5 = *piVar3;
  }
  else {
    iVar5 = *piVar1;
    piVar3 = piVar1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x14))))(piVar3,0x14,0,1)));
LAB_0040647a: ;
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[11])REFP(0x10825b0));
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[1] = local_c;
    puVar2[2] = 0x10;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*local_c + 4))))(local_c GEN_EDX_ARG,piVar1,puVar2,0,0);
  }
  REFG(undefined4 * PTR32, 0x1370bf4) = puVar2;
  piVar3 = ((int *)GEN_TOP(F_00406520()));
  if (REFG(int, 0x1370bcc) == 0) {
    this = F_00c480eb(1,0x10);
  }
  else {
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG,1,0,1)));
  }
  if (this == ((undefined *)GEN_TOP(0x0))) {
    REFG(undefined4, 0x1370bc8) = 0;
    return 0;
  }
  uVar4 = F_00429680(this GEN_EDX_ARG);
  REFG(undefined4, 0x1370bc8) = uVar4;
  return uVar4;
}

/* ref: Global::GetDefaultMemorySpace */
GEN_OWN GEN_NOFRAME uint F_00406500(void)
{
  GEN_ENTER(0x406500u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4, 0x1370bd4) == 0) {
    F_00405f60();
  }
  return REFG(undefined4, 0x1370bd4);
}

/* ref: FUN_00406520 */
GEN_OWN GEN_NOFRAME uint F_00406520(void)
{
  GEN_ENTER(0x406520u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
  if ((uVar1 == 0) && (uVar1 = REFG(undefined4, 0x1370bd4), REFG(undefined4, 0x1370bd4) == 0)) {
    F_00405f60();
    uVar1 = REFG(undefined4, 0x1370bd4);
  }
  return uVar1;
}

/* ref: Client::System::Memory::Managed::SeparateManagedAllocator::Initialize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x406550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = param_1;
  if ((param_1 == ((int *)GEN_TOP(0x0))) && (piVar2 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
    F_00405f60();
    piVar2 = REFG(int * PTR32, 0x1370bd4);
  }
  *(int * PTR32 *)(this + 0x20) = piVar2;
  *(undefined4 *)(this + 0x24) = param_3;
  *(undefined4 *)(this + 0x28) = param_4;
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
    if ((piVar2 == ((int *)GEN_TOP(0x0))) && (piVar2 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
      F_00405f60();
      piVar2 = REFG(int * PTR32, 0x1370bd4);
    }
    if (REFG(int, 0x1370bcc) == 0) {
      puVar1 = F_00c480eb(0x28,0x10);
      goto LAB_004065d5;
    }
  }
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0x28,0,1)));
LAB_004065d5: ;
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    puVar1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10824c4));
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10825e8));
    puVar1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10825e0));
  }
  *(undefined4 * PTR32 *)(this + 4) = puVar1;
  puVar1[3] = param_3;
  puVar1[2] = param_3;
  puVar1[6] = param_2;
  puVar1[4] = param_4;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  return (uint)puVar1;
}

/* ref: Client::System::Memory::Managed::SystemManagedAllocator::Initialize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x406620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 == 0) && (uVar1 = REFG(undefined4, 0x1370bd4), REFG(undefined4, 0x1370bd4) == 0)) {
    F_00405f60();
    uVar1 = REFG(undefined4, 0x1370bd4);
  }
  *(uint *)(this + 4) = uVar1;
  return uVar1;
}

/* ref: Client::System::Memory::Regular::MemorySpace::Allocate */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x406650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
  uVar2 = *(uint *)(this + 8);
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,this,param_1,uVar2);
  if ((uVar2 == 0) && (REFG(int, 0x1370bd4) == 0)) {
    F_00405f60();
  }
  return uVar2;
}

/* ref: Client::System::Memory::Regular::MemorySpace::AllocateTagged */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004066a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4066a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
  uVar2 = *(uint *)(this + 8);
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,this,param_1,uVar2,param_3);
  if ((uVar2 == 0) && (REFG(int, 0x1370bd4) == 0)) {
    F_00405f60();
  }
  return uVar2;
}

/* ref: Global::MemoryAllocate */
GEN_OWN GEN_FRAME uint F_00406710(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) && (piVar2 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
    F_00405f60();
    piVar2 = REFG(int * PTR32, 0x1370bd4);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: Global::MemoryAllocateAlignRef */
GEN_OWN GEN_FRAME uint F_00406750(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) && (piVar2 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
    F_00405f60();
    piVar2 = REFG(int * PTR32, 0x1370bd4);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_1,*param_2);
  return uVar1;
}

/* ref: Global::MemoryAllocateSafe */
GEN_OWN GEN_FRAME uint F_004067a0(GEN_P(gen_size32 param_1, unsigned int gen_a0), GEN_P(gen_size32 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4067a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a0;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a1;)
  int * piVar1;
  gen_size32 _Alignment;
  undefined * pvVar2;
  uint uVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
  if ((piVar1 == ((int *)GEN_TOP(0x0))) && (piVar1 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
    F_00405f60();
    piVar1 = REFG(int * PTR32, 0x1370bd4);
  }
  if (REFG(int, 0x1370bcc) != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,param_1,param_2);
    return uVar3;
  }
  _Alignment = param_2;
  if (param_2 == 0) {
    _Alignment = 0x10;
  }
  pvVar2 = F_00c480eb(param_1,_Alignment);
  return (uint)pvVar2;
}

/* ref: FUN_00406810 */
GEN_OWN GEN_FRAME uint F_00406810(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x406810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  int * piVar1;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    if (REFG(int, 0x1370bcc) == 0) {
      F_00c480d1(param_1);
      return extraout_EAX;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
    if ((piVar1 == ((int *)GEN_TOP(0x0))) && (piVar1 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
      F_00405f60();
      piVar1 = REFG(int * PTR32, 0x1370bd4);
    }
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,param_1);
  }
  return in_EAX;
}

/* ref: FUN_00406870 */
GEN_OWN GEN_FRAME uint F_00406870(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x406870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
    if ((piVar2 == ((int *)GEN_TOP(0x0))) && (piVar2 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
      F_00405f60();
      piVar2 = REFG(int * PTR32, 0x1370bd4);
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x20))))(piVar2 GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: Client::System::Memory::Managed::SystemManagedAllocator::AllocateManagedBlock */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004068c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4068c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 4);
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,0x28,0)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10824c4));
  *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10825e8));
  puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x10825e0));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,param_2,param_3);
  if (uVar3 == 0) {
    F_00406810(puVar2);
    return 0;
  }
  puVar2[5] = param_2;
  puVar2[2] = uVar3;
  puVar2[6] = param_1;
  return (uint)puVar2;
}

/* ref: Client::System::Memory::Managed::SystemManagedAllocator::FreeManagedBlock */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x406940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * pvVar2;
  undefined * _Memory;
  uint extraout_EAX = 0;
  int * piVar3;
  uint uVar4;
  
  _Memory = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD)));
  pvVar2 = GEN_TLS_ARRAY;
  iVar1 = REFG(int, 0x15d6870);
  if (_Memory != ((undefined *)GEN_TOP(0x0))) {
    if (REFG(int, 0x1370bcc) == 0) {
      F_00c480d1(_Memory);
    }
    else {
      piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
      if ((piVar3 == ((int *)GEN_TOP(0x0))) && (piVar3 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
        F_00405f60();
        piVar3 = REFG(int * PTR32, 0x1370bd4);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG,_Memory);
    }
  }
  if (REFG(int, 0x1370bcc) != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar2 + iVar1 * 4))) + 8)));
    if ((piVar3 == ((int *)GEN_TOP(0x0))) && (piVar3 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
      F_00405f60();
      piVar3 = REFG(int * PTR32, 0x1370bd4);
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG,param_2);
    return uVar4;
  }
  F_00c480d1(param_2);
  return extraout_EAX;
}

/* ref: Global::AllocateMemory */
GEN_OWN GEN_FRAME uint F_004069f0(GEN_P(gen_size32 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4069f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
  if ((piVar3 == ((int *)GEN_TOP(0x0))) && (piVar3 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
    F_00405f60();
    piVar3 = REFG(int * PTR32, 0x1370bd4);
  }
  if (REFG(int, 0x1370bcc) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,param_1,0);
    return uVar2;
  }
  pvVar1 = F_00c480eb(param_1,0x10);
  return (uint)pvVar1;
}

/* ref: FUN_00406a50 */
GEN_OWN GEN_FRAME uint F_00406a50(GEN_P(gen_size32 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x406a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
  if ((piVar3 == ((int *)GEN_TOP(0x0))) && (piVar3 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
    F_00405f60();
    piVar3 = REFG(int * PTR32, 0x1370bd4);
  }
  if (REFG(int, 0x1370bcc) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,param_1,0);
    return uVar2;
  }
  pvVar1 = F_00c480eb(param_1,0x10);
  return (uint)pvVar1;
}

/* ref: FUN_00406ab0 */
GEN_OWN GEN_FRAME uint F_00406ab0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004067a0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00406ac0 */
GEN_OWN GEN_FRAME uint F_00406ac0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004067a0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00406ad0 */
GEN_OWN GEN_FRAME uint F_00406ad0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x406ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  int * piVar1;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    if (REFG(int, 0x1370bcc) == 0) {
      F_00c480d1(param_1);
      return extraout_EAX;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
    if ((piVar1 == ((int *)GEN_TOP(0x0))) && (piVar1 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
      F_00405f60();
      piVar1 = REFG(int * PTR32, 0x1370bd4);
    }
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,param_1);
  }
  return in_EAX;
}

/* ref: FUN_00406b30 */
GEN_OWN GEN_FRAME ulonglong F_00406b30(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x406b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  undefined4 extraout_EAX = 0;
  int * piVar1;
  undefined4 in_EDX = 0;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    if (REFG(int, 0x1370bcc) == 0) {
      F_00c480d1(param_1);
      return CONCAT44(extraout_EDX,extraout_EAX);
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 8)));
    if ((piVar1 == ((int *)GEN_TOP(0x0))) && (piVar1 = REFG(int * PTR32, 0x1370bd4), REFG(int * PTR32, 0x1370bd4) == ((int *)GEN_TOP(0x0)))) {
      F_00405f60();
      piVar1 = REFG(int * PTR32, 0x1370bd4);
    }
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,param_1);
    in_EDX = extraout_EDX_00;
  }
  return CONCAT44(in_EDX,in_EAX);
}

/* ref: FUN_00406b90 */
GEN_OWN GEN_FRAME uint F_00406b90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x406b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004067a0(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00406bb0 */
GEN_OWN GEN_FRAME uint F_00406bb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x406bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004067a0(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00406bd0 */
GEN_OWN GEN_FRAME uint F_00406bd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x406bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (param_3 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0xc))))(param_3 GEN_EDX_ARG,param_1,param_4);
    return uVar1;
  }
  uVar1 = F_004067a0(param_1,param_4);
  return uVar1;
}

/* ref: FUN_00406c00 */
GEN_OWN GEN_FRAME uint F_00406c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x406c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (param_3 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0xc))))(param_3 GEN_EDX_ARG,param_1,param_4);
    return uVar1;
  }
  uVar1 = F_004067a0(param_1,param_4);
  return uVar1;
}

/* ref: FUN_00406c30 */
GEN_OWN GEN_FRAME uint F_00406c30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x406c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004067a0(param_1,*param_3);
  return uVar1;
}

/* ref: FUN_00406c50 */
GEN_OWN GEN_FRAME uint F_00406c50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x406c50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004067a0(param_1,*param_3);
  return uVar1;
}

/* ref: Global::ShutdownMemorySystem */
GEN_OWN GEN_NOFRAME unsigned int F_00406c70(void)
{
  GEN_ENTER(0x406c70u, 0u, 0u, 0u, 0u);
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  iVar1 = REFG(int, 0x1370bc8);
  if (REFG(int, 0x1370bc8) != 0) {
    F_00429640();
    F_00406ad0(iVar1);
  }
  F_00404140(REFG(undefined4, 0x1370bf0));
  piVar2 = REFG(int * PTR32, 0x1370bf4);
  if (REFG(int * PTR32, 0x1370bf4) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1370bf4) + 4))))(REFG(int * PTR32, 0x1370bf4) GEN_EDX_ARG);
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  piVar2 = REFG(int * PTR32, 0x1370bf8);
  if (REFG(int * PTR32, 0x1370bf8) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1370bf8) + 4))))(REFG(int * PTR32, 0x1370bf8) GEN_EDX_ARG);
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  F_00404140(REFG(undefined4, 0x1370be4));
  F_00404140(REFG(undefined4, 0x1370bdc));
  F_00404140(REFG(undefined4, 0x1370be0));
  F_00404140(REFG(undefined4, 0x1370bd8));
  if (REFG(int, 0x1370bd4) == 0) {
    F_00405f60();
  }
  F_00404140(REFG(int, 0x1370bd4));
  return;
}

/* ref: FUN_00406d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406d60(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00406d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00406df0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406df0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx - 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_00406e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx - 8))) = param_2;
  return param_2;
}

/* ref: FUN_00406e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406e30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((uint *)GEN_TOP((in_ecx - 4))) ^ param_2) & 0x7fffffff;
  *((uint *)GEN_TOP((in_ecx - 4))) = *((uint *)GEN_TOP((in_ecx - 4))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00406e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx - 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_00406e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406e80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx - 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00406ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406ea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00406eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406eb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00406ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406ec0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 8)));
  if (uVar1 <= param_2) {
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00406ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406ee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00406ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406ef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00406f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406f00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 8)));
  if (uVar1 <= param_2) {
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00406f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00406f30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406f30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00406f40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406f40(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00406f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406f50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00406fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406fb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00406fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406fc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00406fd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406fd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_00406fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00406fe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x406fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00407040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407040(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  return param_2;
}

/* ref: FUN_00407060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x28))) = param_2;
  return param_2;
}

/* ref: FUN_004070a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004070a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4070a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_004070c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004070c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4070c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_004070e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004070e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4070e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: FUN_004070f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004070f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4070f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x28))) = param_2;
  return param_2;
}

/* ref: FUN_00407140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00407150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: FUN_00407170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_004071c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004071c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4071c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_004071d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004071d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4071d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_004071e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004071e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4071e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_00407200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407200(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_00407250(void)
{
  GEN_ENTER(0x407250u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::vf3 */
GEN_OWN GEN_NOFRAME unsigned int F_00407260(void)
{
  GEN_ENTER(0x407260u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::vf9 */
GEN_OWN GEN_NOFRAME uint F_00407270(void)
{
  GEN_ENTER(0x407270u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::vf10 */
GEN_OWN GEN_NOFRAME uint F_00407280(void)
{
  GEN_ENTER(0x407280u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::vf11 */
GEN_OWN GEN_NOFRAME uint F_00407290(void)
{
  GEN_ENTER(0x407290u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::vf12 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004072a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4072a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Global::AlignUp */
GEN_OWN GEN_FRAME uint F_004072c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4072c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 - 1 + param_2 & ~(param_2 - 1U);
}

/* ref: Global::PlacementNew */
GEN_OWN GEN_FRAME uint F_004072e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4072e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_004072f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004072f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4072f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Client::System::Memory::IMemorySpace::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x407320u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1,param_5);
  return uVar1;
}

/* ref: Client::System::Memory::IMemorySpace::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x407340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1,param_5);
  return uVar1;
}

/* ref: Global::CriticalSection */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004073a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4073a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_InitializeCriticalSection(this);
  return (uint)this;
}

/* ref: Client::System::Memory::Managed::SystemManagedAllocator::vf5 */
GEN_OWN GEN_NOFRAME uint F_004074b0(void)
{
  GEN_ENTER(0x4074b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Memory::Managed::SystemManagedAllocator::vf6 */
GEN_OWN GEN_NOFRAME uint F_004074c0(void)
{
  GEN_ENTER(0x4074c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Memory::Managed::SystemManagedAllocator::vf7 */
GEN_OWN GEN_NOFRAME uint F_004074d0(void)
{
  GEN_ENTER(0x4074d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Memory::Managed::SeparateManagedAllocator::SeparateManagedAllocator */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004074f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4074f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x108258c));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(this + 8));
  return (uint)this;
}

/* ref: Client::System::Memory::Managed::SeparateManagedAllocator::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00407510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: Client::System::Memory::Managed::SeparateManagedAllocator::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00407520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x28)));
}

/* ref: Client::System::Memory::Managed::SeparateManagedAllocator::~SeparateManagedAllocator */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00407530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1082470));
  return 0;
}

/* ref: Client::System::Memory::Managed::ManagedSpace::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00407550(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Client::System::Memory::Managed::ManagedSpace::SetFlag */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00407560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: Client::System::Memory::Managed::ManagedSpace::GetFlag */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00407570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Client::System::Memory::Managed::MemoryHandle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004075b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4075b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: Client::System::Memory::Managed::MemoryHandle::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004075c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4075c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: Client::System::Memory::Managed::MemoryHandle::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004075d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4075d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: Client::System::Memory::Managed::MemoryHandle::ScalarDeletingDestructorThunk */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004075e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4075e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004078d0(this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::System::Memory::Regular::MemorySpace::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x407600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1,param_5);
  return uVar1;
}

/* ref: Client::System::Memory::Regular::MemorySpace::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x407620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1,param_5);
  return uVar1;
}

/* ref: Client::System::Memory::Regular::MemorySpace::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00407640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Client::System::Memory::Regular::MemorySpace::SetFlag */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00407650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: Client::System::Memory::Regular::MemorySpace::GetFlag */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00407660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: FUN_00407680 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00407680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x1082438));
  return 0;
}

/* ref: Client::System::Memory::Regular::FixedSpace::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004076a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x4076a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1,param_5);
  return uVar1;
}

/* ref: Client::System::Memory::Regular::FixedSpace::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004076c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x4076c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1,param_5);
  return uVar1;
}

/* ref: Client::System::Memory::Regular::FixedSpace::vf9 */
GEN_OWN GEN_NOFRAME uint F_004076e0(void)
{
  GEN_ENTER(0x4076e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Memory::Regular::FixedSpace::vf13 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004076f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4076f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Memory::Regular::FixedSpace::vf14 */
GEN_OWN GEN_NOFRAME byte F_00407700(void)
{
  GEN_ENTER(0x407700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00407720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Client::System::Memory::Regular::RegularAllocator::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00407730(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: Client::System::Memory::Regular::RegularAllocator::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00407740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (this[0xbd] != (undefined1)0x0) {
    return (uint)(gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc0)));
  }
  do {
    iVar1 = _InterlockedExchange((volatile gen_long *)(((int *)(this + 0xd8))), (gen_long)(1));
  } while (iVar1 != 0);
  return 0;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00407770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  if (this[0xbd] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc0));
    return extraout_EAX;
  }
  uVar1 = _InterlockedExchange((volatile gen_long *)(((uint *)(this + 0xd8))), (gen_long)(0));
  return uVar1;
}

/* ref: FUN_004077a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004077a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4077a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x1082438));
  return 0;
}

/* ref: FUN_004077c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004077c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4077c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x1082438));
  return 0;
}

/* ref: Client::System::Memory::IManagedModule::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004077e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4077e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x1082470));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::Managed::SystemManagedAllocator::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407810(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x1082470));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::Managed::SeparateManagedAllocator::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407840(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x1082470));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::Managed::ManagedSpace::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407870(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1082494));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::Managed::ManagedBlock::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004078a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4078a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10824c4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::Managed::MemoryHandle::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004078d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4078d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10824c4));
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10824cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::Regular::MemorySpace::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407900(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[16])REFP(0x10824ec));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::Regular::FixedSpace::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407930(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[16])REFP(0x10824ec));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::Regular::RegularAllocator::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407960(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x1082438));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::Regular::SystemAllocator::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407990(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x1082438));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::Regular::UIAllocator::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004079c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4079c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x1082438));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::Regular::FileAllocator::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004079f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4079f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x1082438));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::IMemorySpace::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407a20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[16])REFP(0x10824ec));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::IManagedSpace::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407a50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1082494));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::IMemoryHandle::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407a80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10824cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Memory::IMemoryModule::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407ab0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x1082438));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407ae0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00429640();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00407b10 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00407b10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 0x28a0;
}

/* ref: FUN_00407b70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00407b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x407b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    return 0;
  }
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return 1;
}

/* ref: FUN_00407b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x407b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_004cb7f0();
  uVar1 = F_004c9b60(this,param_1);
  if ((int)uVar1 < 0) {
    F_004cb6e0(0x4dbf,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00407bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x407bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  return param_1;
}

/* ref: FUN_00407c40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00407c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x407c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    return 0;
  }
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return 1;
}

/* ref: FUN_00407c60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00407c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x407c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_004cb7f0();
  uVar1 = F_004cd510(this,0);
  if ((int)uVar1 < 0) {
    F_004cb6e0(0x4dbf,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00407c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x407c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  return param_1;
}

/* ref: FUN_00407ce0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00407ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x407ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 0x28a0;
}

/* ref: Client::System::Crypt::SimpleString::Encode */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(byte * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x407cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  byte * pbVar1;
  byte * pbVar2;
  
  if ((param_1 != ((byte *)GEN_TOP(0x0))) && (*param_1 != 0xff)) {
    if (param_3 != ((byte *)GEN_TOP(0x0))) {
      *param_3 = 0xff;
      pbVar1 = param_3;
      for (pbVar2 = param_1; pbVar2 < param_1 + param_2; pbVar2 = pbVar2 + 1) {
        pbVar1 = pbVar1 + 1;
        if (param_3 + param_4 <= pbVar1) {
          return 0xfffffffe;
        }
        *pbVar1 = *pbVar2 ^ 0x73;
      }
    }
    return param_2 + 1;
  }
  return 0xffffffff;
}

/* ref: Client::System::Crypt::SimpleString::Decode */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(byte * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x407d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  byte * pbVar1;
  byte * pbVar2;
  
  if ((param_1 != ((byte *)GEN_TOP(0x0))) && (*param_1 == 0xff)) {
    if (param_3 != ((byte *)GEN_TOP(0x0))) {
      pbVar2 = param_3;
      pbVar1 = param_1;
      while (pbVar1 = pbVar1 + 1, pbVar1 < param_1 + param_2) {
        if (param_3 + param_4 <= pbVar2) {
          return 0xfffffffe;
        }
        *pbVar2 = *pbVar1 ^ 0x73;
        pbVar2 = pbVar2 + 1;
      }
    }
    return param_2 - 1;
  }
  return 0xffffffff;
}

/* ref: Global::BinarySearchByte */
GEN_OWN GEN_NOFRAME uint F_00407db0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(char in_bl, unsigned int gen_a1), GEN_P(int in_edi, unsigned int gen_a2))
{
  GEN_ENTER(0x407db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(char in_bl = (char)gen_a1;)
  GEN_PIN(int in_edi = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = in_eax - 1;
  do {
    uVar1 = uVar3 + uVar2 >> 1;
    if (in_bl == *((char *)GEN_TOP((uVar1 + in_edi)))) {
      return uVar1;
    }
    if ((char)(in_bl - *((char *)GEN_TOP((uVar1 + in_edi)))) < '\0') {
      uVar3 = uVar1 - 1;
    }
    else {
      uVar2 = uVar1 + 1;
    }
  } while (uVar2 <= uVar3);
  return 0xffffffff;
}

/* ref: Global::BlowfishEncrypt */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00407e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x407e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  uint * puVar6;
  ulonglong uVar7;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    uVar7 = F_00c46aa0(param_2,param_1,param_3);
    puVar1 = ((uint *)GEN_TOP((uint)uVar7));
  }
  puVar6 = ((uint *)GEN_TOP((param_3 >> 3)));
  puVar5 = param_2;
  while (0 < (int)puVar6) {
    uVar3 = *puVar5;
    param_1 = ((uint *)GEN_TOP(0x10));
    uVar4 = puVar5[1];
    puVar1 = this;
    do {
      uVar2 = uVar3 ^ *puVar1;
      puVar1 = puVar1 + 1;
      uVar3 = (*((int *)GEN_TOP(((int)this + (uVar2 >> 0x18) * 4 + 0x48))) +
               *((int *)GEN_TOP(((int)this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448))) ^
              *((uint *)GEN_TOP(((int)this + (uVar2 >> 8 & 0xff) * 4 + 0x848)))) +
              *((int *)GEN_TOP(((int)this + (uVar2 & 0xff) * 4 + 0xc48))) ^ uVar4;
      param_1 = ((uint *)GEN_TOP(((int)param_1 - 1)));
      uVar4 = uVar2;
    } while (param_1 != ((uint *)GEN_TOP(0x0)));
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x40)));
    *puVar5 = *((uint *)GEN_TOP(((int)this + 0x44))) ^ uVar2;
    puVar5[1] = uVar4 ^ uVar3;
    puVar5 = puVar5 + 2;
    puVar6 = ((uint *)GEN_TOP(((int)puVar6 - 1)));
    puVar1 = puVar6;
  }
  return (uint)puVar1;
}

/* ref: Global::BlowfishDecrypt */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00407f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x407f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  
  if (param_1 != param_2) {
    F_00c46aa0(param_2,param_1,param_3);
  }
  puVar1 = param_2;
  for (iVar5 = param_3 >> 3; iVar5 != 0; iVar5 = iVar5 - 1) {
    uVar3 = *puVar1;
    puVar6 = ((uint *)GEN_TOP(((int)this + 0x44)));
    param_1 = ((uint *)GEN_TOP(0x10));
    uVar4 = puVar1[1];
    do {
      uVar2 = uVar3 ^ *puVar6;
      puVar6 = puVar6 - 1;
      uVar3 = (*((int *)GEN_TOP(((int)this + (uVar2 >> 0x18) * 4 + 0x48))) +
               *((int *)GEN_TOP(((int)this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448))) ^
              *((uint *)GEN_TOP(((int)this + (uVar2 >> 8 & 0xff) * 4 + 0x848)))) +
              *((int *)GEN_TOP(((int)this + (uVar2 & 0xff) * 4 + 0xc48))) ^ uVar4;
      param_1 = ((uint *)GEN_TOP(((int)param_1 - 1)));
      uVar4 = uVar2;
    } while (param_1 != ((uint *)GEN_TOP(0x0)));
    uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
    *puVar1 = *(uint *)this ^ uVar2;
    puVar1[1] = uVar4 ^ uVar3;
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: Global::Crc32Update */
GEN_OWN GEN_NOFRAME uint F_00408010(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(uint * in_ecx, unsigned int gen_a1), GEN_P(uint in_edx, unsigned int gen_a2))
{
  GEN_ENTER(0x408010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint in_edx = (uint)gen_a2;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar1 = ~in_eax;
  for (; (in_edx != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = ((uint *)GEN_TOP(((int)in_ecx + 1)))) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x1082750) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    in_edx = in_edx - 1;
  }
  if (0x1f < in_edx) {
    uVar3 = in_edx >> 5;
    puVar2 = in_ecx;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&REFG(undefined, 0x1082b50) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082f50) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082750) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1083350) + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&REFG(undefined, 0x1082b50) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082f50) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082750) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1083350) + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&REFG(undefined, 0x1082b50) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082f50) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082750) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1083350) + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&REFG(undefined, 0x1082b50) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082f50) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082750) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1083350) + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&REFG(undefined, 0x1082b50) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082f50) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082750) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1083350) + (uVar1 & 0xff) * 4) ^ puVar2[5];
      in_ecx = puVar2 + 8;
      uVar1 = *(uint *)(&REFG(undefined, 0x1082b50) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082f50) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082750) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1083350) + (uVar1 & 0xff) * 4) ^ puVar2[6];
      in_edx = in_edx - 0x20;
      uVar1 = *(uint *)(&REFG(undefined, 0x1082b50) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082f50) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082750) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1083350) + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&REFG(undefined, 0x1082b50) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082f50) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082750) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1083350) + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 1;
      puVar2 = in_ecx;
    } while (uVar3 != 0);
  }
  if (3 < in_edx) {
    uVar3 = in_edx >> 2;
    do {
      uVar1 = uVar1 ^ *in_ecx;
      in_ecx = in_ecx + 1;
      uVar1 = *(uint *)(&REFG(undefined, 0x1082b50) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082f50) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1082750) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1083350) + (uVar1 & 0xff) * 4);
      in_edx = in_edx - 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  for (; in_edx != 0; in_edx = in_edx - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x1082750) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    in_ecx = ((uint *)GEN_TOP(((int)in_ecx + 1)));
  }
  return ~uVar1;
}

/* ref: Global::Crc32Gf2MatrixSquare */
GEN_OWN GEN_FRAME unsigned int F_00408600(GEN_P(uint * in_eax, unsigned int gen_a0), GEN_P(uint * in_ebx, unsigned int gen_a1))
{
  GEN_ENTER(0x408600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_eax = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * in_ebx = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  int local_8;
  
  iVar4 = (int)in_ebx - (int)in_eax;
  local_8 = 0x20;
  do {
    uVar3 = 0;
    puVar2 = in_ebx;
    for (uVar1 = *((uint *)GEN_TOP((iVar4 + (int)in_eax))); uVar1 != 0; uVar1 = uVar1 >> 1) {
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar3 ^ *puVar2;
      }
      puVar2 = puVar2 + 1;
    }
    *in_eax = uVar3;
    in_eax = in_eax + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return 0;
}

/* ref: Global::Crc32Combine */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00408640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x408640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x108, 8, 4);
  int iVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104));
  uVar2 = param_1;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 1;
    ((uint *)(gen_frame + 0x80))[0] = 0xedb88320;
    iVar1 = 1;
    do {
      ((uint *)(gen_frame + 0x80))[(int)(iVar1)] = uVar2;
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 * 2;
    } while (iVar1 < 0x20);
    iVar1 = 0;
    do {
      uVar4 = 0;
      puVar3 = ((uint *)(gen_frame + 0x80));
      for (uVar2 = *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x80)) + iVar1))); uVar2 != 0; uVar2 = uVar2 >> 1) {
        if ((uVar2 & 1) != 0) {
          uVar4 = uVar4 ^ *puVar3;
        }
        puVar3 = puVar3 + 1;
      }
      *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x0)) + iVar1))) = uVar4;
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x80);
    iVar1 = 0;
    do {
      uVar4 = 0;
      puVar3 = ((uint *)(gen_frame + 0x0));
      for (uVar2 = *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x0)) + iVar1))); uVar2 != 0; uVar2 = uVar2 >> 1) {
        if ((uVar2 & 1) != 0) {
          uVar4 = uVar4 ^ *puVar3;
        }
        puVar3 = puVar3 + 1;
      }
      *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x80)) + iVar1))) = uVar4;
      iVar1 = iVar1 + 4;
      uVar2 = param_1;
    } while (iVar1 < 0x80);
    do {
      iVar1 = 0;
      do {
        uVar5 = 0;
        puVar3 = ((uint *)(gen_frame + 0x80));
        for (uVar4 = *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x80)) + iVar1))); uVar4 != 0; uVar4 = uVar4 >> 1) {
          if ((uVar4 & 1) != 0) {
            uVar5 = uVar5 ^ *puVar3;
          }
          puVar3 = puVar3 + 1;
        }
        *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x0)) + iVar1))) = uVar5;
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0x80);
      if (((uint)this & 1) != 0) {
        puVar3 = ((uint *)(gen_frame + 0x0));
        uVar5 = 0;
        for (uVar4 = uVar2; uVar2 = uVar5, uVar4 != 0; uVar4 = uVar4 >> 1) {
          if ((uVar4 & 1) != 0) {
            uVar2 = uVar2 ^ *puVar3;
          }
          puVar3 = puVar3 + 1;
          uVar5 = uVar2;
        }
      }
      if ((int)((int)(uintptr_t)this) >> 1 == 0) break;
      iVar1 = 0;
      do {
        uVar5 = 0;
        puVar3 = ((uint *)(gen_frame + 0x0));
        for (uVar4 = *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x0)) + iVar1))); uVar4 != 0; uVar4 = uVar4 >> 1) {
          if ((uVar4 & 1) != 0) {
            uVar5 = uVar5 ^ *puVar3;
          }
          puVar3 = puVar3 + 1;
        }
        *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x80)) + iVar1))) = uVar5;
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0x80);
      if (((int)((int)(uintptr_t)this) >> 1 & 1U) != 0) {
        puVar3 = ((uint *)(gen_frame + 0x80));
        uVar5 = 0;
        for (uVar4 = uVar2; uVar2 = uVar5, uVar4 != 0; uVar4 = uVar4 >> 1) {
          if ((uVar4 & 1) != 0) {
            uVar2 = uVar2 ^ *puVar3;
          }
          puVar3 = puVar3 + 1;
          uVar5 = uVar2;
        }
      }
      this = ((undefined *)GEN_TOP(((int)((int)(uintptr_t)this) >> 2)));
    } while (this != ((undefined *)GEN_TOP(0x0)));
    uVar2 = uVar2 ^ param_2;
  }
  return uVar2;
}

/* ref: FUN_004087f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004087f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4087f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1084954));
  return;
}

/* ref: FUN_00408810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00408810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x408810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Global::Crc32CombineCdecl */
GEN_OWN GEN_FRAME uint F_00408820(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x408820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00408640(param_3 GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: Global::CountFileByteHistogram */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004088e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4088e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x400) {
    return 0xffffffff;
  }
  puVar3 = param_2;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = F_00c48be3(param_1);
  iVar1 = F_00c48a9f(param_1);
  while (iVar1 == 0) {
    param_2[(char)iVar2 + 0x80] = param_2[(char)iVar2 + 0x80] + 1;
    iVar2 = F_00c48be3(param_1);
    iVar1 = F_00c48a9f(param_1);
  }
  return 1;
}

/* ref: FUN_00408960 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00408960(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x408960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  gen_size32 sVar1;
  
  if (param_3 != 0x900) {
    return 0xffffffff;
  }
  sVar1 = F_00c48f5e(param_2,1,0x900,param_1);
  return sVar1;
}

/* ref: FUN_00408990 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00408990(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x408990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  
  if (param_2 < 0x800) {
    return 0xff;
  }
  uVar1 = 0;
  puVar2 = param_1;
  do {
    *puVar2 = *((undefined4 *)GEN_TOP(((int)&REFG(undefined4, 0x12fbcd1) + uVar1)));
    puVar2[0x100] = *((undefined4 *)GEN_TOP(((int)&REFG(undefined4, 0x12fbcd5) + uVar1)));
    uVar1 = uVar1 + 9;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 0x900);
  return 0;
}

/* ref: FUN_004089e0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_004089e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4089e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  uint uVar1;
  undefined4 * puVar2;
  
  if ((0x7ff < param_2) && (0x8ff < param_4)) {
    uVar1 = 0;
    puVar2 = ((undefined4 *)GEN_TOP((param_3 + 5)));
    do {
      *((undefined4 *)GEN_TOP((param_1 + uVar1 * 4))) = puVar2[-1];
      *((undefined4 *)GEN_TOP((param_1 + 0x400 + uVar1 * 4))) = *puVar2;
      uVar1 = uVar1 + 1;
      puVar2 = ((undefined4 *)GEN_TOP(((int)puVar2 + 9)));
    } while (uVar1 < 0x100);
    return 0;
  }
  return 0xff;
}

/* ref: FUN_00408a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00408a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x408a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x800)));
  uVar3 = 0;
  uVar1 = 0;
  if (*param_1 != '\x01') {
    uVar1 = param_2 - 8U >> 3;
    F_00c46aa0(param_3,param_1 + 1,uVar1);
    return uVar1;
  }
  if (param_2 != 8) {
    do {
      if ((param_1[(uVar1 >> 3) + 1] >> ((byte)uVar1 & 7) & 1U) == 0) {
        piVar2 = ((int *)GEN_TOP(*piVar2));
      }
      else {
        piVar2 = ((int *)GEN_TOP(piVar2[1]));
      }
      if ((*piVar2 == 0) && (piVar2[1] == 0)) {
        *((char *)GEN_TOP((uVar3 + param_3))) = (char)piVar2[3];
        uVar3 = uVar3 + 1;
        if (param_4 <= uVar3) {
          return 0xffffffff;
        }
        piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x800)));
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2 - 8U);
  }
  return uVar3;
}

/* ref: Global::GetBit */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00408ad0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x408ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (int)*((char *)GEN_TOP(((param_2 >> 3) + param_1))) >> ((byte)param_2 & 7) & 1;
}

/* ref: Global::SetBit */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00408b00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x408b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  sbyte sVar1;
  
  sVar1 = (sbyte)(param_2 & 7);
  *((byte *)GEN_TOP(((param_2 >> 3) + param_1))) =
       (~('\x01' << sVar1) & *((byte *)GEN_TOP(((param_2 >> 3) + param_1)))) + (param_3 << sVar1);
  return param_2 & 7;
}

/* ref: Global::CopyBits */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00408b30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x408b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (((uint)(param_3 + 7 + param_7) >> 3 <= param_2) &&
     (uVar4 = param_7 + param_6, uVar4 + 7 >> 3 <= param_5)) {
    if (param_6 < uVar4) {
      uVar5 = param_6;
      do {
        uVar3 = (param_3 - param_6) + uVar5;
        bVar2 = (byte)uVar3 & 7;
        uVar6 = uVar5 >> 3;
        bVar1 = (byte)uVar5;
        uVar3 = uVar3 >> 3;
        uVar5 = uVar5 + 1;
        *((byte *)GEN_TOP((uVar3 + param_1))) =
             ((*((char *)GEN_TOP((uVar6 + param_4))) >> (bVar1 & 7) & 1U) << bVar2) +
             (~('\x01' << bVar2) & *((byte *)GEN_TOP((uVar3 + param_1))));
      } while (uVar5 < uVar4);
    }
    return 0;
  }
  return 0xff;
}

/* ref: Global::GetEncodedSize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00408bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x408bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  uVar1 = 0;
  if (1 < (int)param_2) {
    do {
      iVar3 = iVar3 + *((int *)GEN_TOP(((int)this + *((char *)GEN_TOP((param_1 + uVar1))) * 4 + 0x600)));
      iVar4 = iVar4 + *((int *)GEN_TOP(((int)this + *((char *)GEN_TOP((param_1 + 1 + uVar1))) * 4 + 0x600)));
      uVar1 = uVar1 + 2;
    } while (uVar1 < param_2 - 1);
  }
  if (uVar1 < param_2) {
    iVar2 = *((int *)GEN_TOP(((int)this + *((char *)GEN_TOP((uVar1 + param_1))) * 4 + 0x600)));
  }
  else {
    iVar2 = 0;
  }
  iVar2 = iVar4 + iVar3 + 7 + iVar2;
  return (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
}

/* ref: Global::EncodeBits */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00408c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined1 * param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x408c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  char cVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_18;
  uint local_14;
  
  uVar6 = 0;
  local_14 = 0;
  local_18 = 0;
  if (param_2 != 0) {
    do {
      cVar1 = *((char *)GEN_TOP((local_18 + param_1)));
      uVar2 = *((uint *)GEN_TOP(((int)this + cVar1 * 4 + 0x600)));
      uVar6 = uVar2 + local_14;
      if ((param_4 - 1) * 8 <= uVar6) {
        if (param_2 + 1 <= param_4) {
          F_00c48350(param_3,0,param_4);
          F_00c46aa0(param_3 + 1,param_1,param_2);
          *param_3 = 0;
          return param_2 * 8 + 8;
        }
        return 0xffffffff;
      }
      if (((uVar6 + 7 >> 3 <= param_4 - 1) && ((uVar2 + 7 & 0xfffffff8) < 0x21)) &&
         (uVar4 = 0, uVar2 != 0)) {
        do {
          bVar5 = (byte)(uVar4 + local_14) & 7;
          uVar7 = uVar4 >> 3;
          bVar3 = (byte)uVar4;
          uVar8 = uVar4 + local_14 >> 3;
          uVar4 = uVar4 + 1;
          param_3[uVar8 + 1] =
               ((*((char *)GEN_TOP(((int)this + uVar7 + cVar1 * 4 + 0x200))) >> (bVar3 & 7) & 1U) << bVar5) +
               (~('\x01' << bVar5) & param_3[uVar8 + 1]);
        } while (uVar4 < uVar2);
      }
      local_18 = local_18 + 1;
      local_14 = uVar6;
    } while (local_18 < param_2);
  }
  *param_3 = 1;
  return uVar6 + 8;
}

/* ref: Global::MD5Init */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00408da0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x408da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[5] = 0;
  in_ecx[4] = 0;
  *in_ecx = 0x67452301;
  in_ecx[1] = 0xefcdab89;
  in_ecx[2] = 0x98badcfe;
  in_ecx[3] = 0x10325476;
  return 0;
}

/* ref: Global::CopyBytes */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00408dd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x408dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined1 * puVar1;
  undefined1 * puVar2;
  int iVar3;
  
  if (param_3 != 0) {
    puVar2 = ((undefined1 *)GEN_TOP((param_1 + 1)));
    puVar1 = ((undefined1 *)GEN_TOP((param_2 + 2)));
    iVar3 = (param_3 - 1U >> 2) + 1;
    do {
      puVar2[-1] = puVar1[-2];
      *puVar2 = puVar1[-1];
      puVar2[1] = *puVar1;
      puVar2[2] = puVar1[1];
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: Global::BytesToUInt32LE */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00408e20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x408e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined2 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (param_3 != 0) {
    puVar1 = ((undefined2 *)GEN_TOP((param_2 + 2)));
    iVar2 = (param_3 - 1U >> 2) + 1;
    puVar3 = param_1;
    do {
      *puVar3 = CONCAT31(CONCAT21(*puVar1,*((undefined1 *)GEN_TOP(((int)puVar1 - 1)))),
                         *(undefined1 *)(puVar1 - 1));
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::SHA1Init */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00408e90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x408e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  *in_ecx = 0x67452301;
  in_ecx[1] = 0xefcdab89;
  in_ecx[2] = 0x98badcfe;
  in_ecx[3] = 0x10325476;
  in_ecx[4] = 0xc3d2e1f0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  return 0;
}

/* ref: Global::SHA1ProcessBlock */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00408ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x408ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x154, 12, 4);
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 * puVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x150));
  iVar8 = 0;
  puVar4 = ((undefined1 *)GEN_TOP(((int)this + 0x21)));
  do {
    uVar2 = puVar4[4];
    ((uint *)(gen_frame + 0x4))[(int)(iVar8 + 2)] = CONCAT31(CONCAT21(CONCAT11(puVar4[-1],*puVar4),puVar4[1]),puVar4[2]);
    uVar3 = puVar4[8];
    ((uint *)(gen_frame + 0x4))[(int)(iVar8 + 3)] = CONCAT31(CONCAT21(CONCAT11(puVar4[3],uVar2),puVar4[5]),puVar4[6]);
    uVar2 = puVar4[0xc];
    ((uint *)(gen_frame + 0x4))[(int)(iVar8 + 4)] = CONCAT31(CONCAT21(CONCAT11(puVar4[7],uVar3),puVar4[9]),puVar4[10]);
    ((uint *)(gen_frame + 0x4))[(int)(iVar8 + 5)] = CONCAT31(CONCAT21(CONCAT11(puVar4[0xb],uVar2),puVar4[0xd]),puVar4[0xe]);
    iVar8 = iVar8 + 4;
    puVar4 = puVar4 + 0x10;
  } while (iVar8 < 0x10);
  ((uint *)(gen_frame + 0x4))[1] = 0x10;
  puVar5 = ((uint *)(gen_frame + 0x4)) + 10;
  do {
    uVar9 = puVar5[-8] ^ puVar5[5] ^ *puVar5 ^ puVar5[-6];
    uVar11 = puVar5[-7] ^ puVar5[6] ^ puVar5[1] ^ puVar5[-5];
    uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
    puVar5[9] = uVar11 << 1 | (uint)((int)uVar11 < 0);
    puVar5[8] = uVar9;
    uVar11 = puVar5[7] ^ puVar5[-4] ^ puVar5[2] ^ puVar5[-6];
    uVar9 = puVar5[-3] ^ puVar5[3] ^ uVar9 ^ puVar5[-5];
    iVar8 = ((uint *)(gen_frame + 0x4))[1] - 1;
    ((uint *)(gen_frame + 0x4))[1] = iVar8;
    puVar5[10] = uVar11 << 1 | (uint)((int)uVar11 < 0);
    puVar5[0xb] = uVar9 << 1 | (uint)((int)uVar9 < 0);
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  uVar11 = *(uint *)this;
  uVar6 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar10 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar9 = *((uint *)GEN_TOP(((int)this + 0xc)));
  (*(uint *)(gen_frame + 0x0)) = *((uint *)GEN_TOP(((int)this + 0x10)));
  ((uint *)(gen_frame + 0x4))[0] = uVar11;
  ((uint *)(gen_frame + 0x4))[1] = 0;
  do {
    uVar7 = ((uint *)(gen_frame + 0x4))[1];
    uVar1 = (uVar11 << 5 | uVar11 >> 0x1b) + (~uVar6 & uVar9 | uVar10 & uVar6) +
            ((uint *)(gen_frame + 0x4))[(int)(((uint *)(gen_frame + 0x4))[1] + 2)] + 0x5a827999 + (*(uint *)(gen_frame + 0x0));
    uVar6 = uVar6 >> 2 | uVar6 << 0x1e;
    ((uint *)(gen_frame + 0x4))[0] = uVar1;
    ((uint *)(gen_frame + 0x4))[1] = uVar10;
    uVar9 = (uVar1 * 0x20 | uVar1 >> 0x1b) + (~uVar11 & uVar10 | uVar6 & uVar11) +
            ((uint *)(gen_frame + 0x4))[(int)(uVar7 + 3)] + 0x5a827999 + uVar9;
    uVar11 = uVar11 >> 2 | uVar11 << 0x1e;
    ((uint *)(gen_frame + 0x4))[1] = uVar11;
    ((uint *)(gen_frame + 0x4))[0] = uVar9;
    uVar10 = (uVar9 * 0x20 | uVar9 >> 0x1b) + (~uVar1 & uVar6 | uVar11 & uVar1) +
             ((uint *)(gen_frame + 0x4))[(int)(uVar7 + 4)] + 0x5a827999 + uVar10;
    (*(uint *)(gen_frame + 0x0)) = uVar1 >> 2 | uVar1 * 0x40000000;
    ((uint *)(gen_frame + 0x4))[1] = (*(uint *)(gen_frame + 0x0));
    ((uint *)(gen_frame + 0x4))[0] = uVar10;
    uVar6 = (uVar10 * 0x20 | uVar10 >> 0x1b) + (~uVar9 & uVar11 | (*(uint *)(gen_frame + 0x0)) & uVar9) +
            ((uint *)(gen_frame + 0x4))[(int)(uVar7 + 5)] + 0x5a827999 + uVar6;
    uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
    ((uint *)(gen_frame + 0x4))[1] = uVar9;
    uVar9 = ((uint *)(gen_frame + 0x4))[1];
    ((uint *)(gen_frame + 0x4))[0] = uVar6;
    uVar6 = ((uint *)(gen_frame + 0x4))[0];
    uVar11 = (uVar6 * 0x20 | uVar6 >> 0x1b) + (~uVar10 & (*(uint *)(gen_frame + 0x0)) | uVar9 & uVar10) +
             ((uint *)(gen_frame + 0x4))[(int)(uVar7 + 6)] + 0x5a827999 + uVar11;
    uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
    ((uint *)(gen_frame + 0x4))[0] = uVar11;
    ((uint *)(gen_frame + 0x4))[1] = uVar7 + 5;
  } while ((int)(uVar7 + 5) < 0x14);
  iVar8 = 0x14;
  do {
    uVar7 = uVar6 >> 2 | uVar6 << 0x1e;
    uVar6 = (uVar11 << 5 | uVar11 >> 0x1b) + (uVar9 ^ uVar10 ^ uVar6) + ((uint *)(gen_frame + 0x4))[(int)(iVar8 + 2)] +
            0x6ed9eba1 + (*(uint *)(gen_frame + 0x0));
    ((uint *)(gen_frame + 0x4))[0] = uVar6;
    uVar1 = (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar10 ^ uVar7 ^ uVar11) + ((uint *)(gen_frame + 0x4))[(int)(iVar8 + 3)] +
            0x6ed9eba1 + uVar9;
    uVar11 = uVar11 >> 2 | uVar11 << 0x1e;
    ((uint *)(gen_frame + 0x4))[0] = uVar1;
    (*(uint *)(gen_frame + 0x0)) = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar7 ^ uVar11 ^ uVar6) + ((uint *)(gen_frame + 0x4))[(int)(iVar8 + 4)] +
             0x6ed9eba1 + uVar10;
    ((uint *)(gen_frame + 0x4))[1] = uVar11;
    ((uint *)(gen_frame + 0x4))[1] = (*(uint *)(gen_frame + 0x0));
    ((uint *)(gen_frame + 0x4))[0] = uVar10;
    iVar12 = iVar8 + 5;
    uVar9 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar6 = (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar11 ^ (*(uint *)(gen_frame + 0x0)) ^ uVar1) + ((uint *)(gen_frame + 0x4))[(int)(iVar12)] +
            0x6ed9eba1 + uVar7;
    ((uint *)(gen_frame + 0x4))[1] = uVar9;
    ((uint *)(gen_frame + 0x4))[0] = uVar6;
    uVar11 = (uVar6 * 0x20 | uVar6 >> 0x1b) + ((*(uint *)(gen_frame + 0x0)) ^ uVar9 ^ uVar10) + ((uint *)(gen_frame + 0x4))[(int)(iVar8 + 6)] +
             0x6ed9eba1 + uVar11;
    uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
    ((uint *)(gen_frame + 0x4))[0] = uVar11;
    iVar8 = iVar12;
  } while (iVar12 < 0x28);
  ((uint *)(gen_frame + 0x4))[1] = 0x28;
  do {
    uVar1 = ((uint *)(gen_frame + 0x4))[1];
    uVar7 = uVar6 >> 2 | uVar6 << 0x1e;
    uVar6 = ((uVar10 | uVar6) & uVar9 | uVar10 & uVar6) + ((uint *)(gen_frame + 0x4))[(int)(((uint *)(gen_frame + 0x4))[1] + 2)] - 0x70e44324
            + (uVar11 << 5 | uVar11 >> 0x1b) + (*(uint *)(gen_frame + 0x0));
    ((uint *)(gen_frame + 0x4))[0] = uVar6;
    uVar13 = uVar11 >> 2 | uVar11 << 0x1e;
    uVar11 = ((uVar7 | uVar11) & uVar10 | uVar7 & uVar11) + ((uint *)(gen_frame + 0x4))[(int)(((uint *)(gen_frame + 0x4))[1] + 3)] +
             -0x70e44324 + (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar9;
    ((uint *)(gen_frame + 0x4))[0] = uVar11;
    ((uint *)(gen_frame + 0x4))[1] = uVar7;
    uVar10 = ((uVar13 | uVar6) & uVar7 | uVar13 & uVar6) + ((uint *)(gen_frame + 0x4))[(int)(uVar1 + 4)] - 0x70e44324 +
             (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar10;
    (*(uint *)(gen_frame + 0x0)) = uVar6 >> 2 | uVar6 * 0x40000000;
    ((uint *)(gen_frame + 0x4))[1] = uVar13;
    ((uint *)(gen_frame + 0x4))[0] = uVar10;
    uVar9 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar6 = (((*(uint *)(gen_frame + 0x0)) | uVar11) & uVar13 | (*(uint *)(gen_frame + 0x0)) & uVar11) + ((uint *)(gen_frame + 0x4))[(int)(uVar1 + 5)] +
            -0x70e44324 + (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar7;
    ((uint *)(gen_frame + 0x4))[1] = (*(uint *)(gen_frame + 0x0));
    ((uint *)(gen_frame + 0x4))[0] = uVar6;
    uVar11 = ((uVar9 | uVar10) & (*(uint *)(gen_frame + 0x0)) | uVar9 & uVar10) + ((uint *)(gen_frame + 0x4))[(int)(uVar1 + 6)] - 0x70e44324 +
             (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar13;
    uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
    ((uint *)(gen_frame + 0x4))[0] = uVar11;
    ((uint *)(gen_frame + 0x4))[1] = uVar1 + 5;
  } while ((int)(uVar1 + 5) < 0x3c);
  ((uint *)(gen_frame + 0x4))[1] = 0x3c;
  do {
    uVar1 = ((uint *)(gen_frame + 0x4))[1];
    uVar7 = uVar6 >> 2 | uVar6 << 0x1e;
    uVar6 = (uVar9 ^ uVar10 ^ uVar6) + ((uint *)(gen_frame + 0x4))[(int)(((uint *)(gen_frame + 0x4))[1] + 2)] - 0x359d3e2a +
            (uVar11 << 5 | uVar11 >> 0x1b) + (*(uint *)(gen_frame + 0x0));
    ((uint *)(gen_frame + 0x4))[0] = uVar6;
    uVar13 = uVar11 >> 2 | uVar11 << 0x1e;
    uVar9 = (uVar10 ^ uVar7 ^ uVar11) + ((uint *)(gen_frame + 0x4))[(int)(((uint *)(gen_frame + 0x4))[1] + 3)] - 0x359d3e2a +
            (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar9;
    uVar11 = ((uint *)(gen_frame + 0x4))[(int)(((uint *)(gen_frame + 0x4))[1] + 4)];
    ((uint *)(gen_frame + 0x4))[0] = uVar9;
    (*(uint *)(gen_frame + 0x0)) = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar10 = (uVar7 ^ uVar13 ^ uVar6) + uVar11 - 0x359d3e2a +
             (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar10;
    uVar11 = ((uint *)(gen_frame + 0x4))[(int)(((uint *)(gen_frame + 0x4))[1] + 5)];
    ((uint *)(gen_frame + 0x4))[0] = uVar10;
    uVar6 = (uVar13 ^ (*(uint *)(gen_frame + 0x0)) ^ uVar9) + uVar11 - 0x359d3e2a +
            (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar7;
    ((uint *)(gen_frame + 0x4))[1] = uVar13;
    uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
    ((uint *)(gen_frame + 0x4))[1] = (*(uint *)(gen_frame + 0x0));
    ((uint *)(gen_frame + 0x4))[0] = uVar6;
    iVar8 = uVar1 + 5;
    uVar11 = ((*(uint *)(gen_frame + 0x0)) ^ uVar9 ^ uVar10) + ((uint *)(gen_frame + 0x4))[(int)(uVar1 + 6)] - 0x359d3e2a +
             (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar13;
    uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
    ((uint *)(gen_frame + 0x4))[1] = uVar9;
    ((uint *)(gen_frame + 0x4))[0] = uVar11;
    ((uint *)(gen_frame + 0x4))[1] = iVar8;
  } while (iVar8 < 0x50);
  *((uint *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + uVar10;
  *((uint *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + uVar9;
  uVar9 = *((int *)GEN_TOP(((int)this + 0x10))) + (*(uint *)(gen_frame + 0x0));
  *(uint *)this = *(int *)this + uVar11;
  *((uint *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar6;
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  return uVar9;
}

/* ref: Global::SHA1PadMessage */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004095a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4095a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined1 *)GEN_TOP((iVar1 + 0x20 + (int)this))) = 0x80;
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 1;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  if (iVar1 < 0x38) {
    while (iVar2 < 0x38) {
      *((undefined1 *)GEN_TOP((iVar2 + 0x20 + (int)this))) = 0;
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 1;
      iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
    }
  }
  else {
    while (iVar2 < 0x40) {
      *((undefined1 *)GEN_TOP((iVar2 + 0x20 + (int)this))) = 0;
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 1;
      iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
    }
    F_00408ed0(this GEN_EDX_FWD);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
    while (iVar1 < 0x38) {
      *((undefined1 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1c))) + 0x20))) = 0;
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 1;
      iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
    }
  }
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *((char *)GEN_TOP(((int)this + 0x5a))) = (char)((uint)uVar3 >> 8);
  *((undefined1 *)GEN_TOP(((int)this + 0x5b))) = *((undefined1 *)GEN_TOP(((int)this + 0x18)));
  uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  *((char *)GEN_TOP(((int)this + 0x58))) = (char)((uint)uVar3 >> 0x18);
  *((char *)GEN_TOP(((int)this + 0x59))) = (char)((uint)uVar3 >> 0x10);
  *((char *)GEN_TOP(((int)this + 0x5e))) = (char)((uint)uVar4 >> 8);
  *((char *)GEN_TOP(((int)this + 0x5c))) = (char)((uint)uVar4 >> 0x18);
  *((char *)GEN_TOP(((int)this + 0x5d))) = (char)((uint)uVar4 >> 0x10);
  *((undefined1 *)GEN_TOP(((int)this + 0x5f))) = *((undefined1 *)GEN_TOP(((int)this + 0x14)));
  uVar5 = F_00408ed0(this GEN_EDX_ARG);
  return uVar5;
}

/* ref: Global::SwapAlternateBytes */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00409670(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x409670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined1 uVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar2 = param_1 + param_2 - 1;
  puVar3 = param_1;
  if (param_1 < puVar2) {
    do {
      uVar1 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 - 2;
    } while (puVar3 < puVar2);
  }
  return 0;
}

/* ref: Global::ComputeXorKeys */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004096a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1), GEN_P(ushort * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4096a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a2;)
  longlong lVar1;
  ushort uVar2;
  
  uVar2 = (short)param_1 * 7;
  *param_2 = uVar2;
  lVar1 = (longlong)(int)(uint)uVar2 * 0x55555556;
  *param_3 = ~(ushort)((int)(uVar2 + 1) >> ((byte)((ulonglong)lVar1 >> 0x20) & 3));
  return (uint)lVar1;
}

/* ref: Global::EncodeXorString */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004096e0(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4096e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  undefined1 uVar1;
  int iVar2;
  ushort * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  uint uVar6;
  ushort * puVar7;
  
  if ((param_1 != ((ushort *)GEN_TOP(0x0))) &&
     (puVar7 = ((ushort *)GEN_TOP(((int)param_1 + param_2))), *((char *)GEN_TOP(((int)puVar7 - 1))) != -0xf)) {
    if (param_3 != ((undefined1 *)GEN_TOP(0x0))) {
      if (param_4 < param_2 + 1) {
        return 0xfffffffe;
      }
      uVar6 = param_2 * 7 & 0xffff;
      uVar6 = ~((int)(uVar6 + 1) >>
               ((byte)((ulonglong)((longlong)(int)uVar6 * 0x55555556) >> 0x20) & 3));
      if (param_1 < puVar7) {
        puVar3 = param_1;
        do {
          *((ushort *)GEN_TOP((((int)param_3 - (int)param_1) + (int)puVar3))) = *puVar3 ^ (ushort)(param_2 * 7)
          ;
          puVar3 = puVar3 + 2;
        } while (puVar3 < puVar7);
      }
      puVar3 = param_1 + 1;
      if (puVar3 < puVar7) {
        iVar2 = 2 - (int)puVar3;
        do {
          *(ushort *)(param_3 + iVar2 + (int)puVar3) = *puVar3 ^ (ushort)uVar6;
          puVar3 = puVar3 + 2;
        } while (puVar3 < puVar7);
      }
      if ((param_2 & 1) != 0) {
        param_3[param_2 - 1] = *((byte *)GEN_TOP(((int)puVar7 - 1))) ^ (byte)uVar6;
      }
      param_3[param_2] = 0xf1;
      puVar4 = param_3 + (param_2 - 1);
      puVar5 = param_3;
      if (param_3 < puVar4) {
        do {
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 2;
          puVar4 = puVar4 - 2;
        } while (puVar5 < puVar4);
      }
    }
    return param_2 + 1;
  }
  return 0xffffffff;
}

/* ref: FUN_004097e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004097e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4097e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  ushort * puVar2;
  uint uVar3;
  ushort * puVar4;
  
  if (((*(ushort * PTR32 *)&gen_args[0]) != ((ushort *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)(*(ushort * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) - 1))) == -0xf)) {
    uVar1 = (*(int *)&gen_args[1]) - 1;
    if ((*(ushort * PTR32 *)&gen_args[2]) != ((ushort *)GEN_TOP(0x0))) {
      if ((*(uint *)&gen_args[3]) < uVar1) {
        return 0xfffffffe;
      }
      if ((*(ushort * PTR32 *)&gen_args[0]) != (*(ushort * PTR32 *)&gen_args[2])) {
        F_00c46aa0((*(ushort * PTR32 *)&gen_args[2]),(*(ushort * PTR32 *)&gen_args[0]),uVar1);
      }
      F_00409670((*(ushort * PTR32 *)&gen_args[2]),uVar1);
      uVar3 = uVar1 * 7 & 0xffff;
      puVar2 = ((ushort *)GEN_TOP((uVar1 + (int)(*(ushort * PTR32 *)&gen_args[2]))));
      uVar3 = ~((int)(uVar3 + 1) >>
               ((byte)((ulonglong)((longlong)(int)uVar3 * 0x55555556) >> 0x20) & 3));
      for (puVar4 = (*(ushort * PTR32 *)&gen_args[2]); puVar4 < puVar2; puVar4 = puVar4 + 2) {
        (*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[0]) + 0)))) = (ushort)(uVar1 * 7);
        *puVar4 = *puVar4 ^ (ushort)(*(ushort * PTR32 *)&gen_args[0]);
      }
      for (puVar4 = (*(ushort * PTR32 *)&gen_args[2]) + 1; puVar4 < puVar2; puVar4 = puVar4 + 2) {
        *puVar4 = *puVar4 ^ (ushort)uVar3;
      }
      if ((uVar1 & 1) != 0) {
        *((byte *)GEN_TOP(((int)puVar2 - 1U))) = *((byte *)GEN_TOP(((int)puVar2 - 1U))) ^ (byte)uVar3;
      }
    }
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: Global::ParseDecimalString */
GEN_OWN GEN_FRAME ulonglong GEN_STDCALL F_004098c0(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4098c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  char * pcVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  if (iVar4 == 0) {
    return 0;
  }
  iVar5 = 1;
  if (iVar4 != 0) {
    pcVar3 = param_1 + iVar4 - 1;
    do {
      cVar1 = *pcVar3;
      if ((cVar1 < '0') || ('9' < cVar1)) {
        return 0;
      }
      pcVar3 = pcVar3 - 1;
      iVar2 = iVar2 + (cVar1 - 0x30) * iVar5;
      iVar5 = iVar5 * 10;
    } while (pcVar3 + (1 - (int)param_1) != ((char *)GEN_TOP(0x0)));
  }
  return (ulonglong)iVar2;
}

/* ref: Global::InitDeflateStream */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00409960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x409960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_00c48350(this,0,0x38);
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  F_004cb7f0();
  uVar1 = F_004cb5f0(this,param_3,((char *)REFP(0x1082740)),0x38);
  if (uVar1 != 0) {
    F_004cb6e0(0x4dbf,uVar1);
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  return 1;
}

/* ref: Global::InitInflateStream */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004099d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4099d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_00c48350(this,0,0x38);
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  F_004cb7f0();
  uVar1 = F_004cd3d0(this,((char *)REFP(0x1082748)),0x38);
  if (uVar1 != 0) {
    F_004cb6e0(0x4dbf,uVar1);
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  return 1;
}

/* ref: Global::BlowfishInit */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00409a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x409a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  char * pcVar1;
  uint * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 * puVar8;
  int local_8;
  
  F_00c46aa0((int)this + 0x48,&REFG(undefined4, 0x12facd0),0x1000);
  puVar8 = &REFG(undefined4, 0x12fac88);
  puVar3 = this;
  for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 - 1) {
    *puVar3 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &REFG(undefined4, 0x12facd0);
  puVar8 = ((undefined4 *)GEN_TOP(((int)this + 0x48)));
  do {
    iVar7 = 0x100;
    do {
      *puVar8 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar8 = puVar8 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
  } while ((int)puVar3 < 0x12fbcd0);
  iVar7 = 0;
  local_8 = 0;
  do {
    pcVar1 = ((char *)GEN_TOP((iVar7 + (*(int *)&gen_args[0]))));
    iVar4 = iVar7 + 1;
    if ((*(int *)&gen_args[1]) <= iVar4) {
      iVar4 = 0;
    }
    iVar5 = iVar4 + 1;
    if ((*(int *)&gen_args[1]) <= iVar5) {
      iVar5 = 0;
    }
    iVar6 = iVar5 + 1;
    if ((*(int *)&gen_args[1]) <= iVar6) {
      iVar6 = 0;
    }
    iVar7 = iVar6 + 1;
    if ((*(int *)&gen_args[1]) <= iVar7) {
      iVar7 = 0;
    }
    puVar2 = ((uint *)GEN_TOP(((int)this + local_8 * 4)));
    *puVar2 = *puVar2 ^ ((int)*((char *)GEN_TOP((iVar6 + (*(int *)&gen_args[0])))) |
                        ((int)*((char *)GEN_TOP((iVar5 + (*(int *)&gen_args[0])))) |
                        ((int)*((char *)GEN_TOP((iVar4 + (*(int *)&gen_args[0])))) | (int)*pcVar1 << 8) << 8) << 8);
    local_8 = local_8 + 1;
  } while (local_8 < 0x12);
  iVar7 = 0;
  (*(int *)&gen_args[1]) = 0;
  (*(int *)&gen_args[0]) = 0;
  do {
    F_0040d1d0(this GEN_EDX_ARG,&(*(int *)&gen_args[1]),&(*(int *)&gen_args[0]));
    *((int *)GEN_TOP(((int)this + iVar7 * 4))) = (*(int *)&gen_args[1]);
    *((int *)GEN_TOP(((int)this + iVar7 * 4 + 4))) = (*(int *)&gen_args[0]);
    iVar7 = iVar7 + 2;
  } while (iVar7 < 0x12);
  puVar8 = ((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  local_8 = 4;
  do {
    iVar7 = 0x80;
    do {
      F_0040d1d0(this GEN_EDX_ARG,&(*(int *)&gen_args[1]),&(*(int *)&gen_args[0]));
      puVar8[-1] = (*(int *)&gen_args[1]);
      *puVar8 = (*(int *)&gen_args[0]);
      puVar8 = puVar8 + 2;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return (uint)this;
}

/* ref: Global::ComputeCrc32 */
GEN_OWN GEN_FRAME uint GEN_FASTCALL F_00409b90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x409b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = F_00408010(param_3,param_1,param_2);
  return uVar1;
}

/* ref: Client::System::Crypt::Crc32::Update */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00409bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x409bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)(this + 4) = 0;
    return 0;
  }
  uVar1 = F_00408010(*(undefined4 *)(this + 4),param_1,param_2);
  *(uint *)(this + 4) = uVar1;
  return uVar1;
}

/* ref: Global::WriteHuffmanTable */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00409be0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x409be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x13000, 0, 4);
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 * puVar7;
  uint uVar8;
  uint uVar9;
  int * piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char * pcVar14;
  uint uVar15;
  
  (*(uint *)(gen_frame + 0x12ff8)) = 0x409bed;
  (*(uint *)(gen_frame + 0x12ff8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(uint *)(gen_frame + 0x10000)) = 0x100;
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x12bf8)),0,0x400);
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x127f8)),0,0x400);
  uVar11 = 0;
  piVar10 = (int *)(((char *)(gen_frame + 0x10018)) + 4);
  do {
    *(char *)(piVar10 - 1) = (char)uVar11 - 0x80;
    *piVar10 = *((int *)GEN_TOP((param_2 + uVar11 * 4))) + 1;
    piVar10[-2] = 0;
    piVar10[-4] = 0;
    piVar10[-3] = 0;
    uVar11 = uVar11 + 1;
    piVar10 = piVar10 + 5;
  } while (uVar11 < 0x100);
  puVar7 = ((undefined4 *)(gen_frame + 0x11414));
  iVar12 = 0xff;
  do {
    puVar7[2] = 0xffffffff;
    *puVar7 = 0;
    puVar7[-2] = 0;
    puVar7[-1] = 0;
    puVar7 = puVar7 + 5;
    iVar12 = iVar12 - 1;
  } while (iVar12 != 0);
  F_00c495ef(&(*(undefined * PTR32 *)(gen_frame + 0x10008)),"huffmanDebug.txt",((char *)REFP(0x1084750)));
  pcVar14 = ((char *)(gen_frame + 0x10018));
  iVar12 = 0x100;
  do {
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),((char *)REFP(0x1084768)),(int)*pcVar14,*(undefined4 *)(pcVar14 + 4));
    pcVar14 = pcVar14 + 0x14;
    iVar12 = iVar12 - 1;
  } while (iVar12 != 0);
  F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x10008)));
  piVar10 = ((int *)(gen_frame + 0x1140c));
  while( true ) {
    uVar15 = 0;
    uVar11 = 1000;
    if ((*(uint *)(gen_frame + 0x10000)) == 0) break;
    (*(int * PTR32 *)(gen_frame + 0x10004)) = (int *)(((char *)(gen_frame + 0x10018)) + 4);
    uVar8 = 1000;
    uVar13 = uVar11;
    do {
      iVar12 = *(*(int * PTR32 *)(gen_frame + 0x10004));
      uVar9 = uVar8;
      uVar11 = uVar13;
      if ((((iVar12 != -1) && (uVar9 = uVar13, uVar11 = uVar15, uVar13 != 1000)) &&
          (*(int *)(((char *)(gen_frame + 0x10018)) + uVar13 * 0x14 + 4) <= iVar12)) &&
         ((uVar8 == 1000 ||
          (uVar9 = uVar8, uVar11 = uVar13, iVar12 < *(int *)(((char *)(gen_frame + 0x10018)) + uVar8 * 0x14 + 4))))) {
        uVar9 = uVar15;
        uVar11 = uVar13;
      }
      (*(int * PTR32 *)(gen_frame + 0x10004)) = (*(int * PTR32 *)(gen_frame + 0x10004)) + 5;
      uVar15 = uVar15 + 1;
      uVar8 = uVar9;
      uVar13 = uVar11;
    } while (uVar15 < (*(uint *)(gen_frame + 0x10000)));
    if (uVar9 == 1000) break;
    iVar4 = uVar11 * 0x14;
    iVar12 = *(int *)(((char *)(gen_frame + 0x10018)) + iVar4 + 4);
    iVar5 = uVar9 * 0x14;
    iVar2 = *(int *)(((char *)(gen_frame + 0x10018)) + iVar5 + 4);
    *(undefined1 *)(piVar10 + 3) = 0;
    piVar10[4] = iVar12 + iVar2;
    *piVar10 = (int)(((int *)(gen_frame + 0x1000c)) + uVar11 * 5);
    ((char *)(gen_frame + 0x10018))[(int)(iVar4 + 1)] = '\0';
    pcVar14 = ((char *)(gen_frame + 0x10018)) + iVar4 + 4;
    pcVar14[0] = -1;
    pcVar14[1] = -1;
    pcVar14[2] = -1;
    pcVar14[3] = -1;
    piVar10[1] = (int)(((int *)(gen_frame + 0x1000c)) + uVar9 * 5);
    ((char *)(gen_frame + 0x10018))[(int)(iVar5 + 1)] = '\x01';
    pcVar14 = ((char *)(gen_frame + 0x10018)) + iVar5 + 4;
    pcVar14[0] = -1;
    pcVar14[1] = -1;
    pcVar14[2] = -1;
    pcVar14[3] = -1;
    ((int *)(gen_frame + 0x1000c))[(int)(uVar11 * 5 + 2)] = (int)piVar10;
    (*(uint *)(gen_frame + 0x10000)) = (*(uint *)(gen_frame + 0x10000)) + 1;
    ((int *)(gen_frame + 0x1000c))[(int)(uVar9 * 5 + 2)] = (int)piVar10;
    piVar10 = piVar10 + 5;
  }
  if ((((int *)(gen_frame + 0x1000c))[(int)(uVar11 * 5)] == 0) && (((int *)(gen_frame + 0x1000c))[(int)(uVar11 * 5 + 1)] == 0)) {
    (&(*(undefined4 *)(gen_frame + 0x127f8)))[uVar11] = 1;
    (&(*(undefined4 *)(gen_frame + 0x12bf8)))[uVar11] = 1;
  }
  else {
    piVar10 = ((int *)(gen_frame + 0x1000c)) + 2;
    (*(int * PTR32 *)(gen_frame + 0x10004)) = ((int *)GEN_TOP(0x0));
    do {
      piVar3 = piVar10 - 2;
      uVar11 = 0x20;
      iVar12 = *piVar10;
      piVar1 = piVar10;
      while (iVar12 != 0) {
        if (uVar11 == 0) {
          *((undefined4 *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + (int)(*(int * PTR32 *)(gen_frame + 0x10004))))) = 10000;
        }
        uVar11 = uVar11 - 1;
        bVar6 = (byte)uVar11 & 7;
        *((byte *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + (uVar11 >> 3) + (int)(*(int * PTR32 *)(gen_frame + 0x10004))))) =
             (~('\x01' << bVar6) & *((byte *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + (uVar11 >> 3) + (int)(*(int * PTR32 *)(gen_frame + 0x10004)))))) +
             (*((char *)GEN_TOP(((int)piVar3 + 0xd))) << bVar6);
        piVar3 = ((int *)GEN_TOP(*piVar1));
        piVar1 = piVar3 + 2;
        iVar12 = piVar3[2];
      }
      *((uint *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + (int)(*(int * PTR32 *)(gen_frame + 0x10004))))) = 0x20 - uVar11;
      *((uint *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + (int)(*(int * PTR32 *)(gen_frame + 0x10004))))) =
           *((uint *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + (int)(*(int * PTR32 *)(gen_frame + 0x10004))))) >> GEN_SHC((byte)uVar11, (unsigned int)(uintptr_t)uVar11);
      (*(int * PTR32 *)(gen_frame + 0x10004)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x10004)) + 4)));
      piVar10 = piVar10 + 5;
    } while ((*(int * PTR32 *)(gen_frame + 0x10004)) < 0x400);
  }
  F_00c495ef(&(*(undefined * PTR32 *)(gen_frame + 0x10008)),"huffmanDebug.txt","a");
  uVar11 = 0;
  pcVar14 = ((char *)(gen_frame + 0x10018));
  do {
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),((char *)REFP(0x1084788)),(int)*pcVar14,*((undefined4 *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + uVar11))),
             *((undefined4 *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11))));
    uVar15 = 0;
    if (*((int *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11))) != 0) {
      do {
        F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x1084794),
                 (int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + (uVar15 >> 3) + uVar11))) >> ((byte)uVar15 & 7) & 1)
        ;
        uVar15 = uVar15 + 1;
      } while (uVar15 < *((uint *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11))));
    }
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),((char *)REFP(0x1084798)));
    uVar11 = uVar11 + 4;
    pcVar14 = pcVar14 + 0x14;
  } while (uVar11 < 0x400);
  F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x10008)));
  pcVar14 = ((char *)(gen_frame + 0x10018));
  uVar11 = 0;
  do {
    F_00c4922b(pcVar14,1,1,param_1);
    F_00c4922b(((undefined *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + uVar11))),4,1,param_1);
    F_00c4922b(((undefined *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11))),4,1,param_1);
    uVar11 = uVar11 + 4;
    pcVar14 = pcVar14 + 0x14;
  } while (uVar11 < 0x400);
  F_00c495ef(&(*(undefined * PTR32 *)(gen_frame + 0x10008)),"huffmanDebug.txt","a");
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),((char *)REFP(0x10847b4)));
  uVar11 = 0;
  pcVar14 = ((char *)(gen_frame + 0x10018));
  do {
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x10847d0),(int)*pcVar14);
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x10847d4),(int)*(char *)(&(*(undefined4 *)(gen_frame + 0x12bf8)) + uVar11));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x10847d8),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + uVar11 * 4 + 1))));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x10847dc),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + uVar11 * 4 + 2))));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x10847e0),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + uVar11 * 4 + 3))));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x10847e4),(int)*(char *)(&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x10847e8),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11 * 4 + 1))));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x10847ec),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11 * 4 + 2))));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x10847f0),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11 * 4 + 3))));
    uVar11 = uVar11 + 1;
    pcVar14 = pcVar14 + 0x14;
  } while (uVar11 < 0xff);
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x10847f8),(int)((char *)(gen_frame + 0x10018))[(int)(uVar11 * 0x14)]);
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x10847fc),(int)*(char *)(&(*(undefined4 *)(gen_frame + 0x12bf8)) + uVar11));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x1084800),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + uVar11 * 4 + 1))));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x1084804),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + uVar11 * 4 + 2))));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x1084808),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bf8)) + uVar11 * 4 + 3))));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x108480c),(int)*(char *)(&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x1084810),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11 * 4 + 1))));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),&REFG(undefined, 0x1084814),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11 * 4 + 2))));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x10008)),((char *)REFP(0x1084818)),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127f8)) + uVar11 * 4 + 3))));
  F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x10008)));
  return 1;
}

/* ref: Global::GenerateHuffmanTableFile */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0040a250(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40a250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x13004, 12, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 * puVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  int * piVar9;
  int * piVar10;
  int * piVar11;
  int * piVar12;
  uint uVar13;
  char * pcVar14;
  int * piVar15;
  
  (*(uint *)(gen_frame + 0x12ffc)) = 0x40a25d;
  (*(uint *)(gen_frame + 0x12ffc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(int * PTR32 *)(gen_frame + 0x10004)) = ((int *)GEN_TOP(0x100));
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x12bfc)),0,0x400);
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x127fc)),0,0x400);
  uVar7 = 0;
  piVar12 = (int *)(((char *)(gen_frame + 0x1001c)) + 4);
  do {
    *(char *)(piVar12 - 1) = (char)uVar7 - 0x80;
    *piVar12 = *((int *)GEN_TOP((param_1 + uVar7 * 4))) + 1;
    piVar12[-2] = 0;
    piVar12[-4] = 0;
    piVar12[-3] = 0;
    uVar7 = uVar7 + 1;
    piVar12 = piVar12 + 5;
  } while (uVar7 < 0x100);
  puVar5 = ((undefined4 *)(gen_frame + 0x11418));
  iVar8 = 0xff;
  piVar12 = ((int *)GEN_TOP(0x100));
  do {
    puVar5[2] = 0xffffffff;
    *puVar5 = 0;
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    puVar5 = puVar5 + 5;
    iVar8 = iVar8 - 1;
  } while (iVar8 != 0);
  F_00c495ef(&(*(undefined * PTR32 *)(gen_frame + 0x1000c)),"huffmanDebug.txt",((char *)REFP(0x1084820)));
  pcVar14 = ((char *)(gen_frame + 0x1001c));
  iVar8 = 0x100;
  do {
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),((char *)REFP(0x1084838)),(int)*pcVar14,*(undefined4 *)(pcVar14 + 4));
    pcVar14 = pcVar14 + 0x14;
    iVar8 = iVar8 - 1;
  } while (iVar8 != 0);
  F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x1000c)));
  piVar11 = ((int *)(gen_frame + 0x11410));
  while( true ) {
    piVar15 = ((int *)GEN_TOP(0x0));
    piVar9 = ((int *)GEN_TOP(0x3e8));
    if (piVar12 == ((int *)GEN_TOP(0x0))) break;
    (*(int * PTR32 *)(gen_frame + 0x10008)) = (int *)(((char *)(gen_frame + 0x1001c)) + 4);
    piVar12 = ((int *)GEN_TOP(0x3e8));
    piVar10 = piVar9;
    do {
      iVar8 = *(*(int * PTR32 *)(gen_frame + 0x10008));
      piVar6 = piVar12;
      piVar9 = piVar10;
      if ((((iVar8 != -1) && (piVar6 = piVar10, piVar9 = piVar15, piVar10 != ((int *)GEN_TOP(0x3e8)))) &&
          (*(int *)(((char *)(gen_frame + 0x1001c)) + (int)((int)(uintptr_t)piVar10) * 0x14 + 4) <= iVar8)) &&
         ((piVar12 == ((int *)GEN_TOP(0x3e8)) ||
          (piVar6 = piVar12, piVar9 = piVar10,
          iVar8 < *(int *)(((char *)(gen_frame + 0x1001c)) + (int)((int)(uintptr_t)piVar12) * 0x14 + 4))))) {
        piVar6 = piVar15;
        piVar9 = piVar10;
      }
      (*(int * PTR32 *)(gen_frame + 0x10008)) = (*(int * PTR32 *)(gen_frame + 0x10008)) + 5;
      piVar15 = ((int *)GEN_TOP(((int)piVar15 + 1)));
      piVar12 = piVar6;
      piVar10 = piVar9;
    } while (piVar15 < (*(int * PTR32 *)(gen_frame + 0x10004)));
    if (piVar6 == ((int *)GEN_TOP(0x3e8))) break;
    iVar2 = (int)((int)(uintptr_t)piVar9) * 0x14;
    iVar8 = *(int *)(((char *)(gen_frame + 0x1001c)) + iVar2 + 4);
    iVar3 = (int)((int)(uintptr_t)piVar6) * 0x14;
    iVar1 = *(int *)(((char *)(gen_frame + 0x1001c)) + iVar3 + 4);
    *(undefined1 *)(piVar11 + 3) = 0;
    piVar11[4] = iVar8 + iVar1;
    *piVar11 = (int)(((int *)(gen_frame + 0x10010)) + (int)((int)(uintptr_t)piVar9) * 5);
    ((char *)(gen_frame + 0x1001c))[(int)(iVar2 + 1)] = '\0';
    pcVar14 = ((char *)(gen_frame + 0x1001c)) + iVar2 + 4;
    pcVar14[0] = -1;
    pcVar14[1] = -1;
    pcVar14[2] = -1;
    pcVar14[3] = -1;
    piVar11[1] = (int)(((int *)(gen_frame + 0x10010)) + (int)((int)(uintptr_t)piVar6) * 5);
    ((char *)(gen_frame + 0x1001c))[(int)(iVar3 + 1)] = '\x01';
    pcVar14 = ((char *)(gen_frame + 0x1001c)) + iVar3 + 4;
    pcVar14[0] = -1;
    pcVar14[1] = -1;
    pcVar14[2] = -1;
    pcVar14[3] = -1;
    ((int *)(gen_frame + 0x10010))[(int)((int)((int)(uintptr_t)piVar9) * 5 + 2)] = (int)piVar11;
    piVar12 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x10004)) + 1)));
    ((int *)(gen_frame + 0x10010))[(int)((int)((int)(uintptr_t)piVar6) * 5 + 2)] = (int)piVar11;
    (*(int * PTR32 *)(gen_frame + 0x10004)) = piVar12;
    piVar11 = piVar11 + 5;
  }
  if ((((int *)(gen_frame + 0x10010))[(int)((int)((int)(uintptr_t)piVar9) * 5)] == 0) && (((int *)(gen_frame + 0x10010))[(int)((int)((int)(uintptr_t)piVar9) * 5 + 1)] == 0)) {
    (&(*(undefined4 *)(gen_frame + 0x127fc)))[(int)piVar9] = 1;
    (&(*(undefined4 *)(gen_frame + 0x12bfc)))[(int)piVar9] = 1;
  }
  else {
    piVar12 = ((int *)(gen_frame + 0x10010)) + 2;
    (*(int * PTR32 *)(gen_frame + 0x10008)) = ((int *)GEN_TOP(0x0));
    do {
      piVar11 = piVar12 - 2;
      uVar7 = 0x20;
      if (*piVar12 != 0) {
        (*(int * PTR32 *)(gen_frame + 0x10004)) = piVar12;
        do {
          if (uVar7 == 0) {
            *((undefined4 *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + (int)(*(int * PTR32 *)(gen_frame + 0x10008))))) = 10000;
          }
          uVar7 = uVar7 - 1;
          bVar4 = (byte)uVar7 & 7;
          *((byte *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + (int)(*(int * PTR32 *)(gen_frame + 0x10008)) + (uVar7 >> 3)))) =
               (~('\x01' << bVar4) & *((byte *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + (int)(*(int * PTR32 *)(gen_frame + 0x10008)) + (uVar7 >> 3))))) +
               (*((char *)GEN_TOP(((int)piVar11 + 0xd))) << bVar4);
          piVar11 = ((int *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x10004))));
          (*(int * PTR32 *)(gen_frame + 0x10004)) = piVar11 + 2;
        } while (piVar11[2] != 0);
      }
      *((uint *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + (int)(*(int * PTR32 *)(gen_frame + 0x10008))))) = 0x20 - uVar7;
      *((uint *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + (int)(*(int * PTR32 *)(gen_frame + 0x10008))))) =
           *((uint *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + (int)(*(int * PTR32 *)(gen_frame + 0x10008))))) >> GEN_SHC((byte)uVar7, (unsigned int)(uintptr_t)uVar7);
      piVar11 = (*(int * PTR32 *)(gen_frame + 0x10008)) + 1;
      piVar12 = piVar12 + 5;
      (*(int * PTR32 *)(gen_frame + 0x10008)) = piVar11;
    } while (piVar11 < ((int *)GEN_TOP(0x400)));
  }
  F_00c495ef(&(*(undefined * PTR32 *)(gen_frame + 0x1000c)),"huffmanDebug.txt","a");
  uVar7 = 0;
  pcVar14 = ((char *)(gen_frame + 0x1001c));
  do {
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),((char *)REFP(0x1084858)),(int)*pcVar14,*((undefined4 *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + uVar7))),
             *((undefined4 *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7))));
    uVar13 = 0;
    if (*((int *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7))) != 0) {
      do {
        F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x1084864),
                 (int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + (uVar13 >> 3) + uVar7))) >> ((byte)uVar13 & 7) & 1);
        uVar13 = uVar13 + 1;
      } while (uVar13 < *((uint *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7))));
    }
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),((char *)REFP(0x1084868)));
    uVar7 = uVar7 + 4;
    pcVar14 = pcVar14 + 0x14;
  } while (uVar7 < 0x400);
  F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x1000c)));
  F_00c495ef(&(*(undefined * PTR32 *)(gen_frame + 0x10000)),((char *)REFP(0x1084870)),((char *)REFP(0x108486c)));
  pcVar14 = ((char *)(gen_frame + 0x1001c));
  uVar7 = 0;
  do {
    F_00c4922b(pcVar14,1,1,(*(undefined * PTR32 *)(gen_frame + 0x10000)));
    F_00c4922b(((undefined *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + uVar7))),4,1,(*(undefined * PTR32 *)(gen_frame + 0x10000)));
    F_00c4922b(((undefined *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7))),4,1,(*(undefined * PTR32 *)(gen_frame + 0x10000)));
    uVar7 = uVar7 + 4;
    pcVar14 = pcVar14 + 0x14;
  } while (uVar7 < 0x400);
  F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x10000)));
  F_00c495ef(&(*(undefined * PTR32 *)(gen_frame + 0x1000c)),"huffmanDebug.txt","a");
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),((char *)REFP(0x108489c)));
  uVar7 = 0;
  pcVar14 = ((char *)(gen_frame + 0x1001c));
  do {
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848b8),(int)*pcVar14);
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848bc),(int)*(char *)(&(*(undefined4 *)(gen_frame + 0x12bfc)) + uVar7));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848c0),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + uVar7 * 4 + 1))));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848c4),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + uVar7 * 4 + 2))));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848c8),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + uVar7 * 4 + 3))));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848cc),(int)*(char *)(&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848d0),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7 * 4 + 1))));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848d4),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7 * 4 + 2))));
    F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848d8),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7 * 4 + 3))));
    uVar7 = uVar7 + 1;
    pcVar14 = pcVar14 + 0x14;
  } while (uVar7 < 0xff);
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848e0),(int)((char *)(gen_frame + 0x1001c))[(int)(uVar7 * 0x14)]);
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848e4),(int)*(char *)(&(*(undefined4 *)(gen_frame + 0x12bfc)) + uVar7));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848e8),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + uVar7 * 4 + 1))));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848ec),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + uVar7 * 4 + 2))));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848f0),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x12bfc)) + uVar7 * 4 + 3))));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848f4),(int)*(char *)(&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848f8),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7 * 4 + 1))));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),&REFG(undefined, 0x10848fc),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7 * 4 + 2))));
  F_00c49386((*(undefined * PTR32 *)(gen_frame + 0x1000c)),((char *)REFP(0x1084900)),(int)*((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x127fc)) + uVar7 * 4 + 3))));
  uVar7 = F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x1000c)));
  return uVar7;
}

/* ref: Global::BuildHuffmanDecodeTree */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0040a8d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40a8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  uint * puVar7;
  int * piVar8;
  int iVar9;
  
  if (param_3 < 0x900) {
    return 0xff;
  }
  *param_1 = (int)(param_1 + 1);
  param_1[3] = 0;
  *((undefined4 *)GEN_TOP((*param_1 + 4))) = 0;
  puVar7 = ((uint *)GEN_TOP((param_2 + 5)));
  iVar9 = 1;
  *((undefined4 *)GEN_TOP(*param_1)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = puVar7;
  (*(int *)(gen_frame + 0x4)) = 0x100;
  do {
    uVar2 = *((undefined1 *)GEN_TOP(((int)puVar7 - 5)));
    piVar5 = ((int *)GEN_TOP(*param_1));
    (*(uint *)(gen_frame + 0x0)) = puVar7[-1];
    uVar3 = *puVar7;
    (*(uint *)(gen_frame + 0xc)) = uVar3;
    param_2 = 0;
    if (uVar3 != 0) {
      piVar8 = param_1 + iVar9 * 5 + 1;
      piVar4 = piVar5;
      do {
        if ((*((char *)GEN_TOP(((int)&(*(uint *)(gen_frame + 0x0)) + (param_2 >> 3)))) >> ((byte)param_2 & 7) & 1U) == 0) {
          piVar5 = ((int *)GEN_TOP(*piVar4));
          if (((int *)GEN_TOP(*piVar4)) == ((int *)GEN_TOP(0x0))) {
            piVar8[2] = (int)piVar4;
            piVar6 = piVar4;
LAB_0040a96b: ;
            piVar8[1] = 0;
            *piVar8 = 0;
            iVar9 = iVar9 + 1;
            *piVar6 = (int)piVar8;
            piVar5 = piVar8;
            piVar8 = piVar8 + 5;
          }
        }
        else {
          piVar6 = piVar4 + 1;
          piVar5 = ((int *)GEN_TOP(*piVar6));
          if (piVar5 == ((int *)GEN_TOP(0x0))) {
            piVar8[2] = (int)piVar4;
            goto LAB_0040a96b;
          }
        }
        param_2 = param_2 + 1;
        piVar4 = piVar5;
      } while (param_2 < uVar3);
    }
    if (uVar3 != 0) {
      *(undefined1 *)(piVar5 + 3) = uVar2;
    }
    puVar7 = ((uint *)GEN_TOP(((int)puVar7 + 9)));
    iVar1 = (*(int *)(gen_frame + 0x4)) - 1;
    (*(int *)(gen_frame + 0x4)) = iVar1;
    (*(uint * PTR32 *)(gen_frame + 0x8)) = puVar7;
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}

/* ref: Global::MD5Transform */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_0040a9b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40a9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  uint uVar1;
  undefined2 * puVar2;
  uint uVar3;
  byte * pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  puVar2 = ((undefined2 *)GEN_TOP((param_2 + 2)));
  pbVar4 = ((byte *)(gen_frame + 0x0));
  iVar6 = 0x10;
  do {
    *(uint *)pbVar4 =
         CONCAT31(CONCAT21(*puVar2,*((undefined1 *)GEN_TOP(((int)puVar2 - 1)))),*(undefined1 *)(puVar2 - 1));
    pbVar4 = pbVar4 + 4;
    puVar2 = puVar2 + 2;
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  uVar7 = param_1[1];
  uVar5 = param_1[2];
  uVar3 = (~uVar7 & param_1[3] | uVar5 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) - 0x28955b88 + *param_1;
  uVar1 = (uVar3 * 0x80 | uVar3 >> 0x19) + uVar7;
  uVar3 = (~uVar1 & uVar5 | uVar7 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) - 0x173848aa + param_1[3];
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar5 = (~uVar3 & uVar7 | uVar3 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x242070db + uVar5;
  uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) + uVar3;
  uVar7 = (~uVar5 & uVar1 | uVar3 & uVar5) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) - 0x3e423112 + uVar7;
  uVar7 = (uVar7 >> 10 | uVar7 * 0x400000) + uVar5;
  uVar1 = (~uVar7 & uVar3 | uVar5 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) - 0xa83f051 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar7;
  uVar3 = (~uVar1 & uVar5 | uVar7 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) + 0x4787c62a + uVar3;
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar5 = (~uVar3 & uVar7 | uVar3 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) - 0x57cfb9ed + uVar5;
  uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) + uVar3;
  uVar7 = (~uVar5 & uVar1 | uVar3 & uVar5) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)) - 0x2b96aff + uVar7;
  uVar7 = (uVar7 >> 10 | uVar7 * 0x400000) + uVar5;
  uVar1 = (~uVar7 & uVar3 | uVar5 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) + 0x698098d8 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar7;
  uVar3 = (~uVar1 & uVar5 | uVar7 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) - 0x74bb0851 + uVar3;
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar5 = (~uVar3 & uVar7 | uVar3 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) - 0xa44f + uVar5;
  uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) + uVar3;
  uVar7 = (~uVar5 & uVar1 | uVar3 & uVar5) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) - 0x76a32842 + uVar7;
  uVar7 = (uVar7 >> 10 | uVar7 * 0x400000) + uVar5;
  uVar1 = (~uVar7 & uVar3 | uVar5 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) + 0x6b901122 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar7;
  uVar3 = (~uVar1 & uVar5 | uVar7 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) - 0x2678e6d + uVar3;
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar5 = (~uVar3 & uVar7 | uVar3 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) - 0x5986bc72 + uVar5;
  uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) + uVar3;
  uVar7 = (~uVar5 & uVar1 | uVar3 & uVar5) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60)) + 0x49b40821 + uVar7;
  uVar7 = (uVar7 >> 10 | uVar7 * 0x400000) + uVar5;
  uVar1 = (~uVar3 & uVar5 | uVar3 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) - 0x9e1da9e + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar7;
  uVar3 = (~uVar5 & uVar7 | uVar5 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) - 0x3fbf4cc0 + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar5 = (~uVar7 & uVar1 | uVar3 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) + 0x265e5a51 + uVar5;
  uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar3;
  uVar7 = (~uVar1 & uVar3 | uVar5 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) - 0x16493856 + uVar7;
  uVar7 = (uVar7 >> 0xc | uVar7 * 0x100000) + uVar5;
  uVar1 = (~uVar3 & uVar5 | uVar3 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) - 0x29d0efa3 + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar7;
  uVar3 = (~uVar5 & uVar7 | uVar5 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) + 0x2441453 + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar5 = (~uVar7 & uVar1 | uVar3 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60)) - 0x275e197f + uVar5;
  uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar3;
  uVar7 = (~uVar1 & uVar3 | uVar5 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) - 0x182c0438 + uVar7;
  uVar7 = (uVar7 >> 0xc | uVar7 * 0x100000) + uVar5;
  uVar1 = (~uVar3 & uVar5 | uVar3 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) + 0x21e1cde6 + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar7;
  uVar3 = (~uVar5 & uVar7 | uVar5 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) - 0x3cc8f82a + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar5 = (~uVar7 & uVar1 | uVar3 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) - 0xb2af279 + uVar5;
  uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar3;
  uVar7 = (~uVar1 & uVar3 | uVar5 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) + 0x455a14ed + uVar7;
  uVar7 = (uVar7 >> 0xc | uVar7 * 0x100000) + uVar5;
  uVar1 = (~uVar3 & uVar5 | uVar3 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) - 0x561c16fb + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar7;
  uVar3 = (~uVar5 & uVar7 | uVar5 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) - 0x3105c08 + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar5 = (~uVar7 & uVar1 | uVar3 & uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)) + 0x676f02d9 + uVar5;
  uVar5 = (uVar5 * 0x4000 | uVar5 >> 0x12) + uVar3;
  uVar7 = (~uVar1 & uVar3 | uVar5 & uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) - 0x72d5b376 + uVar7;
  uVar7 = (uVar7 >> 0xc | uVar7 * 0x100000) + uVar5;
  uVar1 = (uVar3 ^ uVar5 ^ uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) - 0x5c6be + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar7;
  uVar3 = (uVar5 ^ uVar7 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) - 0x788e097f + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar5 = (uVar3 ^ uVar7 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) + 0x6d9d6122 + uVar5;
  uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar3;
  uVar7 = (uVar3 ^ uVar5 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) - 0x21ac7f4 + uVar7;
  uVar7 = (uVar7 >> 9 | uVar7 * 0x800000) + uVar5;
  uVar1 = (uVar3 ^ uVar5 ^ uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) - 0x5b4115bc + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar7;
  uVar3 = (uVar5 ^ uVar7 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) + 0x4bdecfa9 + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar5 = (uVar3 ^ uVar7 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)) - 0x944b4a0 + uVar5;
  uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar3;
  uVar7 = (uVar3 ^ uVar5 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) - 0x41404390 + uVar7;
  uVar7 = (uVar7 >> 9 | uVar7 * 0x800000) + uVar5;
  uVar1 = (uVar3 ^ uVar5 ^ uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) + 0x289b7ec6 + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar7;
  uVar3 = (uVar5 ^ uVar7 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) - 0x155ed806 + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar5 = (uVar3 ^ uVar7 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) - 0x2b10cf7b + uVar5;
  uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar3;
  uVar7 = (uVar3 ^ uVar5 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + 0x4881d05 + uVar7;
  uVar7 = (uVar7 >> 9 | uVar7 * 0x800000) + uVar5;
  uVar1 = (uVar3 ^ uVar5 ^ uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) - 0x262b2fc7 + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar7;
  uVar3 = (uVar5 ^ uVar7 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) - 0x1924661b + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar5 = (uVar3 ^ uVar7 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60)) + 0x1fa27cf8 + uVar5;
  uVar5 = (uVar5 * 0x10000 | uVar5 >> 0x10) + uVar3;
  uVar7 = (uVar3 ^ uVar5 ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) - 0x3b53a99b + uVar7;
  uVar7 = (uVar7 >> 9 | uVar7 * 0x800000) + uVar5;
  uVar1 = ((~uVar3 | uVar7) ^ uVar5) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) - 0xbd6ddbc + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar7;
  uVar3 = ((~uVar5 | uVar1) ^ uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)) + 0x432aff97 + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar5 = ((~uVar7 | uVar3) ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) - 0x546bdc59 + uVar5;
  uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar3;
  uVar7 = ((~uVar1 | uVar5) ^ uVar3) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) - 0x36c5fc7 + uVar7;
  uVar7 = (uVar7 >> 0xb | uVar7 * 0x200000) + uVar5;
  uVar1 = ((~uVar3 | uVar7) ^ uVar5) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) + 0x655b59c3 + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar7;
  uVar3 = ((~uVar5 | uVar1) ^ uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) - 0x70f3336e + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar5 = ((~uVar7 | uVar3) ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) - 0x100b83 + uVar5;
  uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar3;
  uVar7 = ((~uVar1 | uVar5) ^ uVar3) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) - 0x7a7ba22f + uVar7;
  uVar7 = (uVar7 >> 0xb | uVar7 * 0x200000) + uVar5;
  uVar1 = ((~uVar3 | uVar7) ^ uVar5) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) + 0x6fa87e4f + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar7;
  uVar3 = ((~uVar5 | uVar1) ^ uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60)) - 0x1d31920 + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar5 = ((~uVar7 | uVar3) ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) - 0x5cfebcec + uVar5;
  uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar3;
  uVar7 = ((~uVar1 | uVar5) ^ uVar3) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) + 0x4e0811a1 + uVar7;
  uVar7 = (uVar7 >> 0xb | uVar7 * 0x200000) + uVar5;
  uVar1 = ((~uVar3 | uVar7) ^ uVar5) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) - 0x8ac817e + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar7;
  uVar3 = ((~uVar5 | uVar1) ^ uVar7) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) - 0x42c50dcb + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar5 = ((~uVar7 | uVar3) ^ uVar1) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x2ad7d2bb + uVar5;
  uVar5 = (uVar5 * 0x8000 | uVar5 >> 0x11) + uVar3;
  *param_1 = *param_1 + uVar1;
  uVar7 = ((~uVar1 | uVar5) ^ uVar3) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) - 0x14792c6f + uVar7;
  param_1[1] = (uVar7 >> 0xb | uVar7 * 0x200000) + param_1[1] + uVar5;
  param_1[2] = param_1[2] + uVar5;
  iVar6 = param_1[3];
  param_1[3] = iVar6 + uVar3;
  return iVar6 + uVar3;
}

/* ref: Global::SHA1Result */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040b090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40b090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 1;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 100)));
  if (uVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 0x60))) == 0) {
      F_004095a0(this GEN_EDX_FWD);
      F_00c48350(((undefined *)GEN_TOP(((int)this + 0x20))),0,0x40);
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 1;
    }
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 1;
      *((char *)GEN_TOP((iVar1 + param_1))) =
           (char)(*((uint *)GEN_TOP(((int)this + (iVar1 >> 2) * 4))) >>
                 (('\x03' - ((byte)iVar1 & 3)) * '\b' & 0x1f));
      iVar1 = iVar2;
    } while (iVar2 < 0x14);
    uVar3 = 0;
  }
  return uVar3;
}

/* ref: Global::SHA1Input */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040b110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40b110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  undefined1 * puVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == ((undefined1 *)GEN_TOP(0x0))) {
    return 1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 100))) = 3;
    return 3;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 100)));
  puVar3 = param_1;
  if (uVar2 == 0) {
    do {
      param_2 = param_2 - 1;
      if (*((int *)GEN_TOP(((int)this + 100))) != 0) break;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x20 + (int)this))) = *puVar3;
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 1;
      piVar1 = ((int *)GEN_TOP(((int)this + 0x14)));
      *piVar1 = *piVar1 + 8;
      if (*piVar1 == 0) {
        piVar1 = ((int *)GEN_TOP(((int)this + 0x18)));
        *piVar1 = *piVar1 + 1;
        if (*piVar1 == 0) {
          *((undefined4 *)GEN_TOP(((int)this + 100))) = 1;
        }
      }
      if (*((int *)GEN_TOP(((int)this + 0x1c))) == 0x40) {
        F_00408ed0(this GEN_EDX_FWD);
      }
      puVar3 = puVar3 + 1;
    } while (param_2 != 0);
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: Client::System::Crypt::Crc32::Crc32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040b1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40b1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1084954));
  *(undefined4 *)(this + 4) = 0;
  if (param_1 != 0) {
    uVar1 = F_00408010(0,param_1,param_2);
  }
  *(uint *)(this + 4) = uVar1;
  return (uint)this;
}

/* ref: Global::InitDefaultHuffmanTree */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0040b1d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40b1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  byte bVar1;
  
  bVar1 = F_0040a8d0(param_1,&REFG(undefined, 0x12fbcd0),0x900);
  return bVar1;
}

/* ref: Global::MD5Update */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040b1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40b1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = param_2;
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x10))) + param_2 * 8;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10))) >> 3 & 0x3f;
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar3;
  if (uVar3 < param_2 * 8) {
    *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) + 1;
  }
  *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) + (param_2 >> 0x1d);
  uVar3 = -uVar2 + 0x40;
  if (param_2 < uVar3) {
    param_2 = 0;
  }
  else {
    F_00c46aa0(uVar2 + 0x18 + (int)this,param_1,uVar3);
    F_0040a9b0(this,(int)this + 0x18);
    for (uVar2 = -uVar2 + 0x7f; uVar2 < param_2; uVar2 = uVar2 + 0x40) {
      F_0040a9b0(this,param_1 - 0x3f + uVar2);
      uVar3 = uVar3 + 0x40;
    }
    uVar2 = 0;
    param_2 = uVar3;
  }
  uVar4 = F_00c46aa0(uVar2 + 0x18 + (int)this,param_2 + param_1,uVar1 - param_2);
  return (uint)uVar4;
}

/* ref: Global::MD5Final */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0040b2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40b2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x10, 0, 4);
  undefined1 * puVar1;
  int iVar2;
  undefined1 * puVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc));
  puVar1 = ((undefined1 *)GEN_TOP(((int)this + 0x10)));
  uVar4 = 0;
  do {
    ((undefined1 *)(gen_frame + 0x0))[(int)(uVar4)] = *puVar1;
    ((undefined1 *)(gen_frame + 0x0))[(int)(uVar4 + 1)] = puVar1[1];
    ((undefined1 *)(gen_frame + 0x0))[(int)(uVar4 + 2)] = puVar1[2];
    ((undefined1 *)(gen_frame + 0x0))[(int)(uVar4 + 3)] = puVar1[3];
    uVar4 = uVar4 + 4;
    puVar1 = puVar1 + 4;
  } while (uVar4 < 8);
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x10))) >> 3 & 0x3f;
  iVar2 = 0x38;
  if (0x37 < uVar4) {
    iVar2 = 0x78;
  }
  F_0040b1f0(this GEN_EDX_FWD,&REFG(undefined, 0x12fc5d0),iVar2 - uVar4);
  F_0040b1f0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),8);
  puVar1 = ((undefined1 *)GEN_TOP((param_1 + 1)));
  puVar3 = ((undefined1 *)GEN_TOP(((int)this + 2)));
  iVar2 = 4;
  do {
    puVar1[-1] = puVar3[-2];
    *puVar1 = puVar3[-1];
    puVar1[1] = *puVar3;
    puVar1[2] = puVar3[1];
    puVar3 = puVar3 + 4;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined4 *)this = 0x67452301;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0xefcdab89;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x98badcfe;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x10325476;
  return (uint)puVar3;
}

/* ref: FUN_0040b390 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040b390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40b390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = 0;
  puVar2 = this;
  do {
    *puVar2 = *((undefined4 *)GEN_TOP(((int)&REFG(undefined4, 0x12fbcd1) + uVar1)));
    puVar2[0x100] = *((undefined4 *)GEN_TOP(((int)&REFG(undefined4, 0x12fbcd5) + uVar1)));
    uVar1 = uVar1 + 9;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 0x900);
  F_0040a8d0((int)this + 0x800,&REFG(undefined, 0x12fbcd0),0x900);
  return (uint)this;
}

/* ref: Global::GetTimestampValue */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040b3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40b3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  undefined4 * puVar2;
  uint * puVar3;
  
  uVar1 = F_0040f1b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,((undefined *)GEN_TOP(((int)this + 0x84))));
  (*(uint *)(gen_frame + 0x4)) = uVar1;
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 8)))) {
    puVar2 = ((undefined4 *)GEN_TOP((uVar1 + 0xc)));
    if (0xf < *((uint *)GEN_TOP((uVar1 + 0x20)))) {
      puVar2 = ((undefined4 *)GEN_TOP(*puVar2));
    }
    uVar1 = F_0040d9f0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x94))),puVar2,
                            *((undefined4 *)GEN_TOP((uVar1 + 0x1c))));
    if (-1 < (int)uVar1) {
      puVar3 = &(*(uint *)(gen_frame + 0x4));
      goto LAB_0040b431;
    }
  }
  (*(uint *)(gen_frame + 0x0)) = *((uint *)GEN_TOP(((int)this + 8)));
  puVar3 = &(*(uint *)(gen_frame + 0x0));
LAB_0040b431: ;
  if (*puVar3 != *((uint *)GEN_TOP(((int)this + 8)))) {
    return *puVar3 + 0x28;
  }
  return (int)this + 0x30;
}

/* ref: Global::IsTimestampValid */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0040b450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40b450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  bVar1 = *(byte *)this;
  if (bVar1 == 0) {
    puVar2 = ((undefined4 *)GEN_TOP(F_0040b3e0(this GEN_EDX_FWD)));
    if (puVar2[4] == 0) {
      return 0;
    }
    if (0xf < (uint)puVar2[5]) {
      puVar2 = ((undefined4 *)GEN_TOP(*puVar2));
    }
    uVar5 = F_004098c0(puVar2);
    uVar3 = (uint)uVar5;
    uVar4 = F_0040dd00();
    if ((((uVar5 != 0) && ((int)(uVar5 >> 0x20) == 0)) && (uVar3 <= uVar4)) &&
       ((uVar3 <= uVar4 && (uVar4 - uVar3 < 0x4e21)))) {
      return 1;
    }
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: Global::EscapeSpaces */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_0040b4c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x40b4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char * PTR32 * PTR32 * pppcVar1;
  undefined4 * puVar2;
  char * PTR32 * PTR32 * PTR32 * ppppcVar3;
  int iVar4;
  char * PTR32 * PTR32 * PTR32 * ppppcVar5;
  ulonglong uVar6;
  
  pppcVar1 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  (*(uint *)(gen_frame + 0x18)) = 0xf;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = ((char * PTR32 * PTR32 *)GEN_TOP(((uint)pppcVar1 & 0xffffff00)));
  F_0040ec10(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1,0,0xffffffff);
  param_1[4] = 0;
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = ((undefined4 *)GEN_TOP(*param_1));
  }
  *(undefined1 *)puVar2 = 0;
  ppppcVar5 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[0];
  if ((*(uint *)(gen_frame + 0x18)) < 0x10) {
    ppppcVar5 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
  }
  while( true ) {
    ppppcVar3 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[0];
    if ((*(uint *)(gen_frame + 0x18)) < 0x10) {
      ppppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
    }
    ppppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppcVar3 + (*(int *)(gen_frame + 0x14)))));
    if (ppppcVar5 == ppppcVar3) break;
    if (*(char *)ppppcVar5 == ' ') {
      puVar2 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar2 = ((undefined4 *)GEN_TOP(*param_1));
      }
      iVar4 = param_1[4] + (int)puVar2;
      puVar2 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar2 = ((undefined4 *)GEN_TOP(*param_1));
      }
      if (iVar4 != 0) {
        iVar4 = iVar4 - (int)puVar2;
      }
      F_0040f080(param_1 GEN_EDX_ARG,iVar4,1,0x20);
    }
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),*(char *)ppppcVar5);
    puVar2 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar2 = ((undefined4 *)GEN_TOP(*param_1));
    }
    iVar4 = param_1[4] + (int)puVar2;
    puVar2 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar2 = ((undefined4 *)GEN_TOP(*param_1));
    }
    if (iVar4 != 0) {
      iVar4 = iVar4 - (int)puVar2;
    }
    F_0040f080(param_1 GEN_EDX_ARG,iVar4,1,(*(undefined4 *)(gen_frame + 0x0)));
    ppppcVar5 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppcVar5 + 1)));
  }
  if (0xf < (*(uint *)(gen_frame + 0x18))) {
    uVar6 = F_00429760(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[0],(*(uint *)(gen_frame + 0x18)) + 1,0x12f);
    ppppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP((uint)uVar6));
  }
  return (uint)ppppcVar3;
}

/* ref: Global::Base64EncodeToString */
GEN_OWN GEN_FRAME uint F_0040b5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40b5d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 * this;
  undefined4 * puVar4;
  uint uVar5;
  
  this = (*(undefined4 * PTR32 *)&gen_args[0]);
  uVar5 = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[5] = 0xf;
  (*(undefined4 * PTR32 *)&gen_args[0])[4] = 0;
  *(undefined1 *)(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
  if ((*(int *)&gen_args[2]) != 0) {
    do {
      (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) - 1;
      *((undefined1 *)GEN_TOP(((int)&(*(undefined4 * PTR32 *)&gen_args[0]) + uVar5))) = *(*(undefined1 * PTR32 *)&gen_args[1]);
      uVar5 = uVar5 + 1;
      (*(undefined1 * PTR32 *)&gen_args[1]) = (*(undefined1 * PTR32 *)&gen_args[1]) + 1;
      if (uVar5 == 3) {
        ((byte *)(gen_frame + 0x4))[0] = (byte)(*(undefined4 * PTR32 *)&gen_args[0]) >> 2;
        ((byte *)(gen_frame + 0x4))[1] = ((byte)(*(undefined4 * PTR32 *)&gen_args[0]) & 3) * '\x10' + ((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 1)))) >> 4);
        ((byte *)(gen_frame + 0x4))[3] = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 2)))) & 0x3f;
        ((byte *)(gen_frame + 0x4))[2] = ((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 1)))) & 0xf) * '\x04' + ((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 2)))) >> 6);
        (*(uint *)(gen_frame + 0x0)) = 0;
        do {
          uVar2 = (&REFG(undefined, 0x12fac48))[(int)(((byte *)(gen_frame + 0x4))[(int)((*(uint *)(gen_frame + 0x0)))])];
          iVar3 = this[4];
          if ((-iVar3 - 1U < 2) || (uVar5 = iVar3 + 1, uVar5 == 0xffffffff)) goto LAB_0040b795;
          if ((uint)this[5] < uVar5) {
            F_0040e340(this GEN_EDX_ARG,uVar5,iVar3);
          }
          else if (uVar5 == 0) {
            this[4] = 0;
            puVar4 = this;
            if (0xf < (uint)this[5]) {
              puVar4 = ((undefined4 *)GEN_TOP(*this));
            }
            *(undefined1 *)puVar4 = 0;
          }
          if (uVar5 != 0) {
            puVar4 = this;
            if (0xf < (uint)this[5]) {
              puVar4 = ((undefined4 *)GEN_TOP(*this));
            }
            *((undefined1 *)GEN_TOP(((int)puVar4 + this[4]))) = uVar2;
            this[4] = uVar5;
            puVar4 = this;
            if (0xf < (uint)this[5]) {
              puVar4 = ((undefined4 *)GEN_TOP(*this));
            }
            *((undefined1 *)GEN_TOP(((int)puVar4 + uVar5))) = 0;
          }
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
        } while ((*(uint *)(gen_frame + 0x0)) < 4);
        uVar5 = 0;
      }
    } while ((*(int *)&gen_args[2]) != 0);
    if (uVar5 != 0) {
      if (uVar5 < 3) {
        F_00c48350(((undefined *)GEN_TOP(((int)&(*(undefined4 * PTR32 *)&gen_args[0]) + uVar5))),0,3 - uVar5);
      }
      ((byte *)(gen_frame + 0x4))[0] = (byte)(*(undefined4 * PTR32 *)&gen_args[0]) >> 2;
      ((byte *)(gen_frame + 0x4))[1] = ((byte)(*(undefined4 * PTR32 *)&gen_args[0]) & 3) * '\x10' + ((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 1)))) >> 4);
      ((byte *)(gen_frame + 0x4))[3] = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 2)))) & 0x3f;
      ((byte *)(gen_frame + 0x4))[2] = ((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 1)))) & 0xf) * '\x04' + ((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 2)))) >> 6);
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
      if (uVar5 != 0xffffffff) {
        do {
          (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),(&REFG(undefined, 0x12fac48))[(int)(((byte *)(gen_frame + 0x4))[(int)((int)(*(undefined4 * PTR32 *)&gen_args[0]))])]);
          iVar3 = this[4];
          if ((-iVar3 - 1U < 2) || (uVar1 = iVar3 + 1, uVar1 == 0xffffffff)) goto LAB_0040b795;
          if ((uint)this[5] < uVar1) {
            F_0040e340(this GEN_EDX_ARG,uVar1,iVar3);
          }
          else if (uVar1 == 0) {
            this[4] = 0;
            puVar4 = this;
            if (0xf < (uint)this[5]) {
              puVar4 = ((undefined4 *)GEN_TOP(*this));
            }
            *(undefined1 *)puVar4 = 0;
          }
          if (uVar1 != 0) {
            puVar4 = this;
            if (0xf < (uint)this[5]) {
              puVar4 = ((undefined4 *)GEN_TOP(*this));
            }
            *((undefined1 *)GEN_TOP(((int)puVar4 + this[4]))) = (undefined1)(*(int *)&gen_args[2]);
            this[4] = uVar1;
            puVar4 = this;
            if (0xf < (uint)this[5]) {
              puVar4 = ((undefined4 *)GEN_TOP(*this));
            }
            *((undefined1 *)GEN_TOP(((int)puVar4 + uVar1))) = 0;
          }
          (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 1)));
        } while ((*(undefined4 * PTR32 *)&gen_args[0]) < ((undefined4 *)GEN_TOP((uVar5 + 1))));
      }
      while (uVar5 < 3) {
        iVar3 = this[4];
        uVar5 = uVar5 + 1;
        if ((-iVar3 - 1U < 2) || (uVar1 = iVar3 + 1, uVar1 == 0xffffffff)) {
LAB_0040b795: ;
                    
          F_00c4579a(((char *)REFP(0x10802b0)));
        }
        if ((uint)this[5] < uVar1) {
          F_0040e340(this GEN_EDX_ARG,uVar1,iVar3);
        }
        else if (uVar1 == 0) {
          this[4] = 0;
          puVar4 = this;
          if (0xf < (uint)this[5]) {
            puVar4 = ((undefined4 *)GEN_TOP(*this));
          }
          *(undefined1 *)puVar4 = 0;
        }
        if (uVar1 != 0) {
          puVar4 = this;
          if (0xf < (uint)this[5]) {
            puVar4 = ((undefined4 *)GEN_TOP(*this));
          }
          *((undefined1 *)GEN_TOP(((int)puVar4 + this[4]))) = 0x3d;
          this[4] = uVar1;
          puVar4 = this;
          if (0xf < (uint)this[5]) {
            puVar4 = ((undefined4 *)GEN_TOP(*this));
          }
          *((undefined1 *)GEN_TOP(((int)puVar4 + uVar1))) = 0;
        }
      }
    }
  }
  return (uint)this;
}

/* ref: Global::Base64Encode */
GEN_OWN GEN_FRAME uint F_0040b890(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40b890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_0040b5d0(param_1,param_2,param_3);
  return param_1;
}

/* ref: Global::Base64EncodeVector */
GEN_OWN GEN_FRAME uint F_0040b8b0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40b8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != param_2[1]) {
    F_0040b5d0(param_1,iVar1,param_2[1] - iVar1);
    return (uint)param_1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: Global::Base64EncodeString */
GEN_OWN GEN_FRAME uint F_0040b8f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40b8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_2));
  }
  F_0040b5d0(param_1,puVar1,param_2[4]);
  return param_1;
}

/* ref: Global::Base64EncodeBuffer */
GEN_OWN GEN_FRAME uint F_0040b920(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40b920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042a970(param_2 GEN_EDX_ARG);
  uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
  F_0040b5d0(param_1,uVar2,uVar1);
  return param_1;
}

/* ref: Global::Base64DecodeToString */
GEN_OWN GEN_FRAME uint F_0040b950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40b950u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined1 uVar1;
  undefined4 * this;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  byte * pbVar7;
  uint uVar8;
  
  this = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0])[5] = 0xf;
  (*(undefined4 * PTR32 *)&gen_args[0])[4] = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  *(undefined1 *)(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
  pbVar7 = (*(byte * PTR32 *)&gen_args[1]);
  if ((*(uint *)&gen_args[2]) != 0) {
    while( true ) {
      bVar2 = *pbVar7;
      (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) - 1;
      if ((bVar2 == 0x3d) ||
         ((((iVar3 = F_00c4883f((uint)bVar2), iVar3 == 0 && (bVar2 != 0x2d)) && (bVar2 != 0x5f)) &&
          ((bVar2 != 0x2b && (bVar2 != 0x2f)))))) break;
      ((byte *)(gen_frame + 0x0))[(int)((*(uint *)(gen_frame + 0x14)) + 0x10)] = *pbVar7;
      uVar4 = (*(uint *)(gen_frame + 0x14)) + 1;
      (*(uint *)(gen_frame + 0x14)) = uVar4;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = pbVar7 + 1;
      if (uVar4 == 4) {
        (*(uint *)(gen_frame + 0x14)) = 0;
        do {
          bVar2 = ((byte *)(gen_frame + 0x0))[(int)((*(uint *)(gen_frame + 0x14)) + 0x10)];
          uVar4 = (*(uint *)(gen_frame + 0x14));
          if ((bVar2 == 0x2d) || (bVar2 == 0x2b)) {
            bVar2 = 0x3e;
          }
          else if ((bVar2 == 0x5f) || (bVar2 == 0x2f)) {
            bVar2 = 0x3f;
          }
          else if ((byte)(bVar2 - 0x30) < 10) {
            uVar4 = F_00407db0(10,bVar2,&REFG(undefined, 0x12fac7c));
            bVar2 = (char)uVar4 + 0x34;
            uVar4 = (*(uint *)(gen_frame + 0x14));
          }
          else if ((byte)(bVar2 + 0xbf) < 0x3a) {
            uVar4 = F_00407db0(0x34,bVar2,&REFG(undefined, 0x12fac48));
            bVar2 = (byte)uVar4;
            uVar4 = (*(uint *)(gen_frame + 0x14));
          }
          else {
            bVar2 = 0xff;
          }
          ((byte *)(gen_frame + 0x0))[(int)(uVar4 + 0x10)] = bVar2;
          (*(uint *)(gen_frame + 0x14)) = uVar4 + 1;
        } while (uVar4 + 1 < 4);
        (*((undefined2 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))) =
             CONCAT11(((byte *)(gen_frame + 0x0))[0x12] >> 2 & 0xf ^ SUB41((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),1) << 4,
                      (SUB41((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),1) >> 4 & 3) + (byte)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) * '\x04');
        (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(CONCAT22(CONCAT11((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 3)))),((byte *)(gen_frame + 0x0))[0x12] * '@' + ((byte *)(gen_frame + 0x0))[0x13]),(*((undefined2 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))))));
        (*(uint *)(gen_frame + 0x14)) = 0;
        do {
          uVar1 = *((undefined1 *)GEN_TOP(((int)&(*(undefined4 * PTR32 *)&gen_args[0]) + (*(uint *)(gen_frame + 0x14)))));
          iVar3 = this[4];
          if ((-iVar3 - 1U < 2) || (uVar4 = iVar3 + 1, uVar4 == 0xffffffff)) goto LAB_0040bb9a;
          if ((uint)this[5] < uVar4) {
            F_0040e340(this GEN_EDX_ARG,uVar4,iVar3);
          }
          else if (uVar4 == 0) {
            this[4] = 0;
            puVar6 = this;
            if (0xf < (uint)this[5]) {
              puVar6 = ((undefined4 *)GEN_TOP(*this));
            }
            *(undefined1 *)puVar6 = 0;
          }
          if (uVar4 != 0) {
            puVar6 = this;
            if (0xf < (uint)this[5]) {
              puVar6 = ((undefined4 *)GEN_TOP(*this));
            }
            *((undefined1 *)GEN_TOP(((int)puVar6 + this[4]))) = uVar1;
            this[4] = uVar4;
            puVar6 = this;
            if (0xf < (uint)this[5]) {
              puVar6 = ((undefined4 *)GEN_TOP(*this));
            }
            *((undefined1 *)GEN_TOP(((int)puVar6 + uVar4))) = 0;
          }
          uVar4 = (*(uint *)(gen_frame + 0x14)) + 1;
          (*(uint *)(gen_frame + 0x14)) = uVar4;
        } while (uVar4 < 3);
        (*(uint *)(gen_frame + 0x14)) = 0;
      }
      pbVar7 = ((byte *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12))));
      if ((*(uint *)&gen_args[2]) == 0) break;
    }
    if ((*(uint *)(gen_frame + 0x14)) != 0) {
      if ((*(uint *)(gen_frame + 0x14)) < 4) {
        F_00c48350(((byte *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x14)) + 0x10,0,4 - (*(uint *)(gen_frame + 0x14)));
      }
      (*(uint *)&gen_args[2]) = 0;
      do {
        bVar2 = ((byte *)(gen_frame + 0x0))[(int)((*(uint *)&gen_args[2]) + 0x10)];
        if ((bVar2 == 0x2d) || (bVar2 == 0x2b)) {
          bVar2 = 0x3e;
        }
        else if ((bVar2 == 0x5f) || (bVar2 == 0x2f)) {
          bVar2 = 0x3f;
        }
        else if ((byte)(bVar2 - 0x30) < 10) {
          uVar8 = 0;
          uVar4 = 9;
          do {
            uVar5 = uVar4 + uVar8 >> 1;
            if (bVar2 == (&REFG(undefined, 0x12fac7c))[(int)(uVar5)]) goto LAB_0040bbae;
            if ((char)(bVar2 - (&REFG(undefined, 0x12fac7c))[(int)(uVar5)]) < '\0') {
              uVar4 = uVar5 - 1;
            }
            else {
              uVar8 = uVar5 + 1;
            }
          } while (uVar8 <= uVar4);
          uVar5 = 0xffffffff;
LAB_0040bbae: ;
          bVar2 = (char)uVar5 + 0x34;
        }
        else if ((byte)(bVar2 + 0xbf) < 0x3a) {
          uVar8 = 0;
          uVar4 = 0x33;
          do {
            uVar5 = uVar4 + uVar8 >> 1;
            if (bVar2 == (&REFG(undefined, 0x12fac48))[(int)(uVar5)]) goto LAB_0040bbe6;
            if ((char)(bVar2 - (&REFG(undefined, 0x12fac48))[(int)(uVar5)]) < '\0') {
              uVar4 = uVar5 - 1;
            }
            else {
              uVar8 = uVar5 + 1;
            }
          } while (uVar8 <= uVar4);
          uVar5 = 0xffffffff;
LAB_0040bbe6: ;
          bVar2 = (byte)uVar5;
        }
        else {
          bVar2 = 0xff;
        }
        ((byte *)(gen_frame + 0x0))[(int)((*(uint *)&gen_args[2]) + 0x10)] = bVar2;
        uVar4 = (*(uint *)&gen_args[2]) + 1;
        (*(uint *)&gen_args[2]) = uVar4;
      } while (uVar4 < 4);
      (*((undefined2 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))) =
           CONCAT11(((byte *)(gen_frame + 0x0))[0x12] >> 2 & 0xf ^ SUB41((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),1) << 4,
                    (SUB41((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),1) >> 4 & 3) + (byte)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) * '\x04');
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(CONCAT22(CONCAT11((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 3)))),((byte *)(gen_frame + 0x0))[0x12] * '@' + ((byte *)(gen_frame + 0x0))[0x13]),(*((undefined2 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))))));
      (*(uint *)&gen_args[2]) = 0;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = (*(uint *)(gen_frame + 0x14)) - 1;
      if ((*(uint *)(gen_frame + 0x14)) - 1 != 0) {
        do {
          iVar3 = this[4];
          uVar1 = *((undefined1 *)GEN_TOP(((int)&(*(undefined4 * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[2]))));
          if ((-iVar3 - 1U < 2) || (uVar4 = iVar3 + 1, uVar4 == 0xffffffff)) {
LAB_0040bb9a: ;
                    
            F_00c4579a(((char *)REFP(0x10802b0)));
          }
          if ((uint)this[5] < uVar4) {
            F_0040e340(this GEN_EDX_ARG,uVar4,iVar3);
            uVar8 = (*(uint *)&gen_args[2]);
          }
          else {
            uVar8 = (*(uint *)&gen_args[2]);
            if (uVar4 == 0) {
              this[4] = 0;
              puVar6 = this;
              if (0xf < (uint)this[5]) {
                puVar6 = ((undefined4 *)GEN_TOP(*this));
              }
              *(undefined1 *)puVar6 = 0;
            }
          }
          if (uVar4 != 0) {
            puVar6 = this;
            if (0xf < (uint)this[5]) {
              puVar6 = ((undefined4 *)GEN_TOP(*this));
            }
            *((undefined1 *)GEN_TOP(((int)puVar6 + this[4]))) = uVar1;
            this[4] = uVar4;
            puVar6 = this;
            if (0xf < (uint)this[5]) {
              puVar6 = ((undefined4 *)GEN_TOP(*this));
            }
            *((undefined1 *)GEN_TOP(((int)puVar6 + uVar4))) = 0;
          }
          (*(uint *)&gen_args[2]) = uVar8 + 1;
        } while (uVar8 + 1 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
      }
    }
  }
  return (uint)this;
}

/* ref: Global::Base64Decode */
GEN_OWN GEN_FRAME uint F_0040bcf0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_0040b950(param_1,param_2,param_3);
  return param_1;
}

/* ref: Global::Base64DecodeVector */
GEN_OWN GEN_FRAME uint F_0040bd10(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40bd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != param_2[1]) {
    F_0040b950(param_1,iVar1,param_2[1] - iVar1);
    return (uint)param_1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: Global::Base64DecodeString */
GEN_OWN GEN_FRAME uint F_0040bd50(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40bd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_2));
  }
  F_0040b950(param_1,puVar1,param_2[4]);
  return param_1;
}

/* ref: Global::Base64DecodeBuffer */
GEN_OWN GEN_FRAME uint F_0040bd80(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40bd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042a970(param_2 GEN_EDX_ARG);
  uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
  F_0040b950(param_1,uVar2,uVar1);
  return param_1;
}

/* ref: Global::GetValue */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0040bdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40bdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  uint uVar1;
  uint uVar2;
  undefined4 * PTR32 * ppuVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint * puVar6;
  undefined4 * PTR32 * PTR32 * pppuVar7;
  
  ppuVar3 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x8))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(uint *)(gen_frame + 0x1c)) = 0xf;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x8))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x8))[0] = ((undefined4 * PTR32 *)GEN_TOP(((uint)ppuVar3 & 0xffffff00)));
  F_0040ec10(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_FWD,param_1,0,0xffffffff);
  F_0040b4c0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x8)));
  uVar4 = F_0040f1b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x8)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  if (uVar4 != uVar1) {
    uVar2 = *((uint *)GEN_TOP((uVar4 + 0x1c)));
    puVar5 = ((undefined4 *)GEN_TOP((uVar4 + 0xc)));
    if (0xf < *((uint *)GEN_TOP((uVar4 + 0x20)))) {
      puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    uVar4 = (*(uint *)(gen_frame + 0x18));
    if (uVar2 <= (*(uint *)(gen_frame + 0x18))) {
      uVar4 = uVar2;
    }
    pppuVar7 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x8))[0];
    if ((*(uint *)(gen_frame + 0x1c)) < 0x10) {
      pppuVar7 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x8));
    }
    uVar4 = F_0040d320(pppuVar7,puVar5,uVar4);
    if (uVar4 == 0) {
      if ((*(uint *)(gen_frame + 0x18)) < uVar2) goto LAB_0040be56;
      uVar4 = (uint)((*(uint *)(gen_frame + 0x18)) != uVar2);
    }
    if (-1 < (int)uVar4) {
      puVar6 = &(*(uint *)(gen_frame + 0x0));
      goto LAB_0040be5c;
    }
  }
LAB_0040be56: ;
  (*(uint *)(gen_frame + 0x4)) = uVar1;
  puVar6 = &(*(uint *)(gen_frame + 0x4));
LAB_0040be5c: ;
  uVar4 = *puVar6;
  if (uVar4 != uVar1) {
    if (0xf < (*(uint *)(gen_frame + 0x1c))) {
      F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x8))[0],(*(uint *)(gen_frame + 0x1c)) + 1,0x12f);
    }
    return uVar4 + 0x28;
  }
  if (0xf < (*(uint *)(gen_frame + 0x1c))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x8))[0],(*(uint *)(gen_frame + 0x1c)) + 1,0x12f);
  }
  return (int)this + 0x30;
}

/* ref: Global::Base64DecodeToVector */
GEN_OWN GEN_FRAME uint F_0040bed0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40bed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  char * pcVar1;
  char * pcVar2;
  char * pcVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte * pbVar10;
  uint uVar11;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = param_3;
  ((byte *)(gen_frame + 0x0))[0x10] = 0;
  ((byte *)(gen_frame + 0x0))[0x11] = 0;
  ((byte *)(gen_frame + 0x0))[0x12] = 0;
  ((byte *)(gen_frame + 0x0))[0x13] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  F_0040fa30(param_1 GEN_EDX_ARG,param_3);
  iVar8 = param_3;
  pbVar10 = param_2;
  if (param_3 != 0) {
    do {
      bVar4 = *pbVar10;
      iVar8 = iVar8 - 1;
      if ((bVar4 == 0x3d) ||
         ((((iVar5 = F_00c4883f((uint)bVar4), iVar5 == 0 && (bVar4 != 0x2d)) && (bVar4 != 0x5f)) &&
          ((bVar4 != 0x2b && (bVar4 != 0x2f)))))) break;
      ((byte *)(gen_frame + 0x0))[(int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) + 0x14)] = *pbVar10;
      iVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) + 1;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = iVar5;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = pbVar10 + 1;
      if (iVar5 == 4) {
        uVar9 = 0;
        do {
          bVar4 = ((byte *)(gen_frame + 0x0))[(int)(uVar9 + 0x14)];
          if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
            bVar4 = 0x3e;
          }
          else if ((bVar4 == 0x5f) || (bVar4 == 0x2f)) {
            bVar4 = 0x3f;
          }
          else if ((byte)(bVar4 - 0x30) < 10) {
            uVar6 = F_00407db0(10,bVar4,&REFG(undefined, 0x12fac7c));
            bVar4 = (char)uVar6 + 0x34;
          }
          else if ((byte)(bVar4 + 0xbf) < 0x3a) {
            uVar6 = F_00407db0(0x34,bVar4,&REFG(undefined, 0x12fac48));
            bVar4 = (byte)uVar6;
          }
          else {
            bVar4 = 0xff;
          }
          ((byte *)(gen_frame + 0x0))[(int)(uVar9 + 0x14)] = bVar4;
          uVar9 = uVar9 + 1;
        } while (uVar9 < 4);
        ((char *)(gen_frame + 0x18))[0] = (SUB41((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),1) >> 4 & 3) + (byte)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) * '\x04';
        ((char *)(gen_frame + 0x18))[1] = ((byte *)(gen_frame + 0x0))[0x16] >> 2 & 0xf ^ SUB41((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),1) << 4;
        ((char *)(gen_frame + 0x18))[2] = ((byte *)(gen_frame + 0x0))[0x16] * '@' + ((byte *)(gen_frame + 0x0))[0x17];
        ((byte *)(gen_frame + 0x0))[0x10] = 0;
        ((byte *)(gen_frame + 0x0))[0x11] = 0;
        ((byte *)(gen_frame + 0x0))[0x12] = 0;
        ((byte *)(gen_frame + 0x0))[0x13] = 0;
        do {
          pcVar2 = ((char *)GEN_TOP(param_1[1]));
          pcVar1 = ((char *)(gen_frame + 0x18)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
          if ((pcVar1 < pcVar2) && (pcVar3 = ((char *)GEN_TOP(*param_1)), pcVar3 <= pcVar1)) {
            if (pcVar2 == ((char *)GEN_TOP(param_1[2]))) {
              if ((int)pcVar2 - (int)pcVar3 == -1) goto LAB_0040c138;
              uVar6 = ((int)pcVar2 - (int)pcVar3) + 1;
              uVar9 = param_1[2] - (int)pcVar3;
              if (uVar9 < uVar6) {
                if (-(uVar9 >> 1) - 1 < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar6) {
                  uVar9 = uVar6;
                }
                F_0040fa30(param_1 GEN_EDX_ARG,uVar9);
              }
            }
            if (((char *)GEN_TOP(param_1[1])) != ((char *)GEN_TOP(0x0))) {
              *((char *)GEN_TOP(param_1[1])) = pcVar1[*param_1 - (int)pcVar3];
            }
          }
          else {
            if (pcVar2 == ((char *)GEN_TOP(param_1[2]))) {
              iVar5 = (int)pcVar2 - *param_1;
              if (iVar5 == -1) goto LAB_0040c138;
              uVar6 = iVar5 + 1;
              uVar9 = param_1[2] - *param_1;
              if (uVar9 < uVar6) {
                if (-(uVar9 >> 1) - 1 < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar6) {
                  uVar9 = uVar6;
                }
                F_0040fa30(param_1 GEN_EDX_ARG,uVar9);
              }
            }
            if (((char *)GEN_TOP(param_1[1])) != ((char *)GEN_TOP(0x0))) {
              *((char *)GEN_TOP(param_1[1])) = *pcVar1;
            }
          }
          param_1[1] = param_1[1] + 1;
          uVar9 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) + 1;
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = uVar9;
        } while (uVar9 < 3);
        ((byte *)(gen_frame + 0x0))[0x10] = 0;
        ((byte *)(gen_frame + 0x0))[0x11] = 0;
        ((byte *)(gen_frame + 0x0))[0x12] = 0;
        ((byte *)(gen_frame + 0x0))[0x13] = 0;
      }
      pbVar10 = ((byte *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12))));
    } while (iVar8 != 0);
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) != 0) {
      if ((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) < 4) {
        F_00c48350(((byte *)(gen_frame + 0x0)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) + 0x14,0,4 - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)));
      }
      uVar9 = 0;
      do {
        bVar4 = ((byte *)(gen_frame + 0x0))[(int)(uVar9 + 0x14)];
        if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
          uVar6 = 0x3e;
        }
        else if ((bVar4 == 0x5f) || (bVar4 == 0x2f)) {
          uVar6 = 0x3f;
        }
        else if ((byte)(bVar4 - 0x30) < 10) {
          uVar7 = 9;
          uVar11 = 0;
          do {
            uVar6 = uVar11 + uVar7 >> 1;
            if (bVar4 == (&REFG(undefined, 0x12fac7c))[(int)(uVar6)]) goto LAB_0040c14c;
            if ((char)(bVar4 - (&REFG(undefined, 0x12fac7c))[(int)(uVar6)]) < '\0') {
              uVar7 = uVar6 - 1;
            }
            else {
              uVar11 = uVar6 + 1;
            }
          } while (uVar11 <= uVar7);
          uVar6 = 0xffffffff;
LAB_0040c14c: ;
          uVar6 = uVar6 + 0x34;
        }
        else {
          if ((byte)(bVar4 + 0xbf) < 0x3a) {
            uVar11 = 0;
            uVar7 = 0x33;
            do {
              uVar6 = uVar7 + uVar11 >> 1;
              if (bVar4 == (&REFG(undefined, 0x12fac48))[(int)(uVar6)]) goto LAB_0040c190;
              if ((char)(bVar4 - (&REFG(undefined, 0x12fac48))[(int)(uVar6)]) < '\0') {
                uVar7 = uVar6 - 1;
              }
              else {
                uVar11 = uVar6 + 1;
              }
            } while (uVar11 <= uVar7);
          }
          uVar6 = 0xffffffff;
        }
LAB_0040c190: ;
        ((byte *)(gen_frame + 0x0))[(int)(uVar9 + 0x14)] = (byte)uVar6;
        uVar9 = uVar9 + 1;
      } while (uVar9 < 4);
      ((char *)(gen_frame + 0x18))[0] = (SUB41((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),1) >> 4 & 3) + (byte)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) * '\x04';
      ((char *)(gen_frame + 0x18))[2] = ((byte *)(gen_frame + 0x0))[0x16] * '@' + ((byte *)(gen_frame + 0x0))[0x17];
      ((char *)(gen_frame + 0x18))[1] = ((byte *)(gen_frame + 0x0))[0x16] >> 2 & 0xf ^ SUB41((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),1) << 4;
      param_3 = 0;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) - 1;
      if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) - 1 != 0) {
        do {
          pcVar2 = ((char *)GEN_TOP(param_1[1]));
          pcVar1 = ((char *)(gen_frame + 0x18)) + param_3;
          if ((pcVar1 < pcVar2) && (pcVar3 = ((char *)GEN_TOP(*param_1)), pcVar3 <= pcVar1)) {
            if (pcVar2 == ((char *)GEN_TOP(param_1[2]))) {
              if ((int)pcVar2 - (int)pcVar3 == -1) goto LAB_0040c138;
              uVar6 = ((int)pcVar2 - (int)pcVar3) + 1;
              uVar9 = param_1[2] - (int)pcVar3;
              if (uVar9 < uVar6) {
                if (-(uVar9 >> 1) - 1 < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar6) {
                  uVar9 = uVar6;
                }
                F_0040fa30(param_1 GEN_EDX_ARG,uVar9);
              }
            }
            if (((char *)GEN_TOP(param_1[1])) != ((char *)GEN_TOP(0x0))) {
              *((char *)GEN_TOP(param_1[1])) = pcVar1[*param_1 - (int)pcVar3];
            }
          }
          else {
            if (pcVar2 == ((char *)GEN_TOP(param_1[2]))) {
              iVar8 = (int)pcVar2 - *param_1;
              if (iVar8 == -1) {
LAB_0040c138: ;
                    
                F_00c4579a(((char *)REFP(0x108497c)));
              }
              uVar6 = iVar8 + 1;
              uVar9 = param_1[2] - *param_1;
              if (uVar9 < uVar6) {
                if (-(uVar9 >> 1) - 1 < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar6) {
                  uVar9 = uVar6;
                }
                F_0040fa30(param_1 GEN_EDX_ARG,uVar9);
              }
            }
            if (((char *)GEN_TOP(param_1[1])) != ((char *)GEN_TOP(0x0))) {
              *((char *)GEN_TOP(param_1[1])) = *pcVar1;
            }
          }
          param_1[1] = param_1[1] + 1;
          param_3 = param_3 + 1;
        } while (param_3 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
      }
    }
  }
  return (uint)param_1;
}

/* ref: Global::Base64DecodeBytes */
GEN_OWN GEN_FRAME uint F_0040c2b0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x40c2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_0040bed0(param_1,param_2,param_3);
  return param_1;
}

/* ref: Global::Base64DecodeVectorToVector */
GEN_OWN GEN_FRAME uint F_0040c2d0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40c2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  F_0040bed0(param_1,*param_2,param_2[1] - *param_2);
  return param_1;
}

/* ref: Global::Base64DecodeStringToVector */
GEN_OWN GEN_FRAME uint F_0040c300(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40c300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_2));
  }
  F_0040bed0(param_1,puVar1,param_2[4]);
  return param_1;
}

/* ref: Global::Base64DecodeBufferToVector */
GEN_OWN GEN_FRAME uint F_0040c330(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x40c330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042a970(param_2 GEN_EDX_ARG);
  uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
  F_0040bed0(param_1,uVar2,uVar1);
  return param_1;
}

/* ref: Global::DestroyKeyValueStore */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040c360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40c360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x98)))) {
    F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x84))),*((uint *)GEN_TOP(((int)this + 0x98))) + 1,0x12f);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x84))) = 0;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x7c)))) {
    F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x68))),*((uint *)GEN_TOP(((int)this + 0x7c))) + 1,0x12f);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x68))) = 0;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x60)))) {
    F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x4c))),*((uint *)GEN_TOP(((int)this + 0x60))) + 1,0x12f);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x4c))) = 0;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x44)))) {
    F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x30))),*((uint *)GEN_TOP(((int)this + 0x44))) + 1,0x12f);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 0;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x28)))) {
    F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x14))),*((uint *)GEN_TOP(((int)this + 0x28))) + 1,0x12f);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00410300(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
                 *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x48,0x12f);
  return (uint)uVar1;
}

/* ref: Global::SetOrEraseValue */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040c460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40c460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (*((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) == 0) {
    puVar2 = ((uint *)GEN_TOP(F_0040f630(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[0]))));
    uVar3 = *puVar2;
    if (uVar3 != *((uint *)GEN_TOP(((int)this + 8)))) {
      uVar3 = F_0040fac0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]),uVar3);
      return uVar3;
    }
  }
  else {
    this_00 = ((undefined *)GEN_TOP(F_004107c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]))));
    uVar3 = F_0040ec10(this_00 GEN_EDX_ARG,iVar1,0,0xffffffff);
  }
  return uVar3;
}

/* ref: Global::ParseKeyValueString */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0040c4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40c4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x58, 8, 4);
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  undefined4 * PTR32 * PTR32 * pppuVar5;
  uint uVar6;
  char * pcVar7;
  undefined1 * puVar8;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar9;
  uint uVar10;
  undefined4 * puVar11;
  uint * puVar12;
  undefined * this_00;
  undefined * pvVar13;
  uint uVar14;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar15;
  byte * pbVar16;
  char * pcVar17;
  ulonglong uVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54));
  pvVar13 = ((undefined *)GEN_TOP(((int)this + 4)));
  F_0040fde0(pvVar13 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))));
  pppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0];
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 8))))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar14 = *(uint *)(param_1 + 0x14);
  (*(uint *)(gen_frame + 0x48)) = 0xf;
  (*(uint *)(gen_frame + 0x44)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar5 & 0xffffff00)));
  (*(uint *)(gen_frame + 0x2c)) = 0xf;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
  (*(int *)(gen_frame + 0x14)) = 0;
  pcVar17 = param_1;
  if (0xf < uVar14) {
    pcVar17 = *(char * PTR32 *)param_1;
  }
  while( true ) {
    while( true ) {
      pcVar7 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pcVar7 = *(char * PTR32 *)param_1;
      }
      if (pcVar17 == pcVar7 + *(int *)(param_1 + 0x10)) goto LAB_0040c7b4;
      cVar1 = *pcVar17;
      if (cVar1 == ' ') break;
      if ((*(int *)(gen_frame + 0x14)) == 0) {
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = cVar1;
        (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),cVar1);
        ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
        if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
          ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
        }
        ppppuVar15 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
        if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
          ppppuVar15 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
        }
        if (((undefined1 *)GEN_TOP(((int)ppppuVar9 + (*(uint *)(gen_frame + 0x44))))) == ((undefined1 *)GEN_TOP(0x0))) {
          F_0040f080(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,0,1,(*(uint *)(gen_frame + 0xc)));
          pcVar17 = pcVar17 + 1;
        }
        else {
          F_0040f080(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(int)((int)ppppuVar9 + (*(uint *)(gen_frame + 0x44))) - (int)ppppuVar15,1,(*(uint *)(gen_frame + 0xc)))
          ;
          pcVar17 = pcVar17 + 1;
        }
      }
      else {
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = cVar1;
        (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),cVar1);
        ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0];
        if ((*(uint *)(gen_frame + 0x2c)) < 0x10) {
          ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
        }
        puVar8 = ((undefined1 *)GEN_TOP(((int)ppppuVar9 + (*(int *)(gen_frame + 0x28)))));
        ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0];
        if ((*(uint *)(gen_frame + 0x2c)) < 0x10) {
          ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
        }
        if (puVar8 != ((undefined1 *)GEN_TOP(0x0))) {
          puVar8 = puVar8 - (int)ppppuVar9;
        }
        F_0040f080(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,puVar8,1,(*(uint *)(gen_frame + 0x10)));
        pcVar17 = pcVar17 + 1;
      }
    }
    pbVar16 = (byte *)(pcVar17 + 1);
    pcVar7 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pcVar7 = *(char * PTR32 *)param_1;
    }
    if (pbVar16 == ((byte *)GEN_TOP((pcVar7 + *(int *)(param_1 + 0x10))))) break;
    bVar2 = *pbVar16;
    if (bVar2 == 0x54) {
      ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
      if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
        ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
      }
      puVar8 = ((undefined1 *)GEN_TOP(((int)ppppuVar9 + (*(uint *)(gen_frame + 0x44)))));
      ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
      if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
        ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
      }
      if (puVar8 != ((undefined1 *)GEN_TOP(0x0))) {
        puVar8 = puVar8 - (int)ppppuVar9;
      }
      F_0040f080(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,puVar8,1,0x20);
      (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),*pbVar16);
      ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
      if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
        ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
      }
      puVar8 = ((undefined1 *)GEN_TOP(((int)ppppuVar9 + (*(uint *)(gen_frame + 0x44)))));
      ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
      if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
        ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
      }
      if (puVar8 != ((undefined1 *)GEN_TOP(0x0))) {
        puVar8 = puVar8 - (int)ppppuVar9;
      }
      F_0040f080(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,puVar8,1,(*(undefined4 *)(gen_frame + 0x0)));
      pcVar17 = pcVar17 + 2;
    }
    else if (bVar2 == 0x3d) {
      (*(int *)(gen_frame + 0x14)) = 1;
      pcVar17 = pcVar17 + 2;
    }
    else if (bVar2 == 0x2f) {
      F_0040c460(this GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)),((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)));
      (*(uint *)(gen_frame + 0x44)) = 0;
      ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
      if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
        ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
      }
      *(undefined1 *)ppppuVar9 = 0;
      (*(int *)(gen_frame + 0x28)) = 0;
      ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0];
      if ((*(uint *)(gen_frame + 0x2c)) < 0x10) {
        ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
      }
      *(undefined1 *)ppppuVar9 = 0;
      (*(int *)(gen_frame + 0x14)) = 0;
      pcVar17 = pcVar17 + 2;
    }
    else if ((*(int *)(gen_frame + 0x14)) == 0) {
      F_0040f5b0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,0x20);
      F_0040f5b0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(uint)*pbVar16);
      pcVar17 = pcVar17 + 2;
    }
    else {
      F_0040f5b0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,CONCAT31((int3)((uint)((int)(uintptr_t)pcVar7) >> 8),bVar2));
      pcVar17 = pcVar17 + 2;
    }
  }
  if ((*(int *)(gen_frame + 0x28)) != 0) {
    this_00 = ((undefined *)GEN_TOP(F_004107c0(pvVar13 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)))));
    F_0040ec10(this_00 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)),0,0xffffffff);
    goto LAB_0040c78a;
  }
  uVar10 = F_0040f1b0(pvVar13 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)));
  uVar6 = (*(uint *)(gen_frame + 0x44));
  uVar14 = *((uint *)GEN_TOP(((int)this + 8)));
  (*(uint *)(gen_frame + 0x10)) = uVar10;
  if (uVar10 == uVar14) {
LAB_0040c753: ;
    (*(uint *)(gen_frame + 0xc)) = uVar14;
    puVar12 = &(*(uint *)(gen_frame + 0xc));
  }
  else {
    uVar3 = *((uint *)GEN_TOP((uVar10 + 0x1c)));
    puVar11 = ((undefined4 *)GEN_TOP((uVar10 + 0xc)));
    if (0xf < *((uint *)GEN_TOP((uVar10 + 0x20)))) {
      puVar11 = ((undefined4 *)GEN_TOP(*puVar11));
    }
    uVar10 = (*(uint *)(gen_frame + 0x44));
    if (uVar3 <= (*(uint *)(gen_frame + 0x44))) {
      uVar10 = uVar3;
    }
    ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
    if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
      ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
    }
    uVar10 = F_0040d320(ppppuVar9,puVar11,uVar10);
    if (uVar10 == 0) {
      if (uVar6 < uVar3) goto LAB_0040c753;
      uVar10 = (uint)(uVar6 != uVar3);
    }
    if ((int)uVar10 < 0) goto LAB_0040c753;
    puVar12 = &(*(uint *)(gen_frame + 0x10));
  }
  if (*puVar12 != *((uint *)GEN_TOP(((int)this + 8)))) {
    F_0040fac0(pvVar13 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x10)),*puVar12);
  }
LAB_0040c78a: ;
  (*(uint *)(gen_frame + 0x44)) = 0;
  ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
  if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
    ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
  }
  *(undefined1 *)ppppuVar9 = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0];
  if ((*(uint *)(gen_frame + 0x2c)) < 0x10) {
    ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
  }
  *(undefined1 *)ppppuVar9 = 0;
LAB_0040c7b4: ;
  if (((*(uint *)(gen_frame + 0x44)) != 0) && ((*(int *)(gen_frame + 0x28)) != 0)) {
    pvVar13 = ((undefined *)GEN_TOP(F_004107c0(pvVar13 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)))));
    F_0040ec10(pvVar13 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)),0,0xffffffff);
  }
  if (0xf < (*(uint *)(gen_frame + 0x2c))) {
    F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0],(*(uint *)(gen_frame + 0x2c)) + 1,0x12f);
  }
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0];
  (*(uint *)(gen_frame + 0x2c)) = 0xf;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
  uVar14 = (*(uint *)(gen_frame + 0x48));
  if (0xf < (*(uint *)(gen_frame + 0x48))) {
    uVar18 = F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0],(*(uint *)(gen_frame + 0x48)) + 1,0x12f);
    uVar14 = (uint)uVar18;
  }
  return uVar14;
}

/* ref: Global::SetTimestampNow */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0040c840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40c840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  char cVar1;
  uint uVar2;
  undefined * this_00;
  char * pcVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  uVar2 = F_0040dd00();
  F_00c472af(((char *)(gen_frame + 0x0)),0x40,&REFG(undefined, 0x1084938),uVar2,0);
  this_00 = ((undefined *)GEN_TOP(F_004107c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(int)this + 0x84)));
  pcVar3 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar2 = F_0040ef80(this_00 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar3 - (int)(((char *)(gen_frame + 0x0)) + 1));
  return uVar2;
}

/* ref: Global::InitKeyValueStore */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0040c8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40c8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x48,0,0x12f);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x44))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x45))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xf;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x84))) = 0;
  *(undefined1 *)this = 0;
  F_0040ef80(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((char *)REFP(0x1084910)),0xc);
  F_0040ef80(((undefined *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG,((char *)REFP(0x1084920)),8);
  if (*((uint *)GEN_TOP(((int)this + 0x98))) < 0x10) {
    iVar3 = (int)this + 0x84;
  }
  else {
    iVar3 = *((int *)GEN_TOP(((int)this + 0x84)));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x94))) + iVar3;
  if (*((uint *)GEN_TOP(((int)this + 0x98))) < 0x10) {
    iVar2 = (int)this + 0x84;
  }
  else {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x84)));
  }
  if (iVar3 != 0) {
    iVar3 = iVar3 - iVar2;
  }
  F_0040f080(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG,iVar3,1,0x20);
  if (*((uint *)GEN_TOP(((int)this + 0x98))) < 0x10) {
    iVar3 = (int)this + 0x84;
  }
  else {
    iVar3 = *((int *)GEN_TOP(((int)this + 0x84)));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x94))) + iVar3;
  if (*((uint *)GEN_TOP(((int)this + 0x98))) < 0x10) {
    iVar2 = (int)this + 0x84;
  }
  else {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x84)));
  }
  if (iVar3 != 0) {
    iVar3 = iVar3 - iVar2;
  }
  F_0040f080(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG,iVar3,1,0x54);
  return (uint)this;
}

/* ref: Global::BuildEncryptedArguments */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040c9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x40c9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x110e4, 12, 4);
  undefined4 * this_00;
  char cVar1;
  int * piVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar3;
  int * piVar4;
  byte bVar5;
  uint uVar6;
  undefined * this_01;
  int iVar7;
  undefined4 * puVar8;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar9;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar10;
  char * pcVar11;
  int * piVar12;
  
  ppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0];
  (*(uint *)(gen_frame + 0x110dc)) = 0x40c9fd;
  (*(uint *)(gen_frame + 0x110dc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x68)));
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  puVar8 = this_00;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x7c)))) {
    puVar8 = ((undefined4 *)GEN_TOP(*this_00));
  }
  *(undefined1 *)puVar8 = 0;
  (*(uint *)(gen_frame + 0x11094)) = 0xf;
  (*(int *)(gen_frame + 0x11090)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0] = ((undefined4 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((uint)ppppuVar3 & 0xffffff00)));
  uVar6 = F_0040dd00();
  F_00c472af(((char *)(gen_frame + 0x1109c)),0x40,&REFG(undefined, 0x1084938),uVar6,0);
  this_01 = ((undefined *)GEN_TOP(F_004107c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(int)this + 0x84)));
  pcVar11 = ((char *)(gen_frame + 0x1109c));
  do {
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  F_0040ef80(this_01 GEN_EDX_ARG,((char *)(gen_frame + 0x1109c)),(int)pcVar11 - (int)(((char *)(gen_frame + 0x1109c)) + 1));
  piVar12 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 8)))));
  if (piVar12 != *((int * PTR32 *)GEN_TOP(((int)this + 8)))) {
    do {
      if ((*(int *)(gen_frame + 0x11090)) != 0) {
        pppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0];
        if ((*(uint *)(gen_frame + 0x11094)) < 0x10) {
          pppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080));
        }
        pppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0];
        if ((*(uint *)(gen_frame + 0x11094)) < 0x10) {
          pppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080));
        }
        if ((int)pppppuVar9 + (*(int *)(gen_frame + 0x11090)) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = ((int)pppppuVar9 + (*(int *)(gen_frame + 0x11090))) - (int)pppppuVar10;
        }
        F_0040f080(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080)) GEN_EDX_ARG,iVar7,1,0x20);
        pppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0];
        if ((*(uint *)(gen_frame + 0x11094)) < 0x10) {
          pppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080));
        }
        pppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0];
        if ((*(uint *)(gen_frame + 0x11094)) < 0x10) {
          pppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080));
        }
        if ((int)pppppuVar9 + (*(int *)(gen_frame + 0x11090)) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = ((int)pppppuVar9 + (*(int *)(gen_frame + 0x11090))) - (int)pppppuVar10;
        }
        F_0040f080(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080)) GEN_EDX_ARG,iVar7,1,0x2f);
      }
      F_0040ed70(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080)) GEN_EDX_ARG,piVar12 + 3,0,0xffffffff);
      pppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0];
      if ((*(uint *)(gen_frame + 0x11094)) < 0x10) {
        pppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080));
      }
      pppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0];
      if ((*(uint *)(gen_frame + 0x11094)) < 0x10) {
        pppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080));
      }
      if ((int)pppppuVar9 + (*(int *)(gen_frame + 0x11090)) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = ((int)pppppuVar9 + (*(int *)(gen_frame + 0x11090))) - (int)pppppuVar10;
      }
      F_0040f080(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080)) GEN_EDX_ARG,iVar7,1,0x20);
      pppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0];
      if ((*(uint *)(gen_frame + 0x11094)) < 0x10) {
        pppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080));
      }
      pppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0];
      if ((*(uint *)(gen_frame + 0x11094)) < 0x10) {
        pppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080));
      }
      if ((int)pppppuVar9 + (*(int *)(gen_frame + 0x11090)) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = ((int)pppppuVar9 + (*(int *)(gen_frame + 0x11090))) - (int)pppppuVar10;
      }
      F_0040f080(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080)) GEN_EDX_ARG,iVar7,1,0x3d);
      F_0040ed70(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080)) GEN_EDX_ARG,piVar12 + 10,0,0xffffffff);
      if (*((char *)GEN_TOP(((int)piVar12 + 0x45))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar12[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x45))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x45)));
          piVar12 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x45)));
            piVar12 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar12[1] + 0x45)));
          piVar4 = ((int *)GEN_TOP(piVar12[1]));
          piVar2 = piVar12;
          while ((piVar12 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar12[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar12[1] + 0x45)));
            piVar4 = ((int *)GEN_TOP(piVar12[1]));
            piVar2 = piVar12;
          }
        }
      }
    } while (piVar12 != *((int * PTR32 *)GEN_TOP(((int)this + 8))));
  }
  if ((*(int *)(gen_frame + 0x11090)) != 0) {
    uVar6 = F_00406bb0((*(int *)(gen_frame + 0x11090)) + 1,0,0);
    puVar8 = ((undefined4 *)GEN_TOP(((int)this + 0x14)));
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x28)))) {
      puVar8 = ((undefined4 *)GEN_TOP(*puVar8));
    }
    F_00409a70(((undefined1 *)(gen_frame + 0x10000)) GEN_EDX_ARG,puVar8,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
    iVar7 = (*(int *)(gen_frame + 0x11090)) + 1;
    pppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0];
    if ((*(uint *)(gen_frame + 0x11094)) < 0x10) {
      pppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080));
    }
    F_00407e80(((undefined1 *)(gen_frame + 0x10000)) GEN_EDX_ARG,pppppuVar9,uVar6,iVar7);
    F_0040b5d0(((undefined4 *)(gen_frame + 0x11048)),uVar6,iVar7);
    ppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11064))[0];
    iVar7 = *((int *)GEN_TOP(((int)this + 0x5c))) + (*(int *)(gen_frame + 0x11058));
    (*(uint *)(gen_frame + 0x11078)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x11074)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11064))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11064))[0] = ((undefined4 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((uint)ppppuVar3 & 0xffffff00)));
    if ((iVar7 != 0xf) && (bVar5 = F_0040e870(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11064)) GEN_EDX_ARG,iVar7,1), bVar5 != 0)) {
      (*(undefined4 *)(gen_frame + 0x11074)) = 0;
      pppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11064))[0];
      if ((*(uint *)(gen_frame + 0x11078)) < 0x10) {
        pppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11064));
      }
      *(undefined1 *)pppppuVar9 = 0;
    }
    F_0040ed70(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11064)) GEN_EDX_ARG,(int)this + 0x4c,0,0xffffffff);
    F_0040ed70(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11064)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x11048)),0,0xffffffff);
    F_0040f6a0(this_00 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11064)));
    if (0xf < (*(uint *)(gen_frame + 0x11078))) {
      F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11064))[0],(*(uint *)(gen_frame + 0x11078)) + 1,0x12f);
    }
    F_00406ad0(uVar6);
    if (0xf < (*(uint *)(gen_frame + 0x1105c))) {
      F_00429760(((undefined4 *)(gen_frame + 0x11048))[0],(*(uint *)(gen_frame + 0x1105c)) + 1,0x12f);
    }
  }
  F_0040ee60(this_00 GEN_EDX_ARG,&REFG(undefined, 0x1084908),4);
  if (0xf < (*(uint *)(gen_frame + 0x11094))) {
    F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x11080))[0],(*(uint *)(gen_frame + 0x11094)) + 1,0x12f);
  }
  return (uint)this_00;
}

/* ref: Global::DecryptSqexArguments */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0040cd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40cd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x110a4, 12, 4);
  char cVar1;
  undefined4 * PTR32 * ppuVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  undefined4 * PTR32 * PTR32 * pppuVar8;
  char * pcVar9;
  
  (*(uint *)(gen_frame + 0x1109c)) = 0x40cd4d;
  (*(uint *)(gen_frame + 0x1109c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  F_0040fde0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 8))))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  F_0040ec10(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,param_1,0,0xffffffff);
  piVar4 = ((int *)GEN_TOP(((int)this + 0x14)));
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x28)))) {
    piVar4 = ((int *)GEN_TOP(*piVar4));
  }
  F_00409a70(((undefined1 *)(gen_frame + 0x10000)) GEN_EDX_ARG,piVar4,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
  if (8 < *((uint *)GEN_TOP(((int)param_1 + 0x10)))) {
    uVar5 = F_0040dfc0(param_1 GEN_EDX_ARG,((char *)REFP(0x108492c)),0,8);
    uVar6 = F_0040dfc0(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1084908),0,4);
    ppuVar2 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11064))[0];
    if (uVar5 != 0xffffffff) {
      (*(uint *)(gen_frame + 0x11078)) = 0xf;
      (*(undefined4 *)(gen_frame + 0x11074)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11064))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11064))[0] = ((undefined4 * PTR32 *)GEN_TOP(((uint)ppuVar2 & 0xffffff00)));
      F_0040ec10(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11064)) GEN_EDX_ARG,param_1,uVar5 + 8,0xffffffff);
      uVar3 = ((uint *)(gen_frame + 0x11080))[0];
      if (uVar6 != 0xffffffff) {
        (*(uint *)(gen_frame + 0x11094)) = 0xf;
        (*(undefined4 *)(gen_frame + 0x11090)) = 0;
        (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x11080))[0] + 0)) = 0;
        ((uint *)(gen_frame + 0x11080))[0] = uVar3 & 0xffffff00;
        F_0040ec10(((uint *)(gen_frame + 0x11080)) GEN_EDX_ARG,param_1,uVar5 + 8,(uVar6 - uVar5) - 8);
        F_0040f6a0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11064)) GEN_EDX_ARG,((uint *)(gen_frame + 0x11080)));
        if (0xf < (*(uint *)(gen_frame + 0x11094))) {
          F_00429760(((uint *)(gen_frame + 0x11080))[0],(*(uint *)(gen_frame + 0x11094)) + 1,0x12f);
        }
      }
      pppuVar8 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11064))[0];
      if ((*(uint *)(gen_frame + 0x11078)) < 0x10) {
        pppuVar8 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11064));
      }
      F_0040b950(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11048)),pppuVar8,(*(undefined4 *)(gen_frame + 0x11074)));
      pcVar7 = ((char *)GEN_TOP(F_00406bb0((*(undefined4 *)(gen_frame + 0x11058)),0,0)));
      pppuVar8 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11048))[0];
      if ((*(uint *)(gen_frame + 0x1105c)) < 0x10) {
        pppuVar8 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11048));
      }
      F_00407f40(((undefined1 *)(gen_frame + 0x10000)) GEN_EDX_ARG,pppuVar8,pcVar7,(*(undefined4 *)(gen_frame + 0x11058)));
      uVar5 = ((uint *)(gen_frame + 0x11080))[0];
      (*(uint *)(gen_frame + 0x11094)) = 0xf;
      (*(undefined4 *)(gen_frame + 0x11090)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x11080))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0x11080))[0] = uVar5 & 0xffffff00;
      pcVar9 = pcVar7;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      F_0040ef80(((uint *)(gen_frame + 0x11080)) GEN_EDX_ARG,pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
      F_0040c4c0(this GEN_EDX_ARG,((uint *)(gen_frame + 0x11080)));
      if (0xf < (*(uint *)(gen_frame + 0x11094))) {
        F_00429760(((uint *)(gen_frame + 0x11080))[0],(*(uint *)(gen_frame + 0x11094)) + 1,0x12f);
      }
      F_00406ad0(pcVar7);
      if (0xf < (*(uint *)(gen_frame + 0x1105c))) {
        F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11048))[0],(*(uint *)(gen_frame + 0x1105c)) + 1,0x12f);
      }
      if (0xf < (*(uint *)(gen_frame + 0x11078))) {
        F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x11064))[0],(*(uint *)(gen_frame + 0x11078)) + 1,0x12f);
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Global::SetArgument */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0040cf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x40cf80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  uint uVar1;
  undefined4 * PTR32 * PTR32 * pppuVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined * PTR32 * ppvVar6;
  undefined * pvVar7;
  uint uVar8;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar9;
  ulonglong uVar10;
  
  pppuVar2 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  (*(uint *)(gen_frame + 0x38)) = 0xf;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar2 & 0xffffff00)));
  F_0040ec10(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_FWD,param_1,0,0xffffffff);
  uVar8 = ((uint *)(gen_frame + 0x8))[0];
  (*(uint *)(gen_frame + 0x1c)) = 0xf;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x8))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x8))[0] = uVar8 & 0xffffff00;
  F_0040ec10(((uint *)(gen_frame + 0x8)) GEN_EDX_ARG,param_2,0,0xffffffff);
  F_0040b4c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)));
  F_0040b4c0(((uint *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x18)) != 0) {
    pvVar7 = ((undefined *)GEN_TOP(F_004107c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)))));
    F_0040ec10(pvVar7 GEN_EDX_ARG,((uint *)(gen_frame + 0x8)),0,0xffffffff);
    goto LAB_0040d08c;
  }
  pvVar7 = ((undefined *)GEN_TOP(((int)this + 4)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar7;
  pvVar3 = ((undefined *)GEN_TOP(F_0040f1b0(pvVar7 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24)))));
  uVar8 = (*(uint *)(gen_frame + 0x34));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar3;
  if (pvVar3 == *((undefined * PTR32 *)GEN_TOP(((int)this + 8)))) {
LAB_0040d057: ;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 4)));
    ppvVar6 = &(*(undefined * PTR32 *)(gen_frame + 0x4));
  }
  else {
    uVar1 = *((uint *)GEN_TOP(((int)pvVar3 + 0x1c)));
    puVar4 = ((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc)));
    if (0xf < *((uint *)GEN_TOP(((int)pvVar3 + 0x20)))) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
    }
    uVar5 = (*(uint *)(gen_frame + 0x34));
    if (uVar1 <= (*(uint *)(gen_frame + 0x34))) {
      uVar5 = uVar1;
    }
    ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0];
    if ((*(uint *)(gen_frame + 0x38)) < 0x10) {
      ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24));
    }
    uVar5 = F_0040d320(ppppuVar9,puVar4,uVar5);
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    if (uVar5 == 0) {
      if (uVar8 < uVar1) goto LAB_0040d057;
      uVar5 = (uint)(uVar8 != uVar1);
    }
    if ((int)uVar5 < 0) goto LAB_0040d057;
    ppvVar6 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  if (*ppvVar6 != *((undefined * PTR32 *)GEN_TOP(((int)this + 8)))) {
    F_0040fac0(pvVar7 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*ppvVar6);
  }
LAB_0040d08c: ;
  if (0xf < (*(uint *)(gen_frame + 0x1c))) {
    F_00429760(((uint *)(gen_frame + 0x8))[0],(*(uint *)(gen_frame + 0x1c)) + 1,0x12f);
  }
  uVar8 = ((uint *)(gen_frame + 0x8))[0];
  (*(uint *)(gen_frame + 0x1c)) = 0xf;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x8))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x8))[0] = uVar8 & 0xffffff00;
  uVar8 = (*(uint *)(gen_frame + 0x38));
  if (0xf < (*(uint *)(gen_frame + 0x38))) {
    uVar10 = F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24))[0],(*(uint *)(gen_frame + 0x38)) + 1,0x12f);
    uVar8 = (uint)uVar10;
  }
  return uVar8;
}

/* ref: FUN_0040d0f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0040d0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x40d0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*((int *)GEN_TOP(((int)this + (param_1 >> 0x18) * 4 + 0x48))) +
          *((int *)GEN_TOP(((int)this + (param_1 >> 0x10 & 0xff) * 4 + 0x448))) ^
         *((uint *)GEN_TOP(((int)this + (param_1 >> 8 & 0xff) * 4 + 0x848)))) +
         *((int *)GEN_TOP(((int)this + (param_1 & 0xff) * 4 + 0xc48)));
}

