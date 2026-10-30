#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00daee80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daee80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaee80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd9c0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[0]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[0]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00daeec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daeec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaeec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00daeee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daeee0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaeee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00daef00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daef00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaef00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbe450(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00daef60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daef60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaef60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00daefb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daefb0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaefb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00daefc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daefc0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaefc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00daf020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf020(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00daf040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf040(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00daf080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf080(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x24;
}

/* ref: FUN_00daf0a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf0a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x24;
}

/* ref: FUN_00daf0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf0d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf0d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00daf0f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf0f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00daf150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf150(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_00daf160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf160(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_00daf1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf1b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00daf1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf1f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00daf200 */
GEN_LIB GEN_FRAME byte F_00daf200(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaf200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 != -1;
}

/* ref: FUN_00daf210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdaf210u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00daf240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
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

/* ref: FUN_00daf290 */
GEN_LIB GEN_FRAME unsigned int F_00daf290(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00daf2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdaf2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00daf320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00daf390 */
GEN_LIB GEN_FRAME unsigned int F_00daf390(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00daf3c0 */
GEN_LIB GEN_NOFRAME unsigned int F_00daf3c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdaf3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int local_14;
  
  do {
    local_14 = param_2;
    uVar2 = *((undefined4 *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 4)));
    iVar6 = param_3;
    do {
      uVar5 = (*param_4)(*((undefined4 *)GEN_TOP((param_1 + local_14 * 4))),uVar2);
      cVar4 = (char)uVar5;
      while (cVar4 != '\0') {
        iVar1 = local_14 * 4;
        local_14 = local_14 + 1;
        uVar5 = (*param_4)(*((undefined4 *)GEN_TOP((param_1 + 4 + iVar1))),uVar2);
        cVar4 = (char)uVar5;
      }
      uVar5 = (*param_4)(uVar2,*((undefined4 *)GEN_TOP((param_1 + iVar6 * 4))));
      cVar4 = (char)uVar5;
      while (cVar4 != '\0') {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 - 1;
        uVar5 = (*param_4)(uVar2,*((undefined4 *)GEN_TOP((param_1 - 4 + iVar1))));
        cVar4 = (char)uVar5;
      }
      if (iVar6 < local_14) break;
      if (iVar6 != local_14) {
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + iVar6 * 4)));
        *((undefined4 *)GEN_TOP((param_1 + iVar6 * 4))) = *((undefined4 *)GEN_TOP((param_1 + local_14 * 4)));
        *((undefined4 *)GEN_TOP((param_1 + local_14 * 4))) = uVar3;
      }
      local_14 = local_14 + 1;
      iVar6 = iVar6 - 1;
    } while (local_14 <= iVar6);
    if (param_2 < iVar6) {
      F_00daf3c0(param_1,param_2,iVar6,param_4);
    }
    param_2 = local_14;
    if (param_3 <= local_14) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00daf4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdaf4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00daf500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: FUN_00daf540 */
GEN_LIB GEN_FRAME unsigned int F_00daf540(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (3 < param_2) {
    iVar2 = (param_2 - 4U >> 2) + 1;
    iVar3 = iVar2 * 4;
    puVar1 = ((undefined8 *)GEN_TOP((param_1 + 0x10)));
    do {
      iVar2 = iVar2 - 1;
      puVar1[-2] = *param_3;
      puVar1[-1] = *param_3;
      *puVar1 = *param_3;
      puVar1[1] = *param_3;
      puVar1 = puVar1 + 4;
    } while (iVar2 != 0);
  }
  while (iVar3 < param_2) {
    iVar3 = iVar3 + 1;
    *((undefined8 *)GEN_TOP((param_1 - 8 + iVar3 * 8))) = *param_3;
  }
  return;
}

/* ref: FUN_00daf5a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00d914e0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_00daf5c0 */
GEN_LIB GEN_FRAME uint F_00daf5c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00daf5d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00daf600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00daf660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00daf680 */
GEN_LIB GEN_FRAME uint F_00daf680(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00daf6a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x70);
  return uVar1;
}

/* ref: FUN_00daf6c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00daf6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00daf730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x24);
  return uVar1;
}

/* ref: FUN_00daf750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00d91480(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00daf770 */
GEN_LIB GEN_FRAME uint F_00daf770(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaf770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00daf790 */
GEN_LIB GEN_FRAME unsigned int F_00daf790(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaf790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x70);
  }
  return;
}

/* ref: FUN_00daf7c0 */
GEN_LIB GEN_FRAME uint F_00daf7c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaf7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00daf7e0 */
GEN_LIB GEN_FRAME unsigned int F_00daf7e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaf7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,0x88);
  }
  return;
}

/* ref: FUN_00daf820 */
GEN_LIB GEN_FRAME uint F_00daf820(GEN_P(int param_1, unsigned int gen_a0), GEN_P(double param_2, double gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf820u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint * puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *((int *)GEN_TOP((param_1 + 0x4c)));
  iVar7 = 0;
  if (2 < iVar6) {
    iVar4 = 0;
    do {
      iVar3 = iVar6 + iVar4 >> 1;
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar3 * 4)));
      iVar7 = iVar4;
      if (*((int *)GEN_TOP((iVar1 + 0x6c))) == 2) break;
      iVar7 = iVar3;
      if (param_2 < *((double *)GEN_TOP((iVar1 + 0x58)))) {
        iVar7 = iVar4;
        iVar6 = iVar3;
      }
      iVar4 = iVar7;
    } while (2 < iVar6 - iVar7);
  }
  if (iVar7 < iVar6) {
    puVar5 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar7 * 4)));
    while ((uVar2 = *puVar5, *((int *)GEN_TOP((uVar2 + 0x6c))) == 2 ||
           (!(param_2 <= (double)*((float *)GEN_TOP((uVar2 + param_3 * 4))) + *((double *)GEN_TOP((uVar2 + 0x58))))))) {
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
      if (iVar6 <= iVar7) {
        return 0;
      }
    }
    if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*((double *)GEN_TOP((uVar2 + 0x58))))) && !(param_2 < *((double *)GEN_TOP((uVar2 + 0x58))))
       ) {
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00daf960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00daf9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf9a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dafa10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafa10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafa10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dafa30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafa30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdafa30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00dafa50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdafa50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  if (param_1 != 0) {
    F_00dbe450(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00dafaa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafaa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dafae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dafb10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafb10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00dafb50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafb50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdafb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00dafb60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dafba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdafba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = param_1 + iVar1;
  return *(int *)this + iVar1;
}

/* ref: FUN_00dafbe0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dafbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdafbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00dafc10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafc10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdafc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00dafc20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafc20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00dafc60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdafc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dafc80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafc80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
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

/* ref: FUN_00dafcc0 */
GEN_LIB GEN_FRAME unsigned int F_00dafcc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdafcc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (1 < param_2) {
    F_00daf3c0(param_1,0,param_2 - 1,param_3);
  }
  return;
}

/* ref: FUN_00dafcf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafcf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined8 uVar1;
  int iVar2;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((param_1 * 8)));
    param_1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    iVar4 = (int)(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f & 7U) + (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 3;
    if (iVar4 != 0) goto LAB_00dafd4d;
  }
  iVar4 = ((int)0x80000000);
LAB_00dafd4d: ;
  iVar5 = 0;
  *((int *)GEN_TOP(((int)this + 8))) = iVar4;
  *(uint *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  if (3 < iVar2) {
    iVar4 = (iVar2 - 4U >> 2) + 1;
    iVar5 = iVar4 * 4;
    puVar3 = ((undefined8 *)GEN_TOP((param_1 + 0x10)));
    do {
      iVar4 = iVar4 - 1;
      puVar3[-2] = *param_2;
      puVar3[-1] = *param_2;
      *puVar3 = *param_2;
      puVar3[1] = *param_2;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
  }
  while (iVar5 < iVar2) {
    uVar1 = *param_2;
    iVar5 = iVar5 + 1;
    *((undefined8 *)GEN_TOP(((param_1 - 8) + iVar5 * 8))) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00dafdb0 */
GEN_LIB GEN_FRAME uint F_00dafdb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdafdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1 * 4);
  return uVar2;
}

/* ref: FUN_00dafde0 */
GEN_LIB GEN_FRAME uint F_00dafde0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdafde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1);
  return uVar2;
}

/* ref: FUN_00dafe10 */
GEN_LIB GEN_FRAME uint F_00dafe10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdafe10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00dafe50 */
GEN_LIB GEN_FRAME uint F_00dafe50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdafe50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + param_1 == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != param_1)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00dafea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdafea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dafec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdafec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dafee0 */
GEN_LIB GEN_FRAME unsigned int F_00dafee0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdafee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00d914e0(this GEN_EDX_ARG,param_3);
        *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_3 + 4)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 8)));
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00daff10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daff10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaff10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00daff50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daff50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaff50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00daff90 */
GEN_LIB GEN_FRAME unsigned int F_00daff90(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaff90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00da9f50(this GEN_EDX_ARG);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x24)));
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00daffc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daffc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaffc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0000 */
GEN_LIB GEN_FRAME unsigned int F_00db0000(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb0000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      puVar1 = ((undefined8 *)GEN_TOP(((int)puVar1 + 0xc)));
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00db0030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb0030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x70);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db0090 */
GEN_LIB GEN_FRAME unsigned int F_00db0090(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb0090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00db00f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db00f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb00f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db0130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db0160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00db01a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db01a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb01a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db01e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db01e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb01e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00db0220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00db0260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db02e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db02e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb02e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00db0310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb0310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  uVar1 = *(uint *)this;
  this_00 = ((undefined *)GEN_TOP((uVar1 + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d914e0(this_00 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)this_00 + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: FUN_00db0360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x24);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x24)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00da9f50(this_00 GEN_EDX_ARG);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x24;
}

/* ref: FUN_00db03b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db03b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb03b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db0400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0480 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db04c0 */
GEN_LIB GEN_FRAME unsigned int F_00db04c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb04c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00db04f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db04f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb04f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0570 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 * puVar1;
  
  *((undefined1 *)GEN_TOP((*(int *)this - 1 + *((int *)GEN_TOP(((int)this + 4)))))) = 0x20;
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  *((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4)))))) = 0x20;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db05e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db05e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb05e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 * puVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,1,1);
  }
  puVar1 = *(undefined1 * PTR32 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: FUN_00db0620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (*((uint *)GEN_TOP(((int)this + 4))) == uVar1) {
    uVar1 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d914e0(this_00 GEN_EDX_ARG,param_1);
    uVar1 = *((uint *)GEN_TOP((param_1 + 4)));
    *((uint *)GEN_TOP(((int)this_00 + 4))) = uVar1;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: FUN_00db0670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db06c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db06c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb06c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0700 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000010;
  return (uint)this;
}

/* ref: FUN_00db07a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db07a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb07a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000006;
  return (uint)this;
}

/* ref: FUN_00db07c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db07c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb07c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0840 */
GEN_LIB GEN_FRAME unsigned int F_00db0840(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + iVar1 * 0x24)));
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 0x24)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00db0890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0890(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00daae40(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x70);
  }
  return (uint)param_1;
}

/* ref: FUN_00db08d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db08d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb08d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,0x40,1);
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *(int *)this))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)this;
}

/* ref: FUN_00db0930 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0970 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db09b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db09b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb09b0u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
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

/* ref: FUN_00db0a20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0a20u, gen_a0, 0u, 0u, 0u);
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
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00db0ab0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0af0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 0x24)));
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: FUN_00db0b20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0b60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0ba0 */
GEN_LIB GEN_FRAME unsigned int F_00db0ba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0x50)));
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x50))) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
      }
      puVar1 = puVar1 + 0x1c;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00db0bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 0x24)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0c30 */
GEN_LIB GEN_FRAME unsigned int F_00db0c30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((iVar1 * 0x70 + param_1)));
    do {
      F_00daae40(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 0x70)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00db0c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb0c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  iVar5 = iVar1 + param_2;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,0x70);
  }
  if (0 < param_2) {
    puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x70 + *(int *)this + 0x50)));
    iVar5 = param_2;
    do {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x50))) {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
      }
      puVar4 = puVar4 + 0x1c;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  return iVar1 * 0x70 + *(int *)this;
}

/* ref: FUN_00db0d10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 0x24)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       ((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  iVar5 = iVar1 + param_1;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,0x70);
  }
  if (0 < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x70 + *(int *)this + 0x50)));
    iVar5 = param_1;
    do {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x50))) {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
      }
      puVar4 = puVar4 + 0x1c;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return iVar1 * 0x70 + *(int *)this;
}

/* ref: FUN_00db0df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x70 + *(int *)this)));
    do {
      F_00daae40(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x70)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x70);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0e50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 0x24)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       ((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0f10(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  undefined * this;
  int iVar3;
  
  iVar3 = param_1[1] - 1;
  if (-1 < iVar3) {
    this = ((undefined *)GEN_TOP((*param_1 + iVar3 * 0x24)));
    do {
      F_00d91510(this GEN_EDX_FWD);
      this = ((undefined *)GEN_TOP(((int)this - 0x24)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *param_1 = 0;
  param_1[2] = ((int)0x80000000);
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00db0fa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x70 + *(int *)this)));
    do {
      F_00daae40(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x70)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x70);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db1000 */
