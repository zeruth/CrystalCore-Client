#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2e40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10969ec));
  F_00429fa0();
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004e2e80 */
GEN_OWN GEN_FRAME uint F_004e2e80(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e2e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2ea0 */
GEN_OWN GEN_FRAME uint F_004e2ea0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e2ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::SaveThread::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2ec0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x1096c3c));
  gen_imp_CloseHandle(param_1[7]);
  gen_imp_CloseHandle(param_1[6]);
  F_004cf880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004e2f10 */
GEN_OWN GEN_FRAME uint F_004e2f10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e2f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2f30 */
GEN_OWN GEN_FRAME uint F_004e2f30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e2f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::RenderThread::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2f50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x1096c58));
  gen_imp_CloseHandle(param_1[7]);
  gen_imp_CloseHandle(param_1[6]);
  F_004cf880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004e2fa0 */
GEN_OWN GEN_FRAME uint F_004e2fa0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e2fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2fc0 */
GEN_OWN GEN_FRAME uint F_004e2fc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e2fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2fe0 */
GEN_OWN GEN_FRAME uint F_004e2fe0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e2fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e3000 */
GEN_OWN GEN_FRAME uint F_004e3000(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e3000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::CallbackManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3020(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1096c74));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004e3060 */
GEN_OWN GEN_FRAME uint F_004e3060(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e3060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e30a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e30a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e30a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (param_1 < (uint)(*((int *)GEN_TOP(((int)this + 0x10))) - *((int *)GEN_TOP(((int)this + 0xc))) >> 2)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_004e30d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e30d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e30d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (param_1 < (uint)(*((int *)GEN_TOP(((int)this + 0x24))) - *((int *)GEN_TOP(((int)this + 0x20))) >> 2)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_004e3100 */
GEN_OWN GEN_FRAME uint F_004e3100(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e3100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e3120 */
GEN_OWN GEN_FRAME uint F_004e3120(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e3120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_004e3140 */
GEN_OWN GEN_FRAME uint F_004e3140(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e3140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_004e3160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1 & 0x7ffffff;
  if (*((uint *)GEN_TOP(((int)this + 0x40))) != uVar1) {
    uVar1 = F_004d75c0(this GEN_EDX_FWD,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e3180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1 & 0x1f;
  if (*((uint *)GEN_TOP(((int)this + 0x44))) != uVar1) {
    uVar1 = F_004d7720(this GEN_EDX_FWD,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e31a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e31a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e31a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = param_1 & 0xfe000000;
  if ((*((uint *)GEN_TOP(((int)this + 0x48))) != uVar1) ||
     (*((uint *)GEN_TOP(((int)this + 0x4c))) != (param_2 & 0xfffffffc))) {
    uVar1 = F_004d7790(this GEN_EDX_FWD,uVar1,param_2 & 0xfffffffc);
  }
  return uVar1;
}

/* ref: FUN_004e31d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e31d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e31d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1 & 0x7fffffff;
  if (*((uint *)GEN_TOP(((int)this + 0x50))) != uVar1) {
    uVar1 = F_004d7890(this GEN_EDX_FWD,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e31f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e31f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e31f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0x54))) != param_1) {
    if (param_1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x1a0))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x24 + REFG(int, 0x1375a3c) * 4))));
    }
    *((int *)GEN_TOP(((int)this + 0x54))) = param_1;
  }
  return;
}

/* ref: FUN_004e3230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x170))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
  *((int *)GEN_TOP(((int)this + 0x5c))) = param_1;
  uVar1 = F_004d7d30(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004e3270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x1ac))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  *((int *)GEN_TOP(((int)this + 0xc0))) = param_1;
  uVar1 = F_004d8210(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_004e3320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3320(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  *((undefined1 *)GEN_TOP(((int)in_ecx + param_2))) = 0;
  return param_2;
}

/* ref: FUN_004e3350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3350u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_004e3430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
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

/* ref: FUN_004e34b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e34b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e34b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
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

/* ref: FUN_004e3510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3510(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e3520 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e3520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e3520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004e1d00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_004e3530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3530(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e3540 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e3540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e3540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004e1d60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Notifier::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e35a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e35a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (param_1[1] == 0) {
    REFG(undefined4, 0x1375a40) = param_1[2];
  }
  else {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::Context::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3600(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) == 0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1096a04));
    if ((param_2 & 1) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_FWD,param_1);
    }
    return (uint)param_1;
  }
  iVar2 = param_1[-1];
  puVar1 = param_1 - 1;
  puVar3 = param_1 + iVar2 * 0x16c;
  while (iVar2 = iVar2 - 1, -1 < iVar2) {
    puVar3 = puVar3 - 0x16c;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x1096a04));
  }
  if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,puVar1);
  }
  return (uint)puVar1;
}

/* ref: FUN_004e3680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3680(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004e36a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e36a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e36a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if (0xf < (uint)in_ecx[5]) {
    *param_2 = in_ecx[4] + *in_ecx;
    return (uint)param_2;
  }
  *param_2 = in_ecx[4] + (int)in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004e3700 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e3700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e3700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004e1d00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_004e3710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_004e1d00(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_004e3730 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e3730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e3730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004e1d60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_004e3750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3750(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004e3760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_004e3770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3770(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004e3780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_004e3790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3790(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004e37a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e37a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e37a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_004e37d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e37d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e37d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004e37e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e37e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e37e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_004e37f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e37f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e37f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_004e3810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 0xc;
  return (uint)param_1;
}

/* ref: FUN_004e3830 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e3830(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e3840 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e3840(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e3850 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e3850(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e3900 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e3900(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e3910 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e3910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_004e3930 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e3930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_004e3950 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e3950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_004e3970 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e3970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_004e3990 */
GEN_OWN GEN_FRAME unsigned int F_004e3990(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4e3990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  char * pcVar1;
  
  for (pcVar1 = param_1; pcVar1 != param_2; pcVar1 = pcVar1 + 1) {
    if (*pcVar1 == *param_3) {
      *pcVar1 = *param_4;
    }
  }
  return 0;
}

/* ref: FUN_004e39c0 */
GEN_OWN GEN_FRAME unsigned int F_004e39c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e39c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_004e39f0 */
GEN_OWN GEN_FRAME unsigned int F_004e39f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e39f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_004e3a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3a20u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_004e2560(this GEN_EDX_FWD,0,*((undefined4 *)GEN_TOP(((int)this + 0x10))),param_1,
                       (int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_004e3a50 */
GEN_OWN GEN_FRAME unsigned int F_004e3a50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 3;
  }
  return;
}

/* ref: FUN_004e3a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e3aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e3ac0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e3ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e3ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004e26a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_004e3ad0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e3ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e3ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004e2700(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_004e3ae0 */
GEN_OWN GEN_FRAME unsigned int F_004e3ae0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_004e3b10 */
GEN_OWN GEN_FRAME unsigned int F_004e3b10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3b10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
    }
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_004e3b50 */
GEN_OWN GEN_FRAME unsigned int F_004e3b50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
    }
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_004e3b90 */
GEN_OWN GEN_FRAME unsigned int F_004e3b90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_004e3bc0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004e3bc0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_004e3be0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004e3be0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_004e3c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  
  if (param_1 < *((uint *)GEN_TOP(((int)this + 8)))) {
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + param_1 * 8)));
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (uVar1 < (uint)(*((int *)GEN_TOP((iVar2 + 0x10))) - *((int *)GEN_TOP((iVar2 + 0xc))) >> 2)) {
      return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0xc))) + uVar1 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_004e3c40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  
  if (param_1 < *((uint *)GEN_TOP(((int)this + 8)))) {
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4 + param_1 * 8)));
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (uVar1 < (uint)(*((int *)GEN_TOP((iVar2 + 0x24))) - *((int *)GEN_TOP((iVar2 + 0x20))) >> 2)) {
      return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x20))) + uVar1 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_004e3c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  uint uVar2;
  
  if ((((byte)param_1 < 0x10) && (cVar1 = *((char *)GEN_TOP((param_1 + 0xc + (int)this))), -1 < cVar1)) &&
     ((int)cVar1 < *((int *)GEN_TOP(((int)this + 8))))) {
    uVar2 = F_004e3c00(this GEN_EDX_FWD,(int)cVar1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_004e3cb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  uint uVar2;
  
  if ((((byte)param_1 < 0x10) && (cVar1 = *((char *)GEN_TOP((param_1 + 0xc + (int)this))), -1 < cVar1)) &&
     ((int)cVar1 < *((int *)GEN_TOP(((int)this + 8))))) {
    uVar2 = F_004e3c40(this GEN_EDX_FWD,(int)cVar1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_004e3ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c))) == 1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x170))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
    *((int *)GEN_TOP(((int)this + 0x5c))) = param_1;
    uVar1 = F_004d7d30(this GEN_EDX_ARG,param_1,param_2);
    return uVar1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x5c))) != param_1) {
    F_004d7da0(this GEN_EDX_ARG,param_1);
  }
  uVar1 = F_004d7c80(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004e3d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc0))) == 1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x1ac))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x28))));
    *((int *)GEN_TOP(((int)this + 0xc0))) = param_1;
    uVar1 = F_004d8210(this GEN_EDX_ARG,param_1,param_2);
    return uVar1;
  }
  if (*((int *)GEN_TOP(((int)this + 0xc0))) != param_1) {
    F_004d8280(this GEN_EDX_ARG,param_1);
  }
  uVar1 = F_004d8160(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004e3da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + param_1 * 0x1c)));
  if (0xf < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + 0x14 + param_1 * 0x1c)))) {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar1));
  }
  return (uint)puVar1;
}

/* ref: FUN_004e3dd0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e3dd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 uVar1;
  
  if ((param_2 != '\0') && (0xf < (uint)param_1[5])) {
    uVar1 = *param_1;
    if (param_3 != 0) {
      F_00c46aa0(param_1,uVar1,param_3);
    }
    F_00429760(uVar1,param_1[5] + 1,0x32);
  }
  param_1[4] = param_3;
  param_1[5] = 0xf;
  *((undefined1 *)GEN_TOP((param_3 + (int)param_1))) = 0;
  return;
}

/* ref: FUN_004e3e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3e70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e3e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_004e1d00(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_004e3ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3ea0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e3eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_004e1d60(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_004e3ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e3ed0u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar4 = F_004296a0(uVar5 + 1,0,0x32);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    F_00429760(*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 0x14))) + 1,0x32);
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

/* ref: FUN_004e3f90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e3f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_004e3f90(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,0xc9);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_004e3fd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e3fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e3fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
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

/* ref: FUN_004e4030 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e4030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e4030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_004e4030(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,0xc9);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_004e4070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e4070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e4070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
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

/* ref: FUN_004e4110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e4110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e4110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e41b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e41b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e41b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x15))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_004e4280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e4280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e4280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x15))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_004e4330 */
GEN_OWN GEN_FRAME uint F_004e4330(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e4330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_004e2560(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),param_2,
                       (int)pcVar2 - (int)(param_2 + 1));
  return (uint)(uVar3 == 0);
}

/* ref: FUN_004e4370 */
GEN_OWN GEN_FRAME unsigned int F_004e4370(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e4370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_004e43a0 */
GEN_OWN GEN_FRAME unsigned int F_004e43a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e43a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004e43d0 */
GEN_OWN GEN_FRAME unsigned int F_004e43d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e43d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
        puVar1[2] = *((undefined4 *)GEN_TOP((iVar2 + 8 + (int)puVar1)));
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e4410 */
GEN_OWN GEN_FRAME unsigned int F_004e4410(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e4410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
        puVar1[2] = *((undefined4 *)GEN_TOP((iVar2 + 8 + (int)puVar1)));
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e4450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e4450(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4e4450u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x18,0xc9);
                    
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
LAB_004e464d: ;
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
        goto LAB_004e464d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_004e4680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e4680(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4e4680u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x18,0xc9);
                    
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
LAB_004e487d: ;
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
        goto LAB_004e487d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_004e48b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e48b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e48b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004e26a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_004e48c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e48c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e48c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004e2700(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_004e48d0 */
GEN_OWN GEN_FRAME unsigned int F_004e48d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e48d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_004e4900 */
GEN_OWN GEN_FRAME unsigned int F_004e4900(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e4900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_004e4920 */
GEN_OWN GEN_FRAME unsigned int F_004e4920(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e4920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_004e4940 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e4940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e4940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x32);
    uVar1 = (uint)uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_004e4990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e4990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e4990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xc9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_004e49d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e49d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e49d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_004e49f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e49f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e49f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_004e4a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e4a00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e4a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_004e4a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e4a20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e4a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_004e4a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e4a30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e4a30u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_004e3ed0(param_1 GEN_EDX_ARG,param_2,param_1[4]);
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
      F_00429760(uVar2,param_1[5] + 1,0x32);
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

/* ref: FUN_004e4af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e4af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4af0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_004e1d00(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_004e4c0a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_004e1be0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_004e1bc0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_004e4c0a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_004e3fd0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_004e3430(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_004e3fd0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_004e4cc8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_004e3430(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_004e4cc8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_004e3fd0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_004e3430(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0xc9);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004e4d50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e4d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e4d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_004e3f90(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x18,0xc9);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_004e4db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e4db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4db0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_004e1d60(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_004e4eca;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_004e1c80(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_004e1c60(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_004e4eca: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_004e4070(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_004e34b0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_004e4070(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_004e4f88: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_004e34b0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_004e4f88;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_004e4070(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_004e34b0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0xc9);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004e5010 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e5010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e5010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_004e4030(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x18,0xc9);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_004e5090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e5090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_004e41b0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_004e50b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e50b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e50b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_004e4280(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_004e50f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e50f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e50f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      F_004e3ed0(this GEN_EDX_ARG,uVar2,iVar1);
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

/* ref: FUN_004e51e0 */
GEN_OWN GEN_FRAME unsigned int F_004e51e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e51e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004e5210 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004e5210(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e5210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
        puVar1[2] = *((undefined4 *)GEN_TOP((iVar2 + 8 + (int)puVar1)));
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e5250 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004e5250(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e5250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
        puVar1[2] = *((undefined4 *)GEN_TOP((iVar2 + 8 + (int)puVar1)));
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e5290 */
GEN_OWN GEN_FRAME unsigned int F_004e5290(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e5290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e52c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e52c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e52c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0') {
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
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
  puVar2 = ((undefined4 *)GEN_TOP(F_004e4450(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004e5330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e5330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0') {
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
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
  puVar2 = ((undefined4 *)GEN_TOP(F_004e4680(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004e53a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e53a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e53a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0xc9)));
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

/* ref: FUN_004e53f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e53f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e53f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0xc9)));
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

/* ref: FUN_004e5440 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e5440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e5440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x32);
    uVar1 = (uint)uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_004e5490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e5490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e5490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xc9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_004e54d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e54d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e54d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_004e3350(this GEN_EDX_ARG,uVar3 + param_2,0xffffffff);
    F_004e3350(this GEN_EDX_ARG,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar3) {
    F_004e3ed0(this GEN_EDX_ARG,uVar3,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
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

/* ref: FUN_004e55e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e55e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e55e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_004e4d50(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_004e4af0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_004e5680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e5680u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_004e5010(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_004e4db0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_004e5720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5720(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e5720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (0xf < (uint)param_1[5]) {
    F_00429760(*param_1,param_1[5] + 1,0x32);
  }
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004e5780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5780(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e5780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if ((param_2 & 2) == 0) {
    if (0xf < (uint)param_1[5]) {
      F_00429760(*param_1,param_1[5] + 1,0x32);
    }
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
    return (uint)param_1;
  }
  piVar1 = param_1 - 1;
  iVar3 = *piVar1 - 1;
  if (-1 < iVar3) {
    puVar2 = param_1 + *piVar1 * 7 + 5;
    do {
      if (0xf < (uint)puVar2[-7]) {
        F_00429760(puVar2[-0xc],puVar2[-7] + 1,0x32);
      }
      iVar3 = iVar3 - 1;
      puVar2[-7] = 0xf;
      puVar2[-8] = 0;
      *(undefined1 *)(puVar2 - 0xc) = 0;
      puVar2 = puVar2 - 7;
    } while (-1 < iVar3);
  }
  if ((param_2 & 1) != 0) {
    F_00406b30(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_004e5840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e5840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,0xc9);
    F_004e5210(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,0xc9);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0xc + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_004e5900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e5900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004e54d0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_004e5920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e5920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3 = puVar3 + 3;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e5970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e5970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3 = puVar3 + 3;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e59c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e59c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e59c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_004e5840(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_004e5840(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e5a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e5a40u, gen_a0, gen_a1, gen_a2, 0u);
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
          uVar2 = F_004e50f0(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar2;
        }
        uVar2 = F_004e50f0(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
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
      F_004e3ed0(this GEN_EDX_ARG,uVar2,iVar1);
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

/* ref: FUN_004e5b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e5b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,0xc9);
    F_004e5250(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,0xc9);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0xc + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_004e5c20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e5c20u, gen_a0, gen_a1, gen_a2, 0u);
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
          uVar1 = F_004e54d0(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_004e54d0(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < param_2) {
    F_004e3ed0(this GEN_EDX_ARG,param_2,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
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

/* ref: FUN_004e5d20 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004e5d20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e5d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e5d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e5d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint * puVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0xc9)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1 = puVar3 + 3;
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    *puVar1 = *(*(uint * PTR32 *)&gen_args[1]);
    puVar3[4] = (*(uint * PTR32 *)&gen_args[1])[1];
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = ((undefined4 *)GEN_TOP(puVar5[1]));
  cVar2 = *((char *)GEN_TOP(((int)puVar4 + 0x15)));
  (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))) = true;
  if (cVar2 == '\0') {
    do {
      puVar5 = puVar4;
      (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))) = *puVar1 < (uint)puVar5[3];
      if ((bool)(*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0))))) {
        puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      }
      else {
        puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      }
    } while (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0');
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_004e4450(this GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[1]),(*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))),puVar5,puVar3)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004e5df0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e5df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint * puVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0xc9)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1 = puVar3 + 3;
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    *puVar1 = *(*(uint * PTR32 *)&gen_args[1]);
    puVar3[4] = (*(uint * PTR32 *)&gen_args[1])[1];
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = ((undefined4 *)GEN_TOP(puVar5[1]));
  cVar2 = *((char *)GEN_TOP(((int)puVar4 + 0x15)));
  (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))) = true;
  if (cVar2 == '\0') {
    do {
      puVar5 = puVar4;
      (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))) = *puVar1 < (uint)puVar5[3];
      if ((bool)(*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0))))) {
        puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      }
      else {
        puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      }
    } while (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0');
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_004e4680(this GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[1]),(*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))),puVar5,puVar3)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004e5e90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e5e90(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e5e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1[5];
  if (0xf < uVar1) {
    uVar2 = F_00429760(*param_1,uVar1 + 1,0x32);
    uVar1 = (uint)uVar2;
  }
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return uVar1;
}

/* ref: FUN_004e5ed0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e5ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e5ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xc9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_004e5f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e5f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_004e54d0(this GEN_EDX_FWD,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_004e5f50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e5f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e5f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_004e5fa0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e5fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e5fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_004e5ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e5ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e5ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_004e55e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_004e6010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_004e5680(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_004e6030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004e54d0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_004e6090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xc9)));
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xc9);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_004e6140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar4 = (int)(uVar2 - *(int *)this) / 0xc;
  if (param_1 < uVar4) {
    uVar4 = *(int *)this + param_1 * 0xc;
    if (uVar4 == uVar2) {
      return param_1 * 3;
    }
  }
  else {
    if (param_1 <= uVar4) {
      return uVar4;
    }
    F_004e59c0(this GEN_EDX_FWD,param_1 - uVar4);
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar1 = param_1 - ((int)puVar3 - *(int *)this) / 0xc; iVar1 != 0; iVar1 = iVar1 - 1) {
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3 = puVar3 + 3;
    }
    uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xc;
    uVar4 = *((int *)GEN_TOP(((int)this + 4))) + (param_1 - uVar2) * 0xc;
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  return uVar2;
}

/* ref: FUN_004e6210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_004e59c0(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0xc) * 0xc)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xc;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_004e59c0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xc;
  return (uint)puVar3;
}

/* ref: FUN_004e62a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e62a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e62a0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_004e5a40(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_004e62d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e62d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e62d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_004e5b60(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_004e5b60(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e6350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_004e6090(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_004e6090(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_004e63c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e63c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e63c0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_004e5c20(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_004e63f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e63f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e63f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004e5d50(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_004e6410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e6410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004e5df0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_004e6430 */
GEN_OWN GEN_FRAME uint F_004e6430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2[5];
  if (0xf < uVar1) {
    uVar2 = F_00429760(*param_2,uVar1 + 1,0x32);
    uVar1 = (uint)uVar2;
  }
  param_2[5] = 0xf;
  param_2[4] = 0;
  *(undefined1 *)param_2 = 0;
  return uVar1;
}

/* ref: FUN_004e6470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e6470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_004e54d0(this GEN_EDX_FWD,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_004e64b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e64b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e64b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_004e6500 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e6500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_004e6550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_004e55e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e6590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_004e5680(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e65f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e65f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e65f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_004e54d0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_004e6610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6610u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_004e5a40(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_004e6640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_004e62d0(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0xc) * 0xc)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xc;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_004e62d0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xc;
  return (uint)puVar3;
}

/* ref: FUN_004e66d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e66d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e66d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *((int *)GEN_TOP(((int)this + 4))) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_004e6350(this GEN_EDX_ARG,param_1 - uVar2);
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 - 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_004e6760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_004e6350(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_004e6350(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_004e6850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6850u, gen_a0, gen_a1, 0u, 0u);
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
  F_004e5c20(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (uint)this;
}

/* ref: FUN_004e6890 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004e6890(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_004e54d0(param_1 GEN_EDX_ARG,param_2,0,0xffffffff);
  }
  return;
}

/* ref: FUN_004e68c0 */
GEN_OWN GEN_FRAME uint F_004e68c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e68c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_004e54d0(this GEN_EDX_ARG,iVar1,0,0xffffffff);
    iVar1 = iVar1 + 0x1c;
    this = ((undefined *)GEN_TOP(((int)this + 0x1c)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_004e6900 */
GEN_OWN GEN_FRAME uint F_004e6900(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4e6900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  ulonglong uVar4;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    puVar3 = param_1 + 5;
    do {
      puVar2 = ((undefined4 *)GEN_TOP(*puVar3));
      if (((undefined4 *)GEN_TOP(0xf)) < puVar2) {
        uVar4 = F_00429760(puVar3[-5],(int)puVar2 + 1,0x32);
        puVar2 = ((undefined4 *)GEN_TOP((uint)uVar4));
      }
      *puVar3 = 0xf;
      puVar3[-1] = 0;
      *(undefined1 *)(puVar3 - 5) = 0;
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 7;
    } while (puVar1 != param_2);
  }
  return (uint)puVar2;
}

/* ref: FUN_004e6950 */
GEN_OWN GEN_FRAME unsigned int F_004e6950(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e6950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_004e54d0(param_2 GEN_EDX_ARG,param_3,0,0xffffffff);
  }
  return;
}

/* ref: FUN_004e6980 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e6980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_004e69d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e69d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e69d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_004e6a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_004e55e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e6a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_004e5680(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e6aa0 */
GEN_OWN GEN_FRAME uint F_004e6aa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e6aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_004e6ac0 */
GEN_OWN GEN_FRAME uint F_004e6ac0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e6ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_004e6b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6b60u, gen_a0, gen_a1, 0u, 0u);
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
  F_004e5c20(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (uint)this;
}

/* ref: FUN_004e6ba0 */
GEN_OWN GEN_FRAME unsigned int F_004e6ba0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e6ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_004e54d0(param_2 GEN_EDX_ARG,param_3,0,0xffffffff);
  }
  return;
}

/* ref: FUN_004e6bd0 */
GEN_OWN GEN_FRAME unsigned int F_004e6bd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e6bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_004e54d0(param_2 GEN_EDX_ARG,param_3,0,0xffffffff);
  }
  return;
}

/* ref: FUN_004e6c00 */
GEN_OWN GEN_FRAME uint F_004e6c00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e6c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x1c) {
    F_004e54d0(this GEN_EDX_ARG,iVar1,0,0xffffffff);
    this = ((undefined *)GEN_TOP(((int)this + 0x1c)));
  }
  return (uint)this;
}

/* ref: FUN_004e6c30 */
GEN_OWN GEN_FRAME uint F_004e6c30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e6c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_004e6900(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_004e6c50 */
GEN_OWN GEN_FRAME uint F_004e6c50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x4e6c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined1 * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined1 *)GEN_TOP(0x0))) {
      *(undefined4 *)(this + 0x14) = 0xf;
      *(undefined4 *)(this + 0x10) = 0;
      *this = 0;
      F_004e54d0(this GEN_EDX_ARG,iVar1,0,0xffffffff);
    }
    iVar1 = iVar1 + 0x1c;
    this = this + 0x1c;
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_004e6ca0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e6ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cd0));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x70)));
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 0x78))) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10969f4));
  return;
}

