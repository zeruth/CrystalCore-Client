#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00de9dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9dd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde9dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00de9df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00de9e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00de9e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde9e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00de9eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde9eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00de9ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde9ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_00d91520(this GEN_EDX_FWD,param_1);
  F_01059680((undefined *)((int)this + 8) GEN_EDX_ARG,param_2,param_3);
  uVar1 = F_010596b0((undefined *)((int)this + 8) GEN_EDX_ARG);
  if (uVar1 != 0) {
    uVar1 = F_010596b0((undefined *)((int)this + 8) GEN_EDX_ARG);
    uVar1 = F_00d92610(uVar1 GEN_EDX_ARG);
    uVar1 = F_00d91520((undefined *)((int)this + 4) GEN_EDX_ARG,uVar1);
    return uVar1;
  }
  uVar1 = F_00d91520((undefined *)((int)this + 4) GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de9f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9f70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde9f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00de9fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00de9fd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de9fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde9fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_010596b0((undefined *)((int)this + 8) GEN_EDX_FWD);
  if (uVar1 != 0) {
    uVar1 = F_010596b0((undefined *)((int)this + 8) GEN_EDX_ARG);
    uVar1 = F_00d92610(uVar1 GEN_EDX_ARG);
    return uVar1;
  }
  return *(uint *)((int)this + 4) & 0xfffffffe;
}

/* ref: FUN_00dea020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdea020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    if ((param_2 == 0) || (*(int *)((int)this + 4) <= iVar3)) break;
    iVar1 = *(int *)this + iVar4;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0xc;
  } while (*(int *)(iVar1 + 8) != param_2);
  if (iVar3 < *(int *)((int)this + 4)) {
    iVar4 = iVar3 * 0xc;
    param_2 = iVar3;
    do {
      iVar3 = *(int *)this;
      this_00 = (undefined *)(iVar3 + 8 + iVar4);
      uVar2 = F_010596b0(this_00 GEN_EDX_FWD);
      if (uVar2 == 0) {
        uVar2 = *(uint *)(iVar3 + 4 + iVar4) & 0xfffffffe;
      }
      else {
        uVar2 = F_010596b0(this_00 GEN_EDX_ARG);
        uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
      }
      if (uVar2 != 0) {
        iVar3 = *(int *)this;
        uVar2 = F_010596b0((undefined *)(iVar3 + 8 + iVar4) GEN_EDX_ARG);
        if (uVar2 == 0) {
          uVar2 = *(uint *)(iVar3 + 4 + iVar4) & 0xfffffffe;
        }
        else {
          uVar2 = F_010596b0((undefined *)(iVar3 + 8 + iVar4) GEN_EDX_ARG);
          uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
        }
        uVar2 = F_00da0d20(param_1,uVar2);
        if (uVar2 == 0) {
          return *(uint *)(*(int *)this + 8 + param_2 * 0xc);
        }
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 0xc;
    } while (param_2 < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00dea100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdea100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    if ((param_2 == 0) || (*(int *)((int)this + 4) <= iVar3)) break;
    iVar1 = *(int *)this + iVar4;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0xc;
  } while (*(int *)(iVar1 + 8) != param_2);
  if (iVar3 < *(int *)((int)this + 4)) {
    iVar4 = iVar3 * 0xc;
    do {
      if ((*(uint *)(iVar4 + *(int *)this) & 0xfffffffe) != 0) {
        uVar2 = F_00da0d20(param_1,*(uint *)(iVar4 + *(int *)this) & 0xfffffffe);
        if (uVar2 == 0) {
          return *(uint *)(*(int *)this + 8 + iVar3 * 0xc);
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00dea180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdea180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_00d91340(this GEN_EDX_FWD);
  F_00d91340((int)this + 4 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 8) = 0;
  F_00d91520(this GEN_EDX_ARG,param_1);
  F_01059680((undefined *)((int)this + 8) GEN_EDX_ARG,param_2,param_3);
  uVar1 = F_010596b0((undefined *)((int)this + 8) GEN_EDX_ARG);
  if (uVar1 != 0) {
    uVar1 = F_010596b0((undefined *)((int)this + 8) GEN_EDX_ARG);
    uVar1 = F_00d92610(uVar1 GEN_EDX_ARG);
    F_00d91520((undefined *)((int)this + 4) GEN_EDX_ARG,uVar1);
    return (uint)this;
  }
  F_00d91520((undefined *)((int)this + 4) GEN_EDX_ARG,0);
  return (uint)this;
}

/* ref: FUN_00dea200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea200u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  F_00d91340((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  F_00d91340((int)(*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG);
  this_00 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  *this_00 = 0;
  F_00d91520((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[1]));
  F_01059650(&(*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]));
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((undefined * PTR32 *)this_00 != &(*(undefined * PTR32 *)&gen_args[1])) {
    if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
      F_00d919e0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    }
    if ((undefined *)*this_00 != (undefined *)0x0) {
      F_00d91a80((undefined *)*this_00 GEN_EDX_ARG);
    }
    *this_00 = pvVar1;
  }
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    F_00d91a80((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  }
  uVar2 = F_010596b0(this_00 GEN_EDX_ARG);
  if (uVar2 != 0) {
    uVar2 = F_010596b0(this_00 GEN_EDX_ARG);
    uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
    F_00d91520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,uVar2);
    return (uint)(*(undefined * PTR32 *)&gen_args[0]);
  }
  F_00d91520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,0);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00dea2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea2b0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdea2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 4 GEN_EDX_ARG,param_2);
  return in_ecx;
}

/* ref: FUN_00dea2e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dea2e0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdea2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return in_ecx;
}

/* ref: FUN_00dea300 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dea300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdea300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 8) = 0;
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_ARG);
  uVar1 = F_00d91510(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00dea330 */
GEN_LIB GEN_FRAME unsigned int F_00dea330(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdea330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dea360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea360u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  F_00d91520((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined * PTR32 *)&gen_args[1]));
  F_01059650(&(*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]));
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  this_00 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((undefined * PTR32 *)this_00 != &(*(undefined * PTR32 *)&gen_args[1])) {
    if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
      F_00d919e0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    }
    if ((undefined *)*this_00 != (undefined *)0x0) {
      F_00d91a80((undefined *)*this_00 GEN_EDX_ARG);
    }
    *this_00 = pvVar1;
  }
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    F_00d91a80((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  }
  uVar2 = F_010596b0(this_00 GEN_EDX_ARG);
  if (uVar2 != 0) {
    uVar2 = F_010596b0(this_00 GEN_EDX_ARG);
    uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
    uVar2 = F_00d91520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,uVar2);
    return uVar2;
  }
  uVar2 = F_00d91520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,0);
  return uVar2;
}

/* ref: FUN_00dea3f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdea3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 8) = 0;
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_ARG);
  F_00d91510(this GEN_EDX_ARG);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00dea450 */
GEN_LIB GEN_FRAME unsigned int F_00dea450(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdea450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = param_2 - 1;
  if (-1 < iVar2) {
    puVar1 = (undefined4 *)(param_1 + 8 + iVar2 * 0xc);
    do {
      if ((undefined *)*puVar1 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar1 GEN_EDX_ARG);
      }
      *puVar1 = 0;
      F_00d91510(puVar1 - 1 GEN_EDX_ARG);
      F_00d91510(puVar1 - 2 GEN_EDX_ARG);
      puVar1 = puVar1 - 3;
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return;
}

/* ref: FUN_00dea4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdea4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      F_00d91510(puVar2 - 1 GEN_EDX_ARG);
      F_00d91510(puVar2 - 2 GEN_EDX_ARG);
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dea660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea660(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdea660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dea670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea670(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdea670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *(undefined1 *)(in_ecx + 1) = (undefined1)param_2;
  return in_ecx;
}

/* ref: FUN_00dea690 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dea690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdea690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00da3e20((undefined *)((int)this + 8) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00dea6c0 */
GEN_LIB GEN_FRAME uint F_00dea6c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdea6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = param_1;
  uVar1 = param_1 >> 0x18;
  uVar2 = param_1 >> 0x10;
  param_1 = CONCAT13((char)uVar3,
                     CONCAT12((char)((uint)uVar3 >> 8),CONCAT11((char)uVar2,(char)uVar1)));
  return param_1;
}

/* ref: FUN_00dea6f0 */
GEN_LIB GEN_FRAME uint F_00dea6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea6f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (((*(int *)&gen_args[1]) == -0x354ff2e2) && ((*(int *)&gen_args[2]) == -0x2fee0532)) {
LAB_00dea750: ;
    *(*(undefined1 * PTR32 *)&gen_args[0]) = 1;
    return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
  }
  (*(undefined2 *)((char *)&(*(int *)&gen_args[1]) + 0)) = CONCAT11((char)((uint)(*(int *)&gen_args[1]) >> 0x10),(char)((uint)(*(int *)&gen_args[1]) >> 0x18));
  gen_piece_set(&(*(int *)&gen_args[1]), 0, 3, (unsigned long long)(CONCAT12((char)((uint)iVar1 >> 8),(undefined2)(*(int *)&gen_args[1]))));
  (*(int *)&gen_args[1]) = CONCAT13((char)iVar1,(undefined3)(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) == -0x354ff2e2) {
    (*(undefined2 *)((char *)&(*(int *)&gen_args[1]) + 0)) = CONCAT11((char)((uint)(*(int *)&gen_args[2]) >> 0x10),(char)((uint)(*(int *)&gen_args[2]) >> 0x18));
    gen_piece_set(&(*(int *)&gen_args[1]), 0, 3, (unsigned long long)(CONCAT12((char)((uint)(*(int *)&gen_args[2]) >> 8),(undefined2)(*(int *)&gen_args[1]))));
    (*(int *)&gen_args[1]) = CONCAT13((char)(*(int *)&gen_args[2]),(undefined3)(*(int *)&gen_args[1]));
    if ((*(int *)&gen_args[1]) == -0x2fee0532) goto LAB_00dea750;
  }
  *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
  return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00dea860 */
GEN_LIB GEN_NOFRAME uint F_00dea860(GEN_P(char * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xdea860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  char * pcVar1;
  char cVar2;
  
  cVar2 = *in_eax;
  while ((cVar2 != '\0' && (cVar2 == ' '))) {
    pcVar1 = in_eax + 1;
    in_eax = in_eax + 1;
    cVar2 = *pcVar1;
  }
  return (uint)in_eax;
}

/* ref: FUN_00dea880 */
GEN_LIB GEN_FRAME uint F_00dea880(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdea880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = F_00da0ee0(in_eax,in_edi);
  if (uVar1 != 0) {
    uVar2 = F_00da0e60(in_edi);
    pcVar3 = (char *)F_00dea860(uVar2 + uVar1);
    if (*pcVar3 == '=') {
      pcVar3 = (char *)F_00dea860(pcVar3 + 1);
      if (*pcVar3 == '\"') {
        pcVar3 = pcVar3 + 1;
        uVar1 = F_00da0ef0(pcVar3,0x22);
        if (uVar1 != 0) {
          F_00d91560(param_3 GEN_EDX_ARG,pcVar3,uVar1 - (int)pcVar3);
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00dea8e0 */
GEN_LIB GEN_FRAME uint F_00dea8e0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdea8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = param_2 + 0x40;
  if (0 < *(int *)(param_2 + 0x14)) {
    do {
      uVar1 = F_00da0d20(iVar5,REFG(undefined * PTR32, 0x135485c));
      if (uVar1 == 0) {
        iVar4 = 0;
        if (*(int *)(iVar5 + 0x18) != 6 && -1 < *(int *)(iVar5 + 0x18) - 6) goto LAB_00dea933;
        goto LAB_00dea983;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar4 < *(int *)(param_2 + 0x14));
  }
LAB_00dea910: ;
  *param_1 = 0;
  return (uint)param_1;
  while( true ) {
    if (((*(char *)(iVar2 + 4) != '\t') ||
        (this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x10))(param_3 GEN_EDX_ARG,iVar2 + 5))), this == (undefined *)0x0)) ||
       (uVar3 = F_00d93010(this GEN_EDX_ARG,0), uVar1 != uVar3)) goto LAB_00dea910;
    uVar1 = F_00da0e60(iVar2 + 5);
    iVar4 = iVar4 + 6 + uVar1;
    if (*(int *)(iVar5 + 0x18) - 6 <= iVar4) break;
LAB_00dea933: ;
    iVar2 = *(int *)(iVar5 + 0x14) + iVar4;
    uVar1 = *(uint *)(iVar2 + param_2);
    iVar2 = iVar2 + param_2;
    if (*(char *)(iVar2 + 5) == -1) break;
  }
LAB_00dea983: ;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dea990 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dea990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdea990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(uint *)((int)this + 4) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD);
    return uVar1;
  }
  return *(uint *)((int)this + 4);
}

/* ref: FUN_00dea9b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dea9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdea9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(uint *)((int)this + 8) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD);
    return uVar1;
  }
  return *(uint *)((int)this + 8);
}

/* ref: FUN_00dea9d0 */
GEN_LIB GEN_FRAME uint F_00dea9d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined8 * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdea9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined8 * param_4 = (undefined8 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  __declspec(align(16)) undefined1 gen_frame[0x310];
  undefined8 uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return 1;
  }
  (*(undefined8 *)(gen_frame + 0x2f4)) = *param_4;
  uVar1 = param_4[1];
  (*(undefined8 *)(gen_frame + 0x2fc)) = uVar1;
  if ((param_6 & 2) != 0) {
    gen_piece_set(&(*(undefined8 *)(gen_frame + 0x2fc)), 2, 6, (unsigned long long)((undefined6)((ulonglong)uVar1 >> 0x10)));
    (*(undefined1 *)((char *)&(*(undefined8 *)(gen_frame + 0x2fc)) + 1)) = 1;
    (*(undefined2 *)((char *)&(*(undefined8 *)(gen_frame + 0x2fc)) + 0)) = CONCAT11(1,(char)uVar1);
  }
  if ((param_6 & 1) == 0) {
    F_00df8880(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x2f4)));
    F_00dfb220(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,param_1,param_2,param_5);
    uVar2 = F_00df9700((undefined *)((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,param_3,&(*(undefined8 *)(gen_frame + 0x2f4)));
    F_00df8900(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0x304)) = 0;
  F_00d91340(&(*(uint *)(gen_frame + 0x308)) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0xc))))
                    (REFG(int * PTR32, 0x15e3754) GEN_EDX_ARG,param_1,param_2,param_3,&(*(undefined8 *)(gen_frame + 0x2f4)),param_5,&(*(undefined4 *)(gen_frame + 0x304)));
  if (uVar2 == 1) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x2e8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x2e8)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x308)) & 0xfffffffe);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x1d25e54f,((undefined1 *)(gen_frame + 0x0)),"Util\\hkSerializeUtil.cpp",0x23a);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x2e8)) GEN_EDX_ARG);
  }
  F_00d91510(&(*(uint *)(gen_frame + 0x308)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00deab70 */
GEN_LIB GEN_FRAME uint F_00deab70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdeab70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  uint uVar2;
  undefined4 in_ECX = 0;
  undefined4 * puVar3;
  
  F_00df6600(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,CONCAT31((int3)((uint)in_ECX >> 8),(char)((*(uint *)&gen_args[4]) >> 1)) & 0xffffff01);
  F_00df64e0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = (*(undefined4 * PTR32 *)&gen_args[3]);
  puVar3 = &(*(uint *)&gen_args[4]);
  (*(uint *)(gen_frame + 0xd8)) = uVar2;
  (*(undefined2 *)(gen_frame + 0xce)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = (*(undefined * PTR32 (*)[4])REFP(0x114ba38));
  (*(undefined * PTR32 *)(gen_frame + 0xd4)) = ((undefined1 *)(gen_frame + 0x4));
  F_00df6480(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]));
  uVar2 = F_00deab00((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_ARG,puVar3);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) - 1;
    piVar1 = (*(undefined4 * PTR32 *)&gen_args[3]) + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))))((*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG,1);
    }
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  F_00df66f0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00deac30 */
GEN_LIB GEN_FRAME uint F_00deac30(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xdeac30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00deab00(param_2 GEN_EDX_ARG,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00deac50 */
GEN_LIB GEN_FRAME uint F_00deac50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdeac50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00deac30(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00deac70 */
GEN_LIB GEN_FRAME uint F_00deac70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdeac70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00deab70(param_1,param_2,param_3,0,param_4);
  return uVar1;
}

/* ref: FUN_00deac90 */
GEN_LIB GEN_FRAME uint F_00deac90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xdeac90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  char * pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar4 = *(*(int * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  if (iVar4 == 2) {
    uVar1 = F_00da1040((*(int * PTR32 *)&gen_args[1]) + 3,&REFG(undefined4, 0x135491c),4);
    if (uVar1 != 0) {
      if ((*(undefined4 * PTR32 *)&gen_args[2]) != (undefined4 *)0x0) {
        *(*(undefined4 * PTR32 *)&gen_args[2]) = 3;
        F_00d91520((*(undefined4 * PTR32 *)&gen_args[2]) + 1 GEN_EDX_ARG,"Wrong platform for packfile");
      }
      (*(int *)(gen_frame + 0x10)) = 0;
joined_r0x00deaf07: ;
      if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
        (*(int *)(gen_frame + 0x10)) = 0;
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
      }
      return 0;
    }
    uVar1 = F_00e05450();
    uVar1 = F_00dec1f0((*(int * PTR32 *)&gen_args[1]) + 2 GEN_EDX_ARG,uVar1);
    if (uVar1 != 0) {
      iVar4 = (*(int *)(gen_frame + 0x10)) + 0x40;
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < iVar4) {
        iVar5 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
        if (iVar4 < iVar5) {
          iVar4 = iVar5;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),iVar4,1);
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 0x40;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),0x40);
      iVar4 = *(int *)((*(int *)(gen_frame + 0xc)) + 0x14);
      iVar8 = iVar4 * 0x30;
      iVar5 = (*(int *)(gen_frame + 0x10)) + iVar8;
      (*(int *)(gen_frame + 0x18)) = 0;
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < iVar5) {
        iVar6 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
        if (iVar5 < iVar6) {
          iVar5 = iVar6;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),iVar5,1);
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + iVar8;
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0xc)) + 0x40;
      (*(int *)(gen_frame + 0x24)) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)) + 0x40,iVar8);
      iVar5 = 0;
      if (1 < iVar4) {
        piVar2 = (int *)((*(int *)(gen_frame + 0x20)) + 0x5c);
        iVar6 = (iVar4 - 2U >> 1) + 1;
        iVar5 = iVar6 * 2;
        (*(int *)(gen_frame + 0x1c)) = iVar5;
        do {
          iVar7 = iVar7 + piVar2[-0xc];
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + *piVar2;
          piVar2 = piVar2 + 0x18;
          iVar6 = iVar6 - 1;
        } while (iVar6 != 0);
      }
      iVar6 = (*(int *)(gen_frame + 0x18));
      if (iVar5 < iVar4) {
        iVar6 = *(int *)((*(int *)(gen_frame + 0x20)) + 0x2c + iVar5 * 0x30);
      }
      iVar6 = iVar6 + iVar7 + (*(int *)(gen_frame + 0x24));
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < (*(int *)(gen_frame + 0x10)) + iVar6) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)) + iVar6,1);
      }
      iVar4 = (*(int *)(gen_frame + 0x10)) + iVar6;
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < iVar4) {
        iVar7 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
        if (iVar4 < iVar7) {
          iVar4 = iVar7;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),iVar4,1);
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + iVar6;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)) + 0x40 + iVar8,iVar6);
      iVar4 = (*(int *)(gen_frame + 0xc));
      uVar1 = F_00dea990(&(*(uint *)&gen_args[4]) GEN_EDX_ARG);
      pcVar3 = (char *)F_00dea8e0(&(*(undefined1 *)(gen_frame + 0x2b)),iVar4,uVar1);
      if (*pcVar3 != '\0') {
        uVar1 = F_00e04c50((*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)),(*(undefined4 *)&gen_args[3]));
        (*(int *)(gen_frame + 0x10)) = 0;
        if ((int)(*(uint *)(gen_frame + 0x14)) < 0) {
          return uVar1;
        }
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
        return uVar1;
      }
      if (((*(uint *)&gen_args[4]) & 1) != 0) {
        if ((*(undefined4 * PTR32 *)&gen_args[2]) != (undefined4 *)0x0) {
          *(*(undefined4 * PTR32 *)&gen_args[2]) = 4;
          F_00d91520((*(undefined4 * PTR32 *)&gen_args[2]) + 1 GEN_EDX_ARG,"Class signatures not up to date.");
        }
        (*(int *)(gen_frame + 0x10)) = 0;
        goto joined_r0x00deaf07;
      }
    }
    if ((*(int *)(gen_frame + 0x10)) != 0) {
      F_01059e00(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)));
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0x14))))(REFG(int * PTR32, 0x15e3754) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(int * PTR32 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[2]));
      F_01059700(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
      goto LAB_00deaf68;
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0x14))))(REFG(int * PTR32, 0x15e3754) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[2]));
LAB_00deaf68: ;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff)
    ;
  }
  return uVar1;
}