GEN_LIB GEN_FRAME unsigned int F_00db1000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined * this;
  int iVar3;
  int * piVar4;
  
  iVar2 = param_2 - 1;
  if (-1 < iVar2) {
    piVar4 = ((int *)GEN_TOP((param_1 + iVar2 * 0xc)));
    do {
      iVar3 = piVar4[1] - 1;
      if (-1 < iVar3) {
        this = ((undefined *)GEN_TOP((*piVar4 + iVar3 * 0x24)));
        do {
          F_00d91510(this GEN_EDX_ARG);
          this = ((undefined *)GEN_TOP(((int)this - 0x24)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 - 1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 - 3;
    } while (-1 < iVar2);
  }
  return;
}

/* ref: FUN_00db1090 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db1090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (iVar2 < 0) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return 0;
  }
  piVar4 = ((int *)GEN_TOP((*(int *)this + iVar2 * 0xc)));
  do {
    iVar3 = piVar4[1] - 1;
    if (-1 < iVar3) {
      this_00 = ((undefined *)GEN_TOP((*piVar4 + iVar3 * 0x24)));
      do {
        F_00d91510(this_00 GEN_EDX_FWD);
        this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
        iVar3 = iVar3 - 1;
      } while (-1 < iVar3);
    }
    uVar1 = piVar4[2];
    piVar4[1] = 0;
    if (-1 < (int)uVar1) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
    }
    iVar2 = iVar2 - 1;
    *piVar4 = 0;
    piVar4[2] = ((int)0x80000000);
    piVar4 = piVar4 - 3;
  } while (-1 < iVar2);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return 0;
}

/* ref: FUN_00db1170 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db1170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x80))) - 1;
  if (-1 < iVar3) {
    pvVar2 = ((undefined *)GEN_TOP((iVar3 * 0x70 + *((int *)GEN_TOP(((int)this + 0x7c))))));
    do {
      F_00daae40(pvVar2 GEN_EDX_FWD);
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x70)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x84)));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),*((undefined4 *)GEN_TOP(((int)this + 0x7c))),(uVar1 & 0x3fffffff) * 0x70);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0x80000000;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x74))) - 1;
  if (-1 < iVar3) {
    pvVar2 = ((undefined *)GEN_TOP((iVar3 * 0x70 + *((int *)GEN_TOP(((int)this + 0x70))))));
    do {
      F_00daae40(pvVar2 GEN_EDX_ARG);
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x70)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x78)));
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),*((undefined4 *)GEN_TOP(((int)this + 0x70))),(uVar1 & 0x3fffffff) * 0x70);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0x80000000;
  uVar1 = F_00daae40(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00db1230 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db1230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  int iVar4;
  int * piVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0xc);
  }
  iVar3 = (*((int *)GEN_TOP(((int)this + 4))) - param_2) - 1;
  if (-1 < iVar3) {
    piVar5 = ((int *)GEN_TOP((*(int *)this + param_2 * 0xc + iVar3 * 0xc)));
    do {
      iVar4 = piVar5[1] - 1;
      if (-1 < iVar4) {
        this_00 = ((undefined *)GEN_TOP((*piVar5 + iVar4 * 0x24)));
        do {
          F_00d91510(this_00 GEN_EDX_ARG);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
          iVar4 = iVar4 - 1;
        } while (-1 < iVar4);
      }
      uVar1 = piVar5[2];
      piVar5[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar5,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar3 = iVar3 - 1;
      *piVar5 = 0;
      piVar5[2] = ((int)0x80000000);
      piVar5 = piVar5 - 3;
    } while (-1 < iVar3);
  }
  iVar3 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc)));
  if (0 < iVar3) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: FUN_00db1330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    piVar4 = ((int *)GEN_TOP((*(int *)this + iVar2 * 0xc)));
    do {
      iVar3 = piVar4[1] - 1;
      if (-1 < iVar3) {
        this_00 = ((undefined *)GEN_TOP((*piVar4 + iVar3 * 0x24)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 - 1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 - 3;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db1400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1400(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00db1170(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,0x88);
  }
  return (uint)param_1;
}

/* ref: FUN_00db1440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    piVar4 = ((int *)GEN_TOP((*(int *)this + iVar2 * 0xc)));
    do {
      iVar3 = piVar4[1] - 1;
      if (-1 < iVar3) {
        this_00 = ((undefined *)GEN_TOP((*piVar4 + iVar3 * 0x24)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 - 1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 - 3;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db1510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    piVar4 = ((int *)GEN_TOP((*(int *)this + iVar2 * 0xc)));
    do {
      iVar3 = piVar4[1] - 1;
      if (-1 < iVar3) {
        this_00 = ((undefined *)GEN_TOP((*piVar4 + iVar3 * 0x24)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 - 1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 - 3;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db15f0 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00db15f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb15f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 4))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00db1640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1640(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00db1650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1650(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00db1680 */
GEN_LIB GEN_FRAME unsigned int F_00db1680(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00db16a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db16a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb16a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00db16c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db16c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb16c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00db16e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db16e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb16e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00db1740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  undefined4 * puVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  char * pcVar5;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  while (iVar2 = iVar2 - 1, -1 < iVar2) {
    puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2 * 8)));
    if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + iVar2 * 8))) == (short)param_1) {
      if (param_2 != ((undefined *)GEN_TOP(0x0))) {
        F_00d919e0(param_2 GEN_EDX_FWD);
      }
      pvVar3 = ((undefined *)GEN_TOP(*puVar1));
      if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(pvVar3 GEN_EDX_ARG);
      }
      *puVar1 = param_2;
    }
  }
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  pcVar5 = ((char *)REFP(0x113ce24));
  pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x113ce0c)))));
  pvVar3 = ((undefined *)GEN_TOP(F_00d9fef0(pvVar3 GEN_EDX_ARG,param_1)));
  F_00d9fe80(pvVar3 GEN_EDX_ARG,pcVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x1d11daed,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x113cde0)),
             0x54);
  uVar4 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00db17f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db17f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb17f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  short * psVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  if (-1 < iVar1) {
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + iVar1 * 8)));
    do {
      if (*psVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar1 * 8)));
      }
      psVar2 = psVar2 - 4;
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00db1820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  short * psVar5;
  int iVar6;
  
  iVar6 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  if (-1 < iVar6) {
    iVar3 = *((int *)GEN_TOP(((int)this + 8)));
    psVar5 = ((short *)GEN_TOP((iVar3 + 4 + iVar6 * 8)));
    do {
      if (*psVar5 == (short)param_1) {
        if (param_2 != ((undefined *)GEN_TOP(0x0))) {
          psVar5 = ((short *)GEN_TOP(F_00d919e0(param_2 GEN_EDX_FWD)));
        }
        this_00 = *((undefined * PTR32 *)GEN_TOP((iVar3 + iVar6 * 8)));
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          psVar5 = ((short *)GEN_TOP(F_00d91a80(this_00 GEN_EDX_ARG)));
        }
        *((undefined * PTR32 *)GEN_TOP((iVar3 + iVar6 * 8))) = param_2;
        return (uint)psVar5;
      }
      psVar5 = psVar5 - 4;
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
  piVar1 = ((int *)GEN_TOP(((int)this + 8)));
  if (*((uint *)GEN_TOP(((int)this + 0xc))) == (*((uint *)GEN_TOP(((int)this + 0x10))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,8);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0xc))) * 8)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0xffff;
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0xc))) * 8)));
  uVar4 = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar4;
  *(short *)(puVar2 + 1) = (short)param_1;
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00d919e0(param_2 GEN_EDX_ARG);
  }
  if (((undefined *)GEN_TOP(*puVar2)) != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00d91a80(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG);
  }
  *puVar2 = param_2;
  return uVar4;
}

/* ref: FUN_00db18e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db18e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb18e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  short * psVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  if (-1 < iVar5) {
    psVar1 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + iVar5 * 8)));
    while (*psVar1 != (short)param_1) {
      psVar1 = psVar1 - 4;
      iVar5 = iVar5 - 1;
      if (iVar5 < 0) {
        return;
      }
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
    iVar4 = iVar5 * 8;
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    *((undefined4 *)GEN_TOP((iVar2 + iVar4))) = 0;
    iVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
    *((int *)GEN_TOP(((int)this + 0xc))) = iVar2;
    if (iVar2 != iVar5) {
      puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar4)));
      iVar5 = (*((int *)GEN_TOP(((int)this + 8))) + iVar2 * 8) - (int)puVar3;
      iVar4 = 2;
      do {
        *puVar3 = *((undefined4 *)GEN_TOP((iVar5 + (int)puVar3)));
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
  }
  return;
}

/* ref: FUN_00db19a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db19a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb19a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x113ce48));
  return (uint)in_ecx;
}

/* ref: FUN_00db19b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db19b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb19b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113ce48));
  iVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar3 * 8))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00db1a60 */
GEN_LIB GEN_FRAME unsigned int F_00db1a60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *(undefined2 *)(puVar1 + 1) = 0xffff;
        *puVar1 = 0;
        *((undefined2 *)GEN_TOP(((int)puVar1 + 6))) = 0;
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00db1aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
    puVar1[1] = 0xffff;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar2 + 1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00db1af0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db1af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
    puVar1[1] = 0xffff;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar2 + 1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00db1b40 */
GEN_LIB GEN_FRAME unsigned int F_00db1b40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 8)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 8 + iVar1 * 8))) = 0;
  }
  return;
}

/* ref: FUN_00db1bb0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db1bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)this;
  iVar3 = param_1 * 8;
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar3)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this_00 GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP((iVar2 + iVar3))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != param_1) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + iVar3)));
    iVar2 = (*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00db1c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar3 * 8))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00db1c80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db1c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar3 * 8))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00db1cf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db1cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar3 * 8))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00db1d60 */
GEN_LIB GEN_FRAME uint F_00db1d60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb1d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkRefCountedProperties::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1d90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00db19b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00db1e00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1e00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00db1e10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1e10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00db1e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
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