/* ref: Client::Graphics::Kernel::Device::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6d00(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004e6ca0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004e6d30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e6d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cdc));
  local_8 = 2;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x7c)));
  do {
    iVar3 = puVar2[-4];
    if (iVar3 != 0) {
      F_00429760(iVar3,((puVar2[-2] - iVar3) / 0xc) * 0xc,0xc9);
    }
    local_8 = local_8 - 1;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2 = puVar2 - 4;
  } while (-1 < local_8);
  iVar3 = 2;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  do {
    iVar1 = puVar2[-4];
    if (iVar1 != 0) {
      F_00429760(iVar1,(puVar2[-2] - iVar1 >> 2) * 4,0xc9);
    }
    iVar3 = iVar3 - 1;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2 = puVar2 - 4;
  } while (-1 < iVar3);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: Client::Graphics::Kernel::Device::DelayedReleaseManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6df0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004e6d30(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004e6e20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_004e55e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e6e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_004e5680(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e6ea0 */
GEN_OWN GEN_FRAME uint F_004e6ea0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e6ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_004e6ec0 */
GEN_OWN GEN_FRAME uint F_004e6ec0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e6ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_004e6ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e6ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004e6900(param_1,param_2,(int)this + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_004e6f00 */
GEN_OWN GEN_FRAME uint F_004e6f00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4e6f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_004e6c50(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_004e6f30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e6f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096ce4));
  F_004e55e0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x20))),0x18,0xc9);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: Client::Graphics::Kernel::Device::InputLayoutManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6f80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e6f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1096ce4));
  F_004e55e0(param_1 + 7 GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(param_1[8])),((undefined4 *)GEN_TOP(param_1[8])));
  F_00429760(param_1[8],0x18,0xc9);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004e6fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e6fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e6fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cec));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  F_004e5680(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: Client::Graphics::Kernel::Device::HandleManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7030(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e7030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1096cec));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  F_004e5680(param_1 + 1 GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(param_1[2])),((undefined4 *)GEN_TOP(param_1[2])));
  F_00429760(param_1[2],0x18,0xc9);
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004e7090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e7090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  if (param_2 != param_3) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x1c)))) {
      F_004e54d0(this_00 GEN_EDX_FWD,pvVar2,0,0xffffffff);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x1c)));
    }
    F_004e6900(this_00,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,param_1);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e7100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e7100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_004e6900(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1c) * 0x1c,0xc9)
    ;
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_004e7170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e7170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_004e6c50(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_004e71b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e71b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e71b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_004e7090(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_004e71d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e71d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e71d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x1c,0,0xc9);
    F_004e6c50(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_004e6900(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,uVar3);
      F_00429760(*(undefined4 *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1c) * 0x1c,0xc9
                  );
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x1c + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar1 - iVar2) / 0x1c) * 0x1c;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_004e72f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e72f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e72f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x1c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_004e71d0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_004e71d0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e7380 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e7380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e7380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined1 * this_00;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_004e72f0(this GEN_EDX_FWD,1);
    }
    uVar1 = *(int *)this + ((int)(param_1 - uVar2) / 0x1c) * 0x1c;
    this_00 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_004e72f0(this GEN_EDX_ARG,1);
    }
    this_00 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    uVar1 = param_1;
  }
  if (this_00 != ((undefined1 *)GEN_TOP(0x0))) {
    *(undefined4 *)(this_00 + 0x14) = 0xf;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *this_00 = 0;
    F_004e54d0(this_00 GEN_EDX_ARG,uVar1,0,0xffffffff);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x1c;
  return;
}

/* ref: FUN_004e7440 */
GEN_OWN GEN_FRAME float10 F_004e7440(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x4e7440u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_004e7570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e7570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  code * pcVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    uVar4 = param_1[3];
    if (*((int * PTR32 *)GEN_TOP(((int)this + 200))) == param_1) {
      *((uint *)GEN_TOP(((int)this + 200))) = uVar4;
    }
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 200)));
    do {
      piVar2 = piVar3;
      if (piVar2 == ((int *)GEN_TOP(0x0))) goto LAB_004e75b5;
      piVar3 = ((int *)GEN_TOP(piVar2[3]));
    } while (((int *)GEN_TOP(piVar2[3])) != param_1);
    piVar2[3] = param_1[3];
LAB_004e75b5: ;
    param_1[3] = *((int *)GEN_TOP(((int)this + 0xc4)));
    *((int * PTR32 *)GEN_TOP(((int)this + 0xc4))) = param_1;
    pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0xa4)));
    *(undefined1 *)(param_1 + 5) = 0;
    (*pcVar1)(param_1,0);
  }
  return uVar4;
}

/* ref: FUN_004e75e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e75e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e75e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_004e7600 */
GEN_OWN GEN_NOFRAME unsigned int F_004e7600(void)
{
  GEN_ENTER(0x4e7600u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_004e7610 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e7610(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e7610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  float fVar1;
  
  if (*((char *)GEN_TOP((param_1 + 0x1d))) == '\0') {
    fVar1 = *(float *)&REFG(undefined, 0x1097254);
    if ((char)param_2 == '\0') {
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x24))) * (float10)*((float *)GEN_TOP((param_1 + 0x20))))));
    }
    F_00d2dcf0(fVar1,param_3);
    *((char *)GEN_TOP((param_1 + 0xd9))) = (char)param_2;
    *((char *)GEN_TOP((param_1 + 0xdb))) = (char)param_2;
  }
  return;
}

/* ref: FUN_004e7660 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e7660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e7660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  if (*((char *)GEN_TOP((in_ecx + 0x1d))) == '\0') {
    *((undefined1 *)GEN_TOP((in_ecx + 0xda))) = param_2;
  }
  return;
}

/* ref: FUN_004e7680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7680(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e7680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((char *)GEN_TOP((param_1 + 0x1d))) == '\0') {
    if ((*((char *)GEN_TOP((param_1 + 0xd9))) == '\0') &&
       (((char)param_2 == '\0' || (*((char *)GEN_TOP((param_1 + 0xda))) == '\0')))) {
      uVar1 = F_00d2dcf0(((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x24))) *
                                  (float10)*((float *)GEN_TOP((param_1 + 0x20)))))),param_3);
      *((undefined1 *)GEN_TOP((param_1 + 0xdb))) = 0;
      return uVar1;
    }
    in_EAX = F_00d2dcf0(*(float *)&REFG(undefined, 0x1097254),param_3);
    *((undefined1 *)GEN_TOP((param_1 + 0xdb))) = 1;
  }
  return in_EAX;
}

/* ref: FUN_004e76f0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004e76f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e76f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00d2cd90(param_1);
  return;
}

/* ref: FUN_004e7710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7710(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e7710u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint in_EAX = 0;
  
  if ((*((char *)GEN_TOP((param_1 + 0x1d))) == '\0') &&
     (*((float *)GEN_TOP((param_1 + 0x20))) = param_2, *((char *)GEN_TOP((param_1 + 0xd9))) == '\0')) {
    in_EAX = F_00d2dcf0(((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x24))) * (float10)param_2))),param_3);
  }
  return in_EAX;
}

/* ref: FUN_004e7750 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_004e7750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e7750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: FUN_004e7760 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e7760(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e7760u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if ((*((char *)GEN_TOP((param_1 + 0x1d))) == '\0') &&
     (*((float *)GEN_TOP((param_1 + 0x24))) = param_2, *((char *)GEN_TOP((param_1 + 0xd9))) == '\0')) {
    F_00d2dcf0(((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x20))) * (float10)param_2))),param_3);
  }
  return;
}

/* ref: FUN_004e77a0 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_004e77a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e77a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: FUN_004e77b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e77b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e77b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  uint in_EAX = 0;
  
  if (*((char *)GEN_TOP((param_1 + 0x1d))) == '\0') {
    fVar1 = *(float *)&REFG(undefined, 0x1097254);
    if ((char)param_2 == '\0') {
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x24))) * (float10)*((float *)GEN_TOP((param_1 + 0x20))))));
    }
    in_EAX = F_00d2dcf0(fVar1,100);
    *((char *)GEN_TOP((param_1 + 0xd9))) = (char)param_2;
    *((char *)GEN_TOP((param_1 + 0xdb))) = (char)param_2;
  }
  return in_EAX;
}

/* ref: FUN_004e7800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e7800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xe8)));
  *((uint *)GEN_TOP((in_ecx + 0xe8))) = param_2;
  if (uVar1 != param_2) {
    *((undefined1 *)GEN_TOP((in_ecx + 0xf0))) = 1;
  }
  return param_2;
}

/* ref: FUN_004e7820 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e7820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4e7820u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0xec))) = param_2;
  return;
}

/* ref: FUN_004e7840 */
GEN_OWN GEN_FRAME float10 GEN_STDCALL F_004e7840(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x4e7840u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1;
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10972d0);
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && !(fVar2 < fVar1)) {
    return fVar1;
  }
  if (param_1 <= REFG(float, 0x1096e14)) {
    fVar1 = GEN_X87((float10)((float)GEN_TOF(((float10)1 - (fVar1 - fVar2) / (float10)*(double *)&REFG(undefined, 0x10972c8)))));
    return GEN_X87((float10)((float)GEN_TOF((fVar2 + (float10)((float)GEN_TOF((((float10)1 - fVar1 * fVar1) *
                                                    (float10)*(double *)&REFG(undefined, 0x1094788))))))));
  }
  return (float10)REFG(float, 0x1096e18);
}