/* ref: FUN_00deb100 */
GEN_LIB GEN_FRAME uint F_00deb100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdeb100u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined4 * puVar1;
  uint uVar2;
  char * pcVar3;
  undefined4 * this;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x158)) = (*(undefined4 * PTR32 *)&gen_args[1]) + 2;
  F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 2 GEN_EDX_ARG,0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x154)) = puVar1 + 3;
  F_00da3720(puVar1 + 3,0,4);
  F_00c48350(&(*(int *)(gen_frame + 0xd4)),0,0x80);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x1c))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x80);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(int *)(gen_frame + 0xd4)),0x80);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x20))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  F_00da1030(&(*(undefined4 *)(gen_frame + 0x94)),0xffffffff,0x40);
  (*(undefined4 *)(gen_frame + 0x94)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0x98)) = 0x10c0c010;
  (*(undefined1 *)(gen_frame + 0xbc)) = 0;
  (*(undefined4 *)(gen_frame + 0xcc)) = 0;
  if ((7 < (int)uVar2) &&
     (pcVar3 = (char *)F_00dea6f0((int)&(*(undefined4 * PTR32 *)&gen_args[1]) + 3,(*(int *)(gen_frame + 0xd4)),(*(int *)(gen_frame + 0xd8))), *pcVar3 != '\0')) {
    *puVar1 = 4;
    return (uint)pcVar3;
  }
  if (((0x3f < (int)uVar2) && ((*(int *)(gen_frame + 0xd4)) == 0x57e0e057)) && ((*(int *)(gen_frame + 0xd8)) == 0x10c0c010)) {
    *puVar1 = 2;
    F_00d91520((*(undefined4 * PTR32 *)(gen_frame + 0x158)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xfc)));
    puVar1[1] = (*(undefined4 *)(gen_frame + 0xe0));
    uVar2 = F_00da3710((*(undefined4 * PTR32 *)(gen_frame + 0x154)),((undefined1 *)(gen_frame + 0xe4)),4);
    return uVar2;
  }
  uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xd4)),"<hkpackfile ");
  if ((uVar2 == 0) && (uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xd4)),"<hkpackfile>"), uVar2 == 0)) {
    uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xd4)),"<hktagfile ");
    if ((uVar2 == 0) && (uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xd4)),"<hktagfile>"), uVar2 == 0)) {
      return 0;
    }
    *puVar1 = 5;
    return uVar2;
  }
  *puVar1 = 3;
  uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xd4)),"<hkpackfile");
  F_00da4df0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar2);
  F_00d91340(&(*(undefined4 * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  uVar2 = F_00dea880((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)),"classversion",&(*(undefined4 * PTR32 *)&gen_args[1]));
  if (uVar2 == 0) {
LAB_00deb338: ;
    pcVar3 = "Havok-3.0.0";
    this = (*(undefined4 * PTR32 *)(gen_frame + 0x158));
  }
  else {
    uVar2 = F_00da0e80((uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 0xfffffffe,0);
    this = (*(undefined4 * PTR32 *)(gen_frame + 0x158));
    puVar1[1] = uVar2;
    if (uVar2 == 1) goto LAB_00deb338;
    if (((int)uVar2 < 2) || (9 < (int)uVar2)) {
      pcVar3 = "error";
    }
    else {
      uVar2 = F_00dea880((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)),"contentsversion",(*(undefined4 * PTR32 *)(gen_frame + 0x158)));
      if (uVar2 != 0) goto LAB_00deb345;
      pcVar3 = "Havok-3.1.0";
    }
  }
  F_00d91520(this GEN_EDX_ARG,pcVar3);
LAB_00deb345: ;
  F_00d91510(&(*(undefined4 * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  ((byte *)(gen_frame + 0x8))[4] = 0;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) & 0x3fffffff);
  }
  return uVar2;
}

/* ref: FUN_00deb390 */
GEN_LIB GEN_FRAME uint F_00deb390(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdeb390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  F_00dede30(param_3 GEN_EDX_ARG);
  pcVar1 = *(gen_code32 *)(*in_eax + 0x20);
  iVar6 = 0;
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(int *)(gen_frame + 0x98)) = ((int)0x80000000);
  (*pcVar1)(in_eax,&(*(int *)(gen_frame + 0x90)));
  if (0 < (*(int *)(gen_frame + 0x94))) {
    do {
      piVar2 = *(int * PTR32 *)((*(int *)(gen_frame + 0x90)) + iVar6 * 4);
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
      piVar2 = *(int * PTR32 *)((*(int *)(gen_frame + 0x90)) + iVar6 * 4);
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_4 + 0x10))(param_4 GEN_EDX_ARG,uVar3);
      if ((uVar5 == 0) || (uVar5 = F_00d92a10(uVar5 GEN_EDX_ARG), uVar5 != uVar4)) {
        uVar7 = F_00ded530(param_3 GEN_EDX_ARG,uVar3,uVar4);
        uVar5 = F_00dbddc0((undefined *)((int)param_3 + 0x18) GEN_EDX_ARG,(int)uVar7,(int)(uVar7 >> 0x20),
                             0xffffffff,0);
        if (uVar5 == 0xffffffff) {
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = ((undefined1 *)(gen_frame + 0x10));
          (*(uint *)(gen_frame + 0xc)) = 0x80000080;
          (*(undefined4 *)(gen_frame + 0x8)) = 1;
          ((undefined1 *)(gen_frame + 0x10))[0] = 0;
          F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x4)),"Unable to version data of class %s, version 0x%p\n%s",uVar3,uVar4,
                       "Patching to latest version failed. Have you registered the necessary patches? e.g. hkFeature_serializeRegisterKeycodePatches() See the hkError output for more details"
                      );
          *param_2 = 4;
          F_00d91520(param_2 + 1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
          (*(undefined4 *)(gen_frame + 0x8)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0xc))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0xc)) & 0x3fffffff);
          }
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)0x0;
          (*(uint *)(gen_frame + 0xc)) = 0x80000000;
          (*(int *)(gen_frame + 0x94)) = 0;
          if (-1 < (*(int *)(gen_frame + 0x98))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x90)),(*(int *)(gen_frame + 0x98)) * 4);
          }
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (*(int *)(gen_frame + 0x94)));
  }
  (*(int *)(gen_frame + 0x94)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x98))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x90)),(*(int *)(gen_frame + 0x98)) * 4);
  }
  return 1;
}

/* ref: FUN_00deb530 */
GEN_LIB GEN_FRAME uint F_00deb530(GEN_P(undefined4 in_esi, unsigned int gen_a0), GEN_P(undefined4 * in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdeb530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  F_00e09800(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00e09820(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),param_3,in_esi);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0) {
    *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6) - 1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))((*(undefined4 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
    }
  }
  if ((in_edi != (undefined4 *)0x0) &&
     (uVar2 = F_00deb390(in_esi,in_edi,REFG(void * PTR32, 0x15e3734),param_4), uVar2 == 0)) {
    return 1;
  }
  F_00ded380(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,param_4);
  uVar2 = F_00def500(REFG(void * PTR32, 0x15e3734) GEN_EDX_ARG,in_esi,((byte *)(gen_frame + 0x4)));
  if (uVar2 != 0) {
    if (in_edi != (undefined4 *)0x0) {
      *in_edi = 4;
      F_00d91520(in_edi + 1 GEN_EDX_ARG,
                   "Patching to latest version failed. Have you registered the necessary patches? e.g. hkFeature_serializeRegisterKeycodePatches() See the hkError output for more details"
                  );
    }
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0) {
      F_00d91a80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) GEN_EDX_ARG);
    }
    return 1;
  }
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0) {
    F_00d91a80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00deb5f0 */
GEN_LIB GEN_FRAME uint F_00deb5f0(GEN_P(undefined4 in_ecx, unsigned int gen_a0), GEN_P(undefined4 in_esi, unsigned int gen_a1), GEN_P(undefined4 * in_edi, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdeb5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(undefined2 *)(gen_frame + 0x16)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[4])REFP(0x114ba24));
  F_00df4940((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),in_ecx,in_esi);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0) {
    *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6) - 1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))((*(undefined4 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
    }
  }
  if ((in_edi != (undefined4 *)0x0) &&
     (uVar2 = F_00deb390(in_esi,in_edi,REFG(void * PTR32, 0x15e3734),param_4), uVar2 == 0)) {
    return 1;
  }
  F_00ded380(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,param_4);
  uVar2 = F_00def500(REFG(void * PTR32, 0x15e3734) GEN_EDX_ARG,in_esi,((byte *)(gen_frame + 0x4)));
  if (uVar2 != 0) {
    if (in_edi != (undefined4 *)0x0) {
      *in_edi = 4;
      F_00d91520(in_edi + 1 GEN_EDX_ARG,
                   "Patching to latest version failed. Have you registered the necessary patches? e.g. hkFeature_serializeRegisterKeycodePatches() See the hkError output for more details"
                  );
    }
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0) {
      F_00d91a80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) GEN_EDX_ARG);
    }
    return 1;
  }
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0) {
    F_00d91a80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00deb6b0 */
GEN_LIB GEN_FRAME uint F_00deb6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdeb6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int * piVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  LPVOID pvVar6;
  undefined4 uVar7;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) {
    if ((*(undefined4 * PTR32 *)&gen_args[1]) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 1;
      F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,"Stream pointer is null");
      return 0;
    }
  }
  else {
    pcVar3 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[0]) + 3)));
    if (*pcVar3 != '\0') {
      uVar4 = F_00dea990(&(*(uint *)&gen_args[2]) GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0xb4)) = uVar4;
      uVar5 = F_00dea9b0(&(*(uint *)&gen_args[2]) GEN_EDX_ARG);
      F_00d91340(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
      F_00deb100(piVar1,((undefined4 *)(gen_frame + 0xa0)));
      switch((unsigned int)(uintptr_t)(((undefined4 *)(gen_frame + 0xa0))[0])) {
      case 2: ;
      case 3: ;
        uVar4 = F_00deac90(piVar1,((undefined4 *)(gen_frame + 0xa0)),(*(undefined4 * PTR32 *)&gen_args[1]),uVar5,(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
        F_00d91510(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
        return uVar4;
      case 4: ;
        pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar2 = *(uint *)((int)pvVar6 + 0xc);
        uVar5 = uVar2 + 0x4000;
        if ((*(int *)((int)pvVar6 + 8) < 0x4000) || (*(uint *)((int)pvVar6 + 0x10) < uVar5)) {
          (*(int * PTR32 *)&gen_args[0]) = (int *)F_00d94390(pvVar6 GEN_EDX_ARG,0x4000);
        }
        else {
          *(uint *)((int)pvVar6 + 0xc) = uVar5;
          (*(int * PTR32 *)&gen_args[0]) = (int *)uVar2;
        }
        pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        (*(uint *)(gen_frame + 0xb8)) = 0;
        F_00e0ecc0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,*(undefined4 *)((int)pvVar6 + 0x2c));
        uVar4 = F_00deb530(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)&gen_args[1]),piVar1,uVar4);
        if ((uVar4 == 0) || (uVar4 = (*(uint *)(gen_frame + 0xb8)), ((*(uint *)&gen_args[2]) & 2) != 0)) {
          uVar7 = 1;
          uVar4 = (*(uint *)(gen_frame + 0xb4));
          uVar5 = F_00e0d5f0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x9c)));
          uVar4 = F_00e06430(uVar5,uVar4,uVar7);
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x9c)) != (undefined4 *)0x0) {
            *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 6) - 1;
            piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x9c)))((*(undefined4 * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,1);
            }
          }
        }
        F_00e0ed30(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        break;
      case 5: ;
        pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar2 = *(uint *)((int)pvVar6 + 0xc);
        uVar5 = uVar2 + 0x4000;
        if ((*(int *)((int)pvVar6 + 8) < 0x4000) || (*(uint *)((int)pvVar6 + 0x10) < uVar5)) {
          (*(int * PTR32 *)&gen_args[0]) = (int *)F_00d94390(pvVar6 GEN_EDX_ARG,0x4000);
        }
        else {
          *(uint *)((int)pvVar6 + 0xc) = uVar5;
          (*(int * PTR32 *)&gen_args[0]) = (int *)uVar2;
        }
        pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        (*(uint *)(gen_frame + 0xb8)) = 0;
        F_00e0ecc0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,*(undefined4 *)((int)pvVar6 + 0x2c));
        uVar4 = F_00deb5f0(piVar1,((undefined1 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)&gen_args[1]),uVar4);
        if ((uVar4 == 0) || (uVar4 = (*(uint *)(gen_frame + 0xb8)), ((*(uint *)&gen_args[2]) & 2) != 0)) {
          uVar7 = 1;
          uVar4 = (*(uint *)(gen_frame + 0xb4));
          uVar5 = F_00e0d5f0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0xb0)));
          uVar4 = F_00e06430(uVar5,uVar4,uVar7);
          if ((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) != (undefined4 *)0x0) {
            *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xb0)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xb0)) + 6) - 1;
            piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xb0)) + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0xb0)))((*(undefined4 * PTR32 *)(gen_frame + 0xb0)) GEN_EDX_ARG,1);
              F_00e0ed30(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
              break;
            }
          }
        }
        F_00e0ed30(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        break;
      default: ;
        if ((*(undefined4 * PTR32 *)&gen_args[1]) != (undefined4 *)0x0) {
          *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
          F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,"Unable to detect format from stream");
        }
        F_00d91510(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
        return 0;
      }
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      if (((0x3fff < *(int *)((int)pvVar6 + 8)) &&
          ((int)(*(int * PTR32 *)&gen_args[0]) + 0x4000U == *(int *)((int)pvVar6 + 0xc))) &&
         ((int *)*(uint *)((int)pvVar6 + 0x14) != (*(int * PTR32 *)&gen_args[0]))) {
        *(int * PTR32 *)((int)pvVar6 + 0xc) = (*(int * PTR32 *)&gen_args[0]);
        F_00d91510(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
        return uVar4;
      }
      F_00d945c0(pvVar6 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),0x4000);
      F_00d91510(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
      return uVar4;
    }
    if ((*(undefined4 * PTR32 *)&gen_args[1]) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 1;
      F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,"Stream is not ok");
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00deb9e0 */
GEN_LIB GEN_FRAME uint F_00deb9e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdeb9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_01059c30(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_00deb6b0(*(undefined4 *)(uVar1 + 8),param_2,param_3,param_4,param_5);
  F_01059700(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00deba30 */
GEN_LIB GEN_FRAME uint F_00deba30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdeba30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  
  F_00da1030(&(*(undefined4 *)(gen_frame + 0x0)),0xffffffff,0x40);
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x0)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10c0c010;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if ((iVar1 == 0x57e0e057) && ((*(int * PTR32 *)&gen_args[0])[1] == 0x10c0c010)) {
    uVar3 = F_00da1040((*(int * PTR32 *)&gen_args[0]) + 4,&REFG(undefined4, 0x135491c),4);
    if (uVar3 == 0) {
      uVar3 = F_00e05450();
      uVar3 = F_00da0d20(piVar2 + 10,uVar3);
      if (uVar3 == 0) {
        uVar3 = F_00dea990(&(*(undefined4 *)&gen_args[3]) GEN_EDX_ARG);
        pcVar4 = (char *)F_00dea8e0((int)&(*(int * PTR32 *)&gen_args[0]) + 3,piVar2,uVar3);
        if (*pcVar4 != '\0') {
          uVar3 = F_00e04c50(piVar2,(*(undefined4 *)&gen_args[1]),0);
          return uVar3;
        }
      }
    }
  }
  uVar3 = F_01059e00(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,piVar2,(*(undefined4 *)&gen_args[1]));
  uVar3 = F_00deb6b0(*(undefined4 *)(uVar3 + 8),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
  F_01059700(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00debb10 */
GEN_LIB GEN_FRAME uint F_00debb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdebb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int * piVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) {
    if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
      return 0;
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 1;
    F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,"Stream pointer is null");
    return 0;
  }
  pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0xbb)))));
  if (*pcVar2 == '\0') {
    if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
      return 0;
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 1;
    F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,"Stream is not ok");
    return 0;
  }
  uVar3 = F_00dea990(&(*(uint *)&gen_args[2]) GEN_EDX_ARG);
  uVar4 = F_00dea9b0(&(*(uint *)&gen_args[2]) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0xa4)) = uVar4;
  F_00d91340(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
  F_00deb100((*(int * PTR32 *)&gen_args[0]),((undefined4 *)(gen_frame + 0xa8)));
  switch((unsigned int)(uintptr_t)(((undefined4 *)(gen_frame + 0xa8))[0])) {
  case 2: ;
    pcVar2 = (char *)F_00dec240(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0xbb)),&REFG(undefined4, 0x135491c));
    if ((*pcVar2 != '\0') && (uVar5 = F_00dec1f0(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,"hk_2011.3.1-r1"), uVar5 != 0)) {
      uVar3 = F_00deafa0(uVar3,(*(int * PTR32 *)&gen_args[0]),((undefined4 *)(gen_frame + 0xa8)),(*(undefined4 * PTR32 *)&gen_args[1]),uVar4,(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
      F_00d91510(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
      return uVar3;
    }
    if (((*(uint *)&gen_args[2]) & 1) == 0) goto switchD_00debbbe_caseD_3;
    if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) goto LAB_00debd86;
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 4;
    pcVar2 = "Packfile required versioning but versioning not supported in this context.";
    break;
  case 3: ;
switchD_00debbbe_caseD_3: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0x18))))(REFG(int * PTR32, 0x15e3754) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),((undefined4 *)(gen_frame + 0xa8)),(*(undefined4 * PTR32 *)&gen_args[1]));
    F_00d91510(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
    return uVar3;
  case 4: ;
    F_00e0ec50(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar4 = F_00deb530(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[0]),uVar3);
    if (uVar4 != 0) {
LAB_00debce9: ;
      F_00e0ed30(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      F_00d91510(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
      return 0;
    }
    uVar6 = 1;
    uVar4 = (*(uint *)(gen_frame + 0xa4));
    uVar5 = F_00e0d5f0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0xa0)));
    uVar3 = F_00e063f0(uVar5,uVar3,uVar4,uVar6);
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xa0)) != (undefined4 *)0x0) {
      *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa0)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa0)) + 6) - 1;
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0xa0)))((*(undefined4 * PTR32 *)(gen_frame + 0xa0)) GEN_EDX_ARG,1);
      }
    }
    goto LAB_00debccd;
  case 5: ;
    F_00e0ec50(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar4 = F_00deb5f0((*(int * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)&gen_args[1]),uVar3);
    if (uVar4 != 0) goto LAB_00debce9;
    uVar6 = 1;
    uVar4 = (*(uint *)(gen_frame + 0xa4));
    uVar5 = F_00e0d5f0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x9c)));
    uVar3 = F_00e063f0(uVar5,uVar3,uVar4,uVar6);
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x9c)) != (undefined4 *)0x0) {
      *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 6) - 1;
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x9c)))((*(undefined4 * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,1);
      }
    }