/* ref: FUN_00db1e90 */
GEN_LIB GEN_FRAME unsigned int F_00db1e90(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP(((param_2 - (int)param_1) + 8 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00db1ed0 */
GEN_LIB GEN_FRAME unsigned int F_00db1ed0(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + 8 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00db1f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

/* ref: FUN_00db1f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint * puVar4;
  uint in_EDX = 0;
  int iVar5;
  float * pfVar6;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar3 = 0;
  if (uVar1 != 0) {
    pfVar6 = *(float * PTR32 *)this;
    do {
      (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)GEN_ISNAN(pfVar6[1]);
      (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)GEN_ISNAN(*pfVar6);
      (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)GEN_ISNAN(pfVar6[2]);
      (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)GEN_ISNAN(pfVar6[3]);
      in_EDX = gen_movmskps(&(auVar2));
      if ((in_EDX & 7) != 0) goto LAB_00db1fa8;
      uVar3 = uVar3 + 1;
      pfVar6 = pfVar6 + 4;
    } while (uVar3 < uVar1);
  }
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    puVar4 = *((uint * PTR32 *)GEN_TOP(((int)this + 0xc)));
    do {
      if (((uVar1 <= *puVar4) || (uVar1 <= puVar4[1])) || (uVar1 <= puVar4[2])) {
LAB_00db1fa8: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar5 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00db1fd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined8 * puVar9;
  int iVar10;
  int iVar11;
  
  piVar6 = (*(int * PTR32 *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar7 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[0])[1]) {
    if ((uVar7 & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar7 << 4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((piVar6[1] << 4)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar7 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar7;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar10 = piVar6[1];
  puVar8 = *(undefined4 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar10;
  if (0 < iVar10) {
    iVar11 = *piVar6 - (int)puVar8;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((iVar11 + (int)puVar8)));
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8 = puVar8 + 4;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if ((int)(uVar7 & 0x3fffffff) < piVar6[4]) {
    if (-1 < (int)uVar7) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar7 << 4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((piVar6[4] << 4)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar7 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[0]));
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar7;
    *((int *)GEN_TOP(((int)this + 0x14))) = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar10 = piVar6[4];
  puVar9 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  *((int *)GEN_TOP(((int)this + 0x10))) = iVar10;
  if (0 < iVar10) {
    iVar11 = piVar6[3] - (int)puVar9;
    do {
      *puVar9 = *((undefined8 *)GEN_TOP((iVar11 + (int)puVar9)));
      puVar9[1] = *((undefined8 *)GEN_TOP((iVar11 + 8 + (int)puVar9)));
      puVar9 = puVar9 + 2;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00db2110 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db2110(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return in_ecx;
}

/* ref: FUN_00db2120 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float * pfVar1;
  int * piVar2;
  int iVar3;
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
  int iVar19;
  int iVar20;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  F_00db2460(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  iVar20 = *((int *)GEN_TOP(((int)this + 0x10)));
  F_00db2220(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1[3],param_1[4]);
  if (iVar3 < *((int *)GEN_TOP(((int)this + 4)))) {
    iVar19 = iVar3 << 4;
    param_1 = ((undefined4 *)GEN_TOP(iVar3));
    do {
      pfVar1 = ((float *)GEN_TOP((*(int *)this + iVar19)));
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = param_2[1];
      fVar8 = param_2[2];
      fVar9 = param_2[3];
      fVar10 = param_2[5];
      fVar11 = param_2[6];
      fVar12 = param_2[7];
      fVar13 = param_2[9];
      fVar14 = param_2[10];
      fVar15 = param_2[0xb];
      fVar16 = param_2[0xd];
      fVar17 = param_2[0xe];
      fVar18 = param_2[0xf];
      pfVar1 = ((float *)GEN_TOP((*(int *)this + iVar19)));
      *pfVar1 = ((fVar4 * *param_2 + fVar5 * param_2[4]) + fVar6 * param_2[8]) + param_2[0xc];
      pfVar1[1] = ((fVar4 * fVar7 + fVar5 * fVar10) + fVar6 * fVar13) + fVar16;
      pfVar1[2] = ((fVar4 * fVar8 + fVar5 * fVar11) + fVar6 * fVar14) + fVar17;
      pfVar1[3] = ((fVar4 * fVar9 + fVar5 * fVar12) + fVar6 * fVar15) + fVar18;
      param_1 = ((undefined4 *)GEN_TOP(((int)param_1 + 1)));
      iVar19 = iVar19 + 0x10;
    } while ((int)param_1 < *((int *)GEN_TOP(((int)this + 4))));
  }
  if (iVar20 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    iVar19 = iVar20 << 4;
    do {
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar19)));
      *piVar2 = *piVar2 + iVar3;
      piVar2 = ((int *)GEN_TOP((iVar19 + 4 + *((int *)GEN_TOP(((int)this + 0xc))))));
      *piVar2 = *piVar2 + iVar3;
      piVar2 = ((int *)GEN_TOP((iVar19 + 8 + *((int *)GEN_TOP(((int)this + 0xc))))));
      *piVar2 = *piVar2 + iVar3;
      iVar20 = iVar20 + 1;
      iVar19 = iVar19 + 0x10;
    } while (iVar20 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  return 0;
}

/* ref: FUN_00db2220 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb2220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  undefined8 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *((int *)GEN_TOP(((int)this + 4))) + param_3;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(param_1,this,iVar4,0x10);
  }
  puVar2 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      *puVar2 = *((undefined8 *)GEN_TOP((iVar3 + (int)puVar2)));
      puVar2[1] = *((undefined8 *)GEN_TOP((iVar3 + 8 + (int)puVar2)));
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  return 0;
}

/* ref: FUN_00db22a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db22a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb22a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined8 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar3 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar3) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)this,uVar3 << 4);
    }
    pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc)));
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((piVar2[1] << 4)));
    uVar3 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)this = uVar3;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined8 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *((undefined8 *)GEN_TOP((iVar5 + (int)puVar4)));
      puVar4[1] = *((undefined8 *)GEN_TOP((iVar5 + 8 + (int)puVar4)));
      puVar4 = puVar4 + 2;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00db2340 */
GEN_LIB GEN_FRAME unsigned int F_00db2340(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (0 < param_3) {
    puVar5 = param_1;
    iVar6 = param_3;
    do {
      puVar1 = ((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return;
}

/* ref: FUN_00db2370 */
GEN_LIB GEN_FRAME unsigned int F_00db2370(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (0 < param_2) {
    puVar5 = param_1;
    iVar6 = param_2;
    do {
      puVar1 = ((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return;
}

/* ref: FUN_00db23a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db23a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb23a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined8 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar3 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)uVar3) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 << 4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((piVar2[1] << 4)));
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar3;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined8 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *((undefined8 *)GEN_TOP((iVar5 + (int)puVar4)));
      puVar4[1] = *((undefined8 *)GEN_TOP((iVar5 + 8 + (int)puVar4)));
      puVar4 = puVar4 + 2;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00db2440 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00db2220(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return;
}

/* ref: FUN_00db2460 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb2460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *((int *)GEN_TOP(((int)this + 4))) + param_3;
  uVar5 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar5 < iVar9) {
    iVar8 = uVar5 * 2;
    if (iVar8 <= iVar9) {
      iVar8 = iVar9;
    }
    F_00d95690(param_1,this,iVar8,0x10);
  }
  puVar6 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  if (0 < param_3) {
    iVar7 = param_2 - (int)puVar6;
    iVar8 = param_3;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((iVar7 + (int)puVar6)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      puVar6 = puVar6 + 4;
      iVar8 = iVar8 - 1;
    } while (iVar8 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar9;
  return 0;
}

/* ref: FUN_00db24d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db24d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb24d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  
  piVar6 = (*(int * PTR32 *)&gen_args[1]);
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar7 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar7) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)this,uVar7 << 4);
    }
    pcVar2 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc)));
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((piVar6[1] << 4)));
    uVar7 = (*pcVar2)((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)this = uVar7;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar10 = piVar6[1];
  puVar8 = *(undefined4 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar10;
  if (0 < iVar10) {
    iVar9 = *piVar6 - (int)puVar8;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((iVar9 + (int)puVar8)));
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8 = puVar8 + 4;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00db2550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  
  piVar6 = (*(int * PTR32 *)&gen_args[0]);
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar7 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)uVar7) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar7 << 4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((piVar6[1] << 4)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar7 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar7;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar10 = piVar6[1];
  puVar8 = *(undefined4 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar10;
  if (0 < iVar10) {
    iVar9 = *piVar6 - (int)puVar8;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((iVar9 + (int)puVar8)));
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8 = puVar8 + 4;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00db25e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db25e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb25e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  F_00db2220(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return;
}

/* ref: FUN_00db2600 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00db2460(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return;
}

/* ref: FUN_00db2620 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  F_00db2460(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return;
}

/* ref: FUN_00db2640 */
GEN_LIB GEN_FRAME uint F_00db2640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xdb2640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = ((code *)REFG(gen_code32, 0x135271c))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00db2660 */
GEN_LIB GEN_FRAME uint F_00db2660(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  F_00da46f0(param_2 GEN_EDX_ARG,param_1);
  F_00da45a0(param_2 GEN_EDX_ARG,0x2f,0x5c,1);
  return *param_2;
}

/* ref: FUN_00db2690 */
GEN_LIB GEN_FRAME uint F_00db2690(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_00da46f0(param_2 GEN_EDX_ARG,param_1);
  F_00da45a0(param_2 GEN_EDX_ARG,0x5c,0x2f,1);
  F_00da51f0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x113ce68),&REFG(undefined, 0x1080808),1);
  uVar1 = F_00da4430(param_2 GEN_EDX_ARG,&REFG(undefined, 0x113ce64));
  if (uVar1 != 0) {
    F_00da4670(param_2 GEN_EDX_ARG,2);
  }
  return *param_2;
}

/* ref: hkNativeFileSystem::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db26e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb26e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * this_00;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x10)));
  *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x10;
  uVar3 = F_00db2660(param_1,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  pvVar2 = ((undefined *)GEN_TOP(F_00dbee30(pvVar2 GEN_EDX_ARG,uVar3)));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x1c)));
  *((undefined2 *)GEN_TOP(((int)this_00 + 4))) = 0x1c;
  uVar3 = F_00dba5e0(this_00 GEN_EDX_ARG,pvVar2,0x1000);
  F_00d91a80(pvVar2 GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return uVar3;
}

/* ref: hkNativeFileSystem::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db27c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb27c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  int * this_00;
  char * pcVar4;
  int * piVar5;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x14)));
  *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x14;
  uVar3 = F_00db2660((*(undefined4 *)&gen_args[0]),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  this_00 = ((int *)GEN_TOP(F_00dbf3c0(pvVar2 GEN_EDX_ARG,uVar3)));
  pcVar4 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x18))))(this_00 GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3)));
  piVar5 = this_00;
  if (*pcVar4 == '\0') {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x24)));
    *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x24;
    piVar5 = ((int *)GEN_TOP(F_00dbf270(pvVar2 GEN_EDX_ARG,this_00,0x1000)));
    F_00d91a80(this_00 GEN_EDX_ARG);
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return (uint)piVar5;
}

/* ref: FUN_00db28c0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00db28c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb28c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((byte *)GEN_TOP((param_2 + *in_ecx)));
}

/* ref: FUN_00db28d0 */
GEN_LIB GEN_FRAME uint F_00db28d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb28d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00db2900 */
GEN_LIB GEN_FRAME uint F_00db2900(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb2900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00db2930 */
GEN_LIB GEN_FRAME uint F_00db2930(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb2930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00db2970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00db2980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbe420(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00db29d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00db29d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb29d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00db29e0 */
GEN_LIB GEN_NOFRAME unsigned int F_00db29e0(void)
{
  GEN_ENTER(0xdb29e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkDefaultError::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 8 GEN_EDX_FWD,param_2,0);
  *((bool *)GEN_TOP(param_1)) = uVar1 == 0;
  return param_1;
}

/* ref: hkDefaultError::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db2a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb2a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dbdaf0(this + 8 GEN_EDX_FWD);
  return uVar1;
}

/* ref: hkDefaultError::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2a30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xdb2a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_FRAME_DECL_TOP(0xa04, 12, 4);
  uint uVar1;
  undefined * pvVar2;
  
  if (param_3 == 0) {
    if (param_5 == 0) {
      F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),0x800,&REFG(undefined, 0x113bdcc),param_4);
      goto LAB_00db2ac0;
    }
  }
  else if (param_3 == -1) {
    F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),0x800,((char *)REFP(0x113cea8)),param_5,param_6,param_2,param_4);
    goto LAB_00db2ac0;
  }
  F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),0x800,((char *)REFP(0x113ceb8)),param_5,param_6,param_3,param_2,param_4);
LAB_00db2ac0: ;
  (*(undefined1 *)(gen_frame + 0x7ff)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x20))))(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((param_1 + 0x24))));
  if (param_7 != '\0') {
    pvVar2 = REFG(void * PTR32, 0x15dffb0);
    if ((REFG(void * PTR32, 0x15dffb0) == ((undefined *)GEN_TOP(0x0))) &&
       (pvVar2 = ((undefined *)GEN_TOP(F_00db36d0())), REFG(void * PTR32, 0x15dffb0) != ((undefined *)GEN_TOP(0x0)))) {
      F_00d91840(REFG(void * PTR32, 0x15dffb0) GEN_EDX_ARG);
    }
    REFG(void * PTR32, 0x15dffb0) = pvVar2;
    uVar1 = F_00db3490(REFG(void * PTR32, 0x15dffb0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x800)),0x80);
    if (2 < (int)uVar1) {
      ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x20))))(((char *)REFP(0x113ce94)),*((undefined4 *)GEN_TOP((param_1 + 0x24))));
      uVar1 = F_00db3330(REFG(void * PTR32, 0x15dffb0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x808)),uVar1 - 2,*((undefined4 *)GEN_TOP((param_1 + 0x20))),
                           *((undefined4 *)GEN_TOP((param_1 + 0x24))));
    }
  }
  return uVar1;
}

/* ref: hkDefaultError::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdb2b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  uint uVar1;
  char * pcVar2;
  uint uVar3;
  
  uVar3 = (*(uint *)&gen_args[1]);
  if (((*(uint *)&gen_args[1]) == 0xffffffff) && (*(int *)(this + 0x18) != 0)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x14) - 4 + *(int *)(this + 0x18) * 4)));
  }
  pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD,(int)&(*(uint *)&gen_args[1]) + 3,uVar3)));
  if (*pcVar2 == '\0') {
    return 0;
  }
  pcVar2 = "";
  uVar1 = (*(uint *)&gen_args[1]) >> 8;
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
  switch((unsigned int)(uintptr_t)((*(int *)&gen_args[0]))) {
  case 0: ;
    pcVar2 = ((char *)REFP(0x113cee0));
    break;
  case 1: ;
    pcVar2 = ((char *)REFP(0x10c43b4));
    break;
  case 2: ;
    pcVar2 = ((char *)REFP(0x113ced8));
    goto LAB_00db2bcd;
  case 3: ;
    pcVar2 = ((char *)REFP(0x113ced0));
LAB_00db2bcd: ;
    (*(uint *)&gen_args[1]) = CONCAT31((int3)uVar1,1);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,pcVar2,uVar3,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(uint *)&gen_args[1]));
  if (((*(int *)&gen_args[0]) != 2) && ((*(int *)&gen_args[0]) != 3)) {
    return 0;
  }
  return 1;
}

/* ref: hkDefaultError::vf8 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db2c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb2c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((int *)GEN_TOP((in_ecx + 0x18))) = *((int *)GEN_TOP((in_ecx + 0x18))) - 1;
  return;
}

/* ref: hkDefaultError::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2c30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  
  if (param_3 != '\0') {
    uVar1 = F_00dbe420(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD,param_2);
    return uVar1;
  }
  uVar1 = F_00dbd8b0(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_2,1);
  return uVar1;
}

/* ref: hkDefaultError::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  if (*(uint *)(this + 0x18) == (*(uint *)(this + 0x1c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x14,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + *(int *)(this + 0x18) * 4)));
  *puVar1 = param_1;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db2ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113ceec));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_2;
  return (uint)this;
}

/* ref: FUN_00db2ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2ce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00db2cf0 */
GEN_LIB GEN_FRAME uint F_00db2cf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb2cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00db2d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2d40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00db2d80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00db2dc0 */
GEN_LIB GEN_FRAME uint F_00db2dc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb2dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00db2df0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db2df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb2df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  uVar2 = F_00dbdb20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkDefaultError::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2e50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[7];
  param_1[6] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[5],iVar1 * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  F_00dbdb20(param_1 + 2 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: hkSocket::ReaderAdapter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
                        (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + uVar2,param_2 - uVar2);
      uVar2 = uVar2 + uVar1;
      if (uVar1 == 0) {
        return uVar2;
      }
    } while ((int)uVar2 < (int)param_2);
  }
  return param_2;
}

/* ref: hkSocket::ReaderAdapter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: hkSocket::WriterAdapter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x18))))
                        (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + uVar2,param_2 - uVar2);
      uVar2 = uVar2 + uVar1;
      if (uVar1 == 0) {
        return uVar2;
      }
    } while ((int)uVar2 < (int)param_2);
  }
  return param_2;
}

/* ref: hkSocket::WriterAdapter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: FUN_00db2fd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db2fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb2fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113cf74));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[12])REFP(0x113cf18));
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x1a))) = 1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[9])REFP(0x113cf4c));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = this;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) = this;
  if ((REFG(char, 0x15dffac) == '\0') && (REFG(undefined * PTR32, 0x1352788) != ((undefined *)GEN_TOP(0x0)))) {
    (*(code *)REFG(undefined * PTR32, 0x1352788))(0);
    REFG(char, 0x15dffac) = '\x01';
  }
  return (uint)this;
}

/* ref: FUN_00db3030 */
GEN_LIB GEN_NOFRAME uint F_00db3030(void)
{
  GEN_ENTER(0xdb3030u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined * this;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                           (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x24)));
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0x24;
  uVar2 = F_00dbf8f0(this GEN_EDX_ARG,0xffffffff);
  return uVar2;
}

/* ref: hkSocket::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db30c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb30c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 1;
}

/* ref: hkSocket::vf10 */
GEN_LIB GEN_NOFRAME byte F_00db30d0(void)
{
  GEN_ENTER(0xdb30d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00db30f0 */
GEN_LIB GEN_FRAME uint F_00db30f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb30f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00db3120 */
GEN_LIB GEN_FRAME uint F_00db3120(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb3120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00db3150 */
GEN_LIB GEN_FRAME uint F_00db3150(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb3150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkSocket::ReaderAdapter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3180(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: hkSocket::WriterAdapter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db31c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb31c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00db3200 */
GEN_LIB GEN_FRAME uint F_00db3200(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb3200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: hkSocket::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3230(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  param_1[5] = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  param_1[2] = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00db3270 */
GEN_LIB GEN_FRAME uint F_00db3270(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00db3280 */
GEN_LIB GEN_NOFRAME uint F_00db3280(GEN_P(uint in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xdb3280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  if (in_eax == 0) {
    in_eax = 0x80000000;
  }
  return in_eax;
}

/* ref: FUN_00db3290 */
GEN_LIB GEN_FRAME uint F_00db3290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d9fe80(param_2 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00db32b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db32b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb32b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 0x10))) == -1;
  return param_2;
}

/* ref: FUN_00db32d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db32d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb32d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  HANDLE pvVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113d1ac));
  if (*piVar1 != 0) {
    pvVar2 = gen_imp_GetCurrentProcess();
    (*((code *)GEN_TOP(piVar1[0xc])))(pvVar2);
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    gen_imp_FreeLibrary((HMODULE)piVar1[1]);
    gen_imp_FreeLibrary((HMODULE)*piVar1);
    *piVar1 = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: FUN_00db3330 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db3330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(code * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdb3330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0x11060, 0);
  HANDLE pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  char * pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 * puVar12;
  
  (*(HANDLE *)(gen_frame + 0x1104c)) = (HANDLE)0xdb3350;
  (*(undefined * PTR32 *)(gen_frame + 0x11044)) = this;
  pvVar1 = gen_imp_GetCurrentProcess();
  (*(HANDLE *)(gen_frame + 0x1104c)) = pvVar1;
  (*(int *)(gen_frame + 0x11048)) = 0;
  if (0 < param_2) {
    do {
      iVar6 = (*(int *)(gen_frame + 0x11048));
      iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x11044)) + 8)));
      iVar4 = *((int *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x11048)) * 4)));
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x10800)), 0x0);
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x10810)), 0x0);
      iVar4 = iVar4 - 4;
      (*(undefined4 *)(gen_frame + 0x1100c)) = 0;
      memset((char *)((undefined1 *)(gen_frame + 0x10800)) + 4, 0, 12);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10800)) + 0)) = 0x20;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10800)) + 0)) = 0x20;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10810)) + 8)) = 0x7e0;
      unsigned char gen_vx0[64];
      gen_vzext(gen_vx0, (unsigned long long)(0x7e0), 4);
      unsigned char gen_vx1[64];
      gen_vshift(gen_vx1, gen_vx0, 12, (int)(0x40), 0);
      gen_vset(((unsigned char *)(((undefined1 *)(gen_frame + 0x10810))) + 0), 12, gen_vx1, 12);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10810)) + 12)) = 0;
      (*(undefined8 *)(gen_frame + 0x11038)) = 0;
      (*(int *)(gen_frame + 0x11040)) = iVar4;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x1c))))((*(HANDLE *)(gen_frame + 0x1104c)),iVar4,0,&(*(undefined8 *)(gen_frame + 0x11038)),((undefined1 *)(gen_frame + 0x10800)));
      if (uVar2 == 0) {
        if (REFG(char, 0x15dffb4) == '\0') {
          gen_imp_OutputDebugStringA(
                            ((char *)REFP(0x113d200))
                            );
          REFG(char, 0x15dffb4) = '\x01';
        }
        pcVar9 = ((char *)REFP(0x113d1c8));
        puVar5 = (undefined4 *)(((undefined1 *)(gen_frame + 0x10810)) + 0xc);
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 - 1) {
          *puVar5 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          puVar5 = puVar5 + 1;
        }
        *(undefined2 *)puVar5 = *(undefined2 *)pcVar9;
        *((char *)GEN_TOP(((int)puVar5 + 2))) = pcVar9[2];
        iVar4 = (*(int *)(gen_frame + 0x11040));
        iVar6 = (*(int *)(gen_frame + 0x11048));
      }
      iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x11044)) + 8)));
      GEN_V16_SET(*(gen_v16 *)((undefined1 *)(gen_frame + 0x11010)), 0x0);
      (*(undefined8 *)(gen_frame + 0x11020)) = 0;
      memset((gen_frame + 0x0), 0, 12);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x11010)) + 0)) = 0x18;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x11010)) + 0)) = 0x18;
      ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x2c))))((*(HANDLE *)(gen_frame + 0x1104c)),iVar4,(*(undefined4 *)(gen_frame + 0x1100c)),&(*(undefined8 *)(gen_frame + 0x11038)),((undefined1 *)(gen_frame + 0x11010)));
      puVar12 = ((undefined1 *)(gen_frame + 0x10810)) + 0xc;
      pcVar9 = ((char *)REFP(0x113d1b8));
      puVar7 = ((undefined1 *)(gen_frame + 0x10000));
      uVar8 = 0x800;
      uVar10 = (*(undefined4 *)(gen_frame + 0x1101c));
      uVar11 = (*(undefined4 *)(gen_frame + 0x11018));
      F_01052886(puVar7,0x800,((char *)REFP(0x113d1b8)),(*(undefined4 *)(gen_frame + 0x1101c)),(*(undefined4 *)(gen_frame + 0x11018)),puVar12);
      pvVar1 = (HANDLE)(*param_3)(((undefined1 *)(gen_frame + 0x10000)),param_4,puVar7,uVar8,pcVar9,uVar10,uVar11,puVar12);
      (*(int *)(gen_frame + 0x11048)) = iVar6 + 1;
    } while (iVar6 + 1 < param_2);
  }
  return (uint)pvVar1;
}

/* ref: FUN_00db3490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x38)));
  if (pcVar1 != ((code *)GEN_TOP(0x0))) {
    uVar2 = (*pcVar1)(0,param_2,param_1,0);
    return uVar2 & 0xffff;
  }
  return 0;
}

/* ref: FUN_00db34e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00db34e0(GEN_P(code * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb34e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x804, 12, 4);
  DWORD DVar1;
  uint uVar2;
  undefined1 * puVar3;
  undefined4 uVar4;
  char * pcVar5;
  CHAR * pCVar6;
  
  DVar1 = gen_imp_GetModuleFileNameA((HMODULE)0x0,((CHAR *)(gen_frame + 0x400)),0x400);
  uVar2 = 0;
  if (DVar1 != 0) {
    pCVar6 = ((CHAR *)(gen_frame + 0x400));
    pcVar5 = ((char *)REFP(0x113d3c4));
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
    uVar4 = 0x400;
    F_00da0ce0(puVar3,0x400,((char *)REFP(0x113d3c4)),pCVar6);
    uVar2 = (*param_1)(((undefined1 *)(gen_frame + 0x0)),param_2,puVar3,uVar4,pcVar5,pCVar6);
  }
  return uVar2;
}

/* ref: FUN_00db3540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[1];
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar3 = *(undefined4 *)this;
  uVar4 = F_00db3280(param_1[2] & 0x3fffffff);
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar4;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  uVar5 = F_00db3280(uVar5 & 0x3fffffff);
  param_1[2] = uVar5;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  param_1[4] = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  param_1[5] = uVar1;
  uVar5 = *((uint *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  param_1[3] = uVar5;
  return uVar5;
}

/* ref: FUN_00db35c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db35c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb35c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1;
  if (0 < param_3) {
    do {
      if (iVar2 < 1) {
        return uVar1;
      }
      *((undefined4 *)GEN_TOP((param_2 + uVar1 * 4))) = *((undefined4 *)GEN_TOP((iVar2 * 0x14 + *(int *)this)));
      iVar2 = *((int *)GEN_TOP((iVar2 * 0x14 + 4 + *(int *)this)));
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_3);
  }
  return uVar1;
}

/* ref: FUN_00db3600 */
GEN_LIB GEN_FRAME int GEN_THISCALL F_00db3600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_1) {
    iVar2 = param_1;
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)this + 4 + iVar2 * 0x14)));
      iVar1 = iVar1 + 1;
    } while (0 < iVar2);
  }
  return iVar1;
}

/* ref: FUN_00db3620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)this;
  uVar5 = param_1 * 5;
  iVar1 = iVar3 + param_1 * 0x14;
  if ((*((int *)GEN_TOP((iVar3 + 0x10 + param_1 * 0x14))) == 0) && (*((int *)GEN_TOP((iVar1 + 8))) == -1)) {
    iVar4 = *((int *)GEN_TOP((iVar1 + 4)));
    if (iVar4 != -1) {
      piVar2 = ((int *)GEN_TOP((iVar3 + 8 + iVar4 * 0x14)));
      for (iVar4 = *((int *)GEN_TOP((iVar3 + 8 + iVar4 * 0x14))); iVar4 != param_1;
          iVar4 = *((int *)GEN_TOP((iVar3 + 0xc + iVar4 * 0x14)))) {
        iVar4 = *piVar2;
        piVar2 = ((int *)GEN_TOP((iVar3 + 0xc + iVar4 * 0x14)));
      }
      *piVar2 = *((int *)GEN_TOP((iVar1 + 0xc)));
      F_00db3620(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((iVar1 + 4))));
      uVar5 = *((uint *)GEN_TOP(((int)this + 0x14)));
      *((uint *)GEN_TOP((iVar1 + 0xc))) = uVar5;
      *((int *)GEN_TOP(((int)this + 0x14))) = param_1;
      return uVar5;
    }
    uVar5 = *((uint *)GEN_TOP(((int)this + 0x14)));
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
    *((uint *)GEN_TOP((iVar1 + 0xc))) = uVar5;
    *((int *)GEN_TOP(((int)this + 0x14))) = param_1;
  }
  return uVar5;
}

/* ref: FUN_00db36a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db36a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb36a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113d1ac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = &REFG(undefined, 0x15dffcc);
  F_00db3b00(&REFG(undefined, 0x15dffcc) GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00db36d0 */
GEN_LIB GEN_NOFRAME uint F_00db36d0(void)
{
  GEN_ENTER(0xdb36d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00db36a0(&REFG(undefined, 0x15dffc0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00db36e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db36e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb36e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  undefined * this_00;
  uint uVar1;
  
  if (-1 < param_1) {
    this_00 = ((undefined *)GEN_TOP(F_00db36d0()));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(this_00 GEN_EDX_ARG);
    }
    F_00d91a80(this_00 GEN_EDX_ARG);
    uVar1 = F_00db35c0(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x0)),0x10);
    uVar1 = F_00db3330(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar1,((code *)REFP(0xdb3290)),param_2);
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00d91a80(this_00 GEN_EDX_ARG);
    }
    return uVar1;
  }
  uVar1 = F_00d9fe80(param_2 GEN_EDX_ARG,((char *)REFP(0x113d3d0)));
  return uVar1;
}

/* ref: FUN_00db3760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP((*(int *)this + 0x10 + param_1 * 0x14)));
  *piVar1 = *piVar1 - 1;
  uVar2 = F_00db3620(this GEN_EDX_FWD,param_1);
  return uVar2;
}

/* ref: FUN_00db3780 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db3780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb3780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (uVar1 != 0xffffffff) {
    iVar2 = uVar1 * 0x14;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((*(int *)this + 0xc + iVar2)));
    *((undefined4 *)GEN_TOP((*(int *)this + iVar2))) = 0;
    *((undefined4 *)GEN_TOP((iVar2 + 4 + *(int *)this))) = 0xffffffff;
    *((undefined4 *)GEN_TOP((iVar2 + 8 + *(int *)this))) = 0xffffffff;
    *((undefined4 *)GEN_TOP((iVar2 + 0xc + *(int *)this))) = 0xffffffff;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + *(int *)this))) = 0;
    return uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar1 == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP(((int)this + 0xc))),this,0x14);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  iVar2 = uVar1 * 0x14;
  *((undefined4 *)GEN_TOP((iVar2 + *(int *)this))) = 0;
  *((undefined4 *)GEN_TOP((iVar2 + 4 + *(int *)this))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((iVar2 + 8 + *(int *)this))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((iVar2 + 0xc + *(int *)this))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((iVar2 + 0x10 + *(int *)this))) = 0;
  return uVar1;
}

/* ref: FUN_00db3820 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db3820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb3820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    if (-1 < (int)uVar2) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                (piVar1 GEN_EDX_ARG,*(undefined4 *)this,((uVar2 & 0x3fffffff) + uVar2 * 4) * 4);
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xffffffff;
  }
  return;
}

/* ref: FUN_00db3870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) == -1) {
    uVar6 = F_00db3780(this GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  }
  uVar6 = *((uint *)GEN_TOP(((int)this + 0x10)));
  iVar5 = param_2;
joined_r0x00db3890: ;
  do {
    uVar4 = uVar6;
    iVar5 = iVar5 - 1;
    if (iVar5 < 0) {
      piVar1 = ((int *)GEN_TOP((*(int *)this + 0x10 + uVar4 * 0x14)));
      *piVar1 = *piVar1 + 1;
      return uVar4;
    }
    iVar2 = *((int *)GEN_TOP((param_1 + iVar5 * 4)));
    iVar3 = uVar4 * 0x14;
    uVar6 = *((uint *)GEN_TOP((*(int *)this + 8 + iVar3)));
    while (0 < (int)uVar6) {
      piVar1 = ((int *)GEN_TOP((*(int *)this + uVar6 * 0x14)));
      if (*piVar1 == iVar2) {
        if (uVar6 != 0xffffffff) goto joined_r0x00db3890;
        break;
      }
      uVar6 = piVar1[3];
    }
    uVar6 = F_00db3780(this GEN_EDX_ARG);
    piVar1 = ((int *)GEN_TOP((*(int *)this + uVar6 * 0x14)));
    *piVar1 = iVar2;
    piVar1[1] = uVar4;
    piVar1[2] = -1;
    piVar1[3] = *((int *)GEN_TOP((iVar3 + 8 + *(int *)this)));
    *((uint *)GEN_TOP((iVar3 + 8 + *(int *)this))) = uVar6;
  } while( true );
}

/* ref: FUN_00db3920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  uVar1 = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar1;
  F_00db40c0(this GEN_EDX_FWD,uVar1,0,*param_1,param_1[1]);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  return (uint)this;
}

/* ref: FUN_00db3970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x10))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4
              );
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  uVar2 = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar2;
  F_00db40c0(this GEN_EDX_ARG,uVar2,0,*param_1,param_1[1]);
  uVar1 = param_1[4];
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  return uVar1;
}

/* ref: FUN_00db39e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db39e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb39e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x204, 12, 4);
  uint uVar1;
  
  uVar1 = F_00db3490(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),0x80);
  if (0 < (int)uVar1) {
    uVar1 = F_00db3870(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),uVar1 - 1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00db3a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  int iVar6;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar5,4);
  }
  param_1[1] = iVar1;
  puVar4 = ((undefined4 *)GEN_TOP((param_2[2] & 0x3fffffff)));
  if ((int)puVar4 < iVar1) {
    iVar5 = (int)((int)(uintptr_t)puVar4) * 2;
    if ((int)((int)(uintptr_t)puVar4) * 2 <= iVar1) {
      iVar5 = iVar1;
    }
    bVar3 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,iVar5,4);
    puVar4 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
  }
  param_2[1] = iVar1;
  if (iVar1 != 0) {
    puVar4 = ((undefined4 *)GEN_TOP(*param_1));
    *puVar4 = 0;
    *((undefined4 *)GEN_TOP(*param_2)) = 0xffffffff;
    iVar5 = 1;
    if (1 < iVar1) {
      iVar6 = 0x14;
      do {
        iVar2 = *(int *)this;
        *((undefined4 *)GEN_TOP((*param_1 + iVar5 * 4))) = *((undefined4 *)GEN_TOP((iVar2 + iVar6)));
        puVar4 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 4 + iVar6)));
        *((undefined4 * PTR32 *)GEN_TOP((*param_2 + iVar5 * 4))) = puVar4;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x14;
      } while (iVar5 < iVar1);
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00db3b00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db3b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb3b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  HMODULE pHVar1;
  FARPROC pFVar2;
  uint uVar3;
  HANDLE pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pHVar1 = gen_imp_LoadLibraryA(REFG(undefined * PTR32, 0x13527fc));
  *(HMODULE *)this = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    gen_imp_OutputDebugStringA(((char *)REFP(0x113d168)));
  }
  pHVar1 = gen_imp_LoadLibraryA(((char *)REFP(0x113bd94)));
  *((HMODULE *)GEN_TOP(((int)this + 4))) = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    gen_imp_OutputDebugStringA(((char *)REFP(0x113d128)));
  }
  uVar3 = 0;
  if (*(int *)this != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
    pFVar2 = gen_imp_GetProcAddress(*(int *)this,((char *)REFP(0x113d114)));
    *((FARPROC *)GEN_TOP(((int)this + 0xc))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d0fc)));
    *((FARPROC *)GEN_TOP(((int)this + 0x10))) = pFVar2;
    if (pFVar2 == (FARPROC)0x0) {
      gen_imp_OutputDebugStringA(
                        ((char *)REFP(0x113d078))
                        );
    }
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d064)));
    *((FARPROC *)GEN_TOP(((int)this + 0x14))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d054)));
    *((FARPROC *)GEN_TOP(((int)this + 0x18))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d040)));
    *((FARPROC *)GEN_TOP(((int)this + 0x1c))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d034)));
    *((FARPROC *)GEN_TOP(((int)this + 0x20))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d018)));
    *((FARPROC *)GEN_TOP(((int)this + 0x24))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d004)));
    *((FARPROC *)GEN_TOP(((int)this + 0x28))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113cfec)));
    *((FARPROC *)GEN_TOP(((int)this + 0x2c))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113cfe0)));
    *((FARPROC *)GEN_TOP(((int)this + 0x30))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*((undefined4 *)GEN_TOP(((int)this + 4))),((char *)REFP(0x113cfcc)));
    *((FARPROC *)GEN_TOP(((int)this + 0x34))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*((undefined4 *)GEN_TOP(((int)this + 4))),((char *)REFP(0x113cfb0)));
    *((FARPROC *)GEN_TOP(((int)this + 0x38))) = pFVar2;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x14))))();
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x18))))(uVar3 | 0x80000014);
    uVar6 = 1;
    uVar5 = 0;
    pvVar4 = gen_imp_GetCurrentProcess();
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0xc))))(pvVar4,uVar5,uVar6);
  }
  return uVar3;
}

/* ref: FUN_00db3c20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db3c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb3c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  HANDLE pvVar1;
  
  if (*(int *)this != 0) {
    pvVar1 = gen_imp_GetCurrentProcess();
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x30))))(pvVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
    gen_imp_FreeLibrary(*((undefined4 *)GEN_TOP(((int)this + 4))));
    gen_imp_FreeLibrary(*(undefined4 *)this);
    *(undefined4 *)this = 0;
  }
  return;
}

/* ref: FUN_00db3c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3c80(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_00db3ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3ca0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_00db3d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb3d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00db3d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3d20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00db3d30 */
GEN_LIB GEN_FRAME uint F_00db3d30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00db3d50 */
GEN_LIB GEN_FRAME uint F_00db3d50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00db3d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00db3d90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db3d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb3d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00db3dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x14);
  return uVar1;
}

/* ref: FUN_00db3e10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x14);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db3e60 */
GEN_LIB GEN_FRAME unsigned int F_00db3e60(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = param_3 - (int)param_1;
    puVar1 = param_1;
    iVar3 = param_2;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP((iVar2 + 8 + (int)puVar1)));
      *(undefined4 *)(puVar1 + 2) = *((undefined4 *)GEN_TOP((iVar2 + 0x10 + (int)puVar1)));
      puVar1 = ((undefined8 *)GEN_TOP(((int)puVar1 + 0x14)));
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: FUN_00db3ec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x14);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x14;
}

/* ref: FUN_00db3f10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db3f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdb3f10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int iVar5;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  iVar5 = (iVar4 - param_3) + param_5;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,0x14);
  }
  F_00da38f0(*(int *)this + (param_2 + param_5) * 0x14,*(int *)this + (param_2 + param_3) * 0x14,
               ((iVar4 - param_2) - param_3) * 0x14);
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + param_2 * 0x14)));
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar1;
    iVar4 = param_5;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP((iVar3 + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP((iVar3 + 8 + (int)puVar1)));
      *(undefined4 *)(puVar1 + 2) = *((undefined4 *)GEN_TOP((iVar3 + 0x10 + (int)puVar1)));
      puVar1 = ((undefined8 *)GEN_TOP(((int)puVar1 + 0x14)));
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  return 0;
}

/* ref: FUN_00db3fd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
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

/* ref: FUN_00db4010 */
GEN_LIB GEN_FRAME uint F_00db4010(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb4010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkStackTracer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4040(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00db32d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00db4080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db40c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db40c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdb40c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00db3f10(this GEN_EDX_FWD,param_1,param_2,0,param_3,param_4);
  return;
}

/* ref: FUN_00db40e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db40e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb40e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00db4120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00db4180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  if ((*((uint *)GEN_TOP(((int)this + 4))) <= param_1[1]) &&
     ((*((uint *)GEN_TOP(((int)this + 4))) < param_1[1] || (*(uint *)this < *param_1)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00db41b0 */
GEN_LIB GEN_FRAME uint F_00db41b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb41b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00db41e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db41e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb41e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x184, 12, 4);
  uint uVar1;
  undefined4 uVar2;
  undefined1 * puVar3;
  undefined4 uVar4;
  char * pcVar5;
  undefined4 uVar6;
  
  uVar6 = *((undefined4 *)GEN_TOP((param_3 + 0xc)));
  pcVar5 = ((char *)REFP(0x113d438));
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  uVar4 = 0x100;
  F_00da0ce0(puVar3,0x100,((char *)REFP(0x113d438)),param_2,uVar6);
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
  ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x40))))(param_1,uVar2,puVar3,uVar4);
  ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x40))))
            (((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x44))),param_1,uVar2,puVar3,uVar4,pcVar5,param_2,
             uVar6);
  uVar1 = F_00db35c0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 8))),((undefined1 *)(gen_frame + 0x100)),0x20);
  F_00db3330(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x100)),uVar1,*((undefined4 *)GEN_TOP(((int)this + 0x40))),
               *((undefined4 *)GEN_TOP(((int)this + 0x44))));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x40))))
                    (((char *)REFP(0x113d3f0)),
                     *((undefined4 *)GEN_TOP(((int)this + 0x44))));
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb4270u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 0x20))))
                    (*(int * PTR32 *)(this + 0x38) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb4280u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 0x24))))
                    (*(int * PTR32 *)(this + 0x38) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: FUN_00db4290 */
GEN_LIB GEN_FRAME uint F_00db4290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  uVar2 = F_00da0e60(param_1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x10))))(param_2,param_1,uVar2);
  return uVar2;
}