/* ref: FUN_004e78b0 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_004e78b0(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(byte * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e78b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  int * piVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  piVar1 = ((int *)GEN_TOP(F_00d2ccf0()));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)));
    *(undefined4 *)param_1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    *(undefined4 *)param_3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  }
  return uVar2;
}

/* ref: FUN_004e7910 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_004e7910(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e7910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x28 + param_2 * 4)));
}

/* ref: FUN_004e7920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7920(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4e7920u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint in_EAX = 0;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return in_EAX;
  }
  if (0xf < param_2) {
    return in_EAX;
  }
  if (param_2 == 5) {
    uVar2 = 0xe;
  }
  else {
    if (param_2 != 0xb) goto LAB_004e795d;
    uVar2 = 0xf;
  }
  F_004e7920(param_1 GEN_EDX_FWD,uVar2,param_3,100);
LAB_004e795d: ;
  *((float *)GEN_TOP((param_1 + 0x28 + param_2 * 4))) = param_3;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),param_2);
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x68 + param_2 * 4))) *
                                       (float10)*((float *)GEN_TOP((param_1 + 0x28 + param_2 * 4)))))),param_4);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e79b0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_004e79b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e79b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x68 + param_2 * 4)));
}

/* ref: FUN_004e79c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e79c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4e79c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint in_EAX = 0;
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return in_EAX;
  }
  if (0xf < param_2) {
    return in_EAX;
  }
  if ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_3 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x68 + param_2 * 4))) = param_3;
    if (param_2 == 5) {
      uVar3 = 0xe;
    }
    else {
      if (param_2 != 0xb) goto LAB_004e7a19;
      uVar3 = 0xf;
    }
    F_004e79c0(param_1 GEN_EDX_FWD,uVar3,param_3,100);
  }
LAB_004e7a19: ;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),param_2);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_2 + 0xa8 + param_1))) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x68 + param_2 * 4))) *
                                        (float10)*((float *)GEN_TOP((param_1 + 0x28 + param_2 * 4)))) *
                                       (float10)fVar2))),param_4);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e7a80 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004e7a80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4e7a80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (param_1 < 0x10)) {
    if (param_1 == 5) {
      F_004e7a80(0xe,param_2);
    }
    else if (param_1 == 0xb) {
      F_004e7a80(0xf,param_2);
    }
    F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),param_1);
    F_00cbb3e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
    uVar2 = 0;
    uVar1 = F_00cbb250(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
    F_00cbb950(uVar1 GEN_EDX_ARG,param_2,uVar2);
    F_00cbb890(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_004e7b10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e7b10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e7b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((byte *)GEN_TOP((param_2 + 0xa8 + in_ecx)));
}

/* ref: FUN_004e7b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e7b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float fVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1;
  while( true ) {
    fVar1 = REFG(float, 0x1090708);
    *((char *)GEN_TOP(((int)this + iVar3 + 0xa8))) = (char)param_2;
    uVar2 = F_004e79c0(this GEN_EDX_FWD,iVar3,fVar1,100);
    if (iVar3 == 5) {
      uVar2 = F_004e7b30(this GEN_EDX_ARG,0xe,param_2);
      return uVar2;
    }
    if (iVar3 != 0xb) break;
    iVar3 = 0xf;
  }
  return uVar2;
}

/* ref: FUN_004e7b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7b80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4e7b80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  float fVar2;
  
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x6c))) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),1);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xa9))) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x6c))) * (float10)*((float *)GEN_TOP((param_1 + 0x2c)))) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x88))) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),8);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xb0))) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x88))) * (float10)*((float *)GEN_TOP((param_1 + 0x48)))) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x8c))) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),9);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xb1))) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x8c))) *
                                        (float10)*((float *)GEN_TOP((param_1 + 0x4c)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e7cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7cc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4e7cc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  float fVar2;
  
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x70))) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),2);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xaa))) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x70))) * (float10)*((float *)GEN_TOP((param_1 + 0x30)))) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x80))) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),6);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xae))) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x80))) * (float10)*((float *)GEN_TOP((param_1 + 0x40)))) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x84))) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),7);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xaf))) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x84))) * (float10)*((float *)GEN_TOP((param_1 + 0x44)))) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x90))) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),10);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xb2))) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x90))) *
                                        (float10)*((float *)GEN_TOP((param_1 + 0x50)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e7e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7e70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4e7e70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  float fVar2;
  
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x74))) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),3);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xab))) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x74))) *
                                        (float10)*((float *)GEN_TOP((param_1 + 0x34)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e7ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7ef0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4e7ef0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  float fVar2;
  
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x78))) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),4);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xac))) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x78))) *
                                        (float10)*((float *)GEN_TOP((param_1 + 0x38)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e7f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e7f70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4e7f70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  float fVar2;
  
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x7c))) = param_2;
    F_004e79c0(param_1 GEN_EDX_FWD,0xe,param_2,100);
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),5);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xad))) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x7c))) * (float10)*((float *)GEN_TOP((param_1 + 0x3c)))) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x94))) = param_2;
    F_004e79c0(param_1 GEN_EDX_ARG,0xf,param_2,100);
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),0xb);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xb3))) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x94))) * (float10)*((float *)GEN_TOP((param_1 + 0x54)))) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *((float *)GEN_TOP((param_1 + 0x98))) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),0xc);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xb4))) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x98))) *
                                        (float10)*((float *)GEN_TOP((param_1 + 0x58)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e80e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e80e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e80e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),param_1);
  uVar1 = F_00cbb090(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e8110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e8110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e8110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_8;
  
  if (*((char *)GEN_TOP(((int)this + 0x1d))) != '\0') {
    return 0;
  }
  this_00 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc4)));
  if (this_00 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(((int)this + 0xc4))) = this_00[3];
    *(undefined1 *)(this_00 + 5) = 1;
    this_00[3] = *((int *)GEN_TOP(((int)this + 200)));
    *((int * PTR32 *)GEN_TOP(((int)this + 200))) = this_00;
    this_00[4] = 0;
    local_8 = 0xffffffff;
    if (param_1 != ((int *)GEN_TOP(0x0))) {
      F_00513f60(param_1,0,0);
      uVar3 = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_ARG);
      local_8 = F_00d2d340(uVar2,uVar3);
    }
    bVar1 = F_004ebef0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xe4))),param_1,param_2,local_8);
    if (bVar1 == 0) {
      F_00d2d530(local_8,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x78))))(this_00 GEN_EDX_ARG,500);
      return 0;
    }
  }
  return (uint)this_00;
}

/* ref: FUN_004e81e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e81e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e81e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_004042b0();
  uVar1 = F_00406c00(param_1,0,uVar1,uVar2);
  return uVar1;
}

/* ref: FUN_004e8200 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e8200(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e8200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar2 = F_00406b30(param_1);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_004e8220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e8220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e8220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  if (*((char *)GEN_TOP(((int)this + 0x1d))) != '\0') {
    return 0;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc4)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = *((undefined4 *)GEN_TOP(((int)this_00 + 0xc)));
    *((undefined1 *)GEN_TOP(((int)this_00 + 0x14))) = 1;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 200)));
    uVar1 = 0xffffffff;
    *((undefined * PTR32 *)GEN_TOP(((int)this + 200))) = this_00;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x10))) = 0;
    if (param_1 != ((int *)GEN_TOP(0x0))) {
      F_00513f60(param_1,0,0);
      uVar2 = 0;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_ARG);
      uVar1 = F_00d2d340(uVar1,uVar2);
    }
    F_004ebfb0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xe4))),param_1,param_2,uVar1);
  }
  return (uint)this_00;
}

/* ref: FUN_004e82b0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004e82b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e82b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00d2e330(param_1);
  return;
}

/* ref: FUN_004e82d0 */
GEN_OWN GEN_FRAME byte F_004e82d0(GEN_P(char * in_eax, unsigned int gen_a0), GEN_P(int in_edx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e82d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_edx = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  char cVar1;
  
  cVar1 = *in_eax;
  while( true ) {
    if (cVar1 == '\x06') {
      return 0xff;
    }
    if (cVar1 == in_edx) break;
    cVar1 = in_eax[2];
    in_eax = in_eax + 2;
  }
  if (param_3 == 2) {
    cVar1 = *in_eax;
    while (cVar1 != '\x06') {
      in_eax = in_eax + 2;
      cVar1 = *in_eax;
    }
  }
  return in_eax[1];
}

/* ref: FUN_004e8310 */
GEN_OWN GEN_FRAME uint F_004e8310(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e8310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  switch((unsigned int)(uintptr_t)(in_eax)) {
  case 1: ;
    return (param_2 != 2) - 1 & 3;
  case 2: ;
    return 2;
  case 3: ;
    return 1;
  case 4: ;
    return 4;
  case 5: ;
    return 5;
  default: ;
    return 6;
  }
}

/* ref: FUN_004e8370 */
GEN_OWN GEN_FRAME byte F_004e8370(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(uint * in_edx, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3), GEN_P(uint * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4e8370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(uint * in_edx = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  if (in_eax == 0) {
    return 0;
  }
  uVar1 = in_eax - 1;
  *in_edx = uVar1 >> 4;
  *param_3 = uVar1 >> 3 & 1;
  *param_4 = uVar1 & 1;
  *param_5 = uVar1 >> 1 & 3;
  return 1;
}

/* ref: FUN_004e83b0 */
GEN_OWN GEN_FRAME uint F_004e83b0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4e83b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (in_eax == 0) {
    return 0xffffffff;
  }
  uVar2 = in_eax - 1;
  uVar3 = uVar2 >> 1 & 3;
  uVar4 = uVar2 >> 4;
  *param_3 = uVar3;
  if (5 < uVar4) {
    return 0xffffffff;
  }
  bVar1 = F_004e82d0(param_2,*(undefined4 *)(&REFG(undefined, 0x10972d8) + uVar4 * 4),2 - (uint)(uVar4 != 1));
  if (param_4 != ((uint *)GEN_TOP(0x0))) {
    *param_4 = uVar4;
  }
  return (int)(char)bVar1 + (uVar3 * 0x32 + (uVar2 >> 3 & 1)) * 2 + (uVar2 & 1);
}

/* ref: FUN_004e8430 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e8430(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e8430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xd8))) = param_2;
  return param_2;
}

/* ref: FUN_004e8440 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_004e8440(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x4e8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  int iVar1;
  int iVar2;
  
  if (param_2 - 1U < 0xd) {
    iVar1 = 1;
    if (param_3 != 3) {
      iVar1 = param_4;
    }
    if ((param_5 < 1) || (iVar2 = param_5, 5 < param_5)) {
      iVar2 = 1;
    }
    F_00c472af(param_1,0x80,((char *)REFP(0x10971b4)),(&REFG(undefined * PTR32, 0x1302510))[(int)(param_2)],
               (-(uint)(iVar1 != 0) & 0xfffffff9) + 0x6d,(-(uint)(param_6 != 0) & 0xc) + 0x66,
               (&REFG(undefined * PTR32, 0x130255c))[(int)((char)(&REFG(undefined, 0x10972ef))[(int)(iVar2)])]);
    return 1;
  }
  return 0;
}

/* ref: FUN_004e84c0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_004e84c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e84c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  if ((param_2 < 1) || (iVar1 = param_2, 6 < param_2)) {
    iVar1 = 6;
  }
  F_00c472af(param_1,0x80,((char *)REFP(0x10971d8)),iVar1 + 0x1b51);
  return 1;
}

/* ref: FUN_004e8500 */
GEN_OWN GEN_FRAME float GEN_STDCALL F_004e8500(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e8500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (*((int *)GEN_TOP(((int)&REFG(undefined4, 0x10972f8) + uVar1))) == param_1) {
      return *(float *)(&REFG(undefined, 0x10972fc) + (param_2 + iVar2 * 3) * 4);
    }
    uVar1 = uVar1 + 0xc;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x3c);
  return REFG(float, 0x1097250);
}

/* ref: FUN_004e8540 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_004e8540(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e8540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_004e8550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e8550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e8550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0xfd))) = 0;
    uVar2 = 0;
  }
  else if (param_1 == 1) {
    uVar2 = F_00c49908((int)this + 0xfd,0x80,REFG(undefined * PTR32, 0x1302384));
  }
  else {
    uVar2 = param_1 - 2;
    if (uVar2 == 0) {
      uVar2 = F_00c49908((int)this + 0xfd,0x80,REFG(undefined * PTR32, 0x1302388));
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x184)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG,500);
    *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 3;
  }
  return uVar2;
}

/* ref: FUN_004e8600 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e8600(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e8600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_0050c620(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_004e8630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e8630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e8630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004ebcc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xcc))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_004e8640 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004e8640(GEN_P(float param_1, float gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e8640u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x410, 0, 4);
  undefined1 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  float * pfVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c));
  (*(float *)(gen_frame + 0x28)) = param_1;
  iVar8 = *((int *)GEN_TOP((REFG(int, 0x137104c) + 0x434)));
  puVar1 = param_3;
  if (param_3 == ((undefined1 *)GEN_TOP(0x0))) {
    F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x39d,
               ((char *)REFP(0x1097388))
               ,2,0x14,5,5,0xc,0xf,5,2);
    puVar1 = ((undefined1 *)(gen_frame + 0x68));
  }
  if (param_2 == '\0') {
    F_00d2f7c0(*((undefined4 *)GEN_TOP((iVar8 + 8))),puVar1);
  }
  else {
    F_00d2f740(*((undefined4 *)GEN_TOP((iVar8 + 8))),puVar1);
  }
  F_00d2f280(0x10,0xffff);
  F_00d2cd50(0);
  F_00d2e220(1);
  F_00d2e370(1);
  ((int *)(gen_frame + 0x2c))[6] = 2;
  ((int *)(gen_frame + 0x2c))[7] = 3;
  ((int *)(gen_frame + 0x2c))[8] = 5;
  ((int *)(gen_frame + 0x2c))[9] = 6;
  ((int *)(gen_frame + 0x2c))[10] = 7;
  ((int *)(gen_frame + 0x2c))[0xb] = 10;
  ((int *)(gen_frame + 0x2c))[0xc] = 0xc;
  ((int *)(gen_frame + 0x2c))[0xd] = 0xe;
  ((int *)(gen_frame + 0x2c))[0xe] = 0;
  iVar8 = 2;
  iVar9 = 0;
  do {
    F_00cbaed0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    uVar2 = F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),iVar8);
    F_00cbaf20(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar2);
    F_00cbaf10(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    F_00cbb3e0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
    F_00cbb1e0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,*(float *)&REFG(undefined, 0x1097254));
    uVar11 = 0;
    fVar10 = *(float *)&REFG(undefined, 0x1097254);
    uVar2 = F_00cbb250(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00cbb950(uVar2 GEN_EDX_ARG,fVar10,uVar11);
    F_00cbb890(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00cbaf10(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    iVar8 = ((int *)(gen_frame + 0x2c))[(int)(iVar9 + 7)];
    iVar9 = iVar9 + 1;
  } while (iVar8 != 0);
  ((int *)(gen_frame + 0x2c))[0] = 1;
  ((int *)(gen_frame + 0x2c))[2] = 1;
  ((int *)(gen_frame + 0x2c))[3] = 1;
  ((int *)(gen_frame + 0x2c))[4] = 1;
  ((int *)(gen_frame + 0x2c))[9] = 2;
  ((int *)(gen_frame + 0x2c))[10] = 5;
  ((int *)(gen_frame + 0x2c))[0xb] = 6;
  ((int *)(gen_frame + 0x2c))[0xc] = 7;
  ((int *)(gen_frame + 0x2c))[0xd] = 0xb;
  ((int *)(gen_frame + 0x2c))[0xe] = 0;
  ((int *)(gen_frame + 0x2c))[1] = 2;
  ((int *)(gen_frame + 0x2c))[5] = 0;
  iVar9 = 2;
  iVar8 = 0;
  iVar7 = 0;
  do {
    F_00cbaed0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    uVar2 = F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),iVar9);
    F_00cbaf20(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar2);
    F_00cbaf10(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    F_00cbb2c0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x2c)) + iVar8))));
    F_00cbaf10(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    iVar8 = (iVar7 + 1) * 4;
    iVar9 = ((int *)(gen_frame + 0x2c))[(int)(iVar7 + 10)];
    iVar7 = iVar7 + 1;
  } while (iVar9 != 0);
  piVar3 = ((int *)GEN_TOP(F_00d2ccf0()));
  fVar10 = (*(float *)(gen_frame + 0x28));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG,2,0xffffffff);
    fVar10 = (*(float *)(gen_frame + 0x28));
    *((uint *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x28))) + 0xdc))) = uVar2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)),uVar2);
    F_00cffe80(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,0);
    F_00cffcb0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
    F_00cffc10(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  }
  if ((*((char *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x1d))) == '\0') &&
     (*((undefined4 *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x24))) = REFG(float, 0x1097380),
     *((char *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0xd9))) == '\0')) {
    fVar6 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x20))) *
                   (float10)*(double *)&REFG(undefined, 0x1097378))));
    (*(float *)(gen_frame + 0x28)) = fVar6;
    F_00d2dcf0(fVar6,0);
  }
  uVar11 = 0;
  uVar2 = F_004042b0();
  puVar4 = ((undefined4 *)GEN_TOP(F_00406bd0(0xc,0,uVar2,uVar11)));
  if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar4 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  uVar11 = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0xe0))) = puVar4;
  uVar2 = F_004042b0();
  pfVar5 = ((float *)GEN_TOP(F_00406bd0(8,0,uVar2,uVar11)));
  if (pfVar5 == ((float *)GEN_TOP(0x0))) {
    pfVar5 = ((float *)GEN_TOP(0x0));
  }
  else {
    *pfVar5 = fVar10;
    pfVar5[1] = 0.0;
    fVar6 = gen_bits2f(F_00d2e9b0(0xffffffff));
    pfVar5[1] = fVar6;
  }
  *((float * PTR32 *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0xe4))) = pfVar5;
  uVar2 = F_00d2dcf0(REFG(float, 0x1097250),500);
  *((undefined4 *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x1a4))) = 0;
  return uVar2;
}

/* ref: FUN_004e89d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e89d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e89d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x184)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_FWD,500);
    *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  }
  for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 200))); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[3]))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG,500);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,500);
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x1d))) = 1;
  F_00d2dcf0(*(float *)&REFG(undefined, 0x1097254),500);
  (*(int *)(gen_frame + 0x0)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  (*(int *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  F_00d2da30(&(*(int *)(gen_frame + 0x4)));
  uVar3 = 0;
  do {
    if (*((int *)GEN_TOP(((int)&REFG(undefined4, 0x1302390) + uVar3))) != 0) {
      F_0050c620(*((int *)GEN_TOP(((int)&REFG(undefined4, 0x1302390) + uVar3))),0,0);
      *((undefined4 *)GEN_TOP(((int)&REFG(undefined4, 0x1302390) + uVar3))) = 0;
    }
    uVar3 = uVar3 + 8;
  } while (uVar3 < 0x10);
  if (REFG(int * PTR32, 0x1375a68) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1375a68) + 0x78))))(REFG(int * PTR32, 0x1375a68) GEN_EDX_ARG,500);
    REFG(int * PTR32, 0x1375a68) = ((int *)GEN_TOP(0x0));
  }
  REFG(undefined4, 0x1375a6c) = 0;
  if (*((int *)GEN_TOP(((int)this + 200))) == 0) {
    F_00d2da30(&(*(int *)(gen_frame + 0x0)));
    bVar2 = F_00d2db30();
    return bVar2 != 0;
  }
  return 0;
}

/* ref: FUN_004e8ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e8ae0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e8ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  float fVar2;
  
  *((undefined1 *)GEN_TOP((param_1 + 0xa9))) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),1);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xa9))) != '\0') {
    fVar2 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x6c))) *
                                (float10)*((float *)GEN_TOP((param_1 + 0x2c)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP((param_1 + 0xb0))) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),8);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xb0))) != '\0') {
    fVar2 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x88))) *
                                (float10)*((float *)GEN_TOP((param_1 + 0x48)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP((param_1 + 0xb1))) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),9);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xb1))) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x8c))) *
                                        (float10)*((float *)GEN_TOP((param_1 + 0x4c)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e8c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e8c00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e8c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  float fVar2;
  
  *((undefined1 *)GEN_TOP((param_1 + 0xaa))) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),2);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xaa))) != '\0') {
    fVar2 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x70))) *
                                (float10)*((float *)GEN_TOP((param_1 + 0x30)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP((param_1 + 0xae))) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),6);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xae))) != '\0') {
    fVar2 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x80))) *
                                (float10)*((float *)GEN_TOP((param_1 + 0x40)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP((param_1 + 0xaf))) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),7);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xaf))) != '\0') {
    fVar2 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x84))) *
                                (float10)*((float *)GEN_TOP((param_1 + 0x44)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP((param_1 + 0xb2))) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),10);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xb2))) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x90))) *
                                        (float10)*((float *)GEN_TOP((param_1 + 0x50)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e8d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e8d70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e8d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  float fVar2;
  
  *((undefined1 *)GEN_TOP((param_1 + 0xab))) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),3);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xab))) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x74))) *
                                        (float10)*((float *)GEN_TOP((param_1 + 0x34)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e8de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e8de0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e8de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  float fVar2;
  
  *((undefined1 *)GEN_TOP((param_1 + 0xac))) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),4);
  fVar2 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP((param_1 + 0xac))) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x78))) *
                                        (float10)*((float *)GEN_TOP((param_1 + 0x38)))) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e8e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e8e50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e8e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  undefined1 uVar2;
  float fVar3;
  
  uVar2 = (undefined1)param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xad))) = uVar2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),5);
  fVar3 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP(((int)param_1 + 0xad))) != '\0') {
    fVar3 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP(((int)param_1 + 0x7c))) *
                                (float10)*((float *)GEN_TOP(((int)param_1 + 0x3c)))) * (float10)fVar3))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_004e7b30(param_1 GEN_EDX_ARG,0xe,param_2);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xb3))) = uVar2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),0xb);
  fVar3 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP(((int)param_1 + 0xb3))) != '\0') {
    fVar3 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP(((int)param_1 + 0x94))) *
                                (float10)*((float *)GEN_TOP(((int)param_1 + 0x54)))) * (float10)fVar3))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_004e7b30(param_1 GEN_EDX_ARG,0xf,param_2);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xb4))) = uVar2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),0xc);
  fVar3 = REFG(float, 0x1097250);
  if (*((char *)GEN_TOP(((int)param_1 + 0xb4))) != '\0') {
    fVar3 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((float)GEN_TOF((((float10)*((float *)GEN_TOP(((int)param_1 + 0x98))) *
                                        (float10)*((float *)GEN_TOP(((int)param_1 + 0x58)))) * (float10)fVar3))),
                       100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004e8f80 */
GEN_OWN_GS GEN_FRAME float10 GEN_STDCALL F_004e8f80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x4e8f80u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL_GS(0x58, 8, 4);
  uint uVar1;
  double dVar2;
  float * pfVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54));
  (*(float *)(gen_frame + 0x40)) = param_2;
  (*(float *)(gen_frame + 0x44)) = param_3;
  pfVar3 = &(*(float *)(gen_frame + 0x40));
  (*(float *)(gen_frame + 0x48)) = param_4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  uVar1 = F_004ec420(((undefined1 *)(gen_frame + 0x0)));
  dVar2 = F_00d00380(param_1,uVar1,pfVar3);
  return (float10)dVar2;
}