LAB_00debccd: ;
    F_00e0ed30(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_00d91510(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
    return uVar3;
  default: ;
    if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) goto LAB_00debd86;
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
    pcVar2 = "Unable to detect format from stream";
  }
  F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,pcVar2);
LAB_00debd86: ;
  F_00d91510(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00debdb0 */
GEN_LIB GEN_FRAME uint F_00debdb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdebdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_01059c30(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_00debb10(*(undefined4 *)(uVar1 + 8),param_2,param_3,param_4,param_5);
  F_01059700(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00debe00 */
GEN_LIB GEN_FRAME uint F_00debe00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdebe00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_01059e00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,param_2);
  uVar1 = F_00debb10(*(undefined4 *)(uVar1 + 8),param_3,param_4,param_5,param_6);
  F_01059700(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00debe50 */
GEN_LIB GEN_FRAME uint F_00debe50(unsigned int gen_a0)
{
  GEN_ENTER(0xdebe50u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  char * pcVar2;
  int * piVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) {
    return 0;
  }
  pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[0]) + 3)));
  if (*pcVar2 == '\0') {
    return 0;
  }
  piVar3 = (int *)F_00e17100(&(*(int * PTR32 *)&gen_args[0]),piVar1);
  if (1 < *piVar3) {
    return 1;
  }
  F_00d91340(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00deb100(piVar1,((int *)(gen_frame + 0xc)));
  if ((((int *)(gen_frame + 0xc))[0] == 2) && (uVar4 = F_00da1040(((undefined1 *)(gen_frame + 0x18)),&REFG(undefined4, 0x135491c),4), uVar4 == 0)) {
    uVar4 = F_00e05450();
    uVar4 = F_00dec1f0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
    if (uVar4 != 0) goto LAB_00debece;
  }
  else if (((int *)(gen_frame + 0xc))[0] != 3) goto LAB_00debefb;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0x10))))(REFG(int * PTR32, 0x15e3754) GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
  if (uVar4 != 0) {
LAB_00debece: ;
    F_00d91510(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    return 1;
  }
LAB_00debefb: ;
  F_00d91510(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00debf10 */
GEN_LIB GEN_FRAME uint F_00debf10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdebf10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91340(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00deb100(param_2,((undefined4 *)(gen_frame + 0xc)));
  *param_1 = ((undefined4 *)(gen_frame + 0xc))[0];
  F_00d91510(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00debf60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdebf60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00debf80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdebf80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00debfa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debfa0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdebfa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3990(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00debfb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debfb0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdebfb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00debfc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdebfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00debfd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debfd0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdebfd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00debff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debff0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdebff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00dec000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdec000u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00dec010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdec010u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00dec020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdec020u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00dec030 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dec030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdec030u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)(*(undefined * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1])) == (*(uint *)&gen_args[1]);
}

/* ref: FUN_00dec050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec050(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00dec060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec060(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdec060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *(bool *)param_2 = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00dec090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdec090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dbddc0(this GEN_EDX_FWD,param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00dec0c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00dec0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdec0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dec110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec110(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dec140 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00dec140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdec140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dec170 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dec170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    if (this_00 != param_1) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    *(undefined * PTR32 *)this = param_1;
    return;
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00dec1c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dec1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((*(uint *)this & 0xfffffffe) == 0) {
    return (uint)(param_1 == 0);
  }
  if (param_1 != 0) {
    uVar1 = F_00da0d20(*(uint *)this & 0xfffffffe,param_1);
    return (uint)(uVar1 == 0);
  }
  return 0;
}

/* ref: FUN_00dec240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  if ((((*(char *)this == *param_2) && (*(char *)((int)this + 1) == param_2[1])) &&
      (*(char *)((int)this + 2) == param_2[2])) && (*(char *)((int)this + 3) == param_2[3])) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00dec290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114ba00));
  F_00da3de0((undefined *)((int)this + 8) GEN_EDX_FWD,local_8);
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: FUN_00dec2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dec2f0 */
GEN_LIB GEN_FRAME uint F_00dec2f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdec2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkTypeInfoRegistry::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this + 8 GEN_EDX_FWD,*param_1,param_1);
  return uVar1;
}

/* ref: hkTypeInfoRegistry::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  this_00 = (undefined *)F_00da4190(this + 8 GEN_EDX_FWD,param_2,0);
  if (this_00 != (undefined *)0x0) {
    F_00dc25d0(this_00 GEN_EDX_ARG,param_1,*(undefined4 *)(this + 0x18));
    return (uint)this_00;
  }
  return 0;
}

/* ref: hkTypeInfoRegistry::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  this_00 = (undefined *)F_00da4190(this + 8 GEN_EDX_FWD,param_2,0);
  if (this_00 != (undefined *)0x0) {
    F_00dc2610(this_00 GEN_EDX_ARG,param_1);
  }
  return (uint)this_00;
}

/* ref: hkTypeInfoRegistry::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdec3b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = (undefined *)((*(int *)&gen_args[1]) + 8);
  uVar1 = F_00da3970(this_00 GEN_EDX_FWD);
  uVar2 = F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(int *)&gen_args[1]) + 3,uVar1);
  if ((*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) != '\0') {
    do {
      uVar2 = F_00da39b0(this_00 GEN_EDX_ARG,uVar1);
      uVar3 = F_00da3990(this_00 GEN_EDX_ARG,uVar1);
      F_00da3a20((*(undefined * PTR32 *)&gen_args[0]) + 8 GEN_EDX_ARG,uVar3,uVar2);
      uVar1 = F_00da39f0(this_00 GEN_EDX_ARG,uVar1);
      uVar2 = F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(int *)&gen_args[1]) + 3,uVar1);
    } while ((*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) != '\0');
  }
  return uVar2;
}

/* ref: hkTypeInfoRegistry::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da4190(this + 8 GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: hkTypeInfoRegistry::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  F_00da3e20(this + 8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dec490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  uVar1 = F_00d91520((undefined *)((int)this + 4) GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00dec4b0 */
GEN_LIB GEN_FRAME uint F_00dec4b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdec4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dec4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbddc0((undefined *)((int)this + 0x18) GEN_EDX_FWD,param_1,param_2,0xffffffff,0);
  return uVar1;
}

/* ref: FUN_00dec510 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00dec510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdec510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: FUN_00dec550 */
GEN_LIB GEN_FRAME uint F_00dec550(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdec550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkXmlTagfileReader::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dec5c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dec600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdec600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x114ba38));
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  return (uint)this;
}

/* ref: FUN_00dec640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *param_1;
  *(int *)this = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return (uint)this;
}

/* ref: FUN_00dec660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  piVar1 = *(int * PTR32 *)this;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (piVar1 == (int *)0x0) {
    puVar3 = &(*(undefined4 *)(gen_frame + 0x14));
  }
  else {
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0xc)))));
  }
  uVar2 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00dec6a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdec6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = F_00df6340(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_FWD,param_2,param_3);
    *param_1 = uVar1;
    if (uVar1 != 0) {
      *(short *)(uVar1 + 6) = *(short *)(uVar1 + 6) + 1;
      *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1;
    }
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00dec6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) != 0) {
    piVar3 = (int *)*param_2;
    if (piVar3 != (int *)0x0) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x10))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,uVar4);
      piVar3 = (int *)*param_2;
      ((int *)(gen_frame + 0xc))[0] = 0;
      ((int *)(gen_frame + 0xc))[1] = 0;
      if (piVar3 == (int *)0x0) {
        piVar3 = ((int *)(gen_frame + 0xc));
      }
      else {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
      }
      iVar1 = *piVar3;
      uVar2 = piVar3[1];
      (*(int *)(gen_frame + 0x18)) = iVar1;
      if (uVar2 != 0) {
        uVar4 = uVar2;
      }
      ((int *)(gen_frame + 0xc))[2] = uVar4;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)),((int *)(gen_frame + 0xc)) + 2)
      ;
      if (((*(int *)(gen_frame + 0x18)) != iVar1) || (((int *)(gen_frame + 0xc))[2] != uVar4)) {
        if ((*(int *)(gen_frame + 0x18)) == 0) {
          *param_1 = 0;
        }
        else {
          uVar4 = F_00df6340(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),((int *)(gen_frame + 0xc))[2]);
          *param_1 = uVar4;
          if (uVar4 != 0) {
            *(short *)(uVar4 + 6) = *(short *)(uVar4 + 6) + 1;
            *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
            return (uint)param_1;
          }
        }
        return (uint)param_1;
      }
    }
  }
  uVar4 = *param_2;
  *param_1 = uVar4;
  if (uVar4 != 0) {
    *(short *)(uVar4 + 6) = *(short *)(uVar4 + 6) + 1;
    *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00dec800 */
GEN_LIB GEN_FRAME uint F_00dec800(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdec800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dec860 */
GEN_LIB GEN_FRAME uint F_00dec860(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdec860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkXmlTagfileWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkBinaryTagfileWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dec960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dec990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_2;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2;
}

/* ref: FUN_00deca00 */
GEN_LIB GEN_FRAME uint F_00deca00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdeca00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00deca40 */
GEN_LIB GEN_FRAME uint F_00deca40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdeca40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00decaa0 */
GEN_LIB GEN_FRAME uint F_00decaa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdecaa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00decad0 */
GEN_LIB GEN_FRAME uint F_00decad0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdecad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00decb00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdecb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00decb40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdecb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00decb80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdecb80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00decbc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdecbc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,param_1,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00decbf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdecbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2;
}

/* ref: FUN_00decc40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdecc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00 GEN_EDX_ARG,uVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00deccf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00deccf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdeccf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00decd30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00decd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdecd30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00decd70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00decd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdecd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00decdb0 */
GEN_LIB GEN_FRAME uint F_00decdb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00decdc0 */
GEN_LIB GEN_FRAME uint F_00decdc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00decdd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decdd0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecdd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 4 GEN_EDX_ARG,param_2);
  return in_ecx;
}

/* ref: FUN_00dece00 */
GEN_LIB GEN_FRAME uint F_00dece00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdece00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dece50 */
GEN_LIB GEN_FRAME unsigned int F_00dece50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdece50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00dece90 */
GEN_LIB GEN_FRAME unsigned int F_00dece90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdece90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00e17fb0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00deceb0 */
GEN_LIB GEN_FRAME uint F_00deceb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdeceb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00decec0 */
GEN_LIB GEN_NOFRAME uint F_00decec0(void)
{
  GEN_ENTER(0xdecec0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00e17fb0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00decf00 */
GEN_LIB GEN_FRAME unsigned int F_00decf00(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != (undefined *)0x0) {
    F_00e18210(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00decf20 */
GEN_LIB GEN_FRAME uint F_00decf20(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdecf20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00decf30 */
GEN_LIB GEN_NOFRAME uint F_00decf30(void)
{
  GEN_ENTER(0xdecf30u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00e18210(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00decf60 */
GEN_LIB GEN_FRAME uint F_00decf60(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdecf60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00d91510((undefined *)((int)param_1 + 4) GEN_EDX_ARG);
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00decf80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00decf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdecf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_FWD);
  uVar1 = F_00d91510(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00decfa0 */
GEN_LIB GEN_FRAME unsigned int F_00decfa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdecfa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00decfd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdecfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_FWD);
  F_00d91510(this GEN_EDX_ARG);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,8);
  }
  return (uint)this;
}

/* ref: FUN_00ded010 */
GEN_LIB GEN_FRAME uint F_00ded010(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ded020 */
GEN_LIB GEN_FRAME uint F_00ded020(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ded040 */
GEN_LIB GEN_FRAME unsigned int F_00ded040(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00dea2b0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ded070 */
GEN_LIB GEN_FRAME unsigned int F_00ded070(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00dea2e0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ded090 */
GEN_LIB GEN_FRAME uint F_00ded090(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xded090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)param_1 + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)param_1 + 8) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)param_1 + 8) = 0;
  F_00d91510((undefined *)((int)param_1 + 4) GEN_EDX_ARG);
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ded0c0 */
GEN_LIB GEN_FRAME uint F_00ded0c0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xded0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ded180(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ded0d0 */
GEN_LIB GEN_FRAME unsigned int F_00ded0d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xded0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00ded180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xded180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar4) {
    puVar3 = (undefined4 *)(*(int *)this + 8 + iVar4 * 0xc);
    do {
      if ((undefined *)*puVar3 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar3 GEN_EDX_FWD);
      }
      *puVar3 = 0;
      F_00d91510(puVar3 - 1 GEN_EDX_ARG);
      F_00d91510(puVar3 - 2 GEN_EDX_ARG);
      puVar3 = puVar3 - 3;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00ded240 */
GEN_LIB GEN_NOFRAME unsigned int F_00ded240(void)
{
  GEN_ENTER(0xded240u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ded260 */
GEN_LIB GEN_NOFRAME unsigned int F_00ded260(void)
{
  GEN_ENTER(0xded260u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkDataWorldDict::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ded2a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xded2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x10;
}

/* ref: FUN_00ded2f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ded2f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ded310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xded310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ded2f0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ded330 */
GEN_LIB GEN_FRAME uint F_00ded330(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xded330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  if (param_1[2] == -1) {
    if (((*param_1 != 0) || (param_1[3] == -1)) || (param_1[1] == 0)) {
      return 0;
    }
  }
  else if (param_1[3] == -1) {
    if (*param_1 == 0) {
      return 0;
    }
    if (param_1[1] != 0) {
      return 0;
    }
  }
  else if (*param_1 == 0) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ded380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xded380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this_00;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x114c26c));
  *(undefined4 *)((int)this + 8) = 0;
  this_00 = param_1;
  if (param_1 == (undefined *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD)));
    if (this_00 == (undefined *)0x0) goto LAB_00ded3be;
  }
  F_00d919e0(this_00 GEN_EDX_ARG);
LAB_00ded3be: ;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)((int)this + 8) = this_00;
  return (uint)this;
}

/* ref: hkDefaultClassWrapper::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xded3e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * this_00;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[2]);
  this_00 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x24))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[2]));
  if (uVar2 == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,uVar1);
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x18))(this_00 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]))));
      if (*piVar3 == 1) {
        uVar2 = F_00e0e830(this_00 GEN_EDX_ARG,uVar2);
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00ded440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xded440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + param_2 * 4)));
}

/* ref: FUN_00ded450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xded450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00da4190((undefined *)((int)this + 0x1c) GEN_EDX_FWD,param_1,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_1);
      F_00da3a20((undefined *)((int)this + 0x1c) GEN_EDX_ARG,uVar1,uVar1);
    }
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00ded4a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xded4a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ded440(*(undefined4 *)((int)this + 8) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ded4c0 */
GEN_LIB GEN_FRAME ulonglong GEN_THISCALL F_00ded4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xded4c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ded450(this GEN_EDX_FWD,param_1);
  uVar2 = F_00da3e60(this GEN_EDX_ARG,uVar1,*(undefined4 *)((int)this + 0x14));
  if (uVar2 == *(uint *)((int)this + 0x14)) {
    if (*(uint *)((int)this + 0x14) == (*(uint *)((int)this + 0x18) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x10),4);
    }
    *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + *(int *)((int)this + 0x14) * 4))) = uVar1;
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  }
  return CONCAT44(param_2,uVar2);
}

/* ref: FUN_00ded530 */
GEN_LIB GEN_FRAME ulonglong GEN_THISCALL F_00ded530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xded530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ulonglong uVar1;
  
  uVar1 = F_00ded4c0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ded540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xded540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = F_00dbddc0((undefined *)((int)this + 0x18) GEN_EDX_FWD,param_1,param_2,0xffffffff,0);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4)));
    if ((puVar1[3] == -1) ||
       (((param_3 == 0 && (puVar1[1] != 0)) && (uVar3 = F_00da0d20(*puVar1,puVar1[1]), uVar3 != 0)
        ))) break;
    uVar4 = F_00ded4c0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,puVar1[1],puVar1[3]);
    uVar2 = F_00dbddc0((undefined *)((int)this + 0x18) GEN_EDX_ARG,(int)uVar4,(int)(uVar4 >> 0x20),0xffffffff,0);
  }
  return uVar2;
}