/* ref: FUN_00db42e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db42e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdb42e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * pvVar1;
  undefined4 * puVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_1;
  *((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  pvVar1 = REFG(void * PTR32, 0x15dffb0);
  if ((REFG(void * PTR32, 0x15dffb0) == ((undefined *)GEN_TOP(0x0))) &&
     (pvVar1 = ((undefined *)GEN_TOP(F_00db36d0())), REFG(void * PTR32, 0x15dffb0) != ((undefined *)GEN_TOP(0x0)))) {
    F_00d91840(REFG(void * PTR32, 0x15dffb0) GEN_EDX_ARG);
  }
  REFG(void * PTR32, 0x15dffb0) = pvVar1;
  pvVar1 = REFG(void * PTR32, 0x15dffb0);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = REFG(void * PTR32, 0x15dffb0);
  F_00d91830(pvVar1 GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG,0xc)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    *((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
    return 0;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0xffffffff;
  *((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x48))) = puVar2;
  return (uint)puVar2;
}

/* ref: FUN_00db4380 */
GEN_LIB GEN_FRAME unsigned int F_00db4380(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdb4380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  for (iVar3 = param_3; iVar3 != 0; iVar3 = iVar3 - iVar2) {
    iVar2 = iVar3;
    if (0x1f < iVar3) {
      iVar2 = 0x20;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
              (piVar1 GEN_EDX_ARG,((char *)REFP(0x113d454)),iVar2);
  }
  F_00da00e0(param_1,&REFG(undefined, 0x113d450),*((undefined4 *)GEN_TOP((*param_5 + param_2 * 8))),
               *((undefined4 *)GEN_TOP((*param_5 + 4 + param_2 * 8))));
  if (param_2 == 0) {
    F_00da00e0(param_1,&REFG(undefined, 0x1080294));
  }
  else {
    F_00db3330(REFG(void * PTR32, 0x15dffb0) GEN_EDX_ARG,*param_4 + param_2 * 0x14,1,((code *)REFP(0xdb4290)),piVar1);
  }
  iVar3 = *((int *)GEN_TOP((*param_4 + 8 + param_2 * 0x14)));
  if (iVar3 != -1) {
    do {
      F_00db4380(param_1,iVar3,param_3 + 1,param_4,param_5);
      iVar3 = *((int *)GEN_TOP((*param_4 + 0xc + iVar3 * 0x14)));
    } while (iVar3 != -1);
  }
  return;
}

/* ref: FUN_00db4450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x6c, 4, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  undefined8 uVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  int * piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x20);
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x58)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  F_00dbff20(param_1 GEN_EDX_ARG);
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x48)));
  uVar8 = piVar3[1];
  uVar13 = uVar8 & 0x7fffffff;
  if (uVar13 == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  param_1[2] = uVar13;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar11 = (uVar13 + uVar8 * 8) * 8;
  uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x30))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x30))) GEN_EDX_ARG,iVar11);
  param_1[1] = uVar13;
  F_00da3720(uVar13,0,iVar11);
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x30))) + 4))))
                     (*((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x30))) GEN_EDX_ARG,uVar8 * 4)));
  *param_1 = puVar7;
  (*(int *)(gen_frame + 0x60)) = param_1[1];
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  (*(LPVOID *)(gen_frame + 0x5c)) = pvVar6;
  iVar12 = piVar3[2];
  iVar11 = 0;
  if (-1 < iVar12) {
    piVar10 = ((int *)GEN_TOP(*piVar3));
    do {
      if (*piVar10 != -1) break;
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 8;
    } while (iVar11 <= iVar12);
  }
  if (iVar11 <= iVar12) {
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 8)));
    iVar12 = (*(int *)(gen_frame + 0x60)) + 4;
    do {
      iVar4 = *piVar3;
      iVar9 = iVar11 * 0x20;
      (*(undefined8 *)(gen_frame + 0x40)) = *((undefined8 *)GEN_TOP((iVar4 + 8 + iVar9)));
      uVar1 = *((undefined8 *)GEN_TOP((iVar4 + iVar9 + 0x10)));
      (*(undefined8 *)(gen_frame + 0x48)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x48));
      uVar2 = *((undefined8 *)GEN_TOP((iVar4 + iVar9 + 0x18)));
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) = (undefined4)uVar1;
      uVar5 = (undefined4)(*(undefined8 *)(gen_frame + 0x48));
      *puVar7 = *((undefined4 *)GEN_TOP((iVar4 + iVar9)));
      (*(undefined8 *)(gen_frame + 0x50)) = uVar2;
      (*(undefined8 *)(gen_frame + 0x48)) = uVar1;
      uVar8 = F_00db35c0((*(undefined * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,uVar5,((undefined1 *)(gen_frame + 0x0)),0x10);
      *((uint *)GEN_TOP((iVar12 + 0x40))) = uVar8;
      F_00da1010(iVar12,((undefined1 *)(gen_frame + 0x0)),uVar8 * 4);
      *((undefined4 *)GEN_TOP((iVar12 - 4))) = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 4));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(LPVOID *)(gen_frame + 0x5c)) + 0x2c))) + 0x24))))
                (*((int * PTR32 *)GEN_TOP(((int)(*(LPVOID *)(gen_frame + 0x5c)) + 0x2c))) GEN_EDX_ARG,*puVar7,(*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 4)));
      iVar11 = iVar11 + 1;
      iVar4 = piVar3[2];
      iVar12 = iVar12 + 0x48;
      puVar7 = puVar7 + 1;
      if (iVar11 <= iVar4) {
        piVar10 = ((int *)GEN_TOP((iVar11 * 0x20 + *piVar3)));
        do {
          if (*piVar10 != -1) break;
          iVar11 = iVar11 + 1;
          piVar10 = piVar10 + 8;
        } while (iVar11 <= iVar4);
      }
    } while (iVar11 <= iVar4);
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x58)));
  return 0;
}

/* ref: FUN_00db45f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db45f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb45f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x220, 0, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x218)) = (LPCRITICAL_SECTION)((int)this + 0x20);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x38))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x38))) + 0x24))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,uVar1,param_2);
  *((int *)GEN_TOP(((int)this + 0x4c))) = *((int *)GEN_TOP(((int)this + 0x4c))) + uVar2;
  uVar3 = F_00dc2630();
  (*(ulonglong *)(gen_frame + 0x200)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x20c)) = param_2;
  (*(bool *)(gen_frame + 0x210)) = param_1 != 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) == ((undefined *)GEN_TOP(0x0))) {
    (*(uint *)(gen_frame + 0x208)) = 0;
  }
  else {
    uVar2 = F_00db3490(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x80);
    uVar2 = F_00db3870(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2);
    (*(uint *)(gen_frame + 0x208)) = uVar2;
  }
  F_00db52c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3c))),uVar1,(int)(*(ulonglong *)(gen_frame + 0x200)),
               (int)((*(ulonglong *)(gen_frame + 0x200)) >> 0x20),(*(uint *)(gen_frame + 0x208)),(*(undefined4 *)(gen_frame + 0x20c)),(int)CONCAT71((*(undefined7 *)(gen_frame + 0x211)),(*(bool *)(gen_frame + 0x210))),
               (int)((uint7)(*(undefined7 *)(gen_frame + 0x211)) >> 0x18));
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x218)));
  return uVar1;
}

/* ref: FUN_00db46c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db46c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb46c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined8 uVar2;
  code * pcVar3;
  undefined4 uVar4;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x20);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 == 0) {
    if (param_3 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x40))))
                (((char *)REFP(0x113d4c0)),
                 *((undefined4 *)GEN_TOP(((int)this + 0x44))));
      pcVar3 = ((code *)GEN_TOP(swi(3)));
      (*pcVar3)();
      return 0;
    }
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  if (param_3 == 0) {
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x40))))
              (((char *)REFP(0x113d4f4)),
               *((undefined4 *)GEN_TOP(((int)this + 0x44))));
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  uVar5 = F_00db5370(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,param_2);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + 8))) < (int)uVar5) {
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x40))))
              (((char *)REFP(0x113d498)),*((undefined4 *)GEN_TOP(((int)this + 0x44))));
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  iVar1 = uVar5 * 0x20 + 8 + **((int * PTR32 *)GEN_TOP(((int)this + 0x48)));
  (*(undefined8 *)(gen_frame + 0x0)) = *((undefined8 *)GEN_TOP((uVar5 * 0x20 + 8 + **((int * PTR32 *)GEN_TOP(((int)this + 0x48))))));
  uVar2 = *((undefined8 *)GEN_TOP((iVar1 + 8)));
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  uVar2 = (*(undefined8 *)(gen_frame + 0x8));
  (*(undefined8 *)(gen_frame + 0x10)) = *((undefined8 *)GEN_TOP((iVar1 + 0x10)));
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) = (int)((ulonglong)uVar2 >> 0x20);
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  if ((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) != param_3) {
    F_00db41e0(this GEN_EDX_ARG,((char *)REFP(0x113d478)),param_2,&(*(undefined8 *)(gen_frame + 0x0)));
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) = (undefined4)uVar2;
    uVar4 = (undefined4)(*(undefined8 *)(gen_frame + 0x8));
    F_00db3760(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar4);
  }
  F_00db54c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,uVar5);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x38))) + 0x24))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,param_2,param_3);
  *((int *)GEN_TOP(((int)this + 0x4c))) = *((int *)GEN_TOP(((int)this + 0x4c))) - uVar5;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,param_2,param_3);
  return (uint)(gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18))));
}

/* ref: hkLeakDetectAllocator::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db47f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb47f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db45f0(this GEN_EDX_FWD,0,param_1);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db4810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb4810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00db46c0(this GEN_EDX_FWD,0,param_1,param_2);
  return;
}

/* ref: hkLeakDetectAllocator::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db45f0(this GEN_EDX_FWD,1,*param_1);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db4850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb4850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00db46c0(this GEN_EDX_FWD,1,param_1,param_2);
  return;
}

/* ref: hkLeakDetectAllocator::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb4870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00db45f0(this GEN_EDX_FWD,1,*param_3);
  iVar2 = *param_3;
  if (param_2 <= iVar2) {
    iVar2 = param_2;
  }
  F_00da3710(uVar1,param_1,iVar2);
  F_00db46c0(this GEN_EDX_ARG,1,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00db48c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db48c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb48c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x11c, 4, 4);
  undefined8 * puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  undefined1 * puVar12;
  undefined4 uVar13;
  char * pcVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x100)) = this;
  if ((*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + 4))) & 0x7fffffff) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x40))))
              (((char *)REFP(0x113d610))
               ,*((undefined4 *)GEN_TOP(((int)this + 0x44))));
    iVar7 = *((int *)GEN_TOP(((int)this + 0x48)));
    uVar11 = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
    (*(int *)(gen_frame + 0x108)) = 0;
    (*(int *)(gen_frame + 0x10c)) = 0;
    (*(uint *)(gen_frame + 0x110)) = 0x80000000;
    uVar4 = *((uint *)GEN_TOP((iVar7 + 4))) & 0x7fffffff;
    if (uVar4 != 0) {
      F_00d95690(uVar11,&(*(int *)(gen_frame + 0x108)),uVar4,0x18);
    }
    piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x48)));
    iVar7 = 0;
    if ((uint)piVar6[2] < 0x80000000) {
      piVar8 = ((int *)GEN_TOP(*piVar6));
      do {
        if (*piVar8 != -1) break;
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 8;
        (*(int * PTR32 *)(gen_frame + 0x114)) = piVar8;
      } while (iVar7 <= piVar6[2]);
      if (iVar7 <= piVar6[2]) {
        do {
          iVar9 = *piVar6;
          iVar5 = iVar7 * 0x20;
          uVar2 = *((undefined8 *)GEN_TOP((iVar5 + 0x10 + iVar9)));
          uVar3 = *((undefined8 *)GEN_TOP((iVar5 + 0x18 + iVar9)));
          puVar1 = ((undefined8 *)GEN_TOP(((*(int *)(gen_frame + 0x108)) + (*(int *)(gen_frame + 0x10c)) * 0x18)));
          if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
            *puVar1 = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar9)));
            puVar1[1] = uVar2;
            puVar1[2] = uVar3;
          }
          piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x48)));
          (*(int *)(gen_frame + 0x10c)) = (*(int *)(gen_frame + 0x10c)) + 1;
          iVar9 = piVar6[2];
          iVar7 = iVar7 + 1;
          if (iVar7 <= iVar9) {
            piVar8 = ((int *)GEN_TOP((iVar7 * 0x20 + *piVar6)));
            do {
              if (*piVar8 != -1) break;
              iVar7 = iVar7 + 1;
              piVar8 = piVar8 + 8;
            } while (iVar7 <= iVar9);
          }
        } while (iVar7 <= iVar9);
      }
    }
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x114));
    (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x114)) + 0)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x114)) = ((int *)GEN_TOP(((uint)piVar6 & 0xffffff00)));
    if (1 < (*(int *)(gen_frame + 0x10c))) {
      F_00db5940((*(int *)(gen_frame + 0x108)),0,(*(int *)(gen_frame + 0x10c)) - 1,(*(int * PTR32 *)(gen_frame + 0x114)));
    }
    iVar7 = (*(int *)(gen_frame + 0x108));
    if (0 < (*(int *)(gen_frame + 0x10c))) {
      (*(int *)(gen_frame + 0x104)) = 0;
      (*(int * PTR32 *)(gen_frame + 0x114)) = ((int *)GEN_TOP(0x1));
      iVar9 = (*(int *)(gen_frame + 0x10c));
      do {
        iVar5 = (*(int *)(gen_frame + 0x104));
        piVar6 = (*(int * PTR32 *)(gen_frame + 0x114));
        if (-1 < *((int *)GEN_TOP(((*(int *)(gen_frame + 0x104)) + 8 + iVar7)))) {
          if ((int)(*(int * PTR32 *)(gen_frame + 0x114)) < iVar9) {
            do {
              if (*((int *)GEN_TOP((iVar5 + 0x20 + iVar7))) == *((int *)GEN_TOP(((*(int *)(gen_frame + 0x104)) + 8 + iVar7)))) {
                *((undefined4 *)GEN_TOP((iVar5 + 0x20 + iVar7))) = 0xffffffff;
                iVar9 = (*(int *)(gen_frame + 0x10c));
                iVar7 = (*(int *)(gen_frame + 0x108));
              }
              piVar6 = ((int *)GEN_TOP(((int)piVar6 + 1)));
              this = (*(undefined * PTR32 *)(gen_frame + 0x100));
              iVar5 = iVar5 + 0x18;
            } while ((int)piVar6 < iVar9);
          }
          F_00db41e0(this GEN_EDX_ARG,((char *)REFP(0x113d5fc)),0,(*(int *)(gen_frame + 0x104)) + iVar7);
          iVar5 = (*(int *)(gen_frame + 0x104));
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x114));
          iVar9 = (*(int *)(gen_frame + 0x10c));
          iVar7 = (*(int *)(gen_frame + 0x108));
        }
        (*(int * PTR32 *)(gen_frame + 0x114)) = ((int *)GEN_TOP(((int)piVar6 + 1)));
        (*(int *)(gen_frame + 0x104)) = iVar5 + 0x18;
      } while ((int)piVar6 < iVar9);
    }
    (*(int *)(gen_frame + 0x10c)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x110))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) + 0x10))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,iVar7,((*(uint *)(gen_frame + 0x110)) & 0x3fffffff) * 0x18);
    }
    iVar7 = *((int *)GEN_TOP(((int)this + 0x48)));
    (*(int *)(gen_frame + 0x108)) = 0;
    (*(uint *)(gen_frame + 0x110)) = 0x80000000;
    uVar4 = *((uint *)GEN_TOP((iVar7 + 4))) & 0x7fffffff;
    pcVar14 = ((char *)REFP(0x113d5e8));
    puVar12 = ((undefined1 *)(gen_frame + 0x0));
    uVar13 = 0x100;
    F_00da0ce0(puVar12,0x100,((char *)REFP(0x113d5e8)),uVar4);
    uVar11 = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
    puVar10 = ((undefined1 *)(gen_frame + 0x0));
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x40))))(puVar10,uVar11,puVar12);
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x40))))
              (((char *)REFP(0x113d528))
               ,*((undefined4 *)GEN_TOP(((int)this + 0x44))),puVar10,uVar11,puVar12,uVar13,pcVar14,uVar4);
  }
  F_00db3820(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  F_00db5650(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3c))));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) + 8))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x48))),0xc);
  uVar4 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00db4b20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db4b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  uint * puVar1;
  undefined8 uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int * piVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) = (LPCRITICAL_SECTION)((int)this + 0x20);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0xc)));
  iVar8 = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) = (int)this + 8;
  ((byte *)(gen_frame + 0x0))[0x18] = 0;
  ((byte *)(gen_frame + 0x0))[0x19] = 0;
  ((byte *)(gen_frame + 0x0))[0x1a] = 0;
  ((byte *)(gen_frame + 0x0))[0x1b] = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  ((byte *)(gen_frame + 0x0))[0x20] = 0;
  ((byte *)(gen_frame + 0x0))[0x21] = 0;
  ((byte *)(gen_frame + 0x0))[0x22] = 0;
  ((byte *)(gen_frame + 0x0))[0x23] = 0x80;
  if (0 < (int)uVar3) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),((byte *)(gen_frame + 0x0)) + 0x18,((int)uVar3 < 0) - 1 & uVar3,8);
    iVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28));
  }
  puVar12 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + iVar8 * 8)));
  if (0 < (int)(uVar3 - iVar8)) {
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar13 = puVar12 + 2;
    for (uVar9 = (uVar3 - iVar8) * 8 - 5 >> 2; this = ((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)))), uVar9 != 0;
        uVar9 = uVar9 - 1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x48)));
  ((byte *)(gen_frame + 0x0))[0x1c] = (char)uVar3;
  ((byte *)(gen_frame + 0x0))[0x1d] = (char)(uVar3 >> 8);
  ((byte *)(gen_frame + 0x0))[0x1e] = (char)(uVar3 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x1f] = (char)(uVar3 >> 0x18);
  iVar10 = piVar4[2];
  iVar8 = 0;
  if (-1 < iVar10) {
    piVar11 = ((int *)GEN_TOP(*piVar4));
    do {
      if (*piVar11 != -1) break;
      iVar8 = iVar8 + 1;
      piVar11 = piVar11 + 8;
    } while (iVar8 <= iVar10);
  }
  if (iVar8 <= iVar10) {
    do {
      iVar10 = iVar8 * 0x20 + 8 + *piVar4;
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = *((undefined8 *)GEN_TOP((iVar8 * 0x20 + 8 + *piVar4)));
      uVar2 = *((undefined8 *)GEN_TOP((iVar10 + 8)));
      ((byte *)(gen_frame + 0x0))[8] = (byte)uVar2;
      ((byte *)(gen_frame + 0x0))[9] = SUB81(uVar2,1);
      ((byte *)(gen_frame + 0x0))[10] = SUB81(uVar2,2);
      ((byte *)(gen_frame + 0x0))[0xb] = SUB81(uVar2,3);
      ((byte *)(gen_frame + 0x0))[0xc] = SUB81(uVar2,4);
      ((byte *)(gen_frame + 0x0))[0xd] = SUB81(uVar2,5);
      ((byte *)(gen_frame + 0x0))[0xe] = SUB81(uVar2,6);
      ((byte *)(gen_frame + 0x0))[0xf] = SUB81(uVar2,7);
      uVar6 = (*(undefined8 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = (undefined4)uVar2;
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = *((undefined8 *)GEN_TOP((iVar10 + 0x10)));
      if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = SUB84(uVar2,4);
        iVar10 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
        do {
          puVar1 = ((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + iVar10 * 8)));
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12));
          piVar11 = ((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + iVar10 * 8 + 4)));
          *piVar11 = *piVar11 + ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) >> 0x1f) + (uint)CARRY4(uVar3,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
          iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)))) + 4 + iVar10 * 0x14)));
        } while (-1 < iVar10);
      }
      iVar10 = piVar4[2];
      iVar8 = iVar8 + 1;
      if (iVar8 <= iVar10) {
        piVar11 = ((int *)GEN_TOP((iVar8 * 0x20 + *piVar4)));
        do {
          if (*piVar11 != -1) break;
          iVar8 = iVar8 + 1;
          piVar11 = piVar11 + 8;
        } while (iVar8 <= iVar10);
      }
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = uVar6;
    } while (iVar8 <= iVar10);
  }
  iVar8 = *((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44))));
  iVar7 = *((int *)GEN_TOP((iVar8 + 8)));
  iVar10 = 0;
  while ((iVar5 = iVar7, 0 < iVar5 && (*((int *)GEN_TOP((iVar8 + 0xc + iVar5 * 0x14))) < 0))) {
    iVar10 = iVar5;
    iVar7 = *((int *)GEN_TOP((iVar8 + iVar5 * 0x14 + 8)));
  }
  F_00db4380(param_1,iVar10,0,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)),((byte *)(gen_frame + 0x0)) + 0x18);
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) * 8);
  }
  ((byte *)(gen_frame + 0x0))[0x18] = 0;
  ((byte *)(gen_frame + 0x0))[0x19] = 0;
  ((byte *)(gen_frame + 0x0))[0x1a] = 0;
  ((byte *)(gen_frame + 0x0))[0x1b] = 0;
  ((byte *)(gen_frame + 0x0))[0x20] = 0;
  ((byte *)(gen_frame + 0x0))[0x21] = 0;
  ((byte *)(gen_frame + 0x0))[0x22] = 0;
  ((byte *)(gen_frame + 0x0))[0x23] = 0x80;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36))));
}

/* ref: FUN_00db4cd0 */
GEN_LIB GEN_FRAME uint F_00db4cd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00db4ce0 */
GEN_LIB GEN_FRAME uint F_00db4ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00db4d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = (*((uint *)GEN_TOP((in_ecx + 4))) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00db4d90 */
GEN_LIB GEN_FRAME uint F_00db4d90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb4d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return (uint)((param_1 - 1 & param_1) == 0);
}

/* ref: FUN_00db4db0 */
GEN_LIB GEN_FRAME uint F_00db4db0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00db4dc0 */
GEN_LIB GEN_FRAME uint F_00db4dc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00db4e00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4e00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((param_2 * 0x20 + *in_ecx)));
}