/* ref: FUN_004e8ff0 */
GEN_OWN GEN_FRAME uint F_004e8ff0(void)
{
  GEN_ENTER(0x4e8ff0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 in_ecx;
  uint uVar1;
  
  in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  uVar1 = F_00414500(in_ecx GEN_EDX_ARG,4);
  F_004142d0(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar1 + 0x14))));
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_004e9020 */
GEN_OWN GEN_FRAME uint F_004e9020(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0x4e9020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 in_ecx;
  uint uVar1;
  
  if (in_eax == -1) {
    in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
    uVar1 = F_00414500(in_ecx GEN_EDX_ARG,4);
    F_004142d0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar1 + 0x14))));
    in_eax = (*(int *)(gen_frame + 0x0));
  }
  return (uint)(&REFG(undefined * PTR32, 0x13025e4))[(int)(in_eax)];
}

/* ref: FUN_004e9060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e9060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4e9060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x10))))(param_2 GEN_EDX_FWD,1);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(int * PTR32 *)(gen_frame + 0x4)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1d)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  DVar1 = *((DWORD *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1375ae8) + 0x28))) + 0xb8)));
  DVar2 = gen_imp_GetCurrentThreadId();
  if (DVar1 != DVar2) {
    uVar3 = F_00513dc0(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x0)),0,0);
    return uVar3;
  }
  uVar3 = F_00513e90(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x0)),0,0);
  return uVar3;
}

/* ref: FUN_004e9110 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e9110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e9110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x180, 0);
  double dVar1;
  int * piVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  bool bVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  (*(float * PTR32 *)(gen_frame + 0xe4)) = param_2;
  piVar2 = ((int *)GEN_TOP(F_00d2ccf0()));
  (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar2;
  pfVar7 = (*(float * PTR32 *)(gen_frame + 0xe4));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xac)),*((undefined4 *)GEN_TOP(((int)this + 0xdc))));
    pfVar7 = (*(float * PTR32 *)(gen_frame + 0xe4));
    uVar5 = 0;
    do {
      if (uVar5 == 3) {
        fVar10 = *((float *)GEN_TOP((param_1 + 0x30)));
      }
      else {
        fVar10 = *((float *)GEN_TOP((param_1 + uVar5 * 0x10)));
      }
      (*(float *)(gen_frame + 0x60)) = fVar10;
      ((float *)(gen_frame + 0xe8))[(int)(uVar5 * 4)] = fVar10;
      if (uVar5 == 3) {
        fVar10 = *((float *)GEN_TOP((param_1 + 0x34)));
      }
      else {
        fVar10 = *((float *)GEN_TOP((param_1 + 4 + uVar5 * 0x10)));
      }
      (*(float *)(gen_frame + 0x94)) = fVar10;
      ((float *)(gen_frame + 0xe8))[(int)(uVar5 * 4 + 1)] = fVar10;
      if (uVar5 == 3) {
        fVar10 = *((float *)GEN_TOP((param_1 + 0x38)));
      }
      else {
        fVar10 = *((float *)GEN_TOP((param_1 + 8 + uVar5 * 0x10)));
      }
      uVar6 = uVar5 + 1;
      ((float *)(gen_frame + 0xe8))[(int)(uVar5 * 4 + 2)] = fVar10;
      (*(float *)(gen_frame + 0x78)) = fVar10;
      ((float *)(gen_frame + 0xe8))[(int)(uVar5 * 4 + 3)] = 0.0;
      uVar5 = uVar6;
    } while (uVar6 < 4);
    fVar10 = (*(float * PTR32 *)(gen_frame + 0xe4))[1];
    ((float *)(gen_frame + 0xe8))[0xf] = GEN_FLT_TO(((float *)(gen_frame + 0xe8))[0xf], REFG(float, 0x1097250));
    (*(float *)(gen_frame + 0xd0)) = *(*(float * PTR32 *)(gen_frame + 0xe4));
    (*(float *)(gen_frame + 0xd4)) = (float)((float10)fVar10 + (float10)*(double *)&REFG(undefined, 0x1097708));
    (*(float *)(gen_frame + 0xd8)) = (*(float * PTR32 *)(gen_frame + 0xe4))[2];
    F_004eb600(((float *)(gen_frame + 0xe8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x128)));
    dVar1 = REFG(double, 0x10909a0);
    (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0xd0));
    (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0xd4));
    (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0xd8));
    (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x1097250);
    fVar10 = (*(float *)(gen_frame + 0xd0)) - (*(float *)(gen_frame + 0x158));
    fVar11 = (*(float *)(gen_frame + 0xd4)) - (*(float *)(gen_frame + 0x15c));
    fVar12 = (*(float *)(gen_frame + 0xd8)) - (*(float *)(gen_frame + 0x160));
    fVar13 = REFG(float, 0x1097250) - (*(float *)(gen_frame + 0x164));
    (*(float *)(gen_frame + 0xd0)) = fVar10;
    (*(float *)(gen_frame + 0xd4)) = fVar11;
    (*(float *)(gen_frame + 0xd8)) = fVar12;
    (*(float *)(gen_frame + 0xdc)) = fVar13;
    fVar11 = fVar11 * fVar11;
    fVar12 = fVar12 * fVar12;
    fVar10 = GEN_X87(SQRT((fVar12 + fVar10 * fVar10) + fVar11));
    (*(float *)(gen_frame + 0xc0)) = fVar10;
    (*(float *)(gen_frame + 0xc4)) = (fVar12 + fVar11) + fVar11;
    (*(float *)(gen_frame + 0xc8)) = (fVar12 + fVar12) + fVar11;
    (*(float *)(gen_frame + 0xcc)) = (fVar12 + fVar13 * fVar13) + fVar11;
    *((float *)GEN_TOP(((int)this + 0xf8))) = fVar10;
    bVar8 = GEN_ISNAN((double)*pfVar7) || GEN_ISNAN(dVar1);
    if ((bVar8 == (bVar8 || (double)*pfVar7 == dVar1)) && (*((int *)GEN_TOP(((int)this + 0xe8))) != 1)) {
      fVar11 = 0.0;
      if (0.0 < fVar10) {
        fVar10 = ((float)GEN_TOF((((float10)1 - (float10)*((float *)GEN_TOP(((int)this + 0xec)))) * (float10)fVar10)));
        (*(float * PTR32 *)(gen_frame + 0xe4)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar10)));
        fVar9 = F_004e7840(fVar10);
        (*(float * PTR32 *)(gen_frame + 0xe4)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar9)));
        *((float * PTR32 *)GEN_TOP(((int)this + 0xf4))) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar9)));
        (*(float *)(gen_frame + 0xd0)) = fVar11;
        (*(float *)(gen_frame + 0xd4)) = fVar11;
        (*(float *)(gen_frame + 0xd8)) = REFG(float, 0x1097250);
        (*(float *)(gen_frame + 0xdc)) = fVar11;
        pfVar3 = ((float *)GEN_TOP(F_004eb910(((undefined1 *)(gen_frame + 0x128)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xd0)))));
        fVar10 = pfVar3[1];
        (*(float *)(gen_frame + 0xc0)) = *pfVar3;
        (*(float *)(gen_frame + 0xc4)) = fVar10;
        (*(float *)(gen_frame + 0xc8)) = pfVar3[2];
        (*(float *)(gen_frame + 0xcc)) = pfVar3[3];
        pfVar4 = ((float *)GEN_TOP(F_004eb3a0(&(*(float *)(gen_frame + 0xc0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x50)))));
        pfVar3 = (*(float * PTR32 *)(gen_frame + 0xe4));
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        fVar12 = *pfVar4;
        fVar13 = pfVar4[1];
        (*(float *)(gen_frame + 0xc0)) = fVar12 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3)));
        (*(float *)(gen_frame + 0xc4)) = fVar13 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3)));
        (*(float *)(gen_frame + 0xc8)) = fVar10 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3)));
        (*(float *)(gen_frame + 0xcc)) = fVar11 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3)));
        fVar12 = fVar12 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3))) + (*(float *)(gen_frame + 0x80));
        fVar13 = fVar13 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3))) + (*(float *)(gen_frame + 0x84));
        fVar10 = fVar10 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3))) + (*(float *)(gen_frame + 0x88));
        fVar11 = fVar11 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3))) + (*(float *)(gen_frame + 0x8c));
        (*(float *)(gen_frame + 0xc0)) = fVar12;
        (*(float *)(gen_frame + 0xc4)) = fVar13;
        (*(float *)(gen_frame + 0xc8)) = fVar10;
        (*(float *)(gen_frame + 0xcc)) = fVar11;
        (*(float *)(gen_frame + 0xd0)) = fVar12;
        (*(float *)(gen_frame + 0xd4)) = fVar13;
        (*(float *)(gen_frame + 0xd8)) = fVar10;
        (*(float *)(gen_frame + 0xdc)) = fVar11;
        (*(float *)(gen_frame + 0x158)) = fVar12;
        (*(float *)(gen_frame + 0x15c)) = fVar13;
        (*(float *)(gen_frame + 0x164)) = fVar11;
        (*(float *)(gen_frame + 0x160)) = fVar10;
        (*(float *)(gen_frame + 0x164)) = REFG(float, 0x1097250);
        uVar5 = F_004eb600(((undefined1 *)(gen_frame + 0x128)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        F_004eb4e0(((float *)(gen_frame + 0xe8)) GEN_EDX_ARG,uVar5);
      }
    }
    else {
      *((float *)GEN_TOP(((int)this + 0xf4))) = fVar10;
    }
    if (*((char *)GEN_TOP(((int)this + 0xf0))) == '\0') {
      F_00cffde0(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG,((float *)(gen_frame + 0xe8)));
    }
    else {
      F_00cffd70(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG,((float *)(gen_frame + 0xe8)));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xbc)) + 0xd8))))((*(int * PTR32 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 0;
    F_00cffc10(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
  }
  uVar5 = REFG(undefined4, 0x1371290);
  (*(float *)(gen_frame + 0xd4)) = *pfVar7;
  fVar10 = pfVar7[1];
  (*(float *)(gen_frame + 0xd8)) = fVar10;
  fVar11 = pfVar7[2];
  *((float *)GEN_TOP((REFG(undefined4, 0x1371290) + 0x324))) = *pfVar7;
  (*(float *)(gen_frame + 0xdc)) = fVar11;
  *((float *)GEN_TOP((uVar5 + 0x328))) = fVar10;
  *((float *)GEN_TOP((uVar5 + 0x32c))) = fVar11;
  return uVar5;
}

/* ref: FUN_004e95a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e95a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9), GEN_P(undefined1 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x4e95a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  GEN_PIN(undefined1 param_11 = (undefined1)gen_a10;)
  int * piVar1;
  uint uVar2;
  
  if (*((char *)GEN_TOP(((int)param_1 + 0x1d))) != '\0') {
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0xc4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(((int)param_1 + 0xc4))) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *((int *)GEN_TOP(((int)param_1 + 200)));
    *((int * PTR32 *)GEN_TOP(((int)param_1 + 200))) = piVar1;
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[0xe] = (int)gen_fl2bits(param_5);
    piVar1[0xf] = (int)gen_fl2bits(param_6);
    piVar1[0x13] = param_10;
    piVar1[0x12] = param_9;
    piVar1[0x10] = (int)gen_fl2bits(param_7);
    piVar1[4] = 0;
    piVar1[6] = 0;
    piVar1[7] = param_4;
    piVar1[0x11] = (int)gen_fl2bits(param_8);
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *((undefined2 *)GEN_TOP(((int)piVar1 + 0x69))) = 0x101;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x6b))) = param_11;
    uVar2 = F_004e9060(param_1 GEN_EDX_FWD,param_2,piVar1,0);
    if (uVar2 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,500);
      return 0;
    }
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[0xe] = (int)gen_fl2bits(param_5);
    piVar1[0xf] = (int)gen_fl2bits(param_6);
    piVar1[6] = uVar2;
    piVar1[0x10] = (int)gen_fl2bits(param_7);
    piVar1[7] = param_4;
    piVar1[0x11] = (int)gen_fl2bits(param_8);
    piVar1[0x12] = param_9;
    piVar1[0x13] = param_10;
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *((undefined2 *)GEN_TOP(((int)piVar1 + 0x69))) = 0x101;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x6b))) = param_11;
  }
  return (uint)piVar1;
}

/* ref: FUN_004e96c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e96c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9), GEN_P(undefined1 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x4e96c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  GEN_PIN(undefined1 param_11 = (undefined1)gen_a10;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  if (*((char *)GEN_TOP(((int)param_1 + 0x1d))) != '\0') {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x188);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0xc4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(((int)param_1 + 0xc4))) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *((int *)GEN_TOP(((int)param_1 + 200)));
    *((int * PTR32 *)GEN_TOP(((int)param_1 + 200))) = piVar1;
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[0xe] = (int)gen_fl2bits(param_5);
    piVar1[0xf] = (int)gen_fl2bits(param_6);
    piVar1[0x12] = param_9;
    piVar1[7] = param_4;
    piVar1[0x10] = (int)gen_fl2bits(param_7);
    piVar1[0x13] = param_10;
    piVar1[4] = 0;
    piVar1[6] = 0;
    piVar1[0x11] = (int)gen_fl2bits(param_8);
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *((undefined2 *)GEN_TOP(((int)piVar1 + 0x69))) = 1;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x6b))) = param_11;
    uVar2 = F_004e9060(param_1 GEN_EDX_ARG,param_2,piVar1,0);
    if (uVar2 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,500);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[0xe] = (int)gen_fl2bits(param_5);
    piVar1[0xf] = (int)gen_fl2bits(param_6);
    piVar1[6] = uVar2;
    piVar1[7] = param_4;
    piVar1[0x10] = (int)gen_fl2bits(param_7);
    piVar1[0x11] = (int)gen_fl2bits(param_8);
    piVar1[0x12] = param_9;
    piVar1[0x13] = param_10;
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *((undefined2 *)GEN_TOP(((int)piVar1 + 0x69))) = 1;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x6b))) = param_11;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return (uint)piVar1;
}

/* ref: FUN_004e9820 */
GEN_OWN_GS GEN_FRAME double GEN_STDCALL F_004e9820(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e9820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  piVar1 = ((int *)GEN_TOP(F_00d2ccf0()));
  uVar3 = (*(undefined4 *)(gen_frame + 0x0));
  uVar4 = (*(undefined4 *)(gen_frame + 0x0));
  uVar5 = (*(undefined4 *)(gen_frame + 0x0));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x44)));
    uVar3 = (*(undefined4 *)(gen_frame + 0x4c));
    uVar4 = (*(undefined4 *)(gen_frame + 0x48));
    uVar5 = (*(undefined4 *)(gen_frame + 0x44));
  }
  puVar7 = &(*(undefined4 *)(gen_frame + 0x44));
  (*(undefined4 *)(gen_frame + 0x4c)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x44)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x48)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  uVar2 = F_004ec420(((undefined1 *)(gen_frame + 0x4)));
  dVar6 = F_00d00380(param_1,uVar2,puVar7);
  return dVar6;
}