/* ref: FUN_00ded5d0 */
GEN_LIB GEN_FRAME uint F_00ded5d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xded5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd930(param_4 GEN_EDX_ARG,param_2);
  if (*(int *)((int)param_4 + 8) < (int)uVar2) {
    F_00dbd8b0(param_4 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_2,0);
    for (uVar2 = F_00df03e0(param_3 GEN_EDX_ARG,param_2); uVar2 != 0xffffffff;
        uVar2 = *(uint *)(*param_3 + 4 + uVar2 * 8)) {
      iVar1 = *(int *)(*param_3 + uVar2 * 8);
      if ((param_1 == iVar1) || (uVar3 = F_00ded5d0(param_1,iVar1,param_3,param_4), uVar3 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ded650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xded650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ded330(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0xc),4);
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) * 4))) = param_1;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    uVar2 = F_00dbdfc0((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00ded6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xded6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  LPVOID pvVar4;
  
  this_00 = (undefined *)((int)this + 0x1c);
  uVar2 = F_00da3970(this_00 GEN_EDX_FWD);
  F_00da3e40(this_00 GEN_EDX_ARG,&(*(char *)(gen_frame + 0xb)),uVar2);
  while ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar3 = F_00da39b0(this_00 GEN_EDX_ARG,uVar2);
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    F_00d924b0(*(undefined4 *)((int)pvVar4 + 0x2c),uVar3);
    uVar2 = F_00da39f0(this_00 GEN_EDX_ARG,uVar2);
    F_00da3e40(this_00 GEN_EDX_ARG,&(*(char *)(gen_frame + 0xb)),uVar2);
  }
  F_00da3e20(this_00 GEN_EDX_ARG);
  iVar1 = *(int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar2 = F_00da3e20(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00ded770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ded770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xded770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  LPVOID pvVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114c280));
  if (this_00 != (undefined *)0x0) {
    F_00ded6b0(this_00 GEN_EDX_FWD);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this_00,0x2c);
  }
  F_00dbdff0((undefined *)((int)this + 0x18) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd6b0();
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00ded800 */
GEN_LIB GEN_FRAME uint F_00ded800(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  code * pcVar2;
  code * pcVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined * this;
  int iVar6;
  int * piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(int *)(gen_frame + 0x50)) = 0;
  if (0 < param_2[1]) {
    do {
      piVar7 = *(int * PTR32 *)(*param_2 + (*(int *)(gen_frame + 0x50)) * 4);
      (*(int * PTR32 *)(gen_frame + 0x40)) = piVar7;
      if (*piVar7 == 0) {
        (*(int *)(gen_frame + 0x54)) = piVar7[1];
      }
      else {
        (*(int *)(gen_frame + 0x54)) = *piVar7;
      }
      if (piVar7[2] == -1) {
        (*(int *)(gen_frame + 0xc)) = piVar7[3];
        iVar6 = *in_esi;
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x54));
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = 0x80000000;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        uVar5 = ((code *)*(gen_code32 *)(iVar6 + 0x24))(in_esi,(*(int *)(gen_frame + 0x54)));
        if (uVar5 != 0) {
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0x1c))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x14)),((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) * 0xc);
          }
          return 1;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0xc))(in_esi GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)));
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        if (-1 < (int)(*(uint *)(gen_frame + 0x1c))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x14)),((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) * 0xc);
        }
      }
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x24))(in_esi GEN_EDX_ARG,(*(int *)(gen_frame + 0x54)));
      (*(uint *)(gen_frame + 0x58)) = uVar5;
      if (((*piVar7 != 0) && (piVar7[1] != 0)) &&
         (uVar5 = F_00da0d20(*piVar7,piVar7[1]), uVar5 != 0)) {
        ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x30))(in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x58)),piVar7[1]);
        (*(int *)(gen_frame + 0x54)) = piVar7[1];
      }
      (*(int *)(gen_frame + 0x44)) = 0;
      if (0 < piVar7[5]) {
        do {
          iVar8 = 0;
          iVar6 = piVar7[4] + (*(int *)(gen_frame + 0x44)) * 8;
          switch((unsigned int)(uintptr_t)(*(undefined4 *)(piVar7[4] + (*(int *)(gen_frame + 0x44)) * 8))) {
          case 1: ;
            puVar4 = *(undefined4 * PTR32 *)(iVar6 + 4);
            uVar11 = puVar4[3];
            uVar10 = puVar4[2];
            uVar9 = puVar4[1];
            this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x2c))(in_esi GEN_EDX_ARG)));
            uVar5 = F_00e1aa20(this GEN_EDX_ARG,uVar9,uVar10,uVar11);
            ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x40))(in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x58)),*puVar4,uVar5,puVar4[4]);
            break;
          case 2: ;
            ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x4c))(in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x58)),**(undefined4 * PTR32 *)(iVar6 + 4));
            break;
          case 3: ;
            ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x48))
                      (in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x58)),**(undefined4 * PTR32 *)(iVar6 + 4),(*(undefined4 * PTR32 *)(iVar6 + 4))[1]
                      );
            break;
          case 4: ;
            ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x44))
                      (in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x58)),**(undefined4 * PTR32 *)(iVar6 + 4),(*(undefined4 * PTR32 *)(iVar6 + 4))[1]
                      );
            break;
          case 5: ;
            pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)(iVar6 + 4) + 4)));
            pcVar2 = *(gen_code32 *)(*in_esi + 0x50);
            (*(int *)(gen_frame + 0x2c)) = 0;
            (*(int *)(gen_frame + 0x30)) = 0;
            (*(int *)(gen_frame + 0x34)) = ((int)0x80000000);
            (*pcVar2)(in_esi,(*(int *)(gen_frame + 0x54)),&(*(int *)(gen_frame + 0x2c)));
            if (0 < (*(int *)(gen_frame + 0x30))) {
              iVar6 = 0;
              do {
                puVar4 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x2c)) + iVar6 * 4);
                (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = puVar4;
                if (puVar4 != (undefined4 *)0x0) {
                  *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + 1;
                  puVar4[2] = puVar4[2] + 1;
                }
                (*pcVar3)(&(*(undefined4 * PTR32 *)(gen_frame + 0x4c)));
                if ((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) != (undefined4 *)0x0) {
                  *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 6) - 1;
                  piVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 2;
                  *piVar7 = *piVar7 - 1;
                  if (*piVar7 == 0) {
                    ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x4c)))((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,1);
                  }
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < (*(int *)(gen_frame + 0x30)));
            }
            (*(int *)(gen_frame + 0x30)) = 0;
            if (-1 < (*(int *)(gen_frame + 0x34))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x2c)),(*(int *)(gen_frame + 0x34)) * 4);
            }
            (*(int *)(gen_frame + 0x2c)) = 0;
            (*(int *)(gen_frame + 0x34)) = 0x80000000;
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x40));
            break;
          case 6: ;
            uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x24))(in_esi GEN_EDX_ARG,**(undefined4 * PTR32 *)(iVar6 + 4));
            (*(uint *)(gen_frame + 0x38)) = uVar5;
            pcVar3 = *(gen_code32 *)(*in_esi + 0x54);
            (*(int *)(gen_frame + 0x20)) = 0;
            (*(int *)(gen_frame + 0x24)) = 0;
            (*(int *)(gen_frame + 0x28)) = ((int)0x80000000);
            (*pcVar3)(in_esi,(*(int *)(gen_frame + 0x54)),&(*(int *)(gen_frame + 0x20)));
            if (0 < (*(int *)(gen_frame + 0x24))) {
              do {
                puVar4 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x20)) + iVar8 * 4);
                (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = puVar4;
                if (puVar4 != (undefined4 *)0x0) {
                  *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + 1;
                  puVar4[2] = puVar4[2] + 1;
                }
                ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x58))(in_esi GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x48)),&(*(uint *)(gen_frame + 0x38)));
                if ((*(undefined4 * PTR32 *)(gen_frame + 0x48)) != (undefined4 *)0x0) {
                  *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x48)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x48)) + 6) - 1;
                  piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x48)) + 2;
                  *piVar1 = *piVar1 - 1;
                  if (*piVar1 == 0) {
                    ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x48)))((*(undefined4 * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,1);
                  }
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < (*(int *)(gen_frame + 0x24)));
            }
            (*(int *)(gen_frame + 0x24)) = 0;
            if (-1 < (*(int *)(gen_frame + 0x28))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x20)),(*(int *)(gen_frame + 0x28)) * 4);
            }
            (*(int *)(gen_frame + 0x20)) = 0;
            (*(int *)(gen_frame + 0x28)) = 0x80000000;
            break;
          case 8: ;
            iVar6 = *((int *)GEN_TOP((*(int *)(iVar6 + 4) + 4)));
            if (iVar6 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x24))(in_esi GEN_EDX_ARG,iVar6);
            }
            pcVar3 = *(gen_code32 *)(*in_esi + 0x3c);
            (*(uint *)(gen_frame + 0x3c)) = uVar5;
            (*pcVar3)(in_esi,&(*(uint *)(gen_frame + 0x58)),&(*(uint *)(gen_frame + 0x3c)));
          }
          iVar6 = (*(int *)(gen_frame + 0x44)) + 1;
          (*(int *)(gen_frame + 0x44)) = iVar6;
        } while (iVar6 < piVar7[5]);
      }
      iVar6 = piVar7[3];
      if (iVar6 == -1) {
        ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x34))(in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x58)));
      }
      else if ((piVar7[2] != -1) && (piVar7[2] != iVar6)) {
        ((GEN_TCODE *)*(gen_code32 *)(*in_esi + 0x38))(in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x58)),iVar6);
      }
      iVar6 = (*(int *)(gen_frame + 0x50)) + 1;
      (*(int *)(gen_frame + 0x50)) = iVar6;
    } while (iVar6 < param_2[1]);
  }
  return 0;
}

/* ref: FUN_00dedc00 */
GEN_LIB GEN_FRAME uint F_00dedc00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdedc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(*param_2 + param_1 * 4) == -1) {
    *(undefined4 *)(*param_2 + param_1 * 4) = 0xfffffffe;
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_5,4);
    }
    *(int *)(*param_5 + param_5[1] * 4) = param_1;
    param_5[1] = param_5[1] + 1;
    for (uVar3 = F_00df03e0(param_3 GEN_EDX_ARG,param_1); uVar3 != 0xffffffff;
        uVar3 = *(uint *)(*param_3 + 4 + uVar3 * 8)) {
      iVar1 = *(int *)(*param_3 + uVar3 * 8);
      iVar2 = *(int *)(*param_2 + iVar1 * 4);
      if (iVar2 == -2) {
        if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_5,4);
        }
        *(int *)(*param_5 + param_5[1] * 4) = iVar1;
        param_5[1] = param_5[1];
      }
      else if (iVar2 == -1) {
        param_4 = F_00dedc00(iVar1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    param_5[1] = param_5[1] - 1;
    *(uint *)(*param_2 + param_1 * 4) = param_4;
    return param_4 + 1;
  }
  return param_4;
}