/* ref: FUN_00db4e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4e20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb4e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = param_3 * 0x20 + 8 + *in_ecx;
  *param_2 = *((undefined8 *)GEN_TOP((param_3 * 0x20 + 8 + *in_ecx)));
  param_2[1] = *((undefined8 *)GEN_TOP((iVar1 + 8)));
  param_2[2] = *((undefined8 *)GEN_TOP((iVar1 + 0x10)));
  return (uint)param_2;
}

/* ref: FUN_00db4e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4e60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xdb4e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  undefined8 * puVar1;
  
  puVar1 = ((undefined8 *)GEN_TOP((param_2 * 0x20 + 8 + *in_ecx)));
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  puVar1[2] = CONCAT44(param_8,param_7);
  return (uint)puVar1;
}

/* ref: FUN_00db4e90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4e90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb4e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00db4ec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb4ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 | 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00db4ee0 */
GEN_LIB GEN_FRAME uint F_00db4ee0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb4ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 << 5;
}

/* ref: FUN_00db4f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4f30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00db4fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4fa0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00db4fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4fb0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00db4fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00db4ff0 */
GEN_LIB GEN_FRAME uint F_00db4ff0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (param_1 >> 4) * -0x61c8864f & param_2;
}

/* ref: FUN_00db5010 */
GEN_LIB GEN_FRAME uint F_00db5010(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb5010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00db5020 */
GEN_LIB GEN_FRAME byte F_00db5020(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 == param_2;
}

/* ref: FUN_00db5030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_1 * 0x48);
  return uVar1;
}

/* ref: FUN_00db5050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_1 * 4);
  return uVar1;
}

/* ref: FUN_00db5080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00db50b0 */
GEN_LIB GEN_FRAME unsigned int F_00db50b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb50b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *param_3;
      *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = param_3[1];
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00db50f0 */
GEN_LIB GEN_FRAME uint F_00db50f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb50f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00db5120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00db5140 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00db5140(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  if ((param_1[1] <= param_2[1]) && ((param_1[1] < param_2[1] || (*param_1 < *param_2)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00db51a0 */
GEN_LIB GEN_FRAME uint F_00db51a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb51a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00db51c0 */
GEN_LIB GEN_FRAME unsigned int F_00db51c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb51c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00db5210 */
GEN_LIB GEN_FRAME uint F_00db5210(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb5210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00db5230 */
GEN_LIB GEN_FRAME unsigned int F_00db5230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb5230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00db5290 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db5290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((iVar1 * 0x20 + *(int *)this)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 8;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00db52c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db52c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb52c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  undefined8 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00db56e0(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar5 = uVar4 * 0x20;
  uVar3 = 1;
  if (*((int *)GEN_TOP((iVar2 + iVar5))) != -1) {
    do {
      if (*((uint *)GEN_TOP((iVar2 + iVar5))) == param_2) {
        uVar3 = 0;
        goto LAB_00db532d;
      }
      uVar4 = uVar4 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      iVar5 = uVar4 * 0x20;
    } while (*((int *)GEN_TOP((iVar5 + iVar2))) != -1);
    uVar3 = 1;
  }
LAB_00db532d: ;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar3;
  *((uint *)GEN_TOP((iVar2 + uVar4 * 0x20))) = param_2;
  puVar1 = ((undefined8 *)GEN_TOP((uVar4 * 0x20 + 8 + *(int *)this)));
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  puVar1[2] = CONCAT44(param_8,param_7);
  return uVar3;
}

/* ref: FUN_00db5370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
    uVar2 = *((uint *)GEN_TOP((uVar3 * 0x20 + *(int *)this)));
    while (uVar2 != 0xffffffff) {
      if (uVar2 == param_1) {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & uVar1;
      uVar2 = *((uint *)GEN_TOP((uVar3 * 0x20 + *(int *)this)));
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00db53c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db53c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb53c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar2) {
    iVar3 = *(int *)this;
    uVar5 = (param_2 >> 4) * -0x61c8864f & uVar2;
    uVar4 = *((uint *)GEN_TOP((uVar5 * 0x20 + iVar3)));
    while (uVar4 != 0xffffffff) {
      if (uVar4 == param_2) {
        iVar1 = uVar5 * 0x20 + 8 + iVar3;
        *param_1 = *((undefined8 *)GEN_TOP((uVar5 * 0x20 + 8 + iVar3)));
        param_1[1] = *((undefined8 *)GEN_TOP((iVar1 + 8)));
        param_1[2] = *((undefined8 *)GEN_TOP((iVar1 + 0x10)));
        return (uint)param_1;
      }
      uVar5 = uVar5 + 1 & uVar2;
      uVar4 = *((uint *)GEN_TOP((uVar5 * 0x20 + iVar3)));
    }
  }
  *param_1 = CONCAT44(param_4,param_3);
  param_1[1] = CONCAT44(param_6,param_5);
  param_1[2] = CONCAT44(param_8,param_7);
  return (uint)param_1;
}

/* ref: FUN_00db5460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = F_00db5370(this GEN_EDX_FWD,param_1);
  if ((int)uVar4 <= *((int *)GEN_TOP(((int)this + 8)))) {
    iVar3 = *(int *)this;
    iVar5 = uVar4 * 0x20;
    uVar1 = *((undefined8 *)GEN_TOP((iVar5 + 0x10 + iVar3)));
    uVar2 = *((undefined8 *)GEN_TOP((iVar5 + 0x18 + iVar3)));
    *param_2 = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar3)));
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return 0;
  }
  return 1;
}

/* ref: FUN_00db54c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db54c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb54c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((param_1 * 0x20 + *(int *)this))) = 0xffffffff;
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar4 = uVar7 + param_1 & uVar7;
  iVar2 = *((int *)GEN_TOP((uVar4 * 0x20 + *(int *)this)));
  while (iVar2 != -1) {
    uVar4 = uVar4 + uVar7 & uVar7;
    iVar2 = *((int *)GEN_TOP((uVar4 * 0x20 + *(int *)this)));
  }
  uVar5 = uVar4 + 1 & uVar7;
  uVar4 = param_1 + 1 & uVar7;
  iVar6 = uVar4 * 0x20;
  iVar2 = *((int *)GEN_TOP((*(int *)this + iVar6)));
  uVar8 = param_1;
  while (iVar2 != -1) {
    uVar7 = (*((uint *)GEN_TOP((*(int *)this + iVar6))) >> 4) * -0x61c8864f & uVar7;
    if ((((uVar4 < uVar5) || (uVar7 <= uVar8)) &&
        ((uVar8 <= uVar4 || ((uVar7 <= uVar8 && (uVar4 < uVar7)))))) &&
       ((uVar7 <= uVar8 || (uVar5 <= uVar7)))) {
      *((uint *)GEN_TOP((uVar8 * 0x20 + *(int *)this))) = *((uint *)GEN_TOP((*(int *)this + iVar6)));
      iVar3 = *(int *)this;
      iVar2 = iVar3 + 8 + iVar6;
      puVar1 = ((undefined8 *)GEN_TOP((uVar8 * 0x20 + 8 + iVar3)));
      *puVar1 = *((undefined8 *)GEN_TOP((iVar3 + 8 + iVar6)));
      puVar1[1] = *((undefined8 *)GEN_TOP((iVar2 + 8)));
      puVar1[2] = *((undefined8 *)GEN_TOP((iVar2 + 0x10)));
      *((undefined4 *)GEN_TOP((iVar6 + *(int *)this))) = 0xffffffff;
      uVar8 = uVar4;
    }
    uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar4 = uVar4 + 1 & uVar7;
    iVar6 = uVar4 * 0x20;
    iVar2 = *((int *)GEN_TOP((iVar6 + *(int *)this)));
  }
  return 0;
}

/* ref: FUN_00db55c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db55c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb55c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  int local_8;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_8 = uVar1 + 1;
    puVar6 = puVar2;
    do {
      uVar3 = *puVar6;
      if (uVar3 != 0xffffffff) {
        uVar5 = (uVar3 >> 4) * -0x61c8864f & uVar1;
        uVar4 = puVar2[uVar5 * 8];
        while (uVar4 != uVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          uVar4 = puVar2[uVar5 * 8];
        }
      }
      puVar6 = puVar6 + 8;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00db5620 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db5620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb5620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *((undefined4 *)GEN_TOP((in_EAX + *(int *)this))) = 0xffffffff;
      in_EAX = in_EAX + 0x20;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = *((uint *)GEN_TOP(((int)this + 4))) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00db5650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db5620(this GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 4))) & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) + 1) * 0x20);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00db56a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db56a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb56a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 5;
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      *((undefined4 *)GEN_TOP((iVar1 + *(int *)this))) = 0xffffffff;
      iVar1 = iVar1 + 0x20;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db56e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db56e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb56e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,iVar7 << 5);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *((undefined4 *)GEN_TOP((iVar4 + *(int *)this))) = 0xffffffff;
        iVar4 = iVar4 + 0x20;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((int *)GEN_TOP(((int)this + 8))) = iVar7 - 1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00db52c0(this GEN_EDX_ARG,param_1,*piVar8,(int)*(undefined8 *)(piVar8 + 2),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 2) >> 0x20),
                       (int)*(undefined8 *)(piVar8 + 4),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 4) >> 0x20),
                       (int)*(undefined8 *)(piVar8 + 6),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 6) >> 0x20));
        }
        iVar7 = param_2 - 1;
        piVar8 = piVar8 + 8;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,piVar2,iVar6 * 0x20);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00db57d0 */
GEN_LIB GEN_FRAME uint F_00db57d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb57d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1 * 0x48);
  return uVar2;
}

/* ref: FUN_00db5800 */
GEN_LIB GEN_FRAME uint F_00db5800(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb5800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1 * 4);
  return uVar2;
}

/* ref: FUN_00db5830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x18);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db5880 */
GEN_LIB GEN_FRAME unsigned int F_00db5880(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00db58c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db58c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb58c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db5900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db5940 */
GEN_LIB GEN_NOFRAME unsigned int F_00db5940(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdb5940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined8 * puVar1;
  undefined8 * puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint * puVar7;
  int iVar8;
  int iVar9;
  uint local_30;
  uint uStack_2c;
  
  do {
    uVar3 = *((undefined8 *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 0x18)));
    iVar8 = param_3;
    iVar9 = param_2;
    do {
      puVar7 = ((uint *)GEN_TOP((param_1 + iVar9 * 0x18)));
      while( true ) {
        uStack_2c = (uint)((ulonglong)uVar3 >> 0x20);
        local_30 = (uint)uVar3;
        if ((uStack_2c < puVar7[1]) || ((uStack_2c <= puVar7[1] && (local_30 <= *puVar7)))) break;
        iVar9 = iVar9 + 1;
        puVar7 = puVar7 + 6;
      }
      for (puVar7 = ((uint *)GEN_TOP((param_1 + iVar8 * 0x18)));
          (uStack_2c <= puVar7[1] && ((uStack_2c < puVar7[1] || (local_30 < *puVar7))));
          puVar7 = puVar7 - 6) {
        iVar8 = iVar8 - 1;
      }
      if (iVar8 < iVar9) break;
      if (iVar8 != iVar9) {
        uVar4 = *((undefined8 *)GEN_TOP((param_1 + iVar8 * 0x18)));
        uVar5 = *((undefined8 *)GEN_TOP((param_1 + 8 + iVar8 * 0x18)));
        uVar6 = *((undefined8 *)GEN_TOP((param_1 + 0x10 + iVar8 * 0x18)));
        puVar1 = ((undefined8 *)GEN_TOP((param_1 + iVar8 * 0x18)));
        puVar2 = ((undefined8 *)GEN_TOP((param_1 + iVar9 * 0x18)));
        *puVar1 = *((undefined8 *)GEN_TOP((param_1 + iVar9 * 0x18)));
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
      }
      iVar8 = iVar8 - 1;
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar8);
    if (param_2 < iVar8) {
      F_00db5940(param_1,param_2,iVar8,param_4);
    }
    param_2 = iVar9;
    if (param_3 <= iVar9) {
      return;
    }
  } while( true );
}

/* ref: FUN_00db5a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db5650(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00db5a70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5a70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00db5370(this GEN_EDX_FWD,param_2);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: FUN_00db5aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xdb5aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00db52c0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00db5ae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5ae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00db56a0(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00db5b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(uint * param_9, unsigned int gen_a9))
{
  GEN_ENTER(0xdb5b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(uint * param_9 = (uint *)(uintptr_t)gen_a9;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    uVar1 = F_00db56e0(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
    *param_9 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_9 = 0;
  }
  uVar1 = F_00db52c0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00db5b80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db5b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb5b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  undefined8 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00db56e0(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar4 = *(int *)this;
  uVar2 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar3 = uVar2 * 0x20;
  if (*((uint *)GEN_TOP((iVar4 + iVar3))) != param_2) {
    while (*((int *)GEN_TOP((iVar4 + iVar3))) != -1) {
      iVar4 = *(int *)this;
      uVar2 = uVar2 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      iVar3 = uVar2 * 0x20;
      if (*((uint *)GEN_TOP((iVar3 + iVar4))) == param_2) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar4 + uVar2 * 0x20))) = param_2;
    puVar1 = ((undefined8 *)GEN_TOP((uVar2 * 0x20 + 8 + *(int *)this)));
    *puVar1 = CONCAT44(param_4,param_3);
    puVar1[1] = CONCAT44(param_6,param_5);
    puVar1[2] = CONCAT44(param_8,param_7);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  }
  return 0;
}

/* ref: FUN_00db5c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db5370(this GEN_EDX_FWD,param_1);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    F_00db54c0(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00db5c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00db56e0(this GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00db5c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db5ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x18)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db5d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb5d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < (int)param_2) {
    uVar2 = uVar2 * 2;
    if ((int)uVar2 <= (int)param_2) {
      uVar2 = param_2;
    }
    F_00d95690(param_1,this,uVar2,8);
  }
  iVar3 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8;
  uVar2 = 0;
  if (iVar3 < 1) {
    *((uint *)GEN_TOP(((int)this + 4))) = param_2;
    return uVar2;
  }
  do {
    *((undefined4 *)GEN_TOP((iVar1 + uVar2 * 8))) = *param_3;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + uVar2 * 8))) = param_3[1];
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < iVar3);
  *((uint *)GEN_TOP(((int)this + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00db5d90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db5d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb5d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db5dd0 */
GEN_LIB GEN_FRAME unsigned int F_00db5dd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (1 < param_2) {
    F_00db5940(param_1,0,param_2 - 1,param_3);
  }
  return;
}

/* ref: FUN_00db5e00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < (int)param_1) {
    uVar2 = uVar2 * 2;
    if ((int)uVar2 <= (int)param_1) {
      uVar2 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,uVar2,8);
  }
  iVar3 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8;
  uVar2 = 0;
  if (iVar3 < 1) {
    *((uint *)GEN_TOP(((int)this + 4))) = param_1;
    return uVar2;
  }
  do {
    *((undefined4 *)GEN_TOP((iVar1 + uVar2 * 8))) = *param_2;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + uVar2 * 8))) = param_2[1];
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < iVar3);
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  return param_1;
}

/* ref: FUN_00db5e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00db5ae0(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00db5e90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb5e90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = F_00db5b00(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
  return uVar1;
}

/* ref: FUN_00db5ed0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db5ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xdb5ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  F_00db5b80(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

/* ref: FUN_00db5f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db5c60(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00db5f30 */
GEN_LIB GEN_FRAME unsigned int F_00db5f30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (1 < param_2) {
    F_00db5940(param_1,0,param_2 - 1,0);
  }
  return;
}

/* ref: FUN_00db5f60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db5f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb5f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db5fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  if (param_1 != 0) {
    F_00db5c60(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00db5fe0 */
GEN_LIB GEN_FRAME unsigned int F_00db5fe0(GEN_P(LONG * param_1, unsigned int gen_a0), GEN_P(LONG param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LONG * param_1 = (LONG *)(uintptr_t)gen_a0;)
  GEN_PIN(LONG param_2 = (LONG)gen_a1;)
  return (uint)(gen_imp_InterlockedExchangeAdd(param_1,param_2));
}

/* ref: hkMallocAllocator::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_size32 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a1;)
  LONG LVar1;
  undefined * pvVar2;
  
  LVar1 = gen_imp_InterlockedExchangeAdd((LONG *)(this + 8),param_1);
  if (*(uint *)(this + 0xc) < LVar1 + param_1) {
    *(LONG *)(this + 0xc) = *(LONG *)(this + 8);
  }
  pvVar2 = F_00c480eb(param_1,*(gen_size32 *)(this + 4));
  return (uint)pvVar2;
}

/* ref: hkMallocAllocator::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb6040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint extraout_EAX = 0;
  
  gen_imp_InterlockedExchangeAdd((LONG *)(this + 8),-param_2);
  F_00c480d1(param_1);
  return extraout_EAX;
}

/* ref: hkMallocAllocator::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined4 *)(this + 8);
  param_1[2] = *(undefined4 *)(this + 0xc);
  return (uint)param_1;
}

/* ref: hkMallocAllocator::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db6090(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb6090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = *((uint *)GEN_TOP((in_ecx + 8)));
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: hkMallocAllocator::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db60a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb60a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  return param_2;
}

/* ref: FUN_00db60b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db60b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb60b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00db60c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db60c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb60c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(HANDLE *)this != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00db60e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db60e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb60e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x4c, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x3c);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  HANDLE pvVar1;
  
  (*(undefined4 volatile *)(gen_frame + 0x30)) = 0xffffffff;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f7550);
  (*(gen_code32 *)(gen_frame + 0x28)) = ((code *)REFP(0x1052968));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined1 * PTR32 *)(gen_frame + 0x1c)) = (gen_frame + 0x0);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x24));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x24)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  pvVar1 = gen_imp_CreateThread((GEN_LPANY)0x0,(*(SIZE_T *)&gen_args[3]),(*(GEN_LPANY *)&gen_args[0]),(*(LPVOID *)&gen_args[1]),0,(LPDWORD)&(*(LPVOID *)&gen_args[1]));
  *(HANDLE *)this = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x24));
    return 1;
  }
  *((LPVOID *)GEN_TOP(((int)this + 8))) = (*(LPVOID *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(ULONG_PTR *)(gen_frame + 0xc)) = 0x1000;
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[2]);
  (*(LPVOID *)(gen_frame + 0x14)) = (*(LPVOID *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 volatile *)(gen_frame + 0x30)) = 0;
  gen_imp_RaiseException(0x406d1388,0,4,&(*(ULONG_PTR *)(gen_frame + 0xc)));
  (*(undefined4 volatile *)(gen_frame + 0x30)) = 0xffffffff;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x24));
  return 0;
}

/* ref: FUN_00db6171 */
GEN_LIB GEN_NOFRAME uint F_00db6171(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xdb6171u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  return (uint)(*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((in_ebp - 0x14))))) != 0x406d1388) * 2 - 1;
}