/* ref: FUN_004e98b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e98b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e98b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  code * pcVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  
  if (*((char *)GEN_TOP(((int)this + 0x1d))) != '\0') {
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(((int)this + 0xc4))) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *((int *)GEN_TOP(((int)this + 200)));
    *((int * PTR32 *)GEN_TOP(((int)this + 200))) = piVar1;
    piVar1[4] = 2;
    if (*((char *)GEN_TOP(((int)this + 0x1e))) != '\0') {
      bVar4 = F_004ecc60(piVar1 GEN_EDX_FWD,param_1,REFG(float, 0x1097250),0);
      if (bVar4 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,500);
        return 0;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x8c))))(piVar1 GEN_EDX_ARG,0);
      return (uint)piVar1;
    }
    uVar5 = F_004e9060(this GEN_EDX_ARG,param_1,piVar1,0);
    if (uVar5 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,500);
      return 0;
    }
    piVar1[0xc] = (int)gen_fl2bits(REFG(float, 0x1097250));
    piVar1[7] = 0;
    fVar3 = REFG(float, 0x1097250);
    piVar1[6] = uVar5;
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x8c)));
    piVar1[0x11] = (int)gen_fl2bits(fVar3);
    piVar1[0x12] = 0;
    piVar1[0x13] = 0;
    piVar1[0x19] = 0;
    *((undefined4 *)GEN_TOP(((int)piVar1 + 0x69))) = 0;
    (*pcVar2)(piVar1,0);
  }
  return (uint)piVar1;
}

/* ref: FUN_004e99a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e99a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4e99a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (*((char *)GEN_TOP(((int)param_1 + 0x1d))) != '\0') {
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0xc4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(((int)param_1 + 0xc4))) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *((int *)GEN_TOP(((int)param_1 + 200)));
    *((int * PTR32 *)GEN_TOP(((int)param_1 + 200))) = piVar1;
    piVar1[4] = 2;
    if (*((char *)GEN_TOP(((int)param_1 + 0x1e))) == '\0') {
      uVar3 = F_004e9060(param_1 GEN_EDX_FWD,param_2,piVar1,0);
      if (uVar3 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,500);
        return 0;
      }
      piVar1[0xc] = (int)gen_fl2bits(param_3);
      piVar1[7] = param_4;
      piVar1[0x11] = GEN_FLT_TO(piVar1[0x11], REFG(float, 0x1097250));
      piVar1[0x12] = 0;
      piVar1[0x13] = 0;
      piVar1[0x19] = 0;
      *((undefined4 *)GEN_TOP(((int)piVar1 + 0x69))) = 0x100;
      piVar1[6] = uVar3;
    }
    else {
      bVar2 = F_004ecc60(piVar1 GEN_EDX_ARG,param_2,param_3,param_4);
      if (bVar2 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,500);
        return 0;
      }
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_004e9a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e9a80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x4e9a80u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (*((char *)GEN_TOP(((int)param_1 + 0x1d))) != '\0') {
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0xc4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(((int)param_1 + 0xc4))) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *((int *)GEN_TOP(((int)param_1 + 200)));
    *((int * PTR32 *)GEN_TOP(((int)param_1 + 200))) = piVar1;
    piVar1[4] = 1;
    uVar3 = F_004e9060(param_1 GEN_EDX_FWD,param_2,piVar1,0);
    if (uVar3 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,500);
      return 0;
    }
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[7] = param_5;
    iVar2 = (int)gen_fl2bits((float)(REFG(float, 0x1097250)));
    piVar1[6] = uVar3;
    piVar1[0x11] = iVar2;
    piVar1[0x12] = 0;
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *((undefined2 *)GEN_TOP(((int)piVar1 + 0x69))) = 0x100;
    piVar1[0x13] = param_4;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x6b))) = param_6;
  }
  return (uint)piVar1;
}

/* ref: FUN_004e9b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e9b30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x4e9b30u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (*((char *)GEN_TOP(((int)param_1 + 0x1d))) != '\0') {
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0xc4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(((int)param_1 + 0xc4))) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *((int *)GEN_TOP(((int)param_1 + 200)));
    *((int * PTR32 *)GEN_TOP(((int)param_1 + 200))) = piVar1;
    piVar1[4] = 1;
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[7] = 0;
    piVar1[0x11] = GEN_FLT_TO(piVar1[0x11], REFG(float, 0x1097250));
    piVar1[0x12] = 0;
    piVar1[0x13] = 0;
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    piVar1[6] = 0;
    *((undefined2 *)GEN_TOP(((int)piVar1 + 0x69))) = 0;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x6b))) = param_6;
    uVar3 = F_004e9060(param_1 GEN_EDX_FWD,param_2,piVar1,0);
    if (uVar3 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,500);
      return 0;
    }
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[7] = param_5;
    iVar2 = (int)gen_fl2bits((float)(REFG(float, 0x1097250)));
    piVar1[6] = uVar3;
    piVar1[0x11] = iVar2;
    piVar1[0x12] = 0;
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *((undefined2 *)GEN_TOP(((int)piVar1 + 0x69))) = 0;
    piVar1[0x13] = param_4;
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x6b))) = param_6;
  }
  return (uint)piVar1;
}

/* ref: FUN_004e9c10 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004e9c10(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x4e9c10u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_FRAME_DECL_GS(0xa4, 12, 4);
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  char * _Format;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0));
  (*(int *)(gen_frame + 0x14)) = param_6;
  (*(int *)(gen_frame + 0x18)) = param_8;
  if ((param_7 == 0) || ((3000 < param_5 && (param_5 < 0x1195)))) {
    F_00c472af(((char *)(gen_frame + 0x1c)),0x80,((char *)REFP(0x1096e34)),param_5);
    iVar2 = (*(int *)(gen_frame + 0x14)) - 1;
    goto LAB_004ea088;
  }
  switch((unsigned int)(uintptr_t)(param_6)) {
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x19: ;
    if (param_5 < 8000) {
      if (0x50 < param_5 / 100) {
        return 0;
      }
      iVar2 = *(int *)(&REFG(undefined, 0x13025f8) + (param_5 / 100) * 8);
    }
    else {
      F_00688a60(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)),param_5);
      uVar1 = 0;
      while ((&REFG(undefined4, 0x13025fc))[(int)(uVar1 * 2)] != (*(int *)(gen_frame + 0x18))) {
        uVar1 = uVar1 + 1;
        if (0x50 < uVar1) {
          return 0;
        }
      }
      iVar2 = *(int *)(&REFG(undefined, 0x13025f8) + uVar1 * 8);
    }
    if (iVar2 == 0) {
      return 0;
    }
    F_00c472af(((char *)(gen_frame + 0x1c)),0x80,((char *)REFP(0x1096f38)),iVar2,param_9);
    iVar2 = (*(int *)(gen_frame + 0x14)) - 0x10;
    goto LAB_004ea088;
  case 0x1a: ;
  case 0x1b: ;
    uVar1 = param_9 + 0x1194;
    if ((uVar1 < 0x1195) || (0x119a < uVar1)) {
      uVar1 = 0x119a;
    }
    F_00c472af(((char *)(gen_frame + 0x1c)),0x80,((char *)REFP(0x1096f58)),uVar1);
    iVar2 = (*(int *)(gen_frame + 0x14)) - 0x1a;
    uVar4 = 0;
    fVar3 = F_004e8500(param_7,(*(int *)(gen_frame + 0x18)));
    break;
  case 0x1c: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x1f: ;
  case 0x20: ;
    iVar2 = param_6 - 0x1c;
    if (param_5 - 1 < 0x60) {
      F_004ec010(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,param_5);
      if ((*(int *)(gen_frame + 0x0)) == 0) {
        return 0;
      }
      F_00c472af(((char *)(gen_frame + 0x1c)),0x80,((char *)REFP(0x1096f74)),
                 (&REFG(undefined * PTR32, 0x13024e0))[(int)((*(uint *)(gen_frame + 0x4)))],
                 (-(uint)((*(int *)(gen_frame + 0x8)) != 0) & 0xfffffff9) + 0x4d,(int)(char)((char)(*(int *)(gen_frame + 0xc)) + 'a'),
                 (&REFG(undefined * PTR32, 0x13024fc))[(int)((*(int *)(gen_frame + 0x10)))]);
      goto LAB_004e9e24;
    }
    if (0x62 < param_5 - 0x1db1) {
      if (param_5 - 0x2261 < 0x95) {
        _Format = ((char *)REFP(0x1096fd8));
      }
      else {
        _Format = ((char *)REFP(0x1096ff8));
      }
      F_00c472af(((char *)(gen_frame + 0x1c)),0x80,_Format,param_5);
      uVar4 = 0;
      fVar3 = REFG(float, 0x1097250);
      break;
    }
    uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,4);
    F_004142d0(&(*(int *)(gen_frame + 0x18)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar1 + 0x14))));
    F_00c472af(((char *)(gen_frame + 0x1c)),0x80,((char *)REFP(0x1096fa8)),param_5 - 0x1db0,
               (&REFG(undefined * PTR32, 0x13025e4))[(int)((*(int *)(gen_frame + 0x18)))]);
LAB_004ea088: ;
    uVar4 = 0;
    fVar3 = REFG(float, 0x1097250);
    break;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
  case 0x25: ;
  case 0x26: ;
    if (0x62 < param_5 - 0x2009) {
      return 0;
    }
    F_004e8ff0();
    uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,4);
    F_004142d0(&(*(int *)(gen_frame + 0x18)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar1 + 0x14))));
    F_00c472af(((char *)(gen_frame + 0x1c)),0x80,((char *)REFP(0x109701c)),param_5 - 0x2008,
               (&REFG(undefined * PTR32, 0x13025e4))[(int)((*(int *)(gen_frame + 0x18)))]);
    iVar2 = (*(int *)(gen_frame + 0x14)) - 0x21;
LAB_004e9e24: ;
    uVar4 = 0;
    fVar3 = REFG(float, 0x1097250);
    break;
  case 0x27: ;
  case 0x28: ;
  case 0x29: ;
  case 0x2a: ;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x2f: ;
  case 0x30: ;
  case 0x31: ;
  case 0x32: ;
  case 0x33: ;
  case 0x34: ;
  case 0x35: ;
  case 0x36: ;
    F_004ec010(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,param_5);
    if ((*(int *)(gen_frame + 0x0)) == 0) {
      return 0;
    }
    uVar1 = F_004e8310(param_7,param_10);
    if (uVar1 == (*(uint *)(gen_frame + 0x4))) {
      iVar2 = (*(int *)(gen_frame + 0xc)) + (int)(&REFG(undefined * PTR32, 0x1097284))[(int)((*(uint *)(gen_frame + 0x4)))] * 6;
    }
    else {
      iVar2 = (int)(&REFG(undefined * PTR32, 0x1097284))[(int)(uVar1)] * 6 + 2;
    }
    F_00c472af(((char *)(gen_frame + 0x1c)),0x80,((char *)REFP(0x1097044)),
               (*(int *)(gen_frame + 0x8)) * 3 + 0x1c85 + (*(int *)(gen_frame + 0x10)) * 0x32 + iVar2,(*(int *)(gen_frame + 0x14)) - 0x27);
    iVar2 = 0;
    uVar4 = 0;
    fVar3 = REFG(float, 0x1097250);
    break;
  default: ;
    return 0;
  }
  uVar1 = F_004e95a0(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),REFG(float, 0x1097250),0,param_2,param_3,param_4,fVar3,uVar4,iVar2,
                       (undefined1)param_11);
  return uVar1;
}

/* ref: FUN_004ea110 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004ea110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ea110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  piVar2 = param_1;
  if ((int)param_1 - 1U < 0x60) {
    if (param_1 == ((int *)GEN_TOP(0x0))) {
      uVar4 = 0;
      uVar3 = 0;
      uVar5 = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = (int)param_1 - 1;
      uVar4 = uVar1 >> 4;
      uVar3 = uVar1 >> 3 & 1;
      uVar5 = uVar1 & 1;
      uVar1 = uVar1 >> 1 & 3;
    }
    iVar6 = uVar5 + 1 + (uVar3 + uVar4 * 2) * 2;
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x80,((char *)REFP(0x1097068)),iVar6,
               (&REFG(undefined * PTR32, 0x13024fc))[(int)(uVar1)]);
    iVar6 = iVar6 + uVar1;
    if (REFG(int, 0x1375a6c) == iVar6) {
      piVar2 = ((int *)GEN_TOP(F_004e9a80(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(float, 0x1097250),0,0,1)));
    }
    else {
      if (REFG(int * PTR32, 0x1375a68) != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1375a68) + 0x78))))(REFG(int * PTR32, 0x1375a68) GEN_EDX_ARG,500);
        REFG(int * PTR32, 0x1375a68) = ((int *)GEN_TOP(0x0));
      }
      piVar2 = ((int *)GEN_TOP(F_004e9a80(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(float, 0x1097250),0,0,0)));
      REFG(int * PTR32, 0x1375a68) = piVar2;
      REFG(int, 0x1375a6c) = iVar6;
    }
    *(undefined4 *)&REFG(undefined, 0x1375a70) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_004ea220 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004ea220(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x4ea220u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x8c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88));
  if (param_2 - 0x7d2328U < 0x17ed1) {
    uVar1 = F_0049c120(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4))) GEN_EDX_FWD);
    if (uVar1 == 0xffffffff) {
      uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,4);
      F_004142d0(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar1 + 0x14))));
      uVar1 = (*(uint *)(gen_frame + 0x0));
    }
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x80,((char *)REFP(0x1097090)),param_2,(&REFG(undefined * PTR32, 0x13025e4))[(int)(uVar1)]);
    uVar1 = F_004e95a0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),REFG(float, 0x1097250),0,param_3,param_4,param_5,REFG(float, 0x1097250),0,0,
                         (undefined1)param_6);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_004ea310 */
GEN_OWN_GS GEN_FRAME uint F_004ea310(GEN_P(undefined4 in_esi, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x4ea310u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  uVar1 = 0;
  if (param_5 != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x80,((char *)REFP(0x10970f4)),param_5);
    uVar1 = F_004e95a0(in_esi GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(float, 0x1097250),0,param_2,param_3,param_4,REFG(float, 0x1097250),0,
                         (char)(&REFG(undefined, 0x1097710))[(int)(param_6)] - 1,1);
  }
  return uVar1;
}

/* ref: FUN_004ea3a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004ea3a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4ea3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_3 + param_2 + param_4;
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x180)));
  *((char *)GEN_TOP((param_1 + 0xfc))) = param_5;
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1097250);
  (*(int *)(gen_frame + 0x4)) = iVar3;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if (1 < iVar3) {
      if (param_5 != '\0') {
        uVar4 = F_004e99a0(param_1 GEN_EDX_FWD,REFG(undefined * PTR32, 0x1302380),
                             REFG(float, 0x1097250),2000);
        *((uint *)GEN_TOP((param_1 + 0x184))) = uVar4;
        *((undefined4 *)GEN_TOP((param_1 + 0x180))) = 2;
        F_00d2ebf0(&(*(float *)(gen_frame + 0x0)));
        return;
      }
      if (*((char *)GEN_TOP((param_1 + 0xfd))) != '\0') {
        uVar4 = F_004e99a0(param_1 GEN_EDX_ARG,param_1 + 0xfd,REFG(float, 0x1097250),2000);
        *((uint *)GEN_TOP((param_1 + 0x184))) = uVar4;
        *((undefined4 *)GEN_TOP((param_1 + 0x180))) = 1;
        F_00d2ebf0(&(*(float *)(gen_frame + 0x0)));
        return;
      }
    }
    goto switchD_004ea3da_default;
  case 1: ;
    if (param_5 == '\0') {
LAB_004ea47f: ;
      if (0 < iVar3) goto switchD_004ea3da_default;
    }
    break;
  case 2: ;
    if (param_5 != '\0') goto LAB_004ea47f;
    break;
  case 3: ;
    piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 0x184)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x7c))))(piVar2 GEN_EDX_ARG);
      if ((char)uVar4 != '\0') goto switchD_004ea3da_default;
      piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 0x184)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x78))))(piVar2 GEN_EDX_ARG,500);
        *((undefined4 *)GEN_TOP((param_1 + 0x184))) = 0;
      }
    }
    goto LAB_004ea525;
  case 4: ;
    piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 0x184)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x78))))(piVar2 GEN_EDX_ARG,500);
      *((undefined4 *)GEN_TOP((param_1 + 0x184))) = 0;
    }
    if (*((int *)GEN_TOP((param_1 + 0xe8))) == 1) goto switchD_004ea3da_default;
LAB_004ea525: ;
    *((undefined4 *)GEN_TOP((param_1 + 0x180))) = 0;
  default: ;
    goto switchD_004ea3da_default;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 0x184)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,500);
    *((undefined4 *)GEN_TOP((param_1 + 0x180))) = 3;
    F_00d2ebf0(&(*(float *)(gen_frame + 0x0)));
    return;
  }
switchD_004ea3da_default: ;
  F_00d2ebf0(&(*(float *)(gen_frame + 0x0)));
  return;
}

/* ref: FUN_004ea560 */
GEN_OWN GEN_FRAME uint F_004ea560(void)
{
  GEN_ENTER(0x4ea560u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  uint uVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
  (*(undefined2 *)(gen_frame + 0x20)) = 0;
  (*(undefined1 *)(gen_frame + 0x22)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  uVar2 = 0;
  do {
    uVar1 = F_00513e90(*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x130238c) + uVar2))),
                         &(*(undefined4 *)(gen_frame + 0x0)),0,0);
    *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x1302390) + uVar2))) = uVar1;
    uVar2 = uVar2 + 8;
  } while (uVar2 < 0x10);
  return uVar1;
}