/* ref: FUN_00dedcf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dedcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdedcf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPVOID pvVar1;
  undefined * this_00;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114c280));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x2c)));
  if (this_00 != (undefined *)0x0) {
    local_8 = ((uint)((int)(uintptr_t)this) >> 8) << 8;
    F_00da3de0(this_00 GEN_EDX_ARG,local_8);
    local_8 = ((uint)((int)(uintptr_t)this) >> 8) << 8;
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    *(undefined4 *)((int)this_00 + 0x14) = 0;
    *(undefined4 *)((int)this_00 + 0x18) = 0x80000000;
    F_00da3de0((undefined *)((int)this_00 + 0x1c) GEN_EDX_ARG,local_8);
    *(undefined * PTR32 *)((int)this + 8) = this_00;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00dedd90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dedd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdedd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  int local_8;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00dbdfc0((undefined *)((int)this + 0x18) GEN_EDX_FWD);
  pvVar2 = *(undefined * PTR32 *)((int)this + 8);
  if (pvVar2 != (undefined *)0x0) {
    F_00ded6b0(pvVar2 GEN_EDX_ARG);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,pvVar2,0x2c);
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x2c)));
  if (pvVar2 != (undefined *)0x0) {
    local_8 = ((uint)((int)(uintptr_t)this) >> 8) << 8;
    F_00da3de0(pvVar2 GEN_EDX_ARG,local_8);
    local_8 = ((uint)((int)(uintptr_t)this) >> 8) << 8;
    *(undefined4 *)((int)pvVar2 + 0x10) = 0;
    *(undefined4 *)((int)pvVar2 + 0x14) = 0;
    *(undefined4 *)((int)pvVar2 + 0x18) = 0x80000000;
    uVar3 = F_00da3de0((undefined *)((int)pvVar2 + 0x1c) GEN_EDX_ARG,local_8);
    *(undefined * PTR32 *)((int)this + 8) = pvVar2;
    return uVar3;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00dede30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dede30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdede30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  uint * puVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined4 uVar6;
  int * piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined * pvVar13;
  undefined4 * puVar14;
  ulonglong uVar15;
  
  pvVar13 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0xd8)) = this;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(int *)(gen_frame + 0xa4)) = -1;
  (*(int *)(gen_frame + 0xa8)) = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(uint *)(gen_frame + 0xb0)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xbc)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0xffffffff;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar13;
  (*(int *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(uint *)(gen_frame + 0x88)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x8c)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x98)) = 0xffffffff;
  F_00dbdfc0((undefined *)((int)this + 0x18) GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0xd4)) = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      pvVar13 = (*(undefined * PTR32 *)(gen_frame + 0xd8));
      piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 0xc) + (*(uint *)(gen_frame + 0xd4)) * 4)));
      uVar5 = F_00ded330(piVar7);
      if (uVar5 == 0) {
        F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x8c)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
        (*(undefined4 *)(gen_frame + 0x84)) = 0;
        if (((*(uint *)(gen_frame + 0x88)) & 0x80000000) != 0) goto LAB_00dee0f1;
        goto LAB_00dee0e1;
      }
      if (piVar7[2] == -1) {
        uVar15 = F_00ded4c0(*(undefined * PTR32 *)((int)pvVar13 + 8) GEN_EDX_ARG,piVar7[1],piVar7[3]);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        uVar5 = F_00dbdd70(&(*(undefined4 *)(gen_frame + 0x9c)) GEN_EDX_ARG,(int)uVar15,uVar6);
        if ((int)uVar5 <= (*(int *)(gen_frame + 0xa4))) goto LAB_00dee15d;
        F_00dbdcd0(&(*(undefined4 *)(gen_frame + 0x9c)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(int)uVar15,uVar6,(*(uint *)(gen_frame + 0xd4)),0);
      }
      else {
        uVar15 = F_00ded4c0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 8) GEN_EDX_ARG,*piVar7,piVar7[2]);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        uVar5 = F_00dbdd70((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 0x18) GEN_EDX_ARG,(int)uVar15,uVar6);
        if ((int)uVar5 <= *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 0x20)) {
LAB_00dee15d: ;
          F_00df14a0(&(*(int *)(gen_frame + 0x80)) GEN_EDX_ARG);
          F_00df1440(&(*(int *)(gen_frame + 0xa8)) GEN_EDX_ARG);
          goto LAB_00dee13c;
        }
        F_00dbdcd0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 0x18) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(int)uVar15,uVar6,(*(uint *)(gen_frame + 0xd4)),0
                    );
        if ((piVar7[3] == -1) ||
           ((piVar7[1] != 0 && (uVar5 = F_00da0d20(*piVar7,piVar7[1]), uVar5 != 0)))) {
          F_00df12c0(&(*(int *)(gen_frame + 0x80)) GEN_EDX_ARG,*piVar7,&(*(uint *)(gen_frame + 0xd4)));
        }
      }
      if (piVar7[3] != -1) {
        iVar11 = piVar7[1];
        if (iVar11 == 0) {
          iVar11 = *piVar7;
        }
        uVar15 = F_00ded4c0((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,iVar11,piVar7[3]);
        F_00df1220(&(*(int *)(gen_frame + 0xa8)) GEN_EDX_ARG,(int)uVar15,(int)(uVar15 >> 0x20),&(*(uint *)(gen_frame + 0xd4)));
      }
      uVar5 = (*(uint *)(gen_frame + 0xd4)) + 1;
      (*(uint *)(gen_frame + 0xd4)) = uVar5;
      this = (*(undefined * PTR32 *)(gen_frame + 0xd8));
    } while ((int)uVar5 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 0x10));
  }
  uVar5 = (*(uint *)(gen_frame + 0x30));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x30)) = uVar5 & 0xffffff00;
  F_00da3de0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x30)));
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(uint *)(gen_frame + 0x40)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x50)) = 0xffffffff;
  (*(int *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(uint *)(gen_frame + 0x60)) = 0x80000000;
  (*(int *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(int *)(gen_frame + 0x6c)) = -1;
  (*(undefined4 *)(gen_frame + 0x70)) = 0xffffffff;
  (*(int *)(gen_frame + 0x34)) = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      puVar2 = *((uint * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 0xc) + (*(int *)(gen_frame + 0x34)) * 4)));
      uVar5 = puVar2[2];
      (*(uint *)(gen_frame + 0x30)) = *puVar2;
      if (uVar5 == 0xffffffff) {
        (*(uint *)(gen_frame + 0x30)) = puVar2[1];
        uVar5 = puVar2[3];
        if (((*(uint *)(gen_frame + 0x30)) == 0) || (uVar5 == 0xffffffff)) {
          F_00dbdb20(&(*(int *)(gen_frame + 0x64)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
          F_00dbd5e0();
          (*(undefined4 *)(gen_frame + 0x5c)) = 0;
          if (((*(uint *)(gen_frame + 0x60)) & 0x80000000) == 0) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x60)) * 8);
          }
          (*(int *)(gen_frame + 0x58)) = 0;
          (*(uint *)(gen_frame + 0x60)) = 0x80000000;
          F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x44)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
          F_00dbd5e0();
          (*(undefined4 *)(gen_frame + 0x3c)) = 0;
          if (((*(uint *)(gen_frame + 0x40)) & 0x80000000) != 0) goto LAB_00dee82a;
          goto LAB_00dee81a;
        }
      }
      uVar15 = F_00ded4c0((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x30)),uVar5);
      uVar12 = (undefined4)(uVar15 >> 0x20);
      uVar6 = (undefined4)uVar15;
      (*(ulonglong *)(gen_frame + 0x18)) = uVar15;
      if (puVar2[2] == 0xffffffff) {
        uVar5 = F_00dbddc0(&(*(undefined4 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar6,uVar12,0xffffffff,0);
        (*(uint *)(gen_frame + 0xd4)) = uVar5;
      }
      else {
        uVar5 = F_00dbddc0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 0x18) GEN_EDX_ARG,uVar6,uVar12,0xffffffff,0);
        (*(uint *)(gen_frame + 0xd4)) = uVar5;
        uVar5 = F_00defa30(&(*(int *)(gen_frame + 0xa8)) GEN_EDX_ARG,uVar6,uVar12);
        uVar8 = (*(uint *)(gen_frame + 0xd4));
        for (; uVar5 != 0xffffffff; uVar5 = *(uint *)((*(int *)(gen_frame + 0xa8)) + 4 + uVar5 * 8)) {
          (*(int * PTR32 *)(gen_frame + 0xd0)) = *(int * PTR32 *)((*(int *)(gen_frame + 0xa8)) + uVar5 * 8);
          F_00df1190(&(*(int *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar8,&(*(int * PTR32 *)(gen_frame + 0xd0)));
        }
      }
      uVar5 = puVar2[5];
      (*(int * PTR32 *)(gen_frame + 0xd0)) = (int *)0x0;
      if (0 < (int)uVar5) {
        do {
          if (*(int *)(puVar2[4] + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xd0))) * 8) == 7) {
            puVar14 = *(undefined4 * PTR32 *)(puVar2[4] + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xd0))) * 8 + 4);
            uVar15 = F_00ded4c0((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,*puVar14,puVar14[1]);
            uVar6 = (undefined4)(uVar15 >> 0x20);
            uVar5 = F_00dbddc0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 0x18) GEN_EDX_ARG,(int)uVar15,uVar6,0xffffffff,0);
            if (uVar5 != 0xffffffff) {
              F_00df1190(&(*(int *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar5,&(*(uint *)(gen_frame + 0xd4)));
            }
            uVar5 = F_00defa30(&(*(int *)(gen_frame + 0xa8)) GEN_EDX_ARG,(int)uVar15,uVar6);
            uVar8 = (*(uint *)(gen_frame + 0xd4));
            for (; uVar5 != 0xffffffff; uVar5 = *(uint *)((*(int *)(gen_frame + 0xa8)) + 4 + uVar5 * 8)) {
              (*(uint *)(gen_frame + 0x54)) = *(uint *)((*(int *)(gen_frame + 0xa8)) + uVar5 * 8);
              F_00df1190(&(*(int *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar8,&(*(uint *)(gen_frame + 0x54)));
            }
          }
          piVar7 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xd0)) + 1);
          (*(int * PTR32 *)(gen_frame + 0xd0)) = piVar7;
        } while ((int)piVar7 < (int)puVar2[5]);
      }
      uVar5 = (*(uint *)(gen_frame + 0x30));
      if (((puVar2[2] == 0xffffffff) &&
          (uVar8 = F_00df0400(&(*(int *)(gen_frame + 0x80)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x30))), uVar8 != 0xffffffff)) &&
         (uVar8 = F_00df0400(&(*(int *)(gen_frame + 0x80)) GEN_EDX_ARG,uVar5), uVar8 != 0xffffffff)) {
        uVar9 = F_00ded540((*(undefined * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,(undefined4)(*(ulonglong *)(gen_frame + 0x18)),(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)),0);
        if (uVar9 == 0xffffffff) {
          uVar10 = F_00da4190(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar5,0xffffffff);
          if (uVar10 != 0xffffffff) {
            F_00dbdb20(&(*(int *)(gen_frame + 0x64)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
            F_00dbd5e0();
            goto LAB_00dee895;
          }
          F_00da3a20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar5,(*(int *)(gen_frame + 0x34)));
          piVar7 = &(*(int *)(gen_frame + 0x38));
          iVar11 = (*(int *)(gen_frame + 0x80));
        }
        else {
          piVar7 = &(*(int *)(gen_frame + 0x58));
          iVar11 = (*(int *)(gen_frame + 0x80));
        }
        do {
          uVar5 = *(uint *)(iVar11 + uVar8 * 8);
          (*(uint *)(gen_frame + 0x54)) = uVar5;
          if (uVar9 != uVar5) {
            F_00df1190(piVar7 GEN_EDX_ARG,(*(uint *)(gen_frame + 0xd4)),&(*(uint *)(gen_frame + 0x54)));
            iVar11 = (*(int *)(gen_frame + 0x80));
          }
          uVar8 = *(uint *)(iVar11 + 4 + uVar8 * 8);
        } while (uVar8 != 0xffffffff);
      }
      iVar11 = (*(int *)(gen_frame + 0x34)) + 1;
      (*(int *)(gen_frame + 0x34)) = iVar11;
    } while (iVar11 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 0x10));
  }
  iVar11 = 0;
  if (-1 < (*(int *)(gen_frame + 0x6c))) {
    do {
      if (*(int *)((*(int *)(gen_frame + 0x64)) + iVar11 * 8) != -1) break;
      iVar11 = iVar11 + 1;
    } while (iVar11 <= (*(int *)(gen_frame + 0x6c)));
  }
  if (iVar11 <= (*(int *)(gen_frame + 0x6c))) {
    do {
      uVar6 = *(undefined4 *)((*(int *)(gen_frame + 0x64)) + iVar11 * 8);
      for (uVar5 = F_00df03e0(&(*(int *)(gen_frame + 0x58)) GEN_EDX_ARG,uVar6); uVar5 != 0xffffffff;
          uVar5 = *(uint *)((*(int *)(gen_frame + 0x58)) + 4 + uVar5 * 8)) {
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = 0;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = 0xffffffff;
        (*(ulonglong *)(gen_frame + 0x18)) = 0xffffffff00000000;
        uVar8 = *(uint *)((*(int *)(gen_frame + 0x58)) + uVar5 * 8);
        (*(uint *)(gen_frame + 0x54)) = uVar8;
        uVar8 = F_00ded5d0(uVar6,uVar8,&(*(int *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x14)));
        if (uVar8 == 0) {
          F_00df1190(&(*(int *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar6,&(*(uint *)(gen_frame + 0x54)));
        }
        F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
      }
      do {
        iVar11 = iVar11 + 1;
        if ((*(int *)(gen_frame + 0x6c)) < iVar11) break;
      } while (*(int *)((*(int *)(gen_frame + 0x64)) + iVar11 * 8) == -1);
    } while (iVar11 <= (*(int *)(gen_frame + 0x6c)));
  }
  pvVar13 = (*(undefined * PTR32 *)(gen_frame + 0xd8));
  (*(int *)(gen_frame + 0xc4)) = 0;
  (*(uint *)(gen_frame + 0xc8)) = 0;
  (*(uint *)(gen_frame + 0xcc)) = 0x80000000;
  (*(int * PTR32 *)(gen_frame + 0xd0)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 0xc);
  F_00def930(&(*(int *)(gen_frame + 0xc4)) GEN_EDX_ARG,(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd8)) + 0xc));
  uVar5 = (*(uint *)(gen_frame + 0xc8));
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x7c)) = 0x80000000;
  (*(int *)(gen_frame + 0x74)) = 0;
  (*(uint *)(gen_frame + 0x78)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0xc8))) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x74)),((int)(*(uint *)(gen_frame + 0xc8)) < 0) - 1 & (*(uint *)(gen_frame + 0xc8)),4);
    uVar8 = (*(uint *)(gen_frame + 0x78));
  }
  iVar11 = uVar5 - uVar8;
  puVar14 = (undefined4 *)((*(int *)(gen_frame + 0x74)) + uVar8 * 4);
  if (0 < iVar11) {
    for (; iVar11 != 0; iVar11 = iVar11 - 1) {
      *puVar14 = 0xffffffff;
      puVar14 = puVar14 + 1;
    }
  }
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x78)) = uVar5;
  iVar11 = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0x80000000;
  if (0 < (int)(*(uint *)(gen_frame + 0xc8))) {
    do {
      uVar8 = F_00dedc00(iVar11,&(*(int *)(gen_frame + 0x74)),&(*(int *)(gen_frame + 0x38)),uVar8,&(*(undefined4 *)(gen_frame + 0x24)),&(*(int *)(gen_frame + 0xc4)));
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(*(uint *)(gen_frame + 0xc8)));
  }
  piVar7 = (*(int * PTR32 *)(gen_frame + 0xd0));
  uVar5 = (*(uint *)(gen_frame + 0xc8));
  if ((int)((*(int * PTR32 *)(gen_frame + 0xd0))[2] & 0x3fffffffU) < (int)(*(uint *)(gen_frame + 0xc8))) {
    uVar8 = ((*(int * PTR32 *)(gen_frame + 0xd0))[2] & 0x3fffffffU) * 2;
    uVar9 = (*(uint *)(gen_frame + 0xc8));
    if ((int)(*(uint *)(gen_frame + 0xc8)) < (int)uVar8) {
      uVar9 = uVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)(gen_frame + 0xd0)),uVar9,4);
  }
  iVar11 = 0;
  piVar7[1] = uVar5;
  if (0 < (int)(*(uint *)(gen_frame + 0xc8))) {
    do {
      iVar3 = *(int *)((*(int *)(gen_frame + 0x74)) + iVar11 * 4);
      if (iVar3 < 0) {
        F_00def930(piVar7 GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc4)));
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        if (((*(uint *)(gen_frame + 0x2c)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x2c)) * 4);
        }
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(uint *)(gen_frame + 0x2c)) = 0x80000000;
        (*(uint *)(gen_frame + 0x78)) = 0;
        if (((*(uint *)(gen_frame + 0x7c)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x74)),(*(uint *)(gen_frame + 0x7c)) * 4);
        }
        (*(int *)(gen_frame + 0x74)) = 0;
        (*(uint *)(gen_frame + 0x7c)) = 0x80000000;
        (*(uint *)(gen_frame + 0xc8)) = 0;
        if (((*(uint *)(gen_frame + 0xcc)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc4)),(*(uint *)(gen_frame + 0xcc)) * 4);
        }
        (*(int *)(gen_frame + 0xc4)) = 0;
        (*(uint *)(gen_frame + 0xcc)) = 0x80000000;
        F_00dbdb20(&(*(int *)(gen_frame + 0x64)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
LAB_00dee895: ;
        (*(undefined4 *)(gen_frame + 0x5c)) = 0;
        if (((*(uint *)(gen_frame + 0x60)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x60)) * 8);
        }
        (*(int *)(gen_frame + 0x58)) = 0;
        (*(uint *)(gen_frame + 0x60)) = 0x80000000;
        F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x44)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
        (*(undefined4 *)(gen_frame + 0x3c)) = 0;
        if (((*(uint *)(gen_frame + 0x40)) & 0x80000000) == 0) {
LAB_00dee81a: ;
          (*(undefined4 *)(gen_frame + 0x3c)) = 0;
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x40)) * 8);
        }
LAB_00dee82a: ;
        (*(int *)(gen_frame + 0x38)) = 0;
        (*(uint *)(gen_frame + 0x40)) = 0x80000000;
        F_00da3e20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x8c)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
        (*(undefined4 *)(gen_frame + 0x84)) = 0;
        if (((*(uint *)(gen_frame + 0x88)) & 0x80000000) == 0) {
LAB_00dee0e1: ;
          (*(undefined4 *)(gen_frame + 0x84)) = 0;
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x80)),(*(uint *)(gen_frame + 0x88)) * 8);
        }
LAB_00dee0f1: ;
        (*(int *)(gen_frame + 0x80)) = 0;
        (*(uint *)(gen_frame + 0x88)) = 0x80000000;
        F_00dbdff0(&(*(undefined4 *)(gen_frame + 0xb4)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd6b0();
        (*(undefined4 *)(gen_frame + 0xac)) = 0;
        if (((*(uint *)(gen_frame + 0xb0)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xa8)),(*(uint *)(gen_frame + 0xb0)) * 8);
        }
        (*(int *)(gen_frame + 0xa8)) = 0;
        (*(uint *)(gen_frame + 0xb0)) = 0x80000000;
LAB_00dee13c: ;
        F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x9c)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd6b0();
        return 1;
      }
      iVar1 = iVar11 * 4;
      iVar11 = iVar11 + 1;
      *(undefined4 *)(*piVar7 + iVar3 * 4) = *(undefined4 *)((*(int *)(gen_frame + 0xc4)) + iVar1);
      pvVar13 = (*(undefined * PTR32 *)(gen_frame + 0xd8));
    } while (iVar11 < (int)(*(uint *)(gen_frame + 0xc8)));
  }
  F_00dbdfc0((undefined *)((int)pvVar13 + 0x18) GEN_EDX_ARG);
  iVar11 = 0;
  if (0 < *(int *)((int)pvVar13 + 0x10)) {
    do {
      piVar4 = *(int * PTR32 *)(*piVar7 + iVar11 * 4);
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        uVar15 = F_00ded4c0(*(undefined * PTR32 *)((int)pvVar13 + 8) GEN_EDX_ARG,iVar3,piVar4[2]);
        F_00dbdcd0((undefined *)((int)pvVar13 + 0x18) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(int)uVar15,
                     (int)(uVar15 >> 0x20),iVar11,0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)((int)pvVar13 + 0x10));
  }
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x2c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x2c)) * 4);
  }
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x78)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0x80000000;
  if (-1 < (int)(*(uint *)(gen_frame + 0x7c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x74)),(*(uint *)(gen_frame + 0x7c)) * 4);
  }
  (*(int *)(gen_frame + 0x74)) = 0;
  (*(uint *)(gen_frame + 0xc8)) = 0;
  (*(uint *)(gen_frame + 0x7c)) = 0x80000000;
  if (-1 < (int)(*(uint *)(gen_frame + 0xcc))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc4)),(*(uint *)(gen_frame + 0xcc)) * 4);
  }
  (*(int *)(gen_frame + 0xc4)) = 0;
  (*(uint *)(gen_frame + 0xcc)) = 0x80000000;
  F_00dbdb20(&(*(int *)(gen_frame + 0x64)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  if (((*(uint *)(gen_frame + 0x60)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x60)) * 8);
  }
  (*(int *)(gen_frame + 0x58)) = 0;
  (*(uint *)(gen_frame + 0x60)) = 0x80000000;
  F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x44)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  if (((*(uint *)(gen_frame + 0x40)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x40)) * 8);
  }
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(uint *)(gen_frame + 0x40)) = 0x80000000;
  F_00da3e20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x8c)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  if (((*(uint *)(gen_frame + 0x88)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x80)),(*(uint *)(gen_frame + 0x88)) * 8);
  }
  (*(int *)(gen_frame + 0x80)) = 0;
  (*(uint *)(gen_frame + 0x88)) = 0x80000000;
  F_00dbdff0(&(*(undefined4 *)(gen_frame + 0xb4)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd6b0();
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  if (((*(uint *)(gen_frame + 0xb0)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xa8)),(*(uint *)(gen_frame + 0xb0)) * 8);
  }
  (*(int *)(gen_frame + 0xa8)) = 0;
  (*(uint *)(gen_frame + 0xb0)) = 0x80000000;
  F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x9c)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd6b0();
  return 0;
}

/* ref: FUN_00dee9e0 */
GEN_LIB GEN_FRAME uint F_00dee9e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(undefined * param_5, unsigned int gen_a4), GEN_P(undefined * param_6, unsigned int gen_a5), GEN_P(undefined * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xdee9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined * param_6 = (undefined *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined * param_7 = (undefined *)(uintptr_t)gen_a6;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = F_00ded530(param_5 GEN_EDX_ARG,param_2,param_3);
  iVar5 = (int)(uVar7 >> 0x20);
  iVar1 = (int)uVar7;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_4 + 0x24))(param_4 GEN_EDX_ARG,param_2)));
  uVar6 = 0xffffffff;
  if ((piVar2 == (int *)0x0) || (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG), uVar3 != param_3)) {
    uVar6 = F_00dbddc0(param_6 GEN_EDX_ARG,iVar1,iVar5,0xffffffff,0);
  }
  piVar2 = (int *)F_00dbddc0(param_7 GEN_EDX_ARG,iVar1,iVar5,0,0);
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
  if ((uVar6 == 0xffffffff) || (piVar2 == (int *)0x1)) {
    uVar6 = F_00dbddc0((undefined *)((int)param_5 + 0x18) GEN_EDX_ARG,iVar1,iVar5,0xffffffff,0);
  }
  (*(ulonglong *)(gen_frame + 0x8)) = uVar7;
  (*(uint *)(gen_frame + 0x10)) = uVar6;
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x18));
  if ((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x2) {
    iVar4 = 0;
    if (0 < (int)param_1[1]) {
      piVar2 = (int *)*param_1;
      do {
        if ((iVar1 == *piVar2) && (iVar5 == piVar2[1])) goto LAB_00deea9f;
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 4;
      } while (iVar4 < (int)param_1[1]);
    }
    piVar2 = (int *)F_00df1630(param_1 GEN_EDX_ARG,&(*(ulonglong *)(gen_frame + 0x8)));
  }
LAB_00deea9f: ;
  if (-1 < (int)uVar6) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)param_5 + 0xc) + uVar6 * 4)));
    iVar5 = *(int *)(iVar1 + 0x14);
    while (iVar5 = iVar5 - 1, -1 < iVar5) {
      iVar4 = *(int *)(iVar1 + 0x10);
      piVar2 = (int *)(iVar4 + iVar5 * 8);
      if (*(int *)(iVar4 + iVar5 * 8) == 7) {
        piVar2 = (int *)F_00dee9e0(param_1,*(undefined4 *)piVar2[1],((undefined4 *)piVar2[1])[1],
                                     param_4,param_5,param_6,param_7);
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00deeaf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00deeaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdeeaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x320];
  undefined8 uVar1;
  undefined8 uVar2;
  code * pcVar3;
  int iVar4;
  undefined4 * puVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined * pvVar12;
  int * piVar13;
  undefined8 * puVar14;
  undefined8 * puVar15;
  undefined * pvVar16;
  ulonglong uVar17;
  char * pcVar18;
  char * pcVar19;
  char * pcVar20;
  undefined4 uVar21;
  char * pcVar22;
  undefined4 uVar23;
  uint * puVar24;
  
  (*(undefined * PTR32 *)(gen_frame + 0x318)) = (*(undefined * PTR32 *)&gen_args[0]);
  pcVar3 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x20)));
  (*(int *)(gen_frame + 0x2f4)) = 0;
  (*(int *)(gen_frame + 0x2f8)) = 0;
  (*(uint *)(gen_frame + 0x2fc)) = 0x80000000;
  (*pcVar3)((*(int * PTR32 *)&gen_args[1]),&(*(int *)(gen_frame + 0x2f4)));
  (*(int *)(gen_frame + 0x30c)) = 0;
  (*(int *)(gen_frame + 0x310)) = 0;
  (*(uint *)(gen_frame + 0x314)) = 0x80000000;
  if (0 < (*(int *)(gen_frame + 0x2f8))) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x30c)),(*(int *)(gen_frame + 0x2f8)),8);
  }
  (*(int *)(gen_frame + 0x2f0)) = 0;
  if (0 < (*(int *)(gen_frame + 0x2f8))) {
    do {
      piVar13 = *(int * PTR32 *)((*(int *)(gen_frame + 0x2f4)) + (*(int *)(gen_frame + 0x2f0)) * 4);
      uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 0xc))(piVar13 GEN_EDX_ARG);
      if ((int)uVar8 < 0) {
        F_00da0a80(&(*(undefined8 * PTR32 *)(gen_frame + 0x300)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x200);
        F_00d9fe80(&(*(undefined8 * PTR32 *)(gen_frame + 0x300)) GEN_EDX_ARG,
                     "Intermediate version found in a release build. The asset probably needs to be re-exported"
                    );
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x54d3b666,((undefined1 *)(gen_frame + 0xc)),"Version\\hkVersionPatchManager.cpp",
                           0x2ec);
        if (uVar8 != 0) {
          pcVar3 = ((code *)GEN_TOP(swi(3)));
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        F_00d9fda0(&(*(undefined8 * PTR32 *)(gen_frame + 0x300)) GEN_EDX_ARG);
      }
      else {
        uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 8))(piVar13 GEN_EDX_ARG);
        uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 0xc))(piVar13 GEN_EDX_ARG);
        puVar24 = (uint *)((*(int *)(gen_frame + 0x30c)) + (*(int *)(gen_frame + 0x310)) * 8);
        if (puVar24 != (uint *)0x0) {
          *puVar24 = uVar8;
          puVar24[1] = uVar9;
        }
        (*(int *)(gen_frame + 0x310)) = (*(int *)(gen_frame + 0x310)) + 1;
      }
      iVar10 = (*(int *)(gen_frame + 0x2f0)) + 1;
      (*(int *)(gen_frame + 0x2f0)) = iVar10;
    } while (iVar10 < (*(int *)(gen_frame + 0x2f8)));
  }
  F_00e0ec50(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
  iVar10 = 0;
  (*(undefined4 *)(gen_frame + 0x2c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x2cc)) = 0;
  (*(undefined4 *)(gen_frame + 0x2d0)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x2e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x2e8)) = 0;
  (*(int *)(gen_frame + 0x2ec)) = -1;
  pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x318));
  if (0 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x318)) + 0x10)) {
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)pvVar12 + 0xc) + iVar10 * 4)));
      uVar8 = F_00ded330(iVar4);
      if (uVar8 == 0) {
        F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2e4)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd6b0();
        F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd6b0();
        F_00e0ed30(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
        (*(int *)(gen_frame + 0x310)) = 0;
        if (-1 < (int)(*(uint *)(gen_frame + 0x314))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x30c)),(*(uint *)(gen_frame + 0x314)) * 8);
        }
        (*(int *)(gen_frame + 0x30c)) = 0;
        (*(uint *)(gen_frame + 0x314)) = 0x80000000;
        (*(int *)(gen_frame + 0x2f8)) = 0;
        if ((int)(*(uint *)(gen_frame + 0x2fc)) < 0) {
          return 1;
        }
        goto LAB_00deedbe;
      }
      if (*(int *)(iVar4 + 8) == -1) {
        uVar17 = F_00ded4c0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x318)) + 8) GEN_EDX_ARG,*(undefined4 *)(iVar4 + 4),
                              *(undefined4 *)(iVar4 + 0xc));
        uVar21 = (undefined4)(uVar17 >> 0x20);
        uVar8 = F_00dbdd70(&(*(undefined4 *)(gen_frame + 0x2e4)) GEN_EDX_ARG,(int)uVar17,uVar21);
        if ((int)uVar8 <= (*(int *)(gen_frame + 0x2ec))) {
          F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2e4)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
          F_00dbd6b0();
          F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
          F_00dbd6b0();
          F_00e0ed30(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
          (*(int *)(gen_frame + 0x310)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0x314))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x30c)),(*(uint *)(gen_frame + 0x314)) * 8);
          }
          (*(int *)(gen_frame + 0x30c)) = 0;
          (*(uint *)(gen_frame + 0x314)) = 0x80000000;
          (*(int *)(gen_frame + 0x2f8)) = 0;
          if ((int)(*(uint *)(gen_frame + 0x2fc)) < 0) {
            return 1;
          }
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x2f4)),(*(uint *)(gen_frame + 0x2fc)) * 4);
          return 1;
        }
        F_00dbdcd0(&(*(undefined4 *)(gen_frame + 0x2e4)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(int)uVar17,uVar21,iVar10,0);
        pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x318));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)((int)pvVar12 + 0x10));
  }
  pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x318));
  iVar10 = 0;
  (*(int * PTR32 *)&gen_args[3])[1] = 0;
  (*(undefined8 * PTR32 *)(gen_frame + 0x300)) = (undefined8 *)0x0;
  (*(int *)(gen_frame + 0x304)) = 0;
  (*(uint *)(gen_frame + 0x308)) = 0x80000000;
  if (0 < (*(int *)(gen_frame + 0x310))) {
    do {
      F_00dee9e0(&(*(undefined8 * PTR32 *)(gen_frame + 0x300)),*(undefined4 *)((*(int *)(gen_frame + 0x30c)) + iVar10 * 8),
                   *(undefined4 *)((*(int *)(gen_frame + 0x30c)) + 4 + iVar10 * 8),(*(int * PTR32 *)&gen_args[1]),pvVar12,&(*(undefined4 *)(gen_frame + 0x2e4)),&(*(undefined4 *)(gen_frame + 0x2c8)));
      iVar10 = iVar10 + 1;
      iVar4 = (*(int *)(gen_frame + 0x304));
    } while (iVar10 < (*(int *)(gen_frame + 0x310)));
    while (iVar4 != 0) {
      uVar1 = *(*(undefined8 * PTR32 *)(gen_frame + 0x300));
      (*(undefined8 *)(gen_frame + 0x2d4)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x2d4));
      uVar2 = (*(undefined8 * PTR32 *)(gen_frame + 0x300))[1];
      (*(int *)(gen_frame + 0x304)) = iVar4 - 1;
      iVar10 = (iVar4 - 1) * 0x10;
      (*(undefined8 *)(gen_frame + 0x2dc)) = uVar2;
      uVar2 = (*(undefined8 *)(gen_frame + 0x2dc));
      puVar14 = (*(undefined8 * PTR32 *)(gen_frame + 0x300)) + 2;
      if (0 < iVar10) {
        iVar10 = (iVar10 - 1U >> 3) + 1;
        puVar15 = (*(undefined8 * PTR32 *)(gen_frame + 0x300));
        do {
          *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
          *(undefined4 *)((int)puVar15 + 4) = *(undefined4 *)((int)puVar14 + 4);
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
          iVar10 = iVar10 - 1;
        } while (iVar10 != 0);
      }
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2dc)) + 0)) = (int)uVar2;
      iVar10 = (int)(*(undefined8 *)(gen_frame + 0x2dc));
      if (((int)(*(undefined8 *)(gen_frame + 0x2dc)) == -1) ||
         (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x318)) + 0xc) + (int)(*(undefined8 *)(gen_frame + 0x2dc)) * 4))) + 8))) != -1)) {
        uVar21 = 2;
      }
      else {
        uVar21 = 1;
      }
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2d4)) + 4)) = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar7 = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2d4)) + 4));
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2d4)) + 0)) = (undefined4)uVar1;
      uVar23 = (undefined4)(*(undefined8 *)(gen_frame + 0x2d4));
      (*(undefined8 *)(gen_frame + 0x2d4)) = uVar1;
      (*(undefined8 *)(gen_frame + 0x2dc)) = uVar2;
      F_00dbdcd0(&(*(undefined4 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar23,uVar7,uVar21,0);
      if (iVar10 < 0) {
        uVar8 = F_00ded4a0((*(undefined * PTR32 *)(gen_frame + 0x318)) GEN_EDX_ARG,uVar23,uVar7);
        uVar9 = F_00ded310((*(undefined * PTR32 *)(gen_frame + 0x318)) GEN_EDX_ARG,uVar23,uVar7);
        iVar4 = (*(int *)(gen_frame + 0x304));
        if (uVar9 != 0xffffffff) {
          piVar13 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0xc))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20c)),uVar8)));
          if (piVar13 == (int *)0x0) {
            F_00da0a80((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x2d4)) + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x200);
            pcVar18 = 
            " is not registered. If (*(undefined * PTR32 *)&gen_args[0]) is a Havok class, make sure the class\'s product reflection is enabled near where hkProductFeatures.cxx is included. Otherwise, check your own class registration."
            ;
            pvVar12 = (undefined *)F_00d9fe80((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x2d4)) + 4) GEN_EDX_ARG,"Class ");
            pvVar12 = (undefined *)F_00d9fe80(pvVar12 GEN_EDX_ARG,uVar8);
            F_00d9fe80(pvVar12 GEN_EDX_ARG,pcVar18);
            uVar23 = 0x338;
            uVar21 = 0x3f79ddb0;
            goto LAB_00def012;
          }
          uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 0xc))(piVar13 GEN_EDX_ARG);
          iVar4 = (*(int *)(gen_frame + 0x304));
          if (uVar11 != uVar9) {
            F_00da0a80((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x2d4)) + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x200);
            uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 0xc))(piVar13 GEN_EDX_ARG);
            pcVar22 = "Make sure required patches are registered to update (*(undefined * PTR32 *)&gen_args[0]) class.";
            pcVar20 = " is the current version.\n";
            pcVar19 = ", but  ";
            pcVar18 = " version ";
            pvVar12 = (undefined *)F_00d9fe80((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x2d4)) + 4) GEN_EDX_ARG,"Source contains ");
            pvVar12 = (undefined *)F_00d9fe80(pvVar12 GEN_EDX_ARG,uVar8);
            pvVar12 = (undefined *)F_00d9fe80(pvVar12 GEN_EDX_ARG,pcVar18);
            pvVar12 = (undefined *)F_00d9ff40(pvVar12 GEN_EDX_ARG,uVar9);
            pvVar12 = (undefined *)F_00d9fe80(pvVar12 GEN_EDX_ARG,pcVar19);
            pvVar12 = (undefined *)F_00d9ff40(pvVar12 GEN_EDX_ARG,uVar11);
            pvVar12 = (undefined *)F_00d9fe80(pvVar12 GEN_EDX_ARG,pcVar20);
            F_00d9fe80(pvVar12 GEN_EDX_ARG,pcVar22);
            uVar23 = 0x33f;
            uVar21 = 0x3f79ddb1;