/* ref: FUN_00db6186 */
GEN_LIB GEN_NOFRAME uint F_00db6186(GEN_P(int in_ebp, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdb6186u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xffffffff;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
  return 0;
}

/* ref: FUN_00db61b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db61b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb61b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*(HANDLE *)this == (HANDLE)0x0) {
    return 2;
  }
  gen_imp_GetExitCodeThread(*(HANDLE *)this,(LPDWORD)&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  return (uint)((*(undefined * PTR32 *)(gen_frame + 0x0)) == ((undefined *)GEN_TOP(0x103)));
}

/* ref: FUN_00db61e0 */
GEN_LIB GEN_NOFRAME uint F_00db61e0(void)
{
  GEN_ENTER(0xdb61e0u, 0u, 0u, 0u, 0u);
  DWORD DVar1;
  
  DVar1 = gen_imp_GetCurrentThreadId();
  return DVar1;
}

/* ref: FUN_00db6220 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db6220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb6220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
  F_00dc0bd0(this GEN_EDX_FWD);
  F_00d9b7c0(this GEN_EDX_ARG);
  return;
}

/* ref: hkThreadMemory::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db6250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
  F_00dc0bd0(this GEN_EDX_FWD);
  F_00d9b7c0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00db6290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x28))) = param_2;
  return param_2;
}

/* ref: FUN_00db62a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db62a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb62a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  return param_2;
}

/* ref: FUN_00db62b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db62b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb62b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x30))) = param_2;
  return param_2;
}

/* ref: FUN_00db62c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db62c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb62c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x34))) = param_2;
  return param_2;
}

/* ref: FUN_00db62e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db62e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb62e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x38))) = param_2;
  return param_2;
}

/* ref: FUN_00db6300 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db6300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb6300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00dc0b40(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 300))) = 0;
  return (uint)this;
}

/* ref: FUN_00db6330 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db6330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb6330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  F_00d9b7c0(this GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00db6350 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db6350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb6350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
  F_00dc0bd0(this GEN_EDX_FWD);
  F_00d9b7c0(this GEN_EDX_ARG);
  return;
}

/* ref: hkFreeListMemorySystem::vf9 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db63a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb63a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x74, 12, 4);
  int * piVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x60)) = (LPCRITICAL_SECTION)(this + 0x4ec8);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x4ec8));
  F_00da00e0(param_1,
               ((char *)REFP(0x113d898)))
  ;
  piVar1 = *(int * PTR32 *)(this + 4);
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x24)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xffffffff;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  piVar1 = *(int * PTR32 *)(this + 0xc);
  ((int *)(gen_frame + 0x48))[0] = -1;
  ((int *)(gen_frame + 0x48))[1] = 0xffffffff;
  ((int *)(gen_frame + 0x48))[2] = -1;
  ((int *)(gen_frame + 0x48))[3] = 0xffffffff;
  ((int *)(gen_frame + 0x48))[4] = 0xffffffff;
  ((int *)(gen_frame + 0x48))[5] = 0xffffffff;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,((int *)(gen_frame + 0x48)));
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x14) + 0x20)));
  (*(undefined4 *)(gen_frame + 0x30)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x34)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x40)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x44)) = 0xffffffff;
  (*pcVar2)(this + 0x14,&(*(undefined4 *)(gen_frame + 0x30)));
  F_00da00e0(param_1,((char *)REFP(0x113d87c)));
  F_00da00e0(param_1,((char *)REFP(0x113d864)),((int *)(gen_frame + 0x48))[0]);
  F_00da00e0(param_1,((char *)REFP(0x113d848)),(*(undefined4 *)(gen_frame + 0x30)));
  F_00da00e0(param_1,((char *)REFP(0x113d82c)),*(undefined4 *)(this + 8));
  F_00da00e0(param_1,((char *)REFP(0x113d81c)),((char *)REFP(0x113d824)));
  F_00da00e0(param_1,((char *)REFP(0x113d804)),(*(undefined4 *)(gen_frame + 0x18)));
  F_00da00e0(param_1,((char *)REFP(0x113d7f0)));
  param_1 = 0;
  if (((byte)this[0x4ee0] & 4) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x68)) = this + 0x2c8;
    (*(uint *)(gen_frame + 0x64)) = 0x40;
    do {
      if ((*(undefined * PTR32 *)(gen_frame + 0x68))[300] != (undefined1)0x0) {
        pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x20)));
        (*(undefined4 *)(gen_frame + 0x0)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
        (*(int *)(gen_frame + 0xc)) = -1;
        (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
        (*pcVar2)((*(undefined * PTR32 *)(gen_frame + 0x68)),&(*(undefined4 *)(gen_frame + 0x0)));
        param_1 = param_1 + (*(int *)(gen_frame + 0xc));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x68)) = (*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x130;
      iVar6 = (*(uint *)(gen_frame + 0x64)) - 1;
      (*(uint *)(gen_frame + 0x64)) = iVar6;
    } while (iVar6 != 0);
    if (((int *)(gen_frame + 0x48))[0] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined4)(((longlong)param_1 * 100) / (longlong)((int *)(gen_frame + 0x48))[0]);
      this = (*(undefined * PTR32 *)(gen_frame + 0x6c));
    }
    F_00da00e0(uVar3,((char *)REFP(0x113d7c0)),param_1,uVar4);
  }
  uVar5 = -(uint)(((int *)(gen_frame + 0x48))[3] != 0xffffffff) & ((int *)(gen_frame + 0x48))[3];
  (*(uint *)(gen_frame + 0x64)) = uVar5;
  if (((int *)(gen_frame + 0x48))[0] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)(((longlong)(int)uVar5 * 100) / (longlong)((int *)(gen_frame + 0x48))[0]);
    this = (*(undefined * PTR32 *)(gen_frame + 0x6c));
  }
  F_00da00e0(uVar3,((char *)REFP(0x113d79c)),uVar5,uVar4);
  iVar6 = (((int *)(gen_frame + 0x48))[0] - (*(uint *)(gen_frame + 0x64))) - param_1;
  if (((int *)(gen_frame + 0x48))[0] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)(((longlong)iVar6 * 100) / (longlong)((int *)(gen_frame + 0x48))[0]);
    this = (*(undefined * PTR32 *)(gen_frame + 0x6c));
  }
  F_00da00e0(uVar3,((char *)REFP(0x113d77c)),iVar6,uVar4);
  F_00da00e0(uVar3,((char *)REFP(0x113d81c)),((char *)REFP(0x113d824)));
  F_00da00e0(uVar3,((char *)REFP(0x113d864)),((int *)(gen_frame + 0x48))[0]);
  F_00da00e0(uVar3,((char *)REFP(0x113d768)));
  if (((int *)(gen_frame + 0x48))[2] != -1) {
    if (((int *)(gen_frame + 0x48))[2] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined4)(((longlong)iVar6 * 100) / (longlong)((int *)(gen_frame + 0x48))[2]);
    }
    F_00da00e0(uVar3,((char *)REFP(0x113d738)),((int *)(gen_frame + 0x48))[2],uVar4);
  }
  if (*(int *)(this + 0x94) - *(int *)(this + 0x90) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)
            (((longlong)*(int *)(this + 0xa0) * 100) /
            (longlong)(*(int *)(this + 0x94) - *(int *)(this + 0x90)));
  }
  F_00da00e0(uVar3,((char *)REFP(0x113d704)),
               *(undefined4 *)(this + 0xa0),uVar4);
  return (uint)(gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x60))));
}

/* ref: hkFreeListMemorySystem::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db66b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb66b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  code * pcVar2;
  uint uVar3;
  undefined * phVar4;
  int iVar5;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x20))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  if (((byte)this[0x4ee0] & 4) != 0) {
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)) = (LPCRITICAL_SECTION)(this + 0x4ec8);
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x4ec8));
    iVar5 = 0;
    phVar4 = this + 0x2c8;
    (*(int *)(gen_frame + 0x1c)) = 0x40;
    do {
      if (phVar4[300] != (undefined1)0x0) {
        pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)phVar4 + 0x20)));
        (*(undefined4 *)(gen_frame + 0x0)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
        (*(int *)(gen_frame + 0xc)) = -1;
        (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
        (*pcVar2)(phVar4,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar5 = iVar5 + (*(int *)(gen_frame + 0xc));
      }
      phVar4 = phVar4 + 0x130;
      iVar1 = (*(int *)(gen_frame + 0x1c)) - 1;
      (*(int *)(gen_frame + 0x1c)) = iVar1;
    } while (iVar1 != 0);
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
    *((int *)GEN_TOP((param_1 + 4))) = *((int *)GEN_TOP((param_1 + 4))) - iVar5;
    uVar3 = param_1;
  }
  return uVar3;
}

/* ref: hkFreeListMemorySystem::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb6750u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x18))))
                      (*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 1;
}

/* ref: hkFreeListMemorySystem::vf13 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db6770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (((byte)this[0x4ee0] & 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x2c))) + 0x2c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x2c))) GEN_EDX_FWD);
  }
  return;
}

/* ref: hkFreeListMemorySystem::vf14 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db6790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb6790u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 4))))
                      (*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: hkFreeListMemorySystem::vf18 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db67b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb67b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkFreeListMemorySystem::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db67c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb67c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0xc))))
                      (*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: hkFreeListMemorySystem::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db67e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb67e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x10))))
                      (*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: hkFreeListMemorySystem::vf7 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00db6800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00dc0c40(in_ecx + 0x8c GEN_EDX_FWD,param_2);
  return bVar1;
}

/* ref: hkFreeListMemorySystem::vf8 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00db6810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb6810u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x14))))
                      (*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return (byte)uVar1;
  }
  return 1;
}

/* ref: hkFreeListMemorySystem::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db6830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb6830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: FUN_00db6840 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db6840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb6840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113d8f4));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4ec8));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x4ec8)));
  iVar1 = 0x3f;
  do {
    this_00 = this_00 - 0x130;
    *(undefined * PTR32 * PTR32 *)this_00 = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
    F_00dc0bd0(this_00 GEN_EDX_ARG);
    F_00d9b7c0(this_00 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_00dc0ce0(((undefined *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG);
  F_00d9b7c0((int)this + 0x4c GEN_EDX_ARG);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  F_00d9b7c0((int)this + 0x14 GEN_EDX_ARG);
  F_00d9b910(this GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: hkFreeListMemorySystem::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db68c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb68c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  *(int *)(this + 8) = *param_1;
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,this + 0x4c,&REFG(undefined, 0x113d954),param_2);
  }
  if (((param_2 & 2) != 0) && (*param_1 != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 4))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG,*param_1);
    F_00dc1020(this + 0x8c GEN_EDX_ARG,uVar1,*param_1);
  }
  return (uint)(this + 0x4c);
}

/* ref: hkFreeListMemorySystem::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  
  if (((param_1 & 2) != 0) && (*(int *)(this + 0x94) - *(int *)(this + 0x90) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))
              (*(int * PTR32 *)(this + 4) GEN_EDX_ARG,*(undefined4 *)(this + 0x90),
               *(int *)(this + 0x94) - *(int *)(this + 0x90));
  }
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,this + 0x4c,param_1);
    F_00dc1020(this + 0x8c GEN_EDX_ARG,0,0);
    piVar1 = *(int * PTR32 *)(this + 0x10);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
    }
  }
  *(undefined4 *)(this + 4) = 0;
  return 0;
}

/* ref: hkFreeListMemorySystem::vf3 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db6990(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdb6990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  code * pcVar1;
  char * pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((param_4 & 1) != 0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4ec8));
    iVar6 = 0;
    pcVar2 = ((char *)GEN_TOP((param_1 + 0x3f4)));
    do {
      if (*pcVar2 == '\0') {
        *((undefined1 *)GEN_TOP((iVar6 * 0x130 + 0x3f4 + param_1))) = 1;
        break;
      }
      iVar6 = iVar6 + 1;
      pcVar2 = pcVar2 + 0x130;
    } while (iVar6 < 0x40);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4ec8));
    if (0x3f < iVar6) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x113d990)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                        (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0xf03454fe,((undefined1 *)(gen_frame + 0x0)),
                         ((char *)REFP(0x113d95c)),100);
      if (uVar3 != 0) {
        pcVar1 = ((code *)GEN_TOP(swi(3)));
        (*pcVar1)();
        return;
      }
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
    }
    iVar5 = iVar6 * 0x130 + 0x2c8 + param_1;
    *((undefined4 *)GEN_TOP((iVar5 + 0x128))) = param_3;
    F_00dc07b0(iVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0xc))),8);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x28))) = 0;
    iVar4 = *((int *)GEN_TOP((param_1 + 0xc)));
    if ((*((byte *)GEN_TOP((param_1 + 0x4ee0))) & 4) != 0) {
      iVar4 = iVar5;
    }
    *((int *)GEN_TOP(((int)param_2 + 0x2c))) = iVar4;
    *((int *)GEN_TOP(((int)param_2 + 0x30))) = param_1 + 0x14;
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x34))) = 0;
    *((int *)GEN_TOP(((int)param_2 + 0x38))) = iVar6;
  }
  if ((param_4 & 2) != 0) {
    iVar6 = *((int *)GEN_TOP((param_1 + 0xc)));
    if ((*((uint *)GEN_TOP((param_1 + 0x4ee0))) & 4) != 0) {
      iVar6 = *((int *)GEN_TOP(((int)param_2 + 0x38))) * 0x130 + 0x2c8 + param_1;
    }
    iVar5 = param_1 + 0x8c;
    if ((*((uint *)GEN_TOP((param_1 + 0x4ee0))) & 2) == 0) {
      iVar5 = iVar6;
    }
    F_00d940f0(param_2 GEN_EDX_ARG,iVar5,iVar6,iVar6);
    if ((*((byte *)GEN_TOP((param_1 + 0x4ee0))) & 1) != 0) {
      *((int *)GEN_TOP(((int)param_2 + 0x34))) = param_1 + 0x8c;
      *((undefined * PTR32 *)GEN_TOP(((int)param_2 + 0x28))) = param_2;
      return;
    }
    *((int *)GEN_TOP(((int)param_2 + 0x28))) = iVar6;
    *((int *)GEN_TOP(((int)param_2 + 0x34))) = param_1 + 0x8c;
  }
  return;
}

/* ref: hkFreeListMemorySystem::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6b00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb6b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = *((int *)GEN_TOP(((int)param_2 + 0x38))) * 0x130;
  piVar1 = ((int *)GEN_TOP((uVar2 + 0x2c8 + param_1)));
  if ((param_3 & 2) != 0) {
    F_00d942d0(param_2 GEN_EDX_FWD);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x34))) = 0;
  }
  if ((param_3 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG);
    piVar1[0x4a] = 0;
    *(undefined1 *)(piVar1 + 0x4b) = 0;
    uVar2 = F_00da3720(param_2,0,0x40);
  }
  return uVar2;
}

/* ref: FUN_00db6b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdb6b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113d8f4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  F_00d9b8d0((int)this + 8 GEN_EDX_FWD,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  F_00dc1320(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1);
  F_00d92530((int)this + 0x4c GEN_EDX_ARG);
  F_00dc0ca0(((undefined *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x2c8)));
  iVar1 = 0x3f;
  do {
    F_00dc0b40(this_00 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x128))) = 0;
    *((undefined1 *)GEN_TOP(((int)this_00 + 300))) = 0;
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x130)));
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_00da5ee0(((undefined *)GEN_TOP(((int)this + 0x4ec8))) GEN_EDX_ARG,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x4ee0))) = param_4;
  return (uint)this;
}

/* ref: FUN_00db6c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6c10(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return *in_ecx & param_2;
}

/* ref: hkFreeListMemorySystem::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db6c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00db6840(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: hkMemoryAllocator::ExtendedInterface::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6c40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00db6c70 */
GEN_LIB GEN_FRAME uint F_00db6c70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00db6cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00dc1760(this GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: FUN_00db6cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6cd0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  if ((*in_ecx == 0) && ((uint)in_ecx[9] <= (uint)in_ecx[8])) {
    *param_2 = 0;
    return (uint)param_2;
  }
  *param_2 = 1;
  return (uint)param_2;
}

/* ref: FUN_00db6d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db6d00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb6d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 0x10))) != 0;
  return param_2;
}