/* ref: Client::Sound::SoundManager::vf3 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004ea5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ea5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x188);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = *(int * PTR32 *)(this + 200);
  while( true ) {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa0))))(piVar1 GEN_EDX_ARG);
    if ((uVar2 == param_1) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG), (char)uVar2 != '\0'))
    break;
    piVar1 = ((int *)GEN_TOP(piVar1[3]));
  }
  if (piVar1[4] == 2) {
    *(int * PTR32 *)(this + 0xbc) = piVar1;
  }
  LOCK();
  *((undefined4 *)GEN_TOP((param_1 + 0x8c))) = *((undefined4 *)GEN_TOP((param_1 + 0x8c)));
  UNLOCK();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa8))))(piVar1 GEN_EDX_ARG,param_1);
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: FUN_004ea660 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ea660(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4ea660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  int iVar1;
  code * pcVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  uint uVar6;
  
  piVar3 = ((int *)GEN_TOP(F_00d2ccf0()));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)param_1 + 0xdc))));
  F_00cfff50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0xb8)))));
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x137127c) + 0x66f4)));
  if (REFG(void * PTR32, 0x1379694) == ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  }
  else {
    puVar4 = ((undefined4 *)GEN_TOP(F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG)));
    (*(undefined4 *)(gen_frame + 0x10)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x14)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x18)) = puVar4[2];
  }
  F_004e9110(param_1 GEN_EDX_ARG,iVar1 + 0x10,&(*(undefined4 *)(gen_frame + 0x10)));
  piVar5 = ((int *)GEN_TOP(F_00d2d180(0xffffffff)));
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 200)));
  while (piVar3 != ((int *)GEN_TOP(0x0))) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x80)));
    uVar6 = (*pcVar2)(piVar3);
    if (((((char)uVar6 == '\0') &&
         (piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x88))))(piVar3 GEN_EDX_ARG))), (char)piVar5 == '\0')) ||
        (piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG))), (char)piVar5 != '\0')) ||
       ((piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x7c))))(piVar3 GEN_EDX_ARG))), (char)piVar5 != '\0' ||
        (piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG))), (char)piVar5 == '\0')))) {
      piVar3 = ((int *)GEN_TOP(piVar3[3]));
    }
    else {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xa0))))(piVar3 GEN_EDX_ARG);
      if (uVar6 != 0) {
        F_0050c620(uVar6,0,0);
      }
      piVar3 = ((int *)GEN_TOP(F_004e7570(param_1 GEN_EDX_ARG,piVar3)));
      piVar5 = piVar3;
    }
  }
  if (REFG(int * PTR32, 0x1375a68) != ((int *)GEN_TOP(0x0))) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1375a68) + 0x7c)));
    piVar5 = ((int *)GEN_TOP((*pcVar2)(REFG(int * PTR32, 0x1375a68))));
    if ((char)piVar5 == '\0') {
      *(float *)&REFG(undefined, 0x1375a70) = (float)((float10)*(float *)&REFG(undefined, 0x1375a70) + (float10)param_2);
      if (*(double *)&REFG(undefined, 0x1088070) < (double)*(float *)&REFG(undefined, 0x1375a70)) {
        if (REFG(int * PTR32, 0x1375a68) != ((int *)GEN_TOP(0x0))) {
          piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1375a68) + 0x78))))(REFG(int * PTR32, 0x1375a68) GEN_EDX_ARG,500)));
          REFG(int * PTR32, 0x1375a68) = ((int *)GEN_TOP(0x0));
        }
        REFG(undefined4, 0x1375a6c) = 0;
      }
    }
    else {
      *(float *)&REFG(undefined, 0x1375a70) = 0.0;
    }
  }
  if (*((int *)GEN_TOP(((int)param_1 + 0xe8))) == 1) {
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x180))) = 4;
  }
  F_00cffc10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)piVar5;
}

/* ref: FUN_004ea820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ea820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ea820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  
  if (*((char *)GEN_TOP(((int)this + 0x1d))) == '\0') {
    in_EAX = F_004e9a80(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x130238c),REFG(float, 0x1097250),param_1,0,1);
  }
  return in_EAX;
}

/* ref: FUN_004ea850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ea850(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(int param_12, unsigned int gen_a11), GEN_P(int param_13, unsigned int gen_a12), GEN_P(float param_14, float gen_a13), GEN_P(float param_15, float gen_a14))
{
  GEN_ENTER(0x4ea850u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(int param_12 = (int)gen_a11;)
  GEN_PIN(int param_13 = (int)gen_a12;)
  GEN_PIN(float param_14 = (float)gen_a13;)
  GEN_PIN(float param_15 = (float)gen_a14;)
  GEN_FRAME_DECL(0xa8, 8);
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar7;
  float fVar8;
  
  (*(uint *)(gen_frame + 0xa0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa4);
  if ((*((char *)GEN_TOP((param_1 + 0x1d))) != '\0') || (param_5 == 0)) {
    return REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa4);
  }
  piVar4 = ((int *)GEN_TOP(F_00d2ccf0()));
  uVar5 = 0;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x30))))(piVar4 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x18));
  }
  if ((float10)*(double *)&REFG(undefined, 0x1097728) <
      (float10)(float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)param_4) *
      (float10)(float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)param_4) +
      ((float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)param_3) *
       (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)param_3) +
      (float10)(float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)param_2) *
      (float10)(float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)param_2))) {
    return uVar5;
  }
  if (*((char *)GEN_TOP((param_1 + 0xd8))) == '\0') {
    return uVar5;
  }
  bVar1 = false;
  bVar2 = false;
  if ((param_5 != 0xe) && (param_5 != 0xf)) goto LAB_004eaa36;
  bVar2 = true;
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1097250);
  if (param_6 == 1) {
    fVar8 = *(float *)&REFG(undefined, 0x1096d78);
    if ((param_7 == 3) || (fVar8 = REFG(float, 0x1097724), param_7 == 5)) {
LAB_004ea9dc: ;
      (*(float *)(gen_frame + 0x8)) = fVar8;
    }
  }
  else {
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)1 - ((float10)param_15 - (float10)1))));
    fVar8 = REFG(float, 0x1096d74);
    if (((float10)(*(float *)(gen_frame + 0x8)) < (float10)REFG(float, 0x1096d74)) ||
       (fVar8 = *(float *)&REFG(undefined, 0x1096d78), *(float *)&REFG(undefined, 0x1096d78) < (*(float *)(gen_frame + 0x8)))) goto LAB_004ea9dc;
  }
  pcVar6 = ((char *)REFP(0x10970b0));
  if (param_5 != 0xe) {
    pcVar6 = ((char *)REFP(0x10970d0));
  }
  F_004e95a0(param_1 GEN_EDX_ARG,pcVar6,REFG(float, 0x1097250),0,param_2,param_3,param_4,(*(float *)(gen_frame + 0x8)),0,0,1);
  bVar1 = true;
LAB_004eaa36: ;
  iVar7 = param_6;
  if ((param_6 == 1) && (param_8 - 0xbb9U < 0x5dc)) {
    iVar7 = 3;
  }
  if (iVar7 == 1) {
    if (!GEN_ISNAN(param_14) && !(0.0 <= param_14)) {
      param_14 = F_004e8500(param_7,param_9);
      bVar1 = bVar2;
    }
    if ((!bVar1) &&
       (bVar3 = F_004e8440(((undefined1 *)(gen_frame + 0x20)),param_5,param_7,param_9,param_10,param_11,param_12),
       bVar3 != 0)) {
      F_004e95a0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),REFG(float, 0x1097250),0,param_2,param_3,param_4,param_14,0,param_12 - 1,
                   1);
    }
    bVar3 = F_004e84c0(((undefined1 *)(gen_frame + 0x20)),param_13);
    uVar5 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 != 0) {
      uVar5 = F_004e95a0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),REFG(float, 0x1097250),0,param_2,param_3,param_4,param_14,0,
                           param_12 - 1,1);
      return uVar5;
    }
  }
  else if (iVar7 == 2) {
    if (((param_10 == 0) && (param_8 - 0xbb9U < 0x5dc)) && (!bVar1)) {
      F_004ea310(param_1,param_2,param_3,param_4,param_8,param_5);
    }
    uVar5 = 0;
    if (param_13 != 0) {
      bVar3 = F_004e84c0(((undefined1 *)(gen_frame + 0x20)),param_13);
      uVar5 = CONCAT31(extraout_var,bVar3);
      if (bVar3 != 0) {
        uVar5 = F_004e95a0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),REFG(float, 0x1097250),0,param_2,param_3,param_4,REFG(float, 0x1097250),0,
                             param_12 - 1,1);
        return uVar5;
      }
    }
  }
  else {
    uVar5 = iVar7 - 3;
    if ((uVar5 == 0) && (!bVar1)) {
      uVar5 = F_004ea310(param_1,param_2,param_3,param_4,param_8,param_5);
      return uVar5;
    }
  }
  return uVar5;
}

/* ref: FUN_004eac70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eac70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4eac70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  HANDLE pvVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined * this_00;
  undefined4 uVar7;
  
  F_00509590(this GEN_EDX_FWD);
  F_004cefe0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096e0c)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x109790c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[6])REFP(0x10978f0));
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = (undefined1)param_2;
  *((undefined1 *)GEN_TOP(((int)this + 0x1d))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1e))) = (undefined1)param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x20))), REFG(float, 0x1097250));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x24))), REFG(float, 0x1097250));
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0x10001;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = uVar7;
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x188));
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  uVar7 = 0;
  *((HANDLE *)GEN_TOP(((int)this + 0x1a0))) = pvVar1;
  uVar2 = F_004042b0();
  puVar3 = ((undefined4 *)GEN_TOP(F_00406c00(0x7404,0,uVar2,uVar7)));
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar5 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    puVar5 = puVar3 + 1;
    *puVar3 = 0x100;
    param_2 = 0xff;
    puVar3 = puVar5;
    do {
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 5) = 0;
      *puVar3 = (*(undefined * PTR32 (*)[44])REFP(0x10977e4));
      puVar3[6] = 0;
      F_00cbbd70(puVar3 + 8 GEN_EDX_ARG);
      puVar3[0xc] = 0;
      puVar3[0x19] = 3;
      puVar3 = puVar3 + 0x1d;
      param_2 = param_2 - 1;
    } while (-1 < param_2);
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc0))) = puVar5;
  puVar3 = puVar5 + 3;
  iVar6 = 0xff;
  do {
    *puVar3 = puVar3 + 0x1a;
    puVar3 = puVar3 + 0x1d;
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  puVar5[0x1ce6] = 0;
  uVar7 = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc4))) = puVar5;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  uVar2 = F_004042b0();
  pvVar4 = ((undefined *)GEN_TOP(F_00406bd0(0x80550,0,uVar2,uVar7)));
  if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
    pvVar4 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    param_2 = 3;
    this_00 = pvVar4;
    do {
      F_004ec500(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x20150)));
      param_2 = param_2 - 1;
    } while (-1 < param_2);
    *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x80540))) = 0;
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xcc))) = pvVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  uVar2 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x68)));
  do {
    puVar3[-0x10] = GEN_FLT_TO(puVar3[-0x10], REFG(float, 0x1097250));
    *puVar3 = GEN_FLT_TO(*puVar3, REFG(float, 0x1097250));
    *((undefined1 *)GEN_TOP(((int)this + uVar2 + 0xa8))) = 0;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 0x10);
  *((undefined1 *)GEN_TOP(((int)this + 0xfd))) = 0;
  REFG(void * PTR32, 0x1375a64) = this;
  return (uint)this;
}

/* ref: FUN_004eae80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eae80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4eae80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * this_00;
  byte bVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0)));
  F_00d2da30(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  bVar4 = F_00d2db30();
  while (bVar4 == 0) {
    F_004cee80();
    F_004ea660(this GEN_EDX_ARG,*(float *)&REFG(undefined, 0x1097254));
    bVar4 = F_00d2db30();
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0xe4)));
  if (iVar1 != 0) {
    iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
    if (iVar2 != 0) {
      F_00d2ea00(iVar2);
    }
    F_00406ad0(iVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  }
  F_00d2efa0();
  F_00d2f060((undefined1)param_1);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc0)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar3[-1] == 0) {
      F_00406b30(puVar3 - 1);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,3);
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  uVar5 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xe0))) != 0) {
    uVar5 = F_00406ad0(*((int *)GEN_TOP(((int)this + 0xe0))));
    *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xcc)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_004eca20(this_00 GEN_EDX_ARG);
    uVar5 = F_00406ad0(this_00);
    *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  }
  return uVar5;
}

/* ref: FUN_004eaf80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004eaf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4eaf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x109790c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[6])REFP(0x10978f0));
  F_004eae80(this GEN_EDX_FWD,0);
  gen_imp_CloseHandle(*((HANDLE *)GEN_TOP(((int)this + 0x1a0))));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x188));
  F_004cf880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar1 = F_005095f0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004eafe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eafe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4eafe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  return (uint)this;
}

/* ref: FUN_004eb010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eb010(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4eb010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_004eb040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eb040(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4eb040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *param_2 = *in_ecx;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_004eb070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eb070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4eb070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  return (uint)this;
}

/* ref: FUN_004eb0a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eb0a0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x4eb0a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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

/* ref: FUN_004eb100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eb100(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x4eb100u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + param_2 * 4))) = param_3;
  return in_ecx;
}

/* ref: FUN_004eb230 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004eb230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4eb230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[2];
  fVar2 = param_1[3];
  fVar3 = param_1[1];
  *(float *)this = *(float *)this - *param_1;
  *((float *)GEN_TOP(((int)this + 4))) = *((float *)GEN_TOP(((int)this + 4))) - fVar3;
  *((float *)GEN_TOP(((int)this + 8))) = *((float *)GEN_TOP(((int)this + 8))) - fVar1;
  *((float *)GEN_TOP(((int)this + 0xc))) = *((float *)GEN_TOP(((int)this + 0xc))) - fVar2;
  return 0;
}

/* ref: FUN_004eb2e0 */
GEN_OWN GEN_FRAME uint F_004eb2e0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4eb2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1097250));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_004eb310 */
GEN_OWN GEN_FRAME uint F_004eb310(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4eb310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_004eb340 */
GEN_OWN GEN_FRAME uint F_004eb340(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4eb340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_004eb370 */
GEN_OWN GEN_FRAME uint F_004eb370(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4eb370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x1097250));
  return (uint)param_1;
}