LAB_00def012: ;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                      (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,uVar21,((undefined1 *)(gen_frame + 0xc)),"Version\\hkVersionPatchManager.cpp",uVar23);
            F_00d9fda0((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x2d4)) + 4) GEN_EDX_ARG);
            (*(int *)(gen_frame + 0x304)) = 0;
            if (((*(uint *)(gen_frame + 0x308)) & 0x80000000) == 0) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x300)),(*(uint *)(gen_frame + 0x308)) << 4);
            }
            (*(undefined8 * PTR32 *)(gen_frame + 0x300)) = (undefined8 *)0x0;
            (*(uint *)(gen_frame + 0x308)) = 0x80000000;
            F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2e4)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
            F_00dbd6b0();
            F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
            F_00dbd6b0();
            F_00e0ed30(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
            (*(int *)(gen_frame + 0x310)) = 0;
            if (((*(uint *)(gen_frame + 0x314)) & 0x80000000) == 0) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x30c)),(*(uint *)(gen_frame + 0x314)) * 8)
              ;
            }
            (*(int *)(gen_frame + 0x30c)) = 0;
            (*(uint *)(gen_frame + 0x314)) = 0x80000000;
            (*(int *)(gen_frame + 0x2f8)) = 0;
            if (((*(uint *)(gen_frame + 0x2fc)) & 0x80000000) == 0) {
LAB_00deedbe: ;
              (*(uint *)(gen_frame + 0x314)) = 0x80000000;
              (*(int *)(gen_frame + 0x30c)) = 0;
              (*(int *)(gen_frame + 0x2f8)) = 0;
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x2f4)),(*(uint *)(gen_frame + 0x2fc)) * 4);
            }
            return 1;
          }
        }
      }
      else {
        uVar21 = *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x318)) + 0xc) + iVar10 * 4)));
        if ((*(int * PTR32 *)&gen_args[3])[1] == ((*(int * PTR32 *)&gen_args[3])[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)&gen_args[3]),4);
        }
        *((undefined4 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + (*(int * PTR32 *)&gen_args[3])[1] * 4))) = uVar21;
        (*(int * PTR32 *)&gen_args[3])[1] = (*(int * PTR32 *)&gen_args[3])[1] + 1;
        piVar13 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x318)) + 0xc) + iVar10 * 4)));
        iVar10 = piVar13[1];
        if (iVar10 == 0) {
          iVar10 = *piVar13;
        }
        F_00dee9e0(&(*(undefined8 * PTR32 *)(gen_frame + 0x300)),iVar10,piVar13[3],(*(int * PTR32 *)&gen_args[1]),(*(undefined * PTR32 *)(gen_frame + 0x318)),&(*(undefined4 *)(gen_frame + 0x2e4)),&(*(undefined4 *)(gen_frame + 0x2c8)));
        iVar4 = (*(int *)(gen_frame + 0x304));
      }
    }
  }
  (*(int *)(gen_frame + 0x304)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x308))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x300)),(*(uint *)(gen_frame + 0x308)) << 4);
  }
  (*(int *)(gen_frame + 0x2f0)) = (*(int * PTR32 *)&gen_args[3])[1] - 1;
  while (-1 < (*(int *)(gen_frame + 0x2f0))) {
    piVar13 = *((int * PTR32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + (*(int *)(gen_frame + 0x2f0)) * 4)));
    pvVar12 = (undefined *)piVar13[1];
    pvVar16 = (undefined *)*piVar13;
    (*(undefined * PTR32 *)(gen_frame + 0x2a4)) = pvVar16;
    if (pvVar12 == (undefined *)0x0) {
      (*(undefined * PTR32 *)(gen_frame + 0x318)) = pvVar16;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x318)) = pvVar12;
      pvVar16 = pvVar12;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x318)) = pvVar16;
    (*(int * PTR32 *)&gen_args[2]) = (int *)F_00e0d6a0(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,pvVar16);
    if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
      iVar10 = piVar13[2];
      (*(undefined4 *)(gen_frame + 0x2b8)) = 0;
      (*(undefined4 *)(gen_frame + 0x2bc)) = 0;
      (*(uint *)(gen_frame + 0x2c0)) = 0x80000000;
      (*(undefined * PTR32 *)(gen_frame + 0x2ac)) = pvVar16;
      (*(int *)(gen_frame + 0x2b0)) = iVar10;
      (*(undefined4 *)(gen_frame + 0x2b4)) = 0;
      (*(int * PTR32 *)&gen_args[2]) = (int *)F_00e0e650(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x2ac)));
      (*(undefined4 *)(gen_frame + 0x2bc)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x2c0))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x2b8)),((*(uint *)(gen_frame + 0x2c0)) & 0x3fffffff) * 0xc);
      }
    }
    iVar10 = piVar13[5];
    while (iVar10 = iVar10 - 1, -1 < iVar10) {
      iVar4 = piVar13[4] + iVar10 * 8;
      switch((unsigned int)(uintptr_t)(*(undefined4 *)(piVar13[4] + iVar10 * 8))) {
      case 1: ;
        F_00e0da90(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[2]),**(undefined4 * PTR32 *)(iVar4 + 4));
        break;
      case 2: ;
        puVar5 = *(undefined4 * PTR32 *)(iVar4 + 4);
        uVar8 = F_00e1aa20(((undefined1 *)(gen_frame + 0x21c)) GEN_EDX_ARG,puVar5[1],puVar5[2],puVar5[3]);
        F_00e0d7d0(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[2]),*puVar5,uVar8,0);
        break;
      case 3: ;
        F_00e0d8a0(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[2]),(*(undefined4 * PTR32 *)(iVar4 + 4))[1],**(undefined4 * PTR32 *)(iVar4 + 4))
        ;
        break;
      case 7: ;
        F_00e0d6a0(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,**(undefined4 * PTR32 *)(iVar4 + 4));
        break;
      case 8: ;
        if (**(int * PTR32 *)(iVar4 + 4) == 0) {
          puVar24 = &(*(uint *)(gen_frame + 0x2c4));
          (*(uint *)(gen_frame + 0x2c4)) = 0;
        }
        else {
          uVar8 = F_00e0d6a0(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,**(int * PTR32 *)(iVar4 + 4));
          puVar24 = &(*(uint *)(gen_frame + 0x2a8));
          (*(uint *)(gen_frame + 0x2a8)) = uVar8;
        }
        F_00e0eb40(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[2]),puVar24);
      }
    }
    if (piVar13[2] == -1) {
      F_00e0eae0(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[2]));
    }
    else {
      if ((*(undefined * PTR32 *)(gen_frame + 0x318)) != (*(undefined * PTR32 *)(gen_frame + 0x2a4))) {
        F_00e0d750(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)(gen_frame + 0x2a4)));
      }
      F_00e0d650(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[2]),piVar13[2]);
    }
    (*(int *)(gen_frame + 0x2f0)) = (*(int *)(gen_frame + 0x2f0)) - 1;
  }
  (*(undefined8 * PTR32 *)(gen_frame + 0x300)) = (undefined8 *)0x0;
  (*(int *)(gen_frame + 0x304)) = 0;
  (*(uint *)(gen_frame + 0x308)) = ((int)0x80000000);
  F_00e0d7c0(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,&(*(undefined8 * PTR32 *)(gen_frame + 0x300)));
  (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[3]) & 0xffffff00)));
  F_00da3de0(&(*(undefined8 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[3]));
  (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[3]) & 0xffffff00)));
  F_00da3de0(&(*(undefined4 *)(gen_frame + 0x2b4)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[3]));
  iVar10 = 0;
  if (0 < (*(int *)(gen_frame + 0x304))) {
    do {
      piVar13 = *(int * PTR32 *)((int)(*(undefined8 * PTR32 *)(gen_frame + 0x300)) + iVar10 * 4);
      uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 8))(piVar13 GEN_EDX_ARG);
      F_00da3a20(&(*(undefined8 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,uVar8,piVar13);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (*(int *)(gen_frame + 0x304)));
  }
  iVar10 = 0;
  if (0 < (*(int *)(gen_frame + 0x2f8))) {
    do {
      piVar13 = *(int * PTR32 *)((*(int *)(gen_frame + 0x2f4)) + iVar10 * 4);
      uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 8))(piVar13 GEN_EDX_ARG);
      uVar8 = F_00da4190(&(*(undefined8 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,uVar8,0);
      if (uVar8 == 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 0xc))(piVar13 GEN_EDX_ARG);
      }
      else {
        uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 8))(piVar13 GEN_EDX_ARG);
        F_00da3f00(&(*(undefined8 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,uVar8);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (*(int *)(gen_frame + 0x2f8)));
  }
  uVar8 = F_00da3970(&(*(undefined8 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
  F_00da3e40(&(*(undefined8 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[3]) + 3,uVar8);
  cVar6 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[3]) + 3))));
  while (cVar6 != '\0') {
    piVar13 = (int *)F_00da39b0(&(*(undefined8 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,uVar8);
    iVar10 = *(*(int * PTR32 *)&gen_args[1]);
    uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 8))(piVar13 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20c)));
    ((code *)*(gen_code32 *)(iVar10 + 0x5c))((*(int * PTR32 *)&gen_args[1]),uVar9);
    uVar8 = F_00da39f0(&(*(undefined8 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,uVar8);
    F_00da3e40(&(*(undefined8 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[3]) + 3,uVar8);
    cVar6 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[3]) + 3))));
  }
  F_00da3e20(&(*(undefined4 *)(gen_frame + 0x2b4)) GEN_EDX_ARG);
  F_00da3e20(&(*(undefined8 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x304)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x308))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined8 * PTR32 *)(gen_frame + 0x300)),(*(uint *)(gen_frame + 0x308)) * 4);
  }
  F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2e4)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd6b0();
  F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd6b0();
  F_00e0ed30(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x310)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x314))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x30c)),(*(uint *)(gen_frame + 0x314)) * 8);
  }
  (*(int *)(gen_frame + 0x30c)) = 0;
  (*(uint *)(gen_frame + 0x314)) = 0x80000000;
  (*(int *)(gen_frame + 0x2f8)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x2fc))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x2f4)),(*(uint *)(gen_frame + 0x2fc)) * 4);
  }
  return 0;
}

/* ref: FUN_00def500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  byte * pbVar2;
  
  F_00ded380(((byte *)(gen_frame + 0x4)) GEN_EDX_FWD,0);
  pbVar2 = param_2;
  if (param_2 == (byte *)0x0) {
    pbVar2 = ((byte *)(gen_frame + 0x4));
  }
  if (((*(uint *)((int)this + 0x1c) & 0x7fffffff) == 0) && (*(int *)((int)this + 0x10) != 0)) {
    uVar1 = F_00dede30(this GEN_EDX_ARG);
    if (uVar1 == 1) {
      if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0) {
        F_00d91a80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) GEN_EDX_ARG);
      }
      return 1;
    }
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = ((int)0x80000000);
  uVar1 = F_00deeaf0(this GEN_EDX_ARG,param_1,pbVar2,&(*(undefined4 *)(gen_frame + 0x10)));
  if (uVar1 == 0) {
    uVar1 = F_00ded800(param_1,&(*(undefined4 *)(gen_frame + 0x10)));
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x18))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0x18)) * 4);
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0x80000000;
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0) {
    F_00d91a80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00def5d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (((*(uint *)((int)this + 0x1c) & 0x7fffffff) == 0) && (*(int *)((int)this + 0x10) != 0)) {
    uVar1 = F_00dede30(this GEN_EDX_FWD);
    if (uVar1 == 1) {
      return 1;
    }
  }
  uVar1 = F_00ded800(param_1,(int)this + 0xc);
  return uVar1;
}

/* ref: FUN_00def610 */
GEN_LIB GEN_NOFRAME uint F_00def610(void)
{
  GEN_ENTER(0xdef610u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined * this;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                           (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x24)));
  *(undefined2 *)((int)this + 4) = 0x24;
  uVar2 = F_00dedcf0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00def640 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00def640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdef640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  return *(int *)(in_ecx + 8) < param_4;
}