/* ref: FUN_004eb3a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004eb3a0(GEN_P(gen_v12 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4eb3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v12 * in_ecx = (gen_v12 *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = *((float *)GEN_TOP((*in_ecx + 8)));
  fVar2 = *((float *)GEN_TOP(in_ecx[1]));
  fVar3 = *((float *)GEN_TOP(*in_ecx));
  fVar4 = *((float *)GEN_TOP((*in_ecx + 4)));
  (*(float *)((char *)&auVar6 + 0)) = fVar3 * fVar3;
  (*(float *)((char *)&auVar6 + 4)) = gen_bits2f((uint)((ulonglong)*((undefined8 *)GEN_TOP(*in_ecx)) >> 0x20)) * fVar4;
  (*(float *)((char *)&auVar6 + 8)) = ((unsigned int)gen_vbits((*in_ecx), 12, 64, 4)) * fVar1;
  (*(float *)((char *)&auVar6 + 12)) = fVar2 * fVar2;
  fVar11 = ((*(float *)((char *)&auVar6 + 8)) + (*(float *)((char *)&auVar6 + 4))) + ((*(float *)((char *)&auVar6 + 12)) + (*(float *)((char *)&auVar6 + 0)));
  fVar12 = ((*(float *)((char *)&auVar6 + 12)) + (*(float *)((char *)&auVar6 + 8))) + ((*(float *)((char *)&auVar6 + 0)) + (*(float *)((char *)&auVar6 + 4)));
  fVar13 = ((*(float *)((char *)&auVar6 + 0)) + (*(float *)((char *)&auVar6 + 12))) + ((*(float *)((char *)&auVar6 + 4)) + (*(float *)((char *)&auVar6 + 8)));
  fVar14 = ((*(float *)((char *)&auVar6 + 4)) + (*(float *)((char *)&auVar6 + 0))) + ((*(float *)((char *)&auVar6 + 8)) + (*(float *)((char *)&auVar6 + 12)));
  (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits(fVar12);
  (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits(fVar11);
  (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits(fVar13);
  (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits(fVar14);
  gen_rsqrtps(&(auVar7), &(auVar6), &(auVar7));
  fVar5 = (*(float *)((char *)&auVar7 + 0));
  fVar8 = (*(float *)((char *)&auVar7 + 4));
  fVar9 = (*(float *)((char *)&auVar7 + 8));
  fVar10 = (*(float *)((char *)&auVar7 + 12));
  fVar12 = *(float *)&REFG(undefined, 0x1097204) - (fVar8 * fVar12) * fVar8;
  fVar13 = *(float *)&REFG(undefined, 0x1097208) - (fVar9 * fVar13) * fVar9;
  fVar14 = *(float *)&REFG(undefined, 0x109720c) - (fVar10 * fVar14) * fVar10;
  fVar15 = *(float *)&REFG(undefined, 0x1097214) * fVar8;
  fVar16 = *(float *)&REFG(undefined, 0x1097218) * fVar9;
  fVar17 = *(float *)&REFG(undefined, 0x109721c) * fVar10;
  *param_2 = ((*(float *)&REFG(undefined, 0x1097200) - (fVar5 * fVar11) * fVar5) *
              (*(float *)&REFG(undefined, 0x1097210) * fVar5) + fVar5) * fVar3;
  param_2[1] = (fVar12 * fVar15 + fVar8) * fVar4;
  param_2[2] = (fVar13 * fVar16 + fVar9) * fVar1;
  param_2[3] = (fVar14 * fVar17 + fVar10) * fVar2;
  return (uint)param_2;
}

/* ref: FUN_004eb470 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004eb470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4eb470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_3[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_3[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_4[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_4[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_4[3];
  return 0;
}

/* ref: FUN_004eb4e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004eb4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4eb4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_1[8];
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1[9];
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_1[10];
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_1[0xb];
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_1[0xc];
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_1[0xd];
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_1[0xe];
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_1[0xf];
  return 0;
}

/* ref: FUN_004eb550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eb550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4eb550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_1[3];
  return (uint)this;
}

/* ref: FUN_004eb5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eb5c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4eb5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + in_ecx;
}

/* ref: FUN_004eb5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eb5d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4eb5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + in_ecx;
}

/* ref: FUN_004eb5e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eb5e0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x4eb5e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *((float *)GEN_TOP((param_1 + (param_3 + param_2 * 4) * 4))) = param_4;
  return param_1;
}

/* ref: FUN_004eb600 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004eb600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4eb600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
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
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  volatile float fStack_54;
  
  fVar3 = *(float *)&REFG(undefined, 0x109720c);
  fVar4 = *((float *)GEN_TOP(((int)this + 0x18)));
  fVar5 = *((float *)GEN_TOP(((int)this + 0x10)));
  fVar6 = *((float *)GEN_TOP(((int)this + 0x14)));
  fVar7 = *(float *)this;
  fVar1 = *((float *)GEN_TOP(((int)this + 0x28)));
  fVar9 = *((float *)GEN_TOP(((int)this + 8)));
  fVar10 = *((float *)GEN_TOP(((int)this + 4)));
  fVar2 = *((float *)GEN_TOP(((int)this + 0x24)));
  fVar11 = fVar4 * fVar10 - fVar6 * fVar9;
  fVar12 = fVar5 * fVar9 - fVar4 * fVar7;
  fVar13 = fVar6 * fVar7 - fVar5 * fVar10;
  fVar17 = *((float *)GEN_TOP(*((gen_v12 *)GEN_TOP(((int)this + 0x20)))));
  fVar14 = fVar6 * fVar1 - fVar4 * fVar2;
  fVar15 = fVar4 * fVar17 - fVar5 * fVar1;
  fVar16 = fVar5 * fVar2 - fVar6 * fVar17;
  fVar8 = fVar2 * fVar9 - fVar1 * fVar10;
  fVar9 = fVar1 * fVar7 - fVar17 * fVar9;
  fVar10 = fVar17 * fVar10 - fVar2 * fVar7;
  fVar17 = 0.0 - *((float *)GEN_TOP(((int)this + 0x30)));
  fVar18 = 0.0 - *((float *)GEN_TOP(((int)this + 0x34)));
  fVar19 = 0.0 - *((float *)GEN_TOP(((int)this + 0x38)));
  (*(undefined4 *)((char *)&auVar20 + 4)) = (undefined4)gen_fl2bits(fVar11);
  (*(undefined4 *)((char *)&auVar20 + 0)) = (undefined4)gen_fl2bits(fVar13);
  (*(undefined4 *)((char *)&auVar20 + 8)) = (undefined4)gen_fl2bits(fVar12);
  (*(undefined4 *)((char *)&auVar20 + 12)) = (undefined4)gen_fl2bits(fVar12);
  fVar7 = (fVar2 * fVar12 + ((unsigned int)gen_vbits((*((gen_v12 *)GEN_TOP(((int)this + 0x20)))), 12, 0, 4)) * fVar11) + fVar1 * fVar13;
  (*(undefined4 *)((char *)&auVar21 + 4)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)&auVar21 + 0)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)&auVar21 + 8)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)&auVar21 + 12)) = (undefined4)gen_fl2bits(fVar7);
  gen_rcpps(&(auVar21), &(auVar20), &(auVar21));
  fVar4 = (*(float *)((char *)&auVar21 + 0));
  fVar5 = (*(float *)((char *)&auVar21 + 4));
  fVar6 = (*(float *)((char *)&auVar21 + 8));
  fStack_54 = (*(float *)((char *)&auVar21 + 12)) * fVar7;
  fVar4 = (*(float *)&REFG(undefined, 0x1097200) - fVar4 * fVar7) * fVar4 + fVar4;
  fVar5 = (*(float *)&REFG(undefined, 0x1097204) - fVar5 * fVar7) * fVar5 + fVar5;
  fVar6 = (*(float *)&REFG(undefined, 0x1097208) - fVar6 * fVar7) * fVar6 + fVar6;
  *param_1 = fVar14 * fVar4;
  param_1[1] = fVar8 * fVar5;
  param_1[2] = fVar11 * fVar6;
  param_1[3] = 0.0;
  param_1[4] = fVar15 * fVar4;
  param_1[5] = fVar9 * fVar5;
  param_1[6] = fVar12 * fVar6;
  param_1[7] = 0.0;
  param_1[8] = fVar16 * fVar4;
  param_1[9] = fVar10 * fVar5;
  param_1[10] = fVar13 * fVar6;
  param_1[0xb] = 0.0;
  param_1[0xc] = fVar4 * ((fVar18 * fVar15 + fVar17 * fVar14) + fVar19 * fVar16);
  param_1[0xd] = fVar5 * ((fVar18 * fVar9 + fVar17 * fVar8) + fVar19 * fVar10);
  param_1[0xe] = fVar6 * ((fVar18 * fVar12 + fVar17 * fVar11) + fVar19 * fVar13);
  param_1[0xf] = fVar3;
  return (uint)param_1;
}

/* ref: FUN_004eb8f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eb8f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4eb8f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *in_ecx = (int)((double)param_2 * *(double *)&REFG(undefined, 0x1097260));
  return (uint)in_ecx;
}

/* ref: FUN_004eb910 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004eb910(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4eb910u, gen_a0, gen_a1, gen_a2, 0u);
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
  
  fVar1 = param_3[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = in_ecx[7];
  fVar5 = in_ecx[3];
  fVar6 = in_ecx[5];
  fVar7 = in_ecx[6];
  fVar8 = in_ecx[2];
  fVar9 = in_ecx[1];
  fVar10 = in_ecx[0xb];
  fVar11 = in_ecx[10];
  fVar12 = in_ecx[9];
  *param_2 = (in_ecx[4] * fVar3 + *in_ecx * fVar2) + in_ecx[8] * fVar1;
  param_2[1] = (fVar6 * fVar3 + fVar9 * fVar2) + fVar12 * fVar1;
  param_2[2] = (fVar7 * fVar3 + fVar8 * fVar2) + fVar11 * fVar1;
  param_2[3] = (fVar4 * fVar3 + fVar5 * fVar2) + fVar10 * fVar1;
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IStreamReaderEx::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_004eba10(void)
{
  GEN_ENTER(0x4eba10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IStreamReaderEx::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eba20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4eba20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004eba70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004eba70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4eba70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_004042b0();
  uVar1 = F_00406c00(param_1,0,uVar1,uVar2);
  return uVar1;
}

/* ref: FUN_004eba90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004eba90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4eba90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar2 = F_00406b30(param_1);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_004ebad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ebad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ebad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_00d2e9b0(0xffffffff);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return (uint)this;
}

/* ref: FUN_004ebb10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ebb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ebb10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_00d2ea80(*((int *)GEN_TOP(((int)this + 4))),param_1,0xffffffff);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Sound::IResourceNameHolder::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ebb50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ebb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x109727c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004ebbe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ebbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ebbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = ((int *)GEN_TOP(((int)this + 0x20010)));
  iVar3 = 3;
  do {
    uVar1 = 0;
    if (*piVar2 != 0) {
      uVar1 = F_0050c620(*piVar2,0,0);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_004ebc40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ebc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ebc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = 0;
  do {
    if (*((char *)GEN_TOP(((int)this + uVar1 + 0x80540))) == '\0') {
      *((undefined1 *)GEN_TOP((uVar1 + 0x80540 + (int)this))) = 1;
      pvVar2 = ((undefined *)GEN_TOP((uVar1 * 0x20150 + (int)this)));
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x20034))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x20038))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2003c))) = 0;
      *((undefined2 *)GEN_TOP(((int)pvVar2 + 0x20144))) = 0x100;
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2001c))) = 0xffffffff;
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x20028))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x20010))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x20020))) = 0xffffffff;
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2002c))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x20014))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x20024))) = 0xffffffff;
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x20030))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x20018))) = 0;
      return (uint)pvVar2;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 0;
}

/* ref: FUN_004ebcc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ebcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ebcc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  pvVar1 = this;
  do {
    if (pvVar1 == param_1) {
      piVar3 = ((int *)GEN_TOP(((int)param_1 + 0x20010)));
      iVar2 = 3;
      do {
        if (*piVar3 != 0) {
          F_0050c620(*piVar3,0,0);
          *piVar3 = 0;
        }
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
      *((undefined1 *)GEN_TOP((uVar4 + 0x80540 + (int)this))) = 0;
      return (uint)this;
    }
    uVar4 = uVar4 + 1;
    pvVar1 = ((undefined *)GEN_TOP(((int)pvVar1 + 0x20150)));
  } while (uVar4 < 4);
  return (uint)pvVar1;
}

/* ref: FUN_004ebd30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ebd30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4ebd30u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = param_3;
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
  *((float *)GEN_TOP((param_1 + 0x30))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((param_1 + 0x44))), REFG(float, 0x1097250));
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x69))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 100))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x6a))) = param_4;
  *((undefined2 *)GEN_TOP((param_1 + 0x6b))) = 0;
  return 0;
}

/* ref: FUN_004ebd70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ebd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4ebd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_4;
  *((undefined1 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x6a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  return 0;
}

/* ref: FUN_004ebdb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ebdb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4ebdb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = param_4;
  *((float *)GEN_TOP((param_1 + 0x30))) = param_3;
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((param_1 + 0x44))), REFG(float, 0x1097250));
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 100))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x69))) = 0x100;
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = param_2;
  return 0;
}

/* ref: FUN_004ebdf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ebdf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(byte param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x4ebdf0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(byte param_7 = (byte)gen_a6;)
  undefined4 uVar1;
  
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = param_5;
  *((float *)GEN_TOP((param_1 + 0x30))) = param_4;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x69))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 100))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x6a))) = param_6;
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = uVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = param_3;
  *((byte *)GEN_TOP((param_1 + 0x6b))) = param_7;
  return param_7;
}

/* ref: FUN_004ebe40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ebe40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4ebe40u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  undefined4 uVar1;
  
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = 0;
  *((float *)GEN_TOP((param_1 + 0x30))) = param_3;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 100))) = 0;
  *((undefined2 *)GEN_TOP((param_1 + 0x69))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = uVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = param_2;
  *((byte *)GEN_TOP((param_1 + 0x6b))) = param_4;
  return param_4;
}

/* ref: FUN_004ebe80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ebe80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(byte param_11, unsigned int gen_a10), GEN_P(undefined1 param_12, unsigned int gen_a11))
{
  GEN_ENTER(0x4ebe80u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(byte param_11 = (byte)gen_a10;)
  GEN_PIN(undefined1 param_12 = (undefined1)gen_a11;)
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = param_2;
  *((float *)GEN_TOP((param_1 + 0x30))) = param_3;
  *((float *)GEN_TOP((param_1 + 0x38))) = param_5;
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = param_4;
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = param_9;
  *((float *)GEN_TOP((param_1 + 0x3c))) = param_6;
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = param_10;
  *((undefined1 *)GEN_TOP((param_1 + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 100))) = 0;
  *((float *)GEN_TOP((param_1 + 0x40))) = param_7;
  *((float *)GEN_TOP((param_1 + 0x44))) = param_8;
  *((undefined1 *)GEN_TOP((param_1 + 0x69))) = 1;
  *((byte *)GEN_TOP((param_1 + 0x6a))) = param_11;
  *((undefined1 *)GEN_TOP((param_1 + 0x6b))) = param_12;
  return param_11;
}

/* ref: FUN_004ebef0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ebef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(ushort * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4ebef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_004042b0();
  uVar1 = F_00406c00((uint)*param_3,0,uVar1,uVar2);
  *((uint *)GEN_TOP(((int)this + 0x5c))) = uVar1;
  if (uVar1 == 0) {
    uVar1 = F_00406bb0((uint)*param_3,0,0);
    *((uint *)GEN_TOP(((int)this + 0x5c))) = uVar1;
    F_00510e20(7);
    F_00510e20(0xc);
    if (*((int *)GEN_TOP(((int)this + 0x5c))) == 0) {
      return 0;
    }
  }
  F_00c46aa0(*((undefined4 *)GEN_TOP(((int)this + 0x5c))),param_3,(uint)*param_3);
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x5c))) + 8))) = param_4;
  if (*((int *)GEN_TOP((param_1 + 4))) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00d2ea80(*((int *)GEN_TOP((param_1 + 4))),*((undefined4 *)GEN_TOP(((int)this + 0x5c))),0xffffffff);
  }
  *((int *)GEN_TOP(((int)this + 0x50))) = param_1;
  *((uint *)GEN_TOP(((int)this + 0x54))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2;
  *((undefined1 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x6a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  return 1;
}

/* ref: FUN_004ebfb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ebfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4ebfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + 0x60))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP((param_3 + 8))) = param_4;
  if (*((int *)GEN_TOP((param_1 + 4))) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00d2ea80(*((int *)GEN_TOP((param_1 + 4))),*((undefined4 *)GEN_TOP(((int)this + 0x60))),0xffffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_4;
  *((undefined1 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x6a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((int *)GEN_TOP(((int)this + 0x50))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2;
  *((uint *)GEN_TOP(((int)this + 0x54))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 1;
  return uVar1;
}

/* ref: FUN_004ec010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(int *)this = param_1;
  if (param_1 != 0) {
    uVar1 = param_1 - 1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1 >> 4;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar1 >> 3 & 1;
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1 >> 1 & 3;
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1 & 1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return (uint)this;
}

/* ref: FUN_004ec080 */
GEN_OWN GEN_FRAME uint F_004ec080(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ec080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(&REFG(undefined * PTR32, 0x1097284))[(int)(param_1)];
}

/* ref: FUN_004ec100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec100(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    F_00d2ea00(*((int *)GEN_TOP((param_1 + 4))));
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_004ec130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec130(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_004ec160 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ec160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_004ec190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec190(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)in_ecx;
}

/* ref: FUN_004ec1c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec1c0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = SQRT(*in_ecx);
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  param_2[3] = fVar3;
  return (uint)param_2;
}

/* ref: FUN_004ec1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec1e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004ec200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec200(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4ec200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
  if (param_3 == 3) {
    *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x30)));
    uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x34)));
    param_2[3] = uVar2;
    param_2[1] = uVar1;
    param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x38)));
    return (uint)param_2;
  }
  iVar3 = in_ecx + param_3 * 0x10;
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + param_3 * 0x10)));
  param_2[3] = 0;
  param_2[1] = *((undefined4 *)GEN_TOP((iVar3 + 4)));
  param_2[2] = *((undefined4 *)GEN_TOP((iVar3 + 8)));
  return (uint)param_2;
}

/* ref: FUN_004ec280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[1];
  uVar1 = param_1[2];
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return uVar1;
}

/* ref: FUN_004ec2c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec2c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_004ec2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec2d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_004ec2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec2e0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x4ec2e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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

/* ref: FUN_004ec310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec310(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4ec310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[3];
  fVar2 = in_ecx[3];
  fVar3 = param_3[1] * in_ecx[1];
  fVar4 = param_3[2] * in_ecx[2];
  *param_2 = (fVar4 + *param_3 * *in_ecx) + fVar3;
  param_2[1] = (fVar4 + fVar3) + fVar3;
  param_2[2] = (fVar4 + fVar4) + fVar3;
  param_2[3] = (fVar4 + fVar1 * fVar2) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_004ec370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec370(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[3];
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  *param_2 = (fVar3 + *in_ecx * *in_ecx) + fVar2;
  param_2[1] = (fVar3 + fVar2) + fVar2;
  param_2[2] = (fVar3 + fVar3) + fVar2;
  param_2[3] = (fVar3 + fVar1 * fVar1) + fVar2;
  return (uint)param_2;
}

/* ref: FUN_004ec3b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec3b0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[3];
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  *param_2 = SQRT((fVar3 + *in_ecx * *in_ecx) + fVar2);
  param_2[1] = (fVar3 + fVar2) + fVar2;
  param_2[2] = (fVar3 + fVar3) + fVar2;
  param_2[3] = (fVar3 + fVar1 * fVar1) + fVar2;
  return (uint)param_2;
}

/* ref: FUN_004ec400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_004eb4e0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_004ec420 */
GEN_OWN GEN_FRAME uint F_004ec420(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ec420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1097250));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004ec500 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ec500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ec500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109727c));
  F_00509590(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  *((undefined4 *)GEN_TOP(((int)this + 0x20034))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20038))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2003c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1097368));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x1097350));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[3])REFP(0x1097340));
  *((undefined2 *)GEN_TOP(((int)this + 0x20144))) = 0x100;
  *((undefined4 *)GEN_TOP(((int)this + 0x20028))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20010))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2002c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20014))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20030))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20018))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2001c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20020))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20024))) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::Sound::Stream::vf2 */
GEN_OWN GEN_NOFRAME byte F_004ec590(void)
{
  GEN_ENTER(0x4ec590u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_004ec5a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004ec5a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ec5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x2013d))) = 1;
  return;
}