/* ref: FUN_00def660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def660(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdef660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  if ((*in_ecx == param_2) && (in_ecx[1] == param_3)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00def6c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def6c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdef6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *(bool *)param_2 = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00def6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdef6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00def700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3e60(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdef730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00def750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def780(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00def790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00def7a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def7a0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdef7a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00def7c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdef7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00def7e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def7f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3f00(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00def820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def820(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00def830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00def840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def840(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdef840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00def8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def8c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00def910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def910(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00def920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def920(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00def930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00def970 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00def970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00def9e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def9e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00defa20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defa20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefa20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00defa30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefa30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbddc0((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1,param_2,0xffffffff,0);
  return uVar1;
}

/* ref: FUN_00defa80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defa80(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefa80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00defac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defac0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00defad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defad0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00defb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defb20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00defb40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefb40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00defb60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00defbb0 */
GEN_LIB GEN_FRAME unsigned int F_00defbb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdefbb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00defbf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defbf0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00defc00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defc00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00defc10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defc10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00defc40 */
GEN_LIB GEN_FRAME unsigned int F_00defc40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdefc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = (param_3 - 1U >> 3) + 1;
    puVar1 = param_1;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00defca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00defcd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefcd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00defcf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefcf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00defd30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefd30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00defd70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefd70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00defdb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefdb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00defde0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefde0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00defe00 */
GEN_LIB GEN_FRAME uint F_00defe00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefe00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00defe10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defe10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefe10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00defe30 */
GEN_LIB GEN_FRAME uint F_00defe30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefe30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00defec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00deff00 */
GEN_LIB GEN_FRAME unsigned int F_00deff00(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdeff00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
        puVar1[1] = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + 8 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00deff50 */
GEN_LIB GEN_FRAME uint F_00deff50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdeff50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00deff80 */
GEN_LIB GEN_FRAME uint F_00deff80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdeff80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00deffb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00deffb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdeffb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: FUN_00deffc0 */
GEN_LIB GEN_FRAME uint F_00deffc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdeffc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00defff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdefff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df0030 */
GEN_LIB GEN_FRAME uint F_00df0030(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf0030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00df0050 */
GEN_LIB GEN_FRAME unsigned int F_00df0050(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf0050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0x2c);
  }
  return;
}

/* ref: FUN_00df00e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df00e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf00e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dbdcd0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00df0130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0130(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df0140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0140(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00df0150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0150(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_00df0160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0160(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf0160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00df0180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0180(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df0190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0190(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00df01a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df01a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf01a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df01b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df01b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf01b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00df01e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00df01e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf01e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 4)) {
    piVar1 = *(int * PTR32 *)this;
    do {
      if ((*param_1 == *piVar1) && (param_1[1] == piVar1[1])) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00df0300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf0300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df0340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf0340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00df0380 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df0380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf0380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined4 *)(iVar1 + iVar3 * 4 + iVar5 * 4) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00df03e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df03e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf03e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbd970((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1,0xffffffff);
  return uVar1;
}

/* ref: FUN_00df0400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbd970((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1,0xffffffff);
  return uVar1;
}

/* ref: FUN_00df0420 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df0420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  iVar2 = (*(int *)((int)this + 4) - param_1) * 0x10;
  puVar1 = (undefined4 *)(*(int *)this + param_1 * 0x10);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 3) + 1;
    do {
      *puVar1 = puVar1[4];
      puVar1[1] = puVar1[5];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00df0470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf0470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00df04a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df04a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf04a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df04e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df04e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf04e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0520 */
GEN_LIB GEN_FRAME unsigned int F_00df0520(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf0520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00df0550 */
GEN_LIB GEN_FRAME unsigned int F_00df0550(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf0550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00df05b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df05b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf05b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00df0600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00df0650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00df0690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdf0690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  undefined8 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 * puVar5;
  int iVar6;
  
  iVar3 = *(int *)((int)this + 4);
  iVar6 = (iVar3 - param_3) + param_5;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar4 = uVar2 * 2;
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    F_00d95690(param_1,this,iVar4,0x10);
  }
  puVar1 = (undefined8 *)
           F_00da38f0((param_2 + param_5) * 0x10 + *(int *)this,
                        (param_3 + param_2) * 0x10 + *(int *)this,
                        ((iVar3 - param_2) - param_3) * 0x10);
  puVar5 = (undefined8 *)(param_2 * 0x10 + *(int *)this);
  if (0 < param_5) {
    iVar4 = param_4 - (int)puVar5;
    puVar1 = puVar5;
    iVar3 = param_5;
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(undefined8 *)(iVar4 + (int)puVar1);
        puVar1[1] = *(undefined8 *)(iVar4 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 4) = iVar6;
  return (uint)puVar1;
}

/* ref: hkDefaultClassWrapper::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df07a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df07a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf07a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df07e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df07e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf07e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00df0840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf0840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dbdd70(this GEN_EDX_FWD,param_2,param_3);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00df0870 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df0870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf0870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined4 *)(iVar1 + iVar3 * 4 + iVar5 * 4) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00df08d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df08d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf08d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00df0910 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df0910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 8);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00df0980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00df09b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df09b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf09b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df0a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df0a30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0a70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0ab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdf0bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00df0690(this GEN_EDX_FWD,param_1,param_2,0,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00df0c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0c50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00df0c80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00df0cb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00df0ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df0d30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf0d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00df0bf0(this GEN_EDX_FWD,param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_00df0d90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0dd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0e10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0e50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0e90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0ed0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0f10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0f50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df0f90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 != 0xffffffff) {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00df0fd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df0fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf0fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 != 0xffffffff) {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00df1010 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 != 0xffffffff) {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00df1070 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df10b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df10b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf10b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00df0d70(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df10d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df10d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf10d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df1110 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df1150 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df1190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf1190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd970((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1,0xffffffff);
  uVar3 = F_00df0f90(this GEN_EDX_ARG);
  puVar1 = (undefined4 *)(*(int *)this + uVar3 * 8);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = F_00dbd8b0((undefined *)((int)this + 0xc) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
  return uVar2;
}

/* ref: FUN_00df11e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df11e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf11e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df1220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf1220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbddc0((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1,param_2,0xffffffff,0);
  uVar3 = F_00df0fd0(this GEN_EDX_ARG);
  puVar1 = (undefined4 *)(*(int *)this + uVar3 * 8);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  uVar2 = F_00dbdcd0((undefined *)((int)this + 0xc) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,uVar3,0);
  return uVar2;
}

/* ref: FUN_00df1280 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df12c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df12c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf12c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd970((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1,0xffffffff);
  uVar3 = F_00df1010(this GEN_EDX_ARG);
  puVar1 = (undefined4 *)(*(int *)this + uVar3 * 8);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = F_00dbd8b0((undefined *)((int)this + 0xc) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
  return uVar2;
}

/* ref: FUN_00df1310 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df1350 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df1390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int local_8;
  
  local_8 = ((uint)((int)(uintptr_t)this) >> 8) << 8;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  local_8 = ((uint)((int)(uintptr_t)this) >> 8) << 8;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  F_00da3de0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,local_8);
  return (uint)this;
}

/* ref: FUN_00df13d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df13d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf13d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  F_00ded6b0(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0x2c);
  }
  return (uint)this;
}

/* ref: FUN_00df1410 */
GEN_LIB GEN_FRAME uint F_00df1410(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf1410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00df1440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dbdff0((undefined *)((int)this + 0xc) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd6b0();
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df14a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df14a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf14a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dbdb20((undefined *)((int)this + 0xc) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df1500 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dbdb20((undefined *)((int)this + 0xc) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df1580 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
                       (uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00df1630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined8 * puVar2;
  uint uVar3;
  int iVar4;
  int local_c;
  
  uVar3 = *(uint *)((int)this + 4);
  iVar1 = 0;
  if (0 < (int)uVar3) {
    iVar4 = *(int *)this;
    do {
      local_c = (int)*(undefined8 *)(iVar4 + 8);
      if (*(int *)(param_1 + 1) < local_c) {
        uVar3 = F_00df0d70(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),iVar1,param_1);
        return uVar3;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar1 < (int)uVar3);
  }
  if (uVar3 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x10);
  }
  puVar2 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar2;
}

/* ref: hkVersionPatchManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df16d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf16d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  F_00ded770(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df1720 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df1720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = *param_1;
  piVar3 = param_1;
  while (iVar2 != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,iVar2);
    piVar1 = piVar3 + 1;
    piVar3 = piVar3 + 1;
    iVar2 = *piVar1;
  }
  return 0;
}

/* ref: hkDefaultBuiltinTypeRegistry::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df17c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf17c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = REFG(int * PTR32, 0x15e4028);
  iVar1 = *REFG(int * PTR32, 0x15e4028);
  uVar3 = F_00d92610(param_2 GEN_EDX_FWD);
  ((code *)*(gen_code32 *)(iVar1 + 0x1c))(piVar2,param_2,uVar3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e402c) + 0xc))))(REFG(int * PTR32, 0x15e402c) GEN_EDX_ARG,param_1);
  uVar3 = F_00d926b0(param_2 GEN_EDX_ARG);
  if (0 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e4030) + 0xc))))(REFG(int * PTR32, 0x15e4030) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x10),param_2)
    ;
  }
  return uVar3;
}

/* ref: FUN_00df1820 */
GEN_LIB GEN_NOFRAME uint F_00df1820(void)
{
  GEN_ENTER(0xdf1820u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  if (((REFG(int, 0x15e4030) != 0) && (REFG(int, 0x15e4028) != 0)) && (REFG(int, 0x15e402c) != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,8)));
    puVar2[1] = 0x10008;
    *puVar2 = (*(undefined * PTR32 (*)[8])REFP(0x114c4ac));
    F_00df1880();
    return (uint)puVar2;
  }
  return 0;
}

/* ref: FUN_00df1880 */
GEN_LIB GEN_NOFRAME unsigned int F_00df1880(void)
{
  GEN_ENTER(0xdf1880u, 0u, 0u, 0u, 0u);
  undefined * PTR32 * ppuVar1;
  undefined * puVar2;
  int * piVar3;
  undefined * PTR32 * ppuVar4;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e4028) + 0x24))))(REFG(int * PTR32, 0x15e4028) GEN_EDX_ARG,&REFG(undefined, 0x15e373c));
  piVar3 = REFG(int * PTR32, 0x15e402c);
  ppuVar4 = &REFG(undefined * PTR32, 0x10e0c30);
  puVar2 = REFG(undefined * PTR32, 0x10e0c30);
  while (puVar2 != (undefined *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,puVar2);
    ppuVar1 = ppuVar4 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar2 = *ppuVar1;
  }
  F_0105a320(REFG(void * PTR32, 0x15e4030) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x10e0c30),&REFG(undefined * PTR32, 0x10e0f70));
  return;
}

/* ref: FUN_00df1900 */
GEN_LIB GEN_FRAME uint F_00df1900(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf1900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00df1930 */
GEN_LIB GEN_FRAME uint F_00df1930(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf1930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00df1960 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114c4ac));
  F_00df1880();
  return (uint)this;
}

/* ref: FUN_00df19a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df19a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf19a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00df19c0 */
GEN_LIB GEN_FRAME unsigned int F_00df19c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf19c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(void * PTR32, 0x15e4028) != (undefined *)0x0) {
    F_00d91840(REFG(void * PTR32, 0x15e4028) GEN_EDX_ARG);
    REFG(void * PTR32, 0x15e4028) = (undefined *)param_1;
    return;
  }
  REFG(void * PTR32, 0x15e4028) = (undefined *)param_1;
  return;
}

/* ref: FUN_00df1a00 */
GEN_LIB GEN_FRAME unsigned int F_00df1a00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf1a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(void * PTR32, 0x15e402c) != (undefined *)0x0) {
    F_00d91840(REFG(void * PTR32, 0x15e402c) GEN_EDX_ARG);
    REFG(void * PTR32, 0x15e402c) = (undefined *)param_1;
    return;
  }
  REFG(void * PTR32, 0x15e402c) = (undefined *)param_1;
  return;
}

/* ref: FUN_00df1a30 */
GEN_LIB GEN_FRAME unsigned int F_00df1a30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf1a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(void * PTR32, 0x15e4030) != (undefined *)0x0) {
    F_00d91840(REFG(void * PTR32, 0x15e4030) GEN_EDX_ARG);
    REFG(void * PTR32, 0x15e4030) = (undefined *)param_1;
    return;
  }
  REFG(void * PTR32, 0x15e4030) = (undefined *)param_1;
  return;
}

/* ref: FUN_00df1a90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00da3e20((undefined *)((int)this + 0xc) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00df1ab0 */
GEN_LIB GEN_FRAME uint F_00df1ab0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf1ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: hkDefaultBuiltinTypeRegistry::vf3 */
GEN_LIB GEN_NOFRAME uint F_00df1b00(void)
{
  GEN_ENTER(0xdf1b00u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15e402c);
}

/* ref: hkDefaultBuiltinTypeRegistry::vf4 */
GEN_LIB GEN_NOFRAME uint F_00df1b10(void)
{
  GEN_ENTER(0xdf1b10u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15e4028);
}

/* ref: hkDefaultBuiltinTypeRegistry::vf5 */
GEN_LIB GEN_NOFRAME uint F_00df1b20(void)
{
  GEN_ENTER(0xdf1b20u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15e4030);
}

/* ref: FUN_00df1b30 */
GEN_LIB GEN_FRAME uint F_00df1b30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf1b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00df1b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  param_1 = param_1 & 0xffffff00;
  *(uint *)((int)this + 8) = uVar1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114c4ec));
  F_00da3de0((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: hkDynamicClassNameRegistry::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *(uint *)(in_ecx + 8);
}

/* ref: hkDynamicClassNameRegistry::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: hkDynamicClassNameRegistry::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df1bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = *param_1;
  piVar3 = param_1;
  while (iVar2 != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_FWD,iVar2,0);
    piVar1 = piVar3 + 1;
    piVar3 = piVar3 + 1;
    iVar2 = *piVar1;
  }
  return 0;
}

/* ref: FUN_00df1bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf1bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df1c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf1c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df1c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1c20(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00df1c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00df1c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1c40(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf1c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00df1c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1c90(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00df1cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf1cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: hkDynamicClassNameRegistry::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da4190(this + 0xc GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: hkDynamicClassNameRegistry::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf1d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = F_00d92610(param_1 GEN_EDX_FWD);
  }
  uVar1 = F_00da3a20(this + 0xc GEN_EDX_ARG,uVar1,param_1);
  return uVar1;
}

/* ref: hkDynamicClassNameRegistry::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdf1d50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  uVar2 = F_00da3970((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
  uVar3 = F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)&gen_args[1]) + 3,uVar2);
  cVar1 = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 3))));
  while (cVar1 != '\0') {
    uVar3 = F_00da39b0(this_00 GEN_EDX_ARG,uVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar3,0);
    uVar2 = F_00da39f0(this_00 GEN_EDX_ARG,uVar2);
    uVar3 = F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)&gen_args[1]) + 3,uVar2);
    cVar1 = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 3))));
  }
  return uVar3;
}

/* ref: FUN_00df1dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 4;
}

/* ref: FUN_00df1e20 */
GEN_LIB GEN_FRAME uint F_00df1e20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf1e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkDynamicClassNameRegistry::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  F_00da3e20(this + 0xc GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df1e90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df1ed0 */
GEN_LIB GEN_FRAME uint F_00df1ed0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf1ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00df1f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114c4ec));
  *(char * PTR32 *)((int)this + 8) = "hk_2011.3.1-r1";
  F_00da3de0((undefined *)((int)this + 0xc) GEN_EDX_FWD,local_8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114c51c));
  return (uint)this;
}

/* ref: FUN_00df1f40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df1f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf1f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00da3e20((undefined *)((int)this + 0xc) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00df1f60 */
GEN_LIB GEN_FRAME uint F_00df1f60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf1f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkDefaultClassNameRegistry::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df1f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf1f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  F_00da3e20(this + 0xc GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df1fd0 */
GEN_LIB GEN_FRAME uint F_00df1fd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf1fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: hkDefaultBuiltinTypeRegistry::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df2040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df2080 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df2080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf2080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 4;
}

/* ref: FUN_00df20d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df20d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf20d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkDynamicClassNameRegistry::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = this + 0xc;
  uVar3 = F_00da3970(this_00 GEN_EDX_FWD);
  uVar4 = F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar3);
  cVar2 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3));
  while (cVar2 != '\0') {
    uVar4 = F_00da39b0(this_00 GEN_EDX_ARG,uVar3);
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
    }
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    *(uint *)(*param_1 + iVar1 * 4) = uVar4;
    uVar3 = F_00da39f0(this_00 GEN_EDX_ARG,uVar3);
    uVar4 = F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar3);
    cVar2 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3));
  }
  return uVar4;
}

/* ref: FUN_00df21d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df21d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf21d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df21e0 */
GEN_LIB GEN_FRAME unsigned int F_00df21e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf21e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00df2210 */
GEN_LIB GEN_FRAME uint F_00df2210(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf2210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkVtableClassRegistry::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 8 GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: hkVtableClassRegistry::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 8 GEN_EDX_FWD,*param_1,0);
  return uVar1;
}

/* ref: FUN_00df2280 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df2280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf2280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dbdb20((undefined *)((int)this + 8) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00df22b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df22b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf22b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00df22c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df22c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf22c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00df22e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df22e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf22e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: hkVtableClassRegistry::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  F_00dbdb20(this + 8 GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df2370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df23d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df23d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf23d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 8);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: hkVtableClassRegistry::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df2400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x10);
  iVar4 = 0;
  if (-1 < iVar1) {
    piVar3 = *(int * PTR32 *)(this + 8);
    do {
      if (*piVar3 != -1) break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 <= iVar1);
  }
  if (iVar4 <= iVar1) {
    do {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 4 + iVar4 * 8)));
      if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
      }
      *(undefined4 *)(*param_1 + param_1[1] * 4) = uVar2;
      param_1[1] = param_1[1] + 1;
      iVar1 = *(int *)(this + 0x10);
      iVar4 = iVar4 + 1;
      if (iVar4 <= iVar1) {
        piVar3 = ((int *)GEN_TOP((*(int *)(this + 8) + iVar4 * 8)));
        do {
          if (*piVar3 != -1) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 2;
        } while (iVar4 <= iVar1);
      }
    } while (iVar4 <= iVar1);
  }
  return 0;
}

/* ref: hkDefaultBuiltinTypeRegistry::vf7 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df24a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf24a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  uint local_8;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x20)));
  uVar1 = local_8 >> 8;
  local_8 = uVar1 << 8;
  puVar3[1] = 0x10020;
  *puVar3 = (*(undefined * PTR32 (*)[11])REFP(0x114c4ec));
  puVar3[2] = "hk_2011.3.1-r1";
  F_00da3de0(puVar3 + 3 GEN_EDX_ARG,local_8);
  *puVar3 = (*(undefined * PTR32 (*)[11])REFP(0x114c51c));
  if (REFG(undefined4 * PTR32, 0x15e4028) != (undefined *)0x0) {
    F_00d91840(REFG(undefined4 * PTR32, 0x15e4028) GEN_EDX_ARG);
  }
  REFG(undefined4 * PTR32, 0x15e4028) = puVar3;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x20)));
  local_8 = uVar1 << 8;
  puVar3[1] = 0x10020;
  *puVar3 = (*(undefined * PTR32 (*)[8])REFP(0x114ba00));
  F_00da3de0(puVar3 + 2 GEN_EDX_ARG,local_8);
  puVar3[6] = 1;
  puVar3[7] = 1;
  if (REFG(undefined4 * PTR32, 0x15e402c) != (undefined *)0x0) {
    F_00d91840(REFG(undefined4 * PTR32, 0x15e402c) GEN_EDX_ARG);
  }
  REFG(undefined4 * PTR32, 0x15e402c) = puVar3;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x14)));
  puVar3[1] = 0x10014;
  *puVar3 = (*(undefined * PTR32 (*)[7])REFP(0x114c54c));
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0xffffffff;
  if (REFG(undefined4 * PTR32, 0x15e4030) != (undefined *)0x0) {
    F_00d91840(REFG(undefined4 * PTR32, 0x15e4030) GEN_EDX_ARG);
  }
  REFG(undefined4 * PTR32, 0x15e4030) = puVar3;
  F_00df1880();
  return;
}

/* ref: FUN_00df25b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df25b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf25b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df25f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df25f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf25f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkDynamicClassNameRegistry::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  uint uVar2;
  int iVar3;
  
  pcVar1 = *(gen_code32 *)(*param_1 + 0x14);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  (*pcVar1)(param_1,&(*(int *)(gen_frame + 0x0)));
  iVar3 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_FWD,*(undefined4 *)((*(int *)(gen_frame + 0x0)) + iVar3 * 4),0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (*(int *)(gen_frame + 0x4)));
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar2;
}

/* ref: hkSerializeDeprecated::vf4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df26c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf26c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: hkSerializeDeprecated::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df26d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 * param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xdf26d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;)
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 7;
    F_00d91520(param_6 + 1 GEN_EDX_FWD,
                 "XML packfile support is not linked. Perhaps you have HK_EXCLUDE_FEATURE_SerializeDeprecatedPre700 in hkProductFeatures"
                );
  }
  return 1;
}

/* ref: hkSerializeDeprecated::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf2700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 7;
    F_00d91520(param_3 + 1 GEN_EDX_FWD,
                 "Packfile versioning support is not linked. Versioning packfiles at runtime was deprecated in Havok-7.0.0.\nTo do so requires linking some deprecated code from Source/Common/Compat/Deprecated\nIf you are using hkProductFeatures.cxx, ensure you do not define HK_EXCLUDE_FEATURE_SerializeDeprecatedPre700.\nNote that by default this pulls in a lot of code and data (mainly previous versions of hkClasses).\nSome extra effort is required to strip the unused code and data but it will still cost several hundred Kb.\nAlternatively, you can use Tools/PackfileConvert/AsseetCc2 to convert your packfiles the the latest version before loading.\n"
                );
  }
  return 0;
}

/* ref: hkSerializeDeprecated::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf2730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 7;
    F_00d91520(param_3 + 1 GEN_EDX_FWD,
                 "Packfile versioning support is not linked. Versioning packfiles at runtime was deprecated in Havok-7.0.0.\nTo do so requires linking some deprecated code from Source/Common/Compat/Deprecated\nIf you are using hkProductFeatures.cxx, ensure you do not define HK_EXCLUDE_FEATURE_SerializeDeprecatedPre700.\nNote that by default this pulls in a lot of code and data (mainly previous versions of hkClasses).\nSome extra effort is required to strip the unused code and data but it will still cost several hundred Kb.\nAlternatively, you can use Tools/PackfileConvert/AsseetCc2 to convert your packfiles the the latest version before loading.\n"
                );
  }
  return 0;
}

/* ref: FUN_00df2760 */
GEN_LIB GEN_NOFRAME uint F_00df2760(void)
{
  GEN_ENTER(0xdf2760u, 0u, 0u, 0u, 0u);
  if ((*(uint *)&REFG(undefined, 0x15e3760) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e3760) = *(uint *)&REFG(undefined, 0x15e3760) | 1;
    *(undefined2 *)&REFG(undefined, 0x15e375e) = 1;
    *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x15e3758) = (*(undefined * PTR32 (*)[7])REFP(0x114c7fc));
    F_00c47de6(((code *)REFP(0x107ccf0)));
  }
  return 0x15e3758;
}

/* ref: FUN_00df27d0 */
GEN_LIB GEN_FRAME uint F_00df27d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf27d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkSerializeDeprecated::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df2840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf2840u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char * pcVar1;
  
  pcVar1 = (char *)F_0105a5b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(int)&(*(undefined4 *)&gen_args[2]) + 3,(*(undefined4 *)&gen_args[2]));
  *(bool *)(*(uint *)&gen_args[1]) = *pcVar1 == '\0';
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00df2870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(int *)this = param_1;
  uVar1 = F_00da0e60(param_1);
  *(uint *)((int)this + 4) = uVar1 + param_1;
  return (uint)this;
}

/* ref: FUN_00df28a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df28a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf28a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *in_ecx = param_2;
  in_ecx[1] = param_2 + param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00df28d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df28d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf28d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(bool *)param_2 = *in_ecx == 9;
  return param_2;
}

/* ref: FUN_00df28f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df28f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf28f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(bool *)param_2 = *in_ecx == 8;
  return param_2;
}

/* ref: FUN_00df2910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2910(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(bool *)param_2 = *in_ecx == 2;
  return param_2;
}

/* ref: FUN_00df2930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2930(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(bool *)param_2 = *in_ecx == 3;
  return param_2;
}

/* ref: FUN_00df2960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(uint *)(in_ecx + 0xc + param_2 * 4);
}

/* ref: FUN_00df2980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdf2980u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00df29a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df29a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf29a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    *(short *)(uVar2 + 6) = *(short *)(uVar2 + 6) + 1;
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
  }
  puVar3 = *(undefined4 * PTR32 *)this;
  if (puVar3 != (undefined4 *)0x0) {
    *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) - 1;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_FWD,1);
      uVar2 = *param_1;
      *(uint *)this = uVar2;
      return uVar2;
    }
    *(uint *)this = *param_1;
    return 0xffffffff;
  }
  *(uint *)this = *param_1;
  return uVar2;
}

/* ref: FUN_00df2a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this GEN_EDX_FWD,*(undefined4 *)((int)this + 4),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00df2a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf2a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x40))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,*(undefined4 *)((int)this + 4),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df2a60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf2a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x48))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,*(undefined4 *)((int)this + 4),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df2a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this GEN_EDX_FWD,*(undefined4 *)((int)this + 4),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00df2ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf2ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x58))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,*(undefined4 *)((int)this + 4),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df2b10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df2b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf2b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00e1bd60((undefined *)((int)this + 8) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00df2b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf2b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char * pcVar1;
  char cVar2;
  undefined * this_00;
  uint uVar3;
  char * pcVar4;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x78) + 0x2c))))(*(int * PTR32 *)((int)this + 0x78) GEN_EDX_FWD)));
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 0x62: ;
    uVar3 = F_00da0d20(param_1,&REFG(undefined, 0x114c8bc));
    if (uVar3 == 0) {
      return *(uint *)((int)this_00 + 0x14);
    }
    break;
  case 0x69: ;
    uVar3 = F_00da0d20(param_1,(*(undefined * PTR32 (*)[1])REFP(0x112673c)));
    if (uVar3 == 0) {
      return *(uint *)((int)this_00 + 0x1c);
    }
    break;
  case 0x72: ;
    uVar3 = F_00da0d20(param_1,&REFG(undefined, 0x114c8b4));
    if (uVar3 == 0) {
      return *(uint *)((int)this_00 + 0x18);
    }
    uVar3 = F_00da0d20(param_1,(*(undefined * PTR32 (*)[1])REFP(0x114c8b0)));
    if (uVar3 == 0) {
      uVar3 = F_00e1a240(this_00 GEN_EDX_ARG,param_2);
      uVar3 = F_00e1a640(this_00 GEN_EDX_ARG,uVar3);
      return uVar3;
    }
    break;
  case 0x73: ;
    uVar3 = F_00da0d20(param_1,"string");
    if (uVar3 == 0) {
      return *(uint *)((int)this_00 + 0x20);
    }
    uVar3 = F_00da0d20(param_1,"struct");
    if (uVar3 == 0) {
      uVar3 = F_00e1a240(this_00 GEN_EDX_ARG,param_2);
      return uVar3;
    }
    break;
  case 0x76: ;
    uVar3 = F_00da0d20(param_1,&REFG(undefined, 0x1126468));
    if (uVar3 == 0) {
      return *(uint *)((int)this_00 + 0x10);
    }
    uVar3 = F_00da0d60(param_1,(*(undefined * PTR32 (*)[1])REFP(0x1147328)),3);
    if (uVar3 == 0) {
      cVar2 = param_1[3];
      pcVar1 = param_1 + 3;
      pcVar4 = pcVar1;
      if (cVar2 == '\0') {
LAB_00df2bb2: ;
        if (*pcVar4 != '\0') {
          return 0;
        }
      }
      else {
        do {
          if ((cVar2 < '0') || ('9' < cVar2)) goto LAB_00df2bb2;
          cVar2 = pcVar4[1];
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
      }
      uVar3 = F_00da0e80(pcVar1,0);
      uVar3 = F_00e1a6a0(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this_00 + 0x18),uVar3);
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00df2ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf2ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  char * pcVar2;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00e1c430((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x4)));
  if (uVar1 == 0) {
    pcVar2 = (char *)F_0105a5b0(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[2]) + 3,"\"true\"");
    if (*pcVar2 != '\0') {
      *(*(undefined1 * PTR32 *)&gen_args[1]) = 1;
      return (uint)(*(undefined1 * PTR32 *)&gen_args[1]);
    }
    pcVar2 = (char *)F_0105a5b0(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[2]) + 3,"\"false\"");
    if (*pcVar2 != '\0') {
      *(*(undefined1 * PTR32 *)&gen_args[1]) = 0;
      return (uint)(*(undefined1 * PTR32 *)&gen_args[1]);
    }
  }
  *(*(undefined1 * PTR32 *)&gen_args[1]) = (undefined1)(*(undefined4 *)&gen_args[3]);
  return (uint)(*(undefined1 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00df2d60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df2d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf2d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x74);
  while (uVar1 == 5) {
    uVar1 = F_00e1c9e0(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_00df2d80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da4190((undefined *)((int)this + 0xb4) GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: FUN_00df2da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf2da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  this_00 = (undefined *)((int)this + 0xb4);
  (*(uint *)(gen_frame + 0x4)) = F_00da3970(this_00 GEN_EDX_FWD);
  F_00da3e40(this_00 GEN_EDX_ARG,&(*(char *)(gen_frame + 0xb)),(*(uint *)(gen_frame + 0x4)));
  if ((*(char *)(gen_frame + 0xb)) == '\0') {
    return 0;
  }
  do {
    piVar4 = (int *)F_00da39b0(this_00 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)));
    if (*piVar4 == 0) {
      return 1;
    }
    iVar5 = 0;
    if (0 < piVar4[2]) {
      do {
        puVar2 = (undefined4 *)*piVar4;
        if (puVar2 != (undefined4 *)0x0) {
          *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
          puVar2[2] = puVar2[2] + 1;
        }
        puVar1 = (undefined4 *)(piVar4[1] + iVar5 * 8);
        piVar3 = (int *)*puVar1;
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3 GEN_EDX_ARG,puVar1[1],puVar2);
        if (puVar2 != (undefined4 *)0x0) {
          *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) - 1;
          piVar3 = puVar2 + 2;
          *piVar3 = *piVar3 - 1;
          if (*piVar3 == 0) {
            ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar4[2]);
    }
    iVar5 = 0;
    if (0 < piVar4[5]) {
      do {
        piVar3 = *(int * PTR32 *)(piVar4[4] + iVar5 * 8);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)(piVar4[4] + iVar5 * 8 + 4),*piVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar4[5]);
    }
    (*(uint *)(gen_frame + 0x4)) = F_00da39f0(this_00 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)));
    F_00da3e40(this_00 GEN_EDX_ARG,&(*(char *)(gen_frame + 0xb)),(*(uint *)(gen_frame + 0x4)));
  } while ((*(char *)(gen_frame + 0xb)) != '\0');
  return 0;
}

/* ref: FUN_00df2eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2eb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  int * piVar2;
  undefined1 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined * this_00;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  iVar7 = (*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1]);
  iVar1 = iVar7 + 1;
  (*(undefined * PTR32 *)(gen_frame + 0x98)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x18));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000080;
  if (0x80 < iVar1) {
    iVar4 = 0x100;
    if (0xff < iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),iVar4,1);
  }
  (*(int *)(gen_frame + 0x10)) = iVar1;
  F_00da0e40((*(undefined1 * PTR32 *)(gen_frame + 0xc)),*piVar2,iVar7);
  puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0xc));
  (*(undefined1 * PTR32 *)(gen_frame + 0xc))[iVar7] = 0;
  this_00 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x98)) + 0x98);
  uVar5 = F_00da3ae0(this_00 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0xc)));
  F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[1]) + 3,uVar5);
  if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) == '\0') {
    uVar6 = F_00da0f10(puVar3,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20(this_00 GEN_EDX_ARG,uVar6,1);
  }
  else {
    uVar6 = F_00da3990(this_00 GEN_EDX_ARG,uVar5);
    F_00da39d0(this_00 GEN_EDX_ARG,uVar5,1);
  }
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff)
    ;
  }
  return uVar6;
}

/* ref: FUN_00df2fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf2fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint uVar2;
  
  uVar2 = F_00e1c480(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_00df2eb0(this GEN_EDX_ARG,uVar2);
  if (*(uint *)((int)this + 0xac) == (*(uint *)((int)this + 0xb0) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0xa8),4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xa8) + *(int *)((int)this + 0xac) * 4)));
  *puVar1 = uVar2;
  *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df3040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf3040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00df2d60(this GEN_EDX_FWD);
  uVar1 = F_00e1c480(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_00df2eb0(this GEN_EDX_ARG,uVar1);
  if ((0 < *(int *)((int)this + 0xac)) &&
     (uVar1 == *((uint *)GEN_TOP((*(int *)((int)this + 0xa8) - 4 + *(int *)((int)this + 0xac) * 4))))) {
    F_00e1c9e0(this GEN_EDX_ARG);
    *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) - 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00df30a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df30a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf30a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  char * pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) == 1) {
    iVar3 = (int)&(*(undefined4 *)&gen_args[1]) + 3;
    uVar4 = (*(undefined4 *)&gen_args[1]);
    this_00 = (undefined *)F_00e1c480((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)));
    pcVar1 = (char *)F_0105a5b0(this_00 GEN_EDX_ARG,iVar3,uVar4);
    if (*pcVar1 != '\0') {
      F_00df2fe0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      uVar2 = F_00df2d60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      if (uVar2 == 4) {
        uVar4 = (*(undefined4 *)&gen_args[2]);
        uVar2 = F_00e1c4c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
        uVar2 = F_00e1c0f0(uVar2,uVar4);
        if (uVar2 != 0) {
          return uVar2;
        }
        F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        uVar2 = F_00df3040((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        return uVar2;
      }
    }
  }
  return 1;
}

/* ref: FUN_00df3130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3130u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  char * pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) == 1) {
    iVar3 = (int)&(*(undefined4 *)&gen_args[1]) + 3;
    uVar4 = (*(undefined4 *)&gen_args[1]);
    this_00 = (undefined *)F_00e1c480((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)));
    pcVar1 = (char *)F_0105a5b0(this_00 GEN_EDX_ARG,iVar3,uVar4);
    if (*pcVar1 != '\0') {
      F_00df2fe0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      uVar2 = F_00df2d60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      if (uVar2 == 4) {
        uVar4 = (*(undefined4 *)&gen_args[2]);
        uVar2 = F_00e1c4c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
        uVar2 = F_00e1c170(uVar2,uVar4);
        if (uVar2 != 0) {
          return uVar2;
        }
        F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        uVar2 = F_00df3040((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        return uVar2;
      }
    }
  }
  return 1;
}

/* ref: FUN_00df31c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df31c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf31c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  int iVar3;
  
  F_00df2fe0(this GEN_EDX_FWD);
  F_00e1c9e0(this GEN_EDX_ARG);
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < param_2) {
    do {
      uVar1 = F_00df2d60(this GEN_EDX_ARG);
      if (uVar1 != 4) {
        return 1;
      }
      F_00e1c4c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      uVar1 = F_00e1c170((uint)((undefined1 *)(gen_frame + 0x4)),iVar2);
      if (uVar1 != 0) {
        return uVar1;
      }
      F_00e1c9e0(this GEN_EDX_ARG);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < param_2);
  }
  uVar1 = F_00df3040(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00df3240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf3240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_2 + 0x14))((int *)*param_2 GEN_EDX_FWD);
  iVar3 = 0;
  if (0 < (int)uVar1) {
    do {
      F_00df2d60(this GEN_EDX_ARG);
      if (*(int *)((int)this + 0x74) == 1) {
        uVar2 = F_00df30a0(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x14)));
        if (uVar2 != 0) {
          return uVar2;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_2 + 0x58))((int *)*param_2 GEN_EDX_ARG,iVar3,(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)));
      }
      else {
        if (*(int *)((int)this + 0x74) != 4) {
          return 1;
        }
        F_00e1c4c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
        uVar2 = F_00e1c0f0(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0xc)));
        if (uVar2 != 0) {
          return uVar2;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_2 + 0x58))((int *)*param_2 GEN_EDX_ARG,iVar3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)));
        F_00e1c9e0(this GEN_EDX_ARG);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  return 0;
}

/* ref: FUN_00df3300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3300u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  
  uVar2 = (*(uint *)&gen_args[2]);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[2]) + 0x14))))(*(int * PTR32 *)(*(uint *)&gen_args[2]) GEN_EDX_FWD);
  iVar4 = 0;
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  if (0 < (int)uVar3) {
    do {
      F_00df2d60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) == 1) {
        uVar3 = F_00df3130((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),&(*(uint *)&gen_args[2]));
        if (uVar3 != 0) {
          return uVar3;
        }
        piVar1 = *(int * PTR32 *)uVar2;
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1 GEN_EDX_ARG,iVar4,(*(uint *)&gen_args[2]));
      }
      else {
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) != 4) {
          return 1;
        }
        puVar5 = &(*(undefined4 *)(gen_frame + 0x18));
        uVar3 = F_00e1c4c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
        uVar3 = F_00e1c170(uVar3,puVar5);
        if (uVar3 != 0) {
          return uVar3;
        }
        piVar1 = *(int * PTR32 *)uVar2;
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1 GEN_EDX_ARG,iVar4,(*(undefined4 *)(gen_frame + 0x18)));
        F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x14)));
  }
  return 0;
}