/* ref: FUN_004ec5b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint uVar3;
  float10 extraout_ST0;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*((char *)GEN_TOP(((int)this + 0x20144))) == '\0') &&
     (in_EAX = 0, *((int * PTR32 *)GEN_TOP(((int)this + 0x20034))) != ((int *)GEN_TOP(0x0)))) {
    iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x20034)));
    uVar3 = F_00d2d700(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x2003c))),0,0,1);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0xc))))(*((undefined4 *)GEN_TOP(((int)this + 0x20034))),uVar3);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x20034)));
    uVar7 = 0;
    uVar6 = 0;
    fVar5 = *(float *)&REFG(undefined, 0x1097254);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x20))))(piVar2);
    fVar4 = (float)extraout_ST0;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    in_EAX = F_00cbdfe0(uVar3 GEN_EDX_ARG,param_1,fVar4,fVar5,gen_bits2f((unsigned int)(uVar6)),uVar7);
    *((undefined2 *)GEN_TOP(((int)this + 0x20144))) = 1;
  }
  return in_EAX;
}

/* ref: Client::Sound::Stream::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ec650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ec650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x20040;
}

/* ref: FUN_004ec660 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ec660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004ec990((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_004ec670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ec670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004ec990((int)this - 8 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_004ec6e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ec6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ec6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1097368));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x1097350));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[3])REFP(0x1097340));
  F_004ebbe0(this GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  uVar1 = F_005095f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109727c));
  return uVar1;
}

/* ref: FUN_004ec720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP((param_1 + 0x10))) * 4 + 0x20024))) =
       *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x20030))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x20030))) GEN_EDX_FWD,0);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x20030))) + 0x84))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x20030))) GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    uVar1 = F_004ec5b0(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_ARG,500);
  }
  return uVar1;
}

/* ref: FUN_004ec770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4ec770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x20010)));
  if (iVar1 != 0) {
    F_0050c620(iVar1,0,0);
  }
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x2001c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x20028))) = 0;
  if (this == ((undefined *)GEN_TOP(0x0))) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + 4;
  }
  (*(int *)(gen_frame + 0x0)) = iVar1;
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  (*(int *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20000;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1d)) = 0x100;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar2 = F_00513dc0((int)this + 0x20040,&(*(int *)(gen_frame + 0x0)),0,0);
  *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0x20010))) = uVar2;
  return uVar2;
}

/* ref: FUN_004ec810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint * puVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  uint local_14;
  int local_10;
  
  uVar2 = *param_1;
  uVar3 = param_1[2];
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    return 0;
  }
  local_10 = 0;
  param_1 = ((undefined4 *)GEN_TOP(0x0));
  puVar7 = ((uint *)GEN_TOP(((int)this + 0x20014)));
  local_14 = uVar4;
  do {
    if ((local_10 == 0) && (local_14 == 0)) break;
    piVar5 = ((int *)GEN_TOP(puVar7[-3]));
    if ((piVar5 != ((int *)GEN_TOP(0x0))) && ((*puVar7 <= uVar3 && (uVar3 < *puVar7 + 0x20000)))) {
      piVar1 = piVar5 + 0x23;
      iVar9 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
      if (iVar9 != 7) {
LAB_004ec969: ;
        return uVar4 - local_14;
      }
      piVar1 = piVar5 + 0x22;
      iVar9 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
      if (iVar9 == 3) goto LAB_004ec969;
      iVar9 = uVar3 - *puVar7;
      uVar8 = local_14 + uVar3;
      if (0x20000 < uVar8) {
        uVar8 = 0x20000 - iVar9;
      }
      if ((local_10 == 0) && (local_14 < uVar8)) {
        uVar8 = local_14;
      }
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_FWD);
      F_00c46aa0(uVar2,uVar6 + iVar9,uVar8);
      bVar10 = local_14 < uVar8;
      local_14 = local_14 - uVar8;
      puVar7[3] = (0x20000 - uVar8) - iVar9;
      local_10 = local_10 - (uint)bVar10;
    }
    param_1 = ((undefined4 *)GEN_TOP(((int)param_1 + 1)));
    puVar7 = puVar7 + 1;
  } while (param_1 < 3);
  if (uVar4 - local_14 == 0) {
    uVar8 = (*((int *)GEN_TOP(((int)this + 0x20030))) + 1U) % 3;
    *((uint *)GEN_TOP(((int)this + 0x20030))) = uVar8;
    F_004ec770(((undefined *)GEN_TOP(((int)this - 8))) GEN_EDX_ARG,uVar8,uVar3);
  }
  return uVar4 - local_14;
}

/* ref: Client::Sound::Stream::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ec990(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ec990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1097368));
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x1097350));
  param_1[2] = (*(undefined * PTR32 (*)[3])REFP(0x1097340));
  F_004ebbe0(param_1 GEN_EDX_FWD);
  param_1[2] = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  F_005095f0(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x109727c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004eca20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004eca20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4eca20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  int * piVar4;
  int local_c;
  int local_8;
  undefined4 * puVar3;
  
  local_c = 3;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x80540)));
  do {
    puVar3 = puVar2 - 0x8054;
    *puVar3 = (*(undefined * PTR32 (*)[3])REFP(0x1097368));
    puVar2[-0x8053] = (*(undefined * PTR32 (*)[5])REFP(0x1097350));
    puVar2[-0x8052] = (*(undefined * PTR32 (*)[3])REFP(0x1097340));
    piVar4 = puVar2 - 0x50;
    local_8 = 3;
    do {
      if (*piVar4 != 0) {
        F_0050c620(*piVar4,0,0);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    puVar2[-0x8052] = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
    uVar1 = F_005095f0(puVar2 - 0x8053 GEN_EDX_ARG);
    local_c = local_c - 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x109727c));
    puVar2 = puVar3;
  } while (-1 < local_c);
  return uVar1;
}

/* ref: FUN_004ecab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ecab0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ecab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004ecac0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004ecac0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ecac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_004ecb60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ecb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4ecb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  uint uVar1;
  int * piVar2;
  
  *((int *)GEN_TOP(((int)this + 0x20034))) = param_2;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x20010)));
  param_2 = 3;
  do {
    piVar2[3] = -1;
    piVar2[6] = 0;
    if (*piVar2 != 0) {
      F_0050c620(*piVar2,0,0);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x2001c))) = 0;
  F_00c4d9ef((int)this + 0x20040,0x104,param_1,0xffffffff);
  uVar1 = F_00d2d4f0((int)this + 8,(int)this + 0x10,0x20000);
  *((uint *)GEN_TOP(((int)this + 0x2003c))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)this + 0x20144))) = 0;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x20010)));
  if (uVar1 != 0) {
    F_0050c620(uVar1,0,0);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x2001c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20028))) = 0;
  ((int *)(gen_frame + 0x0))[0] = (int)this + 4;
  ((int *)(gen_frame + 0x0))[1] = 0;
  ((int *)(gen_frame + 0x0))[2] = 0;
  ((int *)(gen_frame + 0x0))[3] = 0x20000;
  ((int *)(gen_frame + 0x0))[4] = 1;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1d)) = 0x100;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar1 = F_00513dc0((int)this + 0x20040,((int *)(gen_frame + 0x0)),0,0);
  *((uint *)GEN_TOP(((int)this + 0x20010))) = uVar1;
  return uVar1;
}

/* ref: FUN_004ecc60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ecc60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4ecc60u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined * this;
  
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
  *((float *)GEN_TOP((param_1 + 0x30))) = param_3;
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = param_4;
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((param_1 + 0x44))), REFG(float, 0x1097250));
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x69))) = 0x100;
  *((undefined4 *)GEN_TOP((param_1 + 100))) = 2;
  *((undefined1 *)GEN_TOP((param_1 + 0x68))) = 1;
  this = ((undefined *)GEN_TOP(F_004ebc40(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1375a64) + 0xcc))) GEN_EDX_FWD)));
  *((undefined * PTR32 *)GEN_TOP((param_1 + 0x70))) = this;
  if (this == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  F_004ecb60(this GEN_EDX_ARG,param_2,param_1);
  return 1;
}

/* ref: FUN_004ecce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ecce0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ecce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004eca20(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: LinkList_VISoundData_Sound_Client_V123_BGCollision::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ecd40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ecd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1097338));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004ecdb0 */
GEN_OWN GEN_NOFRAME byte F_004ecdb0(void)
{
  GEN_ENTER(0x4ecdb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Sound::SoundData::vf23 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ecdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ecdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_FWD,1,param_1);
  return uVar1;
}

/* ref: Client::Sound::SoundData::vf24 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ecde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ecde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_FWD,0,param_1);
  return uVar1;
}

/* ref: FUN_004ece30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ece30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ece30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1097338));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004eced0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004eced0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4eced0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((*((int *)GEN_TOP(((int)this + 4))) != 0) && (-1 < param_1)) {
    F_00d2eaf0(*((int *)GEN_TOP(((int)this + 4))),param_1);
  }
  return;
}

/* ref: FUN_004ecef0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004ecef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4ecef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((*((int *)GEN_TOP(((int)this + 4))) != 0) && (-1 < param_1)) {
    piVar1 = ((int *)GEN_TOP(F_00d2cce0()));
    uVar6 = 0;
    uVar5 = 0;
    if (param_2 != 0) {
      fVar3 = REFG(float, 0x1097250);
      fVar4 = *(float *)&REFG(undefined, 0x1097254);
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa4))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 4))));
      F_00d04ca0(uVar2 GEN_EDX_ARG,param_1,param_2,fVar3,fVar4,uVar5,uVar6);
      F_00d046e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return;
    }
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa4))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 4))))));
    F_00d04c00(this_00 GEN_EDX_ARG,param_1,uVar5,uVar6);
    F_00d046e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_004ecf80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004ecf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4ecf80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined * this_00;
  int iVar2;
  
  if ((*((int *)GEN_TOP(((int)this + 4))) != 0) && (-1 < param_1)) {
    piVar1 = ((int *)GEN_TOP(F_00d2cce0()));
    iVar2 = param_1;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa4))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 4))))));
    F_00d04a10(this_00 GEN_EDX_ARG,iVar2,param_2);
    F_00d046e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00d2eaf0(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  }
  return;
}

/* ref: FUN_004ecfe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ecfe0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4ecfe0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint in_EAX = 0;
  int * piVar1;
  uint uVar2;
  
  if ((*((int *)GEN_TOP((param_1 + 4))) != 0) && (-1 < param_2)) {
    piVar1 = ((int *)GEN_TOP(F_00d2cce0()));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa4))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((param_1 + 4))));
    in_EAX = F_00d04d50(uVar2 GEN_EDX_ARG,param_2,param_3,param_4);
    F_00d046e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return in_EAX;
}

/* ref: FUN_004ed040 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004ed040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ed040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  
  if (*((int *)GEN_TOP(((int)this + 0x20034))) != 0) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x20034))) + 8))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 0x20034))) GEN_EDX_ARG)));
    F_00cbdbf0(this_00 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Client::Sound::SoundData::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ed070(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x20;
}

/* ref: Client::Sound::SoundData::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ed080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ed080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00cbbdc0(this + 0x20 GEN_EDX_FWD,param_1);
  return (uint)(this + 0x20);
}

/* ref: Client::Sound::SoundData::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ed0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  uVar1 = F_00cbbd70(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  F_00cbbdc0(this + 0x20 GEN_EDX_ARG,uVar1);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)(this + 0x20);
}

/* ref: Client::Sound::SoundData::vf4 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ed0d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ed0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x68))) = param_2;
  return param_2;
}

/* ref: Client::Sound::SoundData::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004ed0e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x68)));
}

/* ref: Client::Sound::SoundData::vf35 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ed0f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ed0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x6a))) = param_2;
  return param_2;
}

/* ref: Client::Sound::SoundData::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ed100(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: Client::Sound::SoundData::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ed110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ed110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: Client::Sound::SoundData::vf8 */
GEN_OWN GEN_NOFRAME float GEN_THISCALL F_004ed120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  float fVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_FWD);
  if (((char)uVar1 != '\0') && ((*(int *)(this + 100) == 0 || (*(int *)(this + 100) == 2)))) {
    fVar2 = F_00cbd130(this + 0x20 GEN_EDX_ARG);
    return fVar2;
  }
  return *(float *)(this + 0x30);
}

/* ref: Client::Sound::SoundData::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ed150(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4ed150u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = param_1[0x19];
  if (-1 < (int)uVar1) {
    if ((int)uVar1 < 2) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x7c))))(param_1 GEN_EDX_FWD);
      if ((char)uVar1 == '\0') goto LAB_004ed18b;
    }
    else if (uVar1 != 2) goto LAB_004ed18b;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*param_1 + 0x54))))((undefined4)gen_fl2bits(param_2),param_3);
  }
LAB_004ed18b: ;
  param_1[0xd] = param_3;
  param_1[0xc] = (int)gen_fl2bits(param_2);
  return uVar1;
}

/* ref: Client::Sound::SoundData::vf10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004ed1a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x69)));
}

/* ref: Client::Sound::SoundData::vf11 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_004ed1b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x38)));
}

/* ref: Client::Sound::SoundData::vf12 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_004ed1c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x3c)));
}

/* ref: Client::Sound::SoundData::vf13 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_004ed1d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x40)));
}

/* ref: Client::Sound::SoundData::vf14 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_004ed1e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x44)));
}

/* ref: Client::Sound::SoundData::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ed1f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x4c)));
}

/* ref: Client::Sound::SoundData::vf15 */
GEN_OWN GEN_NOFRAME float GEN_THISCALL F_004ed200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  float fVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  if (((char)uVar1 == '\0') && ((*(int *)(this + 100) == 0 || (*(int *)(this + 100) == 2)))) {
    fVar2 = F_00cbd050(this + 0x20 GEN_EDX_ARG);
    return fVar2;
  }
  return *(float *)&REFG(undefined, 0x1097254);
}

/* ref: Client::Sound::SoundData::vf19 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ed230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ed230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 100);
  if (iVar1 == 0) {
    uVar2 = F_00cbdfe0(this + 0x20 GEN_EDX_FWD,param_1,REFG(float, 0x1097250),*(float *)&REFG(undefined, 0x1097254),gen_bits2f((unsigned int)(0)),0);
  }
  else if (iVar1 == 1) {
    uVar2 = *(uint *)(this + 0x54);
    if (-1 < (int)uVar2) {
      F_004ecef0(*(undefined * PTR32 *)(this + 0x50) GEN_EDX_ARG,uVar2,param_1);
      uVar2 = F_004ecfe0(*(undefined4 *)(this + 0x50) GEN_EDX_ARG,*(undefined4 *)(this + 0x54),REFG(float, 0x1097250),
                           param_1);
      return uVar2;
    }
  }
  else {
    uVar2 = iVar1 - 2;
    if (uVar2 == 0) {
      uVar2 = F_004ec5b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,param_1);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ed2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ed2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  iVar1 = *(int *)(this + 100);
  this[0x68] = (undefined1)0x0;
  if (iVar1 == 0) {
    uVar2 = F_00cbdbf0(this + 0x20 GEN_EDX_FWD,param_1);
    return uVar2;
  }
  if (iVar1 == 1) {
    uVar2 = *(uint *)(this + 0x54);
    if (-1 < (int)uVar2) {
      uVar2 = F_004ecfe0(*(undefined4 *)(this + 0x50) GEN_EDX_ARG,uVar2,*(float *)&REFG(undefined, 0x1097254),param_1);
      return uVar2;
    }
  }
  else {
    uVar2 = iVar1 - 2;
    if (((uVar2 == 0) && (iVar1 = *(int *)(this + 0x70), iVar1 != 0)) &&
       (*((int *)GEN_TOP((iVar1 + 0x20034))) != 0)) {
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0x20034))) + 8))))(*((int * PTR32 *)GEN_TOP((iVar1 + 0x20034))) GEN_EDX_ARG)));
      uVar2 = F_00cbdbf0(this_00 GEN_EDX_ARG,param_1);
    }
  }
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf21 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ed330(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4ed330u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 100)));
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar2 = *((uint *)GEN_TOP((param_1 + 0x54)));
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = F_004ecfe0(*((undefined4 *)GEN_TOP((param_1 + 0x50))) GEN_EDX_FWD,uVar2,param_2,param_3);
      return uVar2;
    }
    if (iVar1 - 2U != 0) {
      return iVar1 - 2U;
    }
    if (*((int *)GEN_TOP((param_1 + 0x70))) == 0) {
      return 0;
    }
  }
  uVar2 = F_00cbc390(param_1 + 0x20 GEN_EDX_ARG,param_2,param_3);
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf22 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ed380(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4ed380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 100)));
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar2 = *((uint *)GEN_TOP((param_1 + 0x54)));
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (param_2 == '\0') {
        uVar2 = F_004ecfe0(*((undefined4 *)GEN_TOP((param_1 + 0x50))) GEN_EDX_FWD,uVar2,REFG(float, 0x1097250),param_3);
        return uVar2;
      }
      uVar2 = F_004ecfe0(*((undefined4 *)GEN_TOP((param_1 + 0x50))) GEN_EDX_ARG,uVar2,*(float *)&REFG(undefined, 0x1097254),param_3);
      return uVar2;
    }
    if (iVar1 - 2U != 0) {
      return iVar1 - 2U;
    }
  }
  if (param_2 == '\0') {
    uVar2 = F_00cbc1a0(((undefined *)GEN_TOP((param_1 + 0x20))) GEN_EDX_ARG,param_3);
    return uVar2;
  }
  uVar2 = F_00cbc120(((undefined *)GEN_TOP((param_1 + 0x20))) GEN_EDX_ARG,param_3);
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004ed3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 100) == 0) {
    F_00cbcbc0(this + 0x20 GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::Sound::SoundData::vf26 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ed400(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4ed400u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 100)));
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar2 = F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((param_1 + 0x58))));
      uVar2 = F_00cbeb80(uVar2 GEN_EDX_ARG,param_2,param_3);
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar2;
    }
    if (iVar1 - 2U != 0) {
      return iVar1 - 2U;
    }
  }
  uVar2 = F_00cbcd10(param_1 + 0x20 GEN_EDX_ARG,param_2,param_3);
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ed470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ed470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if ((*(int *)(this + 100) != 0) && (uVar1 = *(int *)(this + 100) - 2, uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = F_00cbce00(this + 0x20 GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Sound::SoundData::vf28 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ed490(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4ed490u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  undefined4 uVar2;
  
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),5);
  F_00cbb3e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar2 = 0;
  uVar1 = F_00cbb250(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
  uVar1 = F_00cbb950(uVar1 GEN_EDX_ARG,param_2,uVar2);
  F_00cbb890(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

